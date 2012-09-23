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
	{ 0x8f4fe1a5, "register_netdevice" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x382782f5, "wake_lock_destroy" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x698ff94c, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xe3278fc3, "netif_carrier_on" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xde948e30, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8949858b, "schedule_work" },
	{ 0xc9161a57, "down_interruptible" },
	{ 0xc06ac3f9, "netif_carrier_off" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x47b261fe, "remove_proc_entry" },
	{ 0x1a41a5ed, "wake_lock" },
	{ 0x689fa0b2, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4f099aa5, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x104d771a, "__netdev_alloc_skb" },
	{ 0x1e25910c, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xacc1ebd1, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x8d125945, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x157d409, "alloc_etherdev_mq" },
	{ 0x399db83a, "dev_alloc_skb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd011f345, "usb_deregister" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x1e36bb47, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfe661740, "register_netdev" },
	{ 0xe9140ac5, "wireless_send_event" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0x84b183ae, "strncmp" },
	{ 0x2577d3d5, "sw_usb_disable_hcd" },
	{ 0xc3f084ec, "skb_push" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xb3efc72d, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x241e5c45, "sw_usb_enable_hcd" },
	{ 0x53224ee3, "kill_pid" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x69c1fbf9, "skb_pull" },
	{ 0x617dc31, "usb_free_coherent" },
	{ 0x189bf7e7, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9a08fa6e, "flush_signals" },
	{ 0x22717461, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x1eb78658, "netif_device_attach" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0xe99ff310, "usb_get_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4e7f70fd, "usb_reset_device" },
	{ 0x604b0cf, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xde37bb9b, "eth_type_trans" },
	{ 0xd9b5bab5, "create_proc_entry" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0xd09bd44a, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x89e9d8e5, "wake_lock_init" },
	{ 0x33c26ffe, "dev_alloc_name" },
	{ 0x8cf51d15, "up" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x905b7a42, "skb_dequeue" },
	{ 0x4d4918c3, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xecc9d725, "__netif_schedule" },
	{ 0xa73c2633, "usb_alloc_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x13095525, "param_ops_uint" },
	{ 0x78abf097, "skb_copy_bits" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0x2ff1a790, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "C04FDD91132A7BADC88BC35");
