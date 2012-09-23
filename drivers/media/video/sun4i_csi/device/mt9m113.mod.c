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
	{ 0xea147363, "printk" },
	{ 0xdc5a21ec, "i2c_transfer" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x7d05192e, "v4l2_i2c_subdev_init" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xe3379974, "v4l2_chip_ident_i2c_client" },
	{ 0x1e326b97, "v4l2_ctrl_query_fill" },
	{ 0x93f3756b, "regulator_disable" },
	{ 0x5fa32a89, "gpio_set_one_pin_io_status" },
	{ 0x131aa5df, "regulator_enable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x37a0cba, "kfree" },
	{ 0x9327423, "v4l2_device_unregister_subdev" },
	{ 0x1fc749b8, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:mt9m113");
