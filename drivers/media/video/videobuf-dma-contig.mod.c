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
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xab455eb0, "up_read" },
	{ 0x86d59504, "videobuf_queue_cancel" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xc6d533e1, "down_read" },
	{ 0xe838adc0, "follow_pfn" },
	{ 0xe1864d63, "dev_err" },
	{ 0xea147363, "printk" },
	{ 0x4113ea7e, "dma_free_coherent" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0xbc38b683, "dma_alloc_coherent" },
	{ 0xe7fe5cb0, "find_vma" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc27487dd, "__bug" },
	{ 0x37a0cba, "kfree" },
	{ 0xdde132fa, "remap_pfn_range" },
	{ 0x1116aa20, "videobuf_queue_core_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

