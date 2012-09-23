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
	{ 0xe500a7cb, "videobuf_mmap_free" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0xc93c111c, "clk_reset" },
	{ 0x9f8df4c7, "clk_enable" },
	{ 0x1a76c2d0, "videobuf_cgmbuf" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0x4f8ead92, "videobuf_mmap_mapper" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0x622dfb9a, "video_device_release" },
	{ 0x85a66c0d, "v4l2_device_unregister" },
	{ 0x4ec2f8f7, "clk_disable" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x25aed440, "clk_put" },
	{ 0xab86f36b, "videobuf_streamon" },
	{ 0xb58a9f3c, "videobuf_queue_dma_contig_init" },
	{ 0xbdaf1985, "videobuf_iolock" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0x358aa8ef, "v4l2_device_register" },
	{ 0x11f4cf48, "video_register_device" },
	{ 0xf307018, "videobuf_to_dma_contig" },
	{ 0x53fa4dde, "video_device_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xea147363, "printk" },
	{ 0x801ce278, "videobuf_qbuf" },
	{ 0x472ccfb7, "video_unregister_device" },
	{ 0xfa3036f9, "videobuf_querybuf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x85285edd, "platform_get_resource" },
	{ 0xfc9b6bbd, "videobuf_read_stream" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0x7002a3ff, "platform_driver_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x27309a66, "videobuf_stop" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc9e3ad31, "platform_device_register" },
	{ 0xb3f53c66, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd780a450, "clk_set_parent" },
	{ 0xc27487dd, "__bug" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0x8ef03529, "videobuf_dqbuf" },
	{ 0xd23b3058, "clk_get" },
	{ 0xdb76df02, "clk_set_rate" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x79ed1487, "videobuf_reqbufs" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x776045ed, "v4l2_i2c_new_subdev_board" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0x659c2a7c, "dev_set_name" },
	{ 0xea782db1, "regulator_get" },
	{ 0xa38c672, "i2c_get_adapter" },
	{ 0x13095525, "param_ops_uint" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x5958b2bc, "video_ioctl2" },
	{ 0x4cf8249e, "videobuf_poll_stream" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc545c06f, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-dma-contig";

