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
	{ 0xadf42bd5, "__request_region" },
	{ 0x75e212cf, "cdev_del" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8c932a49, "cdev_init" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xab455eb0, "up_read" },
	{ 0x3e644807, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xc9161a57, "down_interruptible" },
	{ 0x64f1485a, "device_destroy" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x70611975, "__alloc_pages_nodemask" },
	{ 0xc6d533e1, "down_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x8e3c9cc3, "vprintk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xb3efc72d, "down" },
	{ 0x4cca3fb2, "device_create" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xadb3d81e, "up_write" },
	{ 0xb1b22911, "down_write" },
	{ 0x347080ca, "contig_page_data" },
	{ 0xda3bd97d, "cdev_add" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0x165baa93, "__free_pages" },
	{ 0x9d130ab0, "___dma_page_cpu_to_dev" },
	{ 0x2ec08fee, "___dma_page_dev_to_cpu" },
	{ 0xc27487dd, "__bug" },
	{ 0x9bce482f, "__release_region" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x7947a565, "cpu_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xdde132fa, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x8cf51d15, "up" },
	{ 0x8c437434, "class_destroy" },
	{ 0x13095525, "param_ops_uint" },
	{ 0xaeb1a6e1, "__class_create" },
	{ 0xaa94c694, "__init_rwsem" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2D05A1E69C290F6BD3588FA");
