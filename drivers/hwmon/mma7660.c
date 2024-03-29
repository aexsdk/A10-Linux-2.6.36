/*
 *  mma7660.c - Linux kernel modules for 3-Axis Orientation/Motion
 *  Detection Sensor 
 *
 *  Copyright (C) 2009-2010 Freescale Semiconductor Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/mutex.h>
#include <linux/delay.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/hwmon-sysfs.h>
#include <linux/err.h>
#include <linux/hwmon.h>
#include <linux/input-polldev.h>
#include <linux/device.h>
#include <linux/earlysuspend.h>

/*
 * Defines
 */
#define assert(expr)\
	if (!(expr)) {\
		printk(KERN_ERR "Assertion failed! %s,%d,%s,%s\n",\
			__FILE__, __LINE__, __func__, #expr);\
	}

#define MMA7660_DRV_NAME	"mma7660"
#define MMA7660_XOUT			0x00
#define MMA7660_YOUT			0x01
#define MMA7660_ZOUT			0x02
#define MMA7660_TILT			0x03
#define MMA7660_SRST			0x04
#define MMA7660_SPCNT			0x05
#define MMA7660_INTSU			0x06
#define MMA7660_MODE			0x07
#define MMA7660_SR				0x08
#define MMA7660_PDET			0x09
#define MMA7660_PD				0x0A

#define POLL_INTERVAL_MAX	500
#define POLL_INTERVAL		100
#define INPUT_FUZZ	4
#define INPUT_FLAT	4

#define MK_MMA7660_SR(FILT, AWSR, AMSR)\
	(FILT<<5 | AWSR<<3 | AMSR)

#define MK_MMA7660_MODE(IAH, IPP, SCPS, ASE, AWE, TON, MODE)\
	(IAH<<7 | IPP<<6 | SCPS<<5 | ASE<<4 | AWE<<3 | TON<<2 | MODE)

#define MK_MMA7660_INTSU(SHINTX, SHINTY, SHINTZ, GINT, ASINT, PDINT, PLINT, FBINT)\
	(SHINTX<<7 | SHINTY<<6 | SHINTZ<<5 | GINT<<4 | ASINT<<3 | PDINT<<2 | PLINT<<1 | FBINT)

#define MODE_CHANGE_DELAY_MS 100

static struct device *hwmon_dev;
static struct i2c_client *mma7660_i2c_client;

struct mma7660_data_s {
#ifdef CONFIG_HAS_EARLYSUSPEND
	struct early_suspend early_suspend;
	volatile int suspend_indator;
#endif
} mma7660_data;

#ifdef CONFIG_HAS_EARLYSUSPEND
static int mma7660_early_suspend(struct early_suspend *h);
static int mma7660_late_resume(struct early_suspend *h);
#endif

static void mma7660_read_xyz(int idx, s8 *pf)
{
	s32 result;

	assert(mma7660_i2c_client);
	do
	{
		result=i2c_smbus_read_byte_data(mma7660_i2c_client, idx+MMA7660_XOUT);
		assert(result>=0);
	}while(result&(1<<6)); //read again if alert
	*pf = (result&(1<<5)) ? (result|(~0x0000003f)) : (result&0x0000003f);
}

static ssize_t mma7660_value_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	int i;
	s8 xyz[3]; 
	s16 x, y, z;

	for(i=0; i<3; i++)
		mma7660_read_xyz(i, &xyz[i]);

	/* convert signed 8bits to signed 16bits */
	x = (((short)xyz[0]) << 8) >> 8;
	y = (((short)xyz[1]) << 8) >> 8;
	z = (((short)xyz[2]) << 8) >> 8;

	return sprintf(buf, "x= %d y= %d z= %d\n", x, y, z);

}

static ssize_t mma7660_enable_store(struct device *dev,
		struct device_attribute *attr,
		const char *buf, size_t count)
{
	unsigned long data;
	int error;

	error = strict_strtoul(buf, 10, &data);
	
	if(error) {
		pr_err("%s strict_strtoul error\n", __FUNCTION__);
		goto exit;
	}

	if(data) {
		error = i2c_smbus_write_byte_data(mma7660_i2c_client, MMA7660_MODE,
					MK_MMA7660_MODE(0, 1, 0, 0, 0, 0, 1));
		assert(error==0);
	} else {
		error = i2c_smbus_write_byte_data(mma7660_i2c_client, MMA7660_MODE,
					MK_MMA7660_MODE(0, 0, 0, 0, 0, 0, 0));
		assert(error==0);
	}

	return count;

exit:
	return error;
}

static DEVICE_ATTR(enable, S_IRUGO|S_IWUSR|S_IWGRP|S_IWOTH,
		NULL, mma7660_enable_store);

