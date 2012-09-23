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
	{ 0x3643eb2a, "i2c_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0xa2670b54, "input_event" },
	{ 0xea15c020, "i2c_smbus_read_i2c_block_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x41916eb7, "sysfs_create_group" },
	{ 0x365aa531, "input_register_device" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0x6d917b1, "input_set_capability" },
	{ 0x36087143, "input_allocate_device" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xcb2b57e9, "i2c_smbus_read_word_data" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xea147363, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6e8f4fe, "sysfs_remove_group" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0xc3bbd42e, "cancel_delayed_work_sync" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xb4583d82, "i2c_smbus_write_byte_data" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa7932670, "i2c_smbus_read_byte_data" },
	{ 0x23269a13, "strict_strtoul" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x1fc749b8, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:bma250");
