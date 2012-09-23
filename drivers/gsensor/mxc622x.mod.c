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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5f754e5a, "memset" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x2f5b0e68, "device_create_file" },
	{ 0xf5223a80, "misc_register" },
	{ 0x97255bdf, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0xea147363, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdc5a21ec, "i2c_transfer" },
	{ 0x59bb6a81, "nonseekable_open" },
	{ 0x39af6aef, "misc_deregister" },
	{ 0xd0688573, "device_remove_file" },
	{ 0xb227ae83, "unregister_early_suspend" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

