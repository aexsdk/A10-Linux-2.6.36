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
	{ 0xd0688573, "device_remove_file" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0x39af6aef, "misc_deregister" },
	{ 0x2f5b0e68, "device_create_file" },
	{ 0xf5223a80, "misc_register" },
	{ 0x365aa531, "input_register_device" },
	{ 0x36087143, "input_allocate_device" },
	{ 0xea147363, "printk" },
	{ 0x97255bdf, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa2670b54, "input_event" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xb9e52429, "__wake_up" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

