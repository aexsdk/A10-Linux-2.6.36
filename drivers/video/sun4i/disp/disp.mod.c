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
	{ 0xb7935444, "cdev_alloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x75e212cf, "cdev_del" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0x8c932a49, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc93c111c, "clk_reset" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0x9f8df4c7, "clk_enable" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0xa81cf736, "framebuffer_release" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x1792232a, "fb_size" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbdf94507, "gpio_read_one_pin_value" },
	{ 0x4ec2f8f7, "clk_disable" },
	{ 0x172e2032, "gpio_request" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x64f1485a, "device_destroy" },
	{ 0xf008f2c, "gpio_get_all_pin_status" },
	{ 0x25aed440, "clk_put" },
	{ 0x603ca5ea, "clk_get_parent" },
	{ 0xea163ab8, "fb_start" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x71a375d9, "clk_get_rate" },
	{ 0x5fa32a89, "gpio_set_one_pin_io_status" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x1caa0050, "register_framebuffer" },
	{ 0x8e3c9cc3, "vprintk" },
	{ 0x85285edd, "platform_get_resource" },
	{ 0x4cca3fb2, "device_create" },
	{ 0x1b48b304, "platform_device_unregister" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0x7002a3ff, "platform_driver_register" },
	{ 0xa0b7f6a1, "sw_get_ic_ver" },
	{ 0x344a50ed, "gpio_release" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xda3bd97d, "cdev_add" },
	{ 0x69ad3e22, "gpio_get_one_pin_status" },
	{ 0xc9e3ad31, "platform_device_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xd780a450, "clk_set_parent" },
	{ 0xf56e9251, "gpio_set_one_pin_pull" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xf6ca15f6, "gpio_set_one_pin_status" },
	{ 0xd23b3058, "clk_get" },
	{ 0xdb76df02, "clk_set_rate" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x42b7aca4, "framebuffer_alloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdde132fa, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8c437434, "class_destroy" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0xaeb1a6e1, "__class_create" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb20834f, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

