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
	{ 0x7e5d1f04, "tty_port_tty_get" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xfbb05d36, "usb_get_from_anchor" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x677bb305, "param_ops_bool" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x4e62030e, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xea147363, "printk" },
	{ 0x93a125b7, "tty_insert_flip_string_fixed_flag" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5093fa82, "_clear_bit_le" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xda5ea696, "_test_and_set_bit_le" },
	{ 0x8bc7b631, "tty_kref_put" },
	{ 0x55b81ac7, "tty_flip_buffer_push" },
	{ 0x9d820f50, "usb_serial_port_softint" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0xfd7b3ad9, "usb_anchor_urb" },
	{ 0x16165ed6, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2EE6D9B7D61F7D85E572CBF");
