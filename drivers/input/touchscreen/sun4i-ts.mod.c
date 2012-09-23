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
	{ 0x1b48b304, "platform_device_unregister" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0x7002a3ff, "platform_driver_register" },
	{ 0xc9e3ad31, "platform_device_register" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd8f795ca, "del_timer" },
	{ 0xa2670b54, "input_event" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x365aa531, "input_register_device" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xe1864d63, "dev_err" },
	{ 0x85285edd, "platform_get_resource" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0x36087143, "input_allocate_device" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xb664590a, "platform_get_irq" },
	{ 0xea147363, "printk" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x36ceb0bd, "input_free_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