static DEVICE_ATTR(value, S_IRUGO|S_IWUSR|S_IWGRP|S_IWOTH,
		mma7660_value_show, NULL);

static struct attribute *mma7660_attributes[] = {
	&dev_attr_value.attr,
	&dev_attr_enable.attr,
	NULL
};

static struct attribute_group mma7660_attribute_group = {
	.attrs = mma7660_attributes
};


/*
 * Initialization function
 */
static int mma7660_init_client(struct i2c_client *client)
{
	int result;

	mma7660_i2c_client = client;

	if(0)
	{
		/*
		 * Probe the device. We try to set the device to Test Mode and then to
		 * write & verify XYZ registers
		 */
		result = i2c_smbus_write_byte_data(client, MMA7660_MODE,MK_MMA7660_MODE(0, 0, 0, 0, 0, 1, 0));
		assert(result==0);
		mdelay(MODE_CHANGE_DELAY_MS);

		result = i2c_smbus_write_byte_data(client, MMA7660_XOUT, 0x2a);
		assert(result==0);
		
		result = i2c_smbus_write_byte_data(client, MMA7660_YOUT, 0x15);
		assert(result==0);

		result = i2c_smbus_write_byte_data(client, MMA7660_ZOUT, 0x3f);
		assert(result==0);

		result = i2c_smbus_read_byte_data(client, MMA7660_XOUT);

		result= i2c_smbus_read_byte_data(client, MMA7660_YOUT);

		result= i2c_smbus_read_byte_data(client, MMA7660_ZOUT);
		assert(result=0x3f);
	}
	// Enable Orientation Detection Logic
	result = i2c_smbus_write_byte_data(client, 
		MMA7660_MODE, MK_MMA7660_MODE(0, 0, 0, 0, 0, 0, 0)); //enter standby
	assert(result==0);

	result = i2c_smbus_write_byte_data(client, 
		MMA7660_SR, MK_MMA7660_SR(2, 2, 1)); 
	assert(result==0);

	result = i2c_smbus_write_byte_data(client, 
		MMA7660_INTSU, MK_MMA7660_INTSU(0, 0, 0, 0, 1, 0, 1, 1)); 
	assert(result==0);

	result = i2c_smbus_write_byte_data(client, 
		MMA7660_SPCNT, 0xA0); 
	assert(result==0);

	result = i2c_smbus_write_byte_data(client, 
		MMA7660_MODE, MK_MMA7660_MODE(0, 1, 0, 0, 0, 0, 1)); 
	assert(result==0);

	mdelay(MODE_CHANGE_DELAY_MS);

	return result;
}

static struct input_polled_dev *mma7660_idev;

static void report_abs(void)
{
	int i;
	s8 xyz[3]; 
	s16 x, y, z;

	for(i=0; i<3; i++)
		mma7660_read_xyz(i, &xyz[i]);

	/* convert signed 8bits to signed 16bits */
	x = (((short)xyz[0]) << 8) >> 8;
	y = (((short)xyz[1]) << 8) >> 8;
	z = (((short)xyz[2]) << 8) >> 8;

	input_report_abs(mma7660_idev->input, ABS_X, x);
	input_report_abs(mma7660_idev->input, ABS_Y, y);
	input_report_abs(mma7660_idev->input, ABS_Z, z);

	input_sync(mma7660_idev->input);
}

static void mma7660_dev_poll(struct input_polled_dev *dev)
{
#ifdef CONFIG_HAS_EARLYSUSPEND
	if(0 == mma7660_data.suspend_indator){
		report_abs();
	}
#else
	report_abs();
#endif
} 

/*
 * I2C init/probing/exit functions
 */

