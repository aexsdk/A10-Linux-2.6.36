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
	{ 0xab455eb0, "up_read" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xe738a885, "__wake_up_sync" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xc6d533e1, "down_read" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1000e51, "schedule" },
	{ 0xc27487dd, "__bug" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8893fa5d, "finish_wait" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

