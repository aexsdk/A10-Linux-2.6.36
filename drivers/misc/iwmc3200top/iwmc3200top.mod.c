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
	{ 0x3e4e4dc2, "sdio_writeb" },
	{ 0x738ec4c8, "sdio_readb" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xaeaae90e, "__alloc_workqueue_key" },
	{ 0x39cf75dd, "sdio_enable_func" },
	{ 0x34a8d496, "sdio_claim_irq" },
	{ 0xf59a7b7f, "queue_work" },
	{ 0x677bb305, "param_ops_bool" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xa6e8f4fe, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde7f63dc, "bus_rescan_devices" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe1864d63, "dev_err" },
	{ 0x41916eb7, "sysfs_create_group" },
	{ 0x7ac27b17, "destroy_workqueue" },
	{ 0xcc78460f, "sdio_unregister_driver" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc4763632, "sdio_release_irq" },
	{ 0x4c6311b8, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd44cf9a6, "request_firmware" },
	{ 0x45aa3728, "sdio_register_driver" },
	{ 0x31814ebc, "sdio_memcpy_fromio" },
	{ 0x1ef4495f, "sdio_claim_host" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x94fd2876, "sdio_set_block_size" },
	{ 0xa299ab31, "release_firmware" },
	{ 0xeb1578c4, "sdio_disable_func" },
	{ 0x9cf39150, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0089d1404*");

MODULE_INFO(srcversion, "66B75556B385F90B4364353");