static int __devinit mma7660_probe(struct i2c_client *client,
				   const struct i2c_device_id *id)
{
	int result;
	struct input_dev *idev;
	struct i2c_adapter *adapter;
 
	printk(KERN_INFO "mma7660 probe\n");
	mma7660_i2c_client = client;
	adapter = to_i2c_adapter(client->dev.parent);
 	result = i2c_check_functionality(adapter,
 					 I2C_FUNC_SMBUS_BYTE |
 					 I2C_FUNC_SMBUS_BYTE_DATA);
	assert(result);

	/* Initialize the MMA7660 chip */
	result = mma7660_init_client(client);
	assert(result==0);

	hwmon_dev = hwmon_device_register(&client->dev);
	assert(!(IS_ERR(hwmon_dev)));

	dev_info(&client->dev, "build time %s %s\n", __DATE__, __TIME__);
  
	/*input poll device register */
	mma7660_idev = input_allocate_polled_device();
	if (!mma7660_idev) {
		dev_err(&client->dev, "alloc poll device failed!\n");
		result = -ENOMEM;
		return result;
	}
	mma7660_idev->poll = mma7660_dev_poll;
	mma7660_idev->poll_interval = POLL_INTERVAL;
	mma7660_idev->poll_interval_max = POLL_INTERVAL_MAX;
	idev = mma7660_idev->input;
	idev->name = MMA7660_DRV_NAME;
	idev->id.bustype = BUS_I2C;
	idev->evbit[0] = BIT_MASK(EV_ABS);

	input_set_abs_params(idev, ABS_X, -512, 512, INPUT_FUZZ, INPUT_FLAT);
	input_set_abs_params(idev, ABS_Y, -512, 512, INPUT_FUZZ, INPUT_FLAT);
	input_set_abs_params(idev, ABS_Z, -512, 512, INPUT_FUZZ, INPUT_FLAT);
	
	result = input_register_polled_device(mma7660_idev);
	if (result) {
		dev_err(&client->dev, "register poll device failed!\n");
		return result;
	}
	result = sysfs_create_group(&mma7660_idev->input->dev.kobj, &mma7660_attribute_group);
	//result = device_create_file(&mma7660_idev->input->dev, &dev_attr_enable);
	//result = device_create_file(&mma7660_idev->input->dev, &dev_attr_value);

	if(result) {
		dev_err(&client->dev, "create sys failed\n");
	}

#ifdef CONFIG_HAS_EARLYSUSPEND
	mma7660_data.early_suspend.level = EARLY_SUSPEND_LEVEL_BLANK_SCREEN + 1;
	mma7660_data.early_suspend.suspend = mma7660_early_suspend;
	mma7660_data.early_suspend.resume = mma7660_late_resume;
	register_early_suspend(&mma7660_data.early_suspend);
	mma7660_data.suspend_indator = 0;
#endif

	return result;
}

static int __devexit mma7660_remove(struct i2c_client *client)
{
	int result;

	result = i2c_smbus_write_byte_data(client,MMA7660_MODE, MK_MMA7660_MODE(0, 0, 0, 0, 0, 0, 0));
	assert(result==0);

	hwmon_device_unregister(hwmon_dev);

	return result;
}

#ifdef CONFIG_HAS_EARLYSUSPEND
static int mma7660_early_suspend(struct early_suspend *h)
{
	int result;
	printk(KERN_INFO "mma7660 early suspend\n");
	mma7660_data.suspend_indator = 1;
	result = i2c_smbus_write_byte_data(mma7660_i2c_client, 
		MMA7660_MODE, MK_MMA7660_MODE(0, 0, 0, 0, 0, 0, 0));
	assert(result==0);
	return result;
}

static int mma7660_late_resume(struct early_suspend *h)
{
	int result;
	printk(KERN_INFO "mma7660 late resume\n");
	mma7660_data.suspend_indator = 0;
	result = i2c_smbus_write_byte_data(mma7660_i2c_client, 
		MMA7660_MODE, MK_MMA7660_MODE(0, 1, 0, 0, 0, 0, 1));
	assert(result==0);
	return result;
}
#endif /* CONFIG_HAS_EARLYSUSPEND */

static const struct i2c_device_id mma7660_id[] = {
	{ MMA7660_DRV_NAME, 1 },
	{ }
};
MODULE_DEVICE_TABLE(i2c, mma7660_id);

static struct i2c_driver mma7660_driver = {
	.driver = {
		.name	= MMA7660_DRV_NAME,
		.owner	= THIS_MODULE,
	},
	//.suspend = mma7660_suspend,
	//.resume	= mma7660_resume,
	.probe	= mma7660_probe,
	.remove	= __devexit_p(mma7660_remove),
	.id_table = mma7660_id,
};

static int __init mma7660_init(void)
{
	/* register driver */
	int res;

	res = i2c_add_driver(&mma7660_driver);
	if (res < 0) {
		printk(KERN_INFO "add mma7660 i2c driver failed\n");
		return -ENODEV;
	}
	printk(KERN_INFO "add mma7660 i2c driver\n");

	return res;
}

static void __exit mma7660_exit(void)
{
	printk(KERN_INFO "remove mma7660 i2c driver.\n");
	sysfs_remove_group(&mma7660_idev->input->dev.kobj, &mma7660_attribute_group);
	i2c_del_driver(&mma7660_driver);
}

MODULE_AUTHOR("Chen Gang <gang.chen@freescale.com>");
MODULE_DESCRIPTION("MMA7660 3-Axis Orientation/Motion Detection Sensor driver");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1");

module_init(mma7660_init);
module_exit(mma7660_exit);

