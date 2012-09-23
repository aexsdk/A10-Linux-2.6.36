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
	{ 0xa2670b54, "input_event" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdc5a21ec, "i2c_transfer" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x5be5952b, "queue_delayed_work" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0x365aa531, "input_register_device" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0xe1864d63, "dev_err" },
	{ 0x36087143, "input_allocate_device" },
	{ 0xaeaae90e, "__alloc_workqueue_key" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x344a50ed, "gpio_release" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xba3cfb81, "script_parser_fetch_ex" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0xea147363, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:zt8031");
