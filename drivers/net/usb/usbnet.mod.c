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
	{ 0x3881ec86, "netdev_info" },
	{ 0x528dcef6, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfbb05d36, "usb_get_from_anchor" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8949858b, "schedule_work" },
	{ 0xc06ac3f9, "netif_carrier_off" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x4e62030e, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1e25910c, "netif_rx" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x8d125945, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x157d409, "alloc_etherdev_mq" },
	{ 0x637899e9, "usb_string" },
	{ 0x7416215c, "mii_nway_restart" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xff82f87a, "ethtool_op_get_link" },
	{ 0x707b2c5e, "usb_set_interface" },
	{ 0x1e36bb47, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfe661740, "register_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x22717461, "skb_queue_tail" },
	{ 0x1eb78658, "netif_device_attach" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x1e488c87, "netif_device_detach" },
	{ 0x8ef606c3, "__alloc_skb" },
	{ 0xe99ff310, "usb_get_dev" },
	{ 0xcbee62ca, "pm_runtime_enable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x604b0cf, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x7810199d, "usb_clear_halt" },
	{ 0xde37bb9b, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0x6735ccbf, "netdev_err" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xd8c4f081, "eth_validate_addr" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x905b7a42, "skb_dequeue" },
	{ 0x4d4918c3, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x6ae69a87, "mii_link_ok" },
	{ 0xecc9d725, "__netif_schedule" },
	{ 0xd50af09d, "consume_skb" },
	{ 0x46f07733, "skb_tstamp_tx" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x8bcd47c6, "eth_mac_addr" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x66f731c9, "mii_ethtool_sset" },
	{ 0xfd7b3ad9, "usb_anchor_urb" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x313341a3, "_set_bit_le" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

