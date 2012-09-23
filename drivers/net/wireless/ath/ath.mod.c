#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6609097d, "module_layout" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x25c143d6, "freq_reg_info" },
	{ 0xea147363, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x86f7daca, "wiphy_apply_custom_regulatory" },
	{ 0x8ef606c3, "__alloc_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

