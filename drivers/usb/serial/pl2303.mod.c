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
	{ 0x677bb305, "param_ops_bool" },
	{ 0xbf0f0b3d, "usb_serial_resume" },
	{ 0x726f2323, "usb_serial_suspend" },
	{ 0x9cb46af0, "usb_serial_disconnect" },
	{ 0xe3e2f267, "usb_serial_probe" },
	{ 0xd011f345, "usb_deregister" },
	{ 0x42123ebe, "usb_serial_deregister" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0x74cb5223, "usb_serial_register" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3079fbd9, "usb_serial_generic_submit_read_urb" },
	{ 0x7810199d, "usb_clear_halt" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x76c1a770, "tty_encode_baud_rate" },
	{ 0x4fd8fff8, "tty_get_baud_rate" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xf2997713, "tty_termios_hw_change" },
	{ 0x9d669763, "memcpy" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0xa8b04be8, "usb_serial_generic_close" },
	{ 0x562ad513, "interruptible_sleep_on" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0xe1864d63, "dev_err" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x4c354aa1, "usb_serial_handle_break" },
	{ 0xb8711b5d, "dev_printk" },
	{ 0x8bc7b631, "tty_kref_put" },
	{ 0x55b81ac7, "tty_flip_buffer_push" },
	{ 0x93a125b7, "tty_insert_flip_string_fixed_flag" },
	{ 0xbc179341, "usb_serial_handle_sysrq_char" },
	{ 0xf58cb4d8, "tty_insert_flip_string_flags" },
	{ 0x7e5d1f04, "tty_port_tty_get" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xea147363, "printk" },
	{ 0x1fc749b8, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v067Bp2303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp04BBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp1234d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0612d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0609d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp331Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0A03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0A0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EBAp1080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EBAp2080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF7p0620d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0584pB000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2478p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1453p4026d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0731p0528d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p2068d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F7p02DFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04A5p4027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0745p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v078Bp1234d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v10B5pAC70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp0027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0413p2101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E55p110Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0731p2003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v058Fp9720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F6p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp002Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ADp0FBAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5372p2303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p3524d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0521d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0522d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0437d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11ADp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B63p6530d*dc*dsc*dp*ic*isc*ip*");
