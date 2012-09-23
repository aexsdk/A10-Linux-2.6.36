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
	{ 0xadf42bd5, "__request_region" },
	{ 0x75e212cf, "cdev_del" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x8c932a49, "cdev_init" },
	{ 0xfccbc0ca, "Fb_Init" },
	{ 0x445c8070, "audio_set_hdmi_func" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x40bd809b, "kthread_stop" },
	{ 0x85285edd, "platform_get_resource" },
	{ 0x1b48b304, "platform_device_unregister" },
	{ 0x7002a3ff, "platform_driver_register" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xda3bd97d, "cdev_add" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc9e3ad31, "platform_device_register" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x590cf35b, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x876bbb50, "kthread_create" },
	{ 0xfaaa4c50, "disp_set_hdmi_func" },
	{ 0x8c437434, "class_destroy" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0xaeb1a6e1, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=disp";

