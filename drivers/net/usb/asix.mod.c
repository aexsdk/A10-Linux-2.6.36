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
	{ 0xa90c928a, "param_ops_int" },
	{ 0xa19c5b80, "usbnet_resume" },
	{ 0xbec28f11, "usbnet_suspend" },
	{ 0x3288e4e, "usbnet_disconnect" },
	{ 0x5623cb51, "usbnet_probe" },
	{ 0x8bcd47c6, "eth_mac_addr" },
	{ 0xf830cd0f, "usbnet_nway_reset" },
	{ 0x8d7236e, "usbnet_set_msglevel" },
	{ 0x5aeac06d, "usbnet_get_msglevel" },
	{ 0x56cc90b8, "usbnet_set_settings" },
	{ 0x8c5123d6, "usbnet_get_settings" },
	{ 0x942d3cb9, "usbnet_tx_timeout" },
	{ 0xb3de0c4, "usbnet_change_mtu" },
	{ 0xd8c4f081, "eth_validate_addr" },
	{ 0x37618d54, "usbnet_start_xmit" },
	{ 0x5a933e9c, "usbnet_stop" },
	{ 0x436265ec, "usbnet_open" },
	{ 0xd011f345, "usb_deregister" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0x613c88a, "usbnet_get_endpoints" },
	{ 0xf274d79c, "usbnet_unlink_rx_urbs" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7416215c, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0x56dc4a7f, "ethtool_op_set_tx_csum" },
	{ 0x528dcef6, "mii_ethtool_gset" },
	{ 0x7cf04611, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc06ac3f9, "netif_carrier_off" },
	{ 0x213d78e5, "usbnet_defer_kevent" },
	{ 0xe3278fc3, "netif_carrier_on" },
	{ 0x75acb5b0, "skb_put" },
	{ 0xc3f084ec, "skb_push" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0x4501e588, "skb_copy_expand" },
	{ 0x99bb8806, "memmove" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xea147363, "printk" },
	{ 0x5db51a30, "generic_mii_ioctl" },
	{ 0x328a05f1, "strncpy" },
	{ 0x182ac59f, "usbnet_get_drvinfo" },
	{ 0x6ae69a87, "mii_link_ok" },
	{ 0x91f984c2, "usbnet_skb_return" },
	{ 0xde948e30, "skb_clone" },
	{ 0x69c1fbf9, "skb_pull" },
	{ 0x6735ccbf, "netdev_err" },
	{ 0x9d669763, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1E51p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0421p772Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v125Ep180Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "53FE2FD51FFC053CDD8E023");
