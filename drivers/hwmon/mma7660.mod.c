#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6609097d, "module_layout" },
	{ 0x39a2bc88, "i2c_del_driver" },
	{ 0xa6e8f4fe, "sysfs_remove_group" },
	{ 0x3643eb2a, "i2c_register_driver" },
	{ 0xa2670b54, "input_event" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x41916eb7, "sysfs_create_group" },
	{ 0x74f317de, "input_register_polled_device" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0xe1864d63, "dev_err" },
	{ 0x18fcff88, "input_allocate_polled_device" },
	{ 0x7fab2120, "_dev_info" },
	{ 0xc7f50b24, "hwmon_device_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78f72010, "hwmon_device_unregister" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xa7932670, "i2c_smbus_read_byte_data" },
	{ 0xb4583d82, "i2c_smbus_write_byte_data" },
	{ 0xea147363, "printk" },
	{ 0x23269a13, "strict_strtoul" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:mma7660");

MODULE_INFO(srcversion, "9F3D086EB2FC7AFBC5DB637");
