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
	{ 0x344a50ed, "gpio_release" },
	{ 0x557be1a4, "timed_output_dev_unregister" },
	{ 0xdf18bffb, "timed_output_dev_register" },
	{ 0x9bc8f2e7, "hrtimer_init" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xea147363, "printk" },
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xae79d7a3, "hrtimer_start" },
	{ 0x56983d64, "hrtimer_cancel" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0x906f12d6, "hrtimer_get_remaining" },
	{ 0x2196324, "__aeabi_idiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

