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
	{ 0xd011f345, "usb_deregister" },
	{ 0x60bd603a, "usb_register_driver" },
	{ 0xa2670b54, "input_event" },
	{ 0x36ceb0bd, "input_free_device" },
	{ 0x365aa531, "input_register_device" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa73c2633, "usb_alloc_coherent" },
	{ 0x36087143, "input_allocate_device" },
	{ 0x16165ed6, "usb_alloc_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0xe8764b53, "usb_bulk_msg" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4ffad27, "usb_control_msg" },
	{ 0x7886ef1b, "input_set_abs_params" },
	{ 0xea147363, "printk" },
	{ 0xe291d5c4, "input_unregister_device" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x617dc31, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xb578edfd, "usb_free_urb" },
	{ 0x167c6d02, "usb_kill_urb" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x462a382, "usb_submit_urb" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x1fc749b8, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00*");
