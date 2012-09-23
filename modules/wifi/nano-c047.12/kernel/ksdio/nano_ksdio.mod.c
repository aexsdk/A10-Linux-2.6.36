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
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbe3bda1b, "sw_mmc_rescan_card" },
	{ 0xc36ec4a9, "send_sig" },
	{ 0x698ff94c, "find_vpid" },
	{ 0x85072f42, "sdio_writesb" },
	{ 0x39cf75dd, "sdio_enable_func" },
	{ 0xa9b45071, "mmc_pm_gpio_ctrl" },
	{ 0x34a8d496, "sdio_claim_irq" },
	{ 0xb2ab2f52, "mmc_wait_for_cmd" },
	{ 0xc9161a57, "down_interruptible" },
	{ 0xf2e4af7f, "ns_net_rx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3b0b1431, "nanonet_detach" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x87460a70, "nanonet_attach" },
	{ 0x399db83a, "dev_alloc_skb" },
	{ 0xea147363, "printk" },
	{ 0x799ec6d1, "pid_task" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xe24008ed, "sdio_readsb" },
	{ 0xcc78460f, "sdio_unregister_driver" },
	{ 0x7a6a5286, "sdio_f0_writeb" },
	{ 0x22717461, "skb_queue_tail" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc4763632, "sdio_release_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x36f019a3, "nano_util_printbuf" },
	{ 0xc27487dd, "__bug" },
	{ 0x7696d6a1, "sched_setscheduler" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8cf51d15, "up" },
	{ 0x7922bc90, "nanonet_create" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x905b7a42, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x45aa3728, "sdio_register_driver" },
	{ 0xd50af09d, "consume_skb" },
	{ 0x1ef4495f, "sdio_claim_host" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x94fd2876, "sdio_set_block_size" },
	{ 0x5908232f, "nanonet_destroy" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xeb1578c4, "sdio_disable_func" },
	{ 0x9cf39150, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nano_if";

MODULE_ALIAS("sdio:c*v03BBd*");
