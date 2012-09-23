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
	{ 0xbec28f11, "usbnet_suspend" },
	{ 0x3288e4e, "usbnet_disconnect" },
	{ 0x5623cb51, "usbnet_probe" },
	{ 0x942d3cb9, "usbnet_tx_timeout" },
	{ 0xb3de0c4, "usbnet_change_mtu" },
	{ 0xd8c4f081, "eth_validate_addr" },
	{ 0x37618d54, "usbnet_start_xmit" },
	{ 0x5a933e9c, "usbnet_stop" },
	{ 0x436265ec, "usbnet_open" },
	{ 0x46d4f01f, "usbnet_get_link" },
	{ 0xf830cd0f, "usbnet_nway_reset" },
	{ 0x8d7236e, "usbnet_set_msglevel" },
	{ 0x5aeac06d, "usbnet_get_msglevel" },
	{ 0x56cc90b8, "usbnet_set_settings" },
	{ 0x8c5123d6, "usbnet_get_settings" },
	{ 0xd011f345, "usb_deregister" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0xa19c5b80, "usbnet_resume" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x613c88a, "usbnet_get_endpoints" },
	{ 0x776463d8, "dev_warn" },
	{ 0x7fab2120, "_dev_info" },
	{ 0x182ac59f, "usbnet_get_drvinfo" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xea147363, "printk" },
	{ 0x5db51a30, "generic_mii_ioctl" },
	{ 0xf2de7cfa, "skb_trim" },
	{ 0xe1864d63, "dev_err" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*");
