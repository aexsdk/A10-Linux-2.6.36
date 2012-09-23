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
	{ 0x25aed440, "clk_put" },
	{ 0x344a50ed, "gpio_release" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x365aa531, "input_register_device" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0x36087143, "input_allocate_device" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8cfc414e, "add_timer" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xa2670b54, "input_event" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x4ec2f8f7, "clk_disable" },
	{ 0x9f8df4c7, "clk_enable" },
	{ 0xea147363, "printk" },
	{ 0xdb76df02, "clk_set_rate" },
	{ 0xd23b3058, "clk_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

