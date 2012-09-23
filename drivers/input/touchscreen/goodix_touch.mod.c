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
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0xf9a482f9, "msleep" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xaeaae90e, "__alloc_workqueue_key" },
	{ 0x39a2bc88, "i2c_del_driver" },
	{ 0xdc5a21ec, "i2c_transfer" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xf59a7b7f, "queue_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0xa2670b54, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0xe1864d63, "dev_err" },
	{ 0xea147363, "printk" },
	{ 0x7ac27b17, "destroy_workqueue" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xd685c7a, "flush_workqueue" },
	{ 0x3643eb2a, "i2c_register_driver" },
	{ 0xb6797608, "dev_notice" },
	{ 0x7fab2120, "_dev_info" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x365aa531, "input_register_device" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xba3cfb81, "script_parser_fetch_ex" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x776463d8, "dev_warn" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xe914e41e, "strcpy" },
	{ 0x36087143, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

