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
	{ 0x2b688622, "complete_and_exit" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0x349cba85, "strchr" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x3050f939, "mmc_pm_get_mod_type" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x382782f5, "wake_lock_destroy" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbe3bda1b, "sw_mmc_rescan_card" },
	{ 0xc36ec4a9, "send_sig" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x39cf75dd, "sdio_enable_func" },
	{ 0xa9b45071, "mmc_pm_gpio_ctrl" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x34a8d496, "sdio_claim_irq" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xde948e30, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc9161a57, "down_interruptible" },
	{ 0x1a41a5ed, "wake_lock" },
	{ 0x689fa0b2, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x4f099aa5, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xf5df0ec5, "skb_realloc_headroom" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0x1e25910c, "netif_rx" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0x26bfd559, "kernel_read" },
	{ 0xa2994c4f, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x157d409, "alloc_etherdev_mq" },
	{ 0x13916ba5, "netif_rx_ni" },
	{ 0x399db83a, "dev_alloc_skb" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x71c90087, "memcmp" },
	{ 0x1e36bb47, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfe661740, "register_netdev" },
	{ 0x4113ea7e, "dma_free_coherent" },
	{ 0x46389b5b, "sdio_readl" },
	{ 0xe9140ac5, "wireless_send_event" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc3f084ec, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb3efc72d, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x8cfc414e, "add_timer" },
	{ 0x799ec6d1, "pid_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x69c1fbf9, "skb_pull" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xbc38b683, "dma_alloc_coherent" },
	{ 0x8f34adc4, "dev_open" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe24008ed, "sdio_readsb" },
	{ 0xcc78460f, "sdio_unregister_driver" },
	{ 0x7a6a5286, "sdio_f0_writeb" },
	{ 0x7dceceac, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x9f984513, "strrchr" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xc4763632, "sdio_release_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xe5bca160, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xde37bb9b, "eth_type_trans" },
	{ 0x42ff6d0d, "sdio_f0_readb" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x7696d6a1, "sched_setscheduler" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4c6311b8, "sdio_memcpy_toio" },
	{ 0x4e304341, "sdio_writew" },
	{ 0x7d1cf4a, "find_get_pid" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x89e9d8e5, "wake_lock_init" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8cf51d15, "up" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xb477d87b, "sdio_reset_comm" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x4d4918c3, "unregister_netdev" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xecc9d725, "__netif_schedule" },
	{ 0x6f77a3a7, "sdio_readw" },
	{ 0x45aa3728, "sdio_register_driver" },
	{ 0xd50af09d, "consume_skb" },
	{ 0x31814ebc, "sdio_memcpy_fromio" },
	{ 0x1ef4495f, "sdio_claim_host" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x13095525, "param_ops_uint" },
	{ 0xc195e20, "down_timeout" },
	{ 0x94fd2876, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xeb1578c4, "sdio_disable_func" },
	{ 0x9cf39150, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2ff1a790, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");