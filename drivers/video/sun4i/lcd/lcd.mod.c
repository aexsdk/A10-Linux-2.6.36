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
	{ 0x75e212cf, "cdev_del" },
	{ 0x8c932a49, "cdev_init" },
	{ 0xfccbc0ca, "Fb_Init" },
	{ 0x74441275, "DRV_DISP_Init" },
	{ 0xa1f7f10e, "TCON_open" },
	{ 0x2c7eec7a, "LCD_PWM_EN" },
	{ 0x34f2663, "TCON_close" },
	{ 0x3de26fa5, "LCD_BL_EN" },
	{ 0x64f1485a, "device_destroy" },
	{ 0x47ea1cba, "LCD_CLOSE_FUNC" },
	{ 0xb9aaae9, "LCD_POWER_EN" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfc7a80b8, "LCD_OPEN_FUNC" },
	{ 0xea147363, "printk" },
	{ 0x4cca3fb2, "device_create" },
	{ 0x17683344, "LCD_set_panel_funs" },
	{ 0xda3bd97d, "cdev_add" },
	{ 0x8c437434, "class_destroy" },
	{ 0xaeb1a6e1, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=disp";

