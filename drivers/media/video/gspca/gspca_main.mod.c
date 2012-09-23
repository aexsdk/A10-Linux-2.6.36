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
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xa57afc74, "ktime_get" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x11f4cf48, "video_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x2700b38a, "mutex_lock_interruptible" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x472ccfb7, "video_unregister_device" },
	{ 0x707b2c5e, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x617dc31, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x54eec5c8, "vm_insert_page" },
	{ 0x9df01a53, "module_put" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xb3f53c66, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x365aa531, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x7810199d, "usb_clear_halt" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xca80e175, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x807a22d4, "vmalloc_to_page" },
	{ 0xa73c2633, "usb_alloc_coherent" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x5958b2bc, "video_ioctl2" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0x36087143, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

