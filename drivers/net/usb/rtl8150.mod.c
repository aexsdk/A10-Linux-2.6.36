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
	{ 0xff82f87a, "ethtool_op_get_link" },
	{ 0x237d7b27, "eth_change_mtu" },
	{ 0xd8c4f081, "eth_validate_addr" },
	{ 0xd011f345, "usb_deregister" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0xfe661740, "register_netdev" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x157d409, "alloc_etherdev_mq" },
	{ 0x7dceceac, "capable" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0x399db83a, "dev_alloc_skb" },
	{ 0xecc9d725, "__netif_schedule" },
	{ 0x3304d03b, "dev_kfree_skb_irq" },
	{ 0x4e62030e, "usb_unlink_urb" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x328a05f1, "strncpy" },
	{ 0x1e36bb47, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d4918c3, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0xd50af09d, "consume_skb" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x1eb78658, "netif_device_attach" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0xea147363, "printk" },
	{ 0xe3278fc3, "netif_carrier_on" },
	{ 0xc06ac3f9, "netif_carrier_off" },
	{ 0x7fab2120, "_dev_info" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x1e25910c, "netif_rx" },
	{ 0xde37bb9b, "eth_type_trans" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1e488c87, "netif_device_detach" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0x776463d8, "dev_warn" },
	{ 0x6128b5fc, "__printk_ratelimit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*");
