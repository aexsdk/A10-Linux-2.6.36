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
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x365aa531, "input_register_device" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0x313341a3, "_set_bit_le" },
	{ 0x36087143, "input_allocate_device" },
	{ 0xea147363, "printk" },
	{ 0xa2670b54, "input_event" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

