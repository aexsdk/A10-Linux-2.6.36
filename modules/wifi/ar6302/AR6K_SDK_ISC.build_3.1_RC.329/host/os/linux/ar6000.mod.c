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
	{ 0xb900a481, "skb_queue_head" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0x74171ea1, "dev_change_flags" },
	{ 0x5f38b3f2, "sysfs_remove_bin_file" },
	{ 0x3e644807, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x43f50c15, "mmc_detect_change" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x382782f5, "wake_lock_destroy" },
	{ 0x682c23de, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x85072f42, "sdio_writesb" },
	{ 0x39cf75dd, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x34a8d496, "sdio_claim_irq" },
	{ 0x237d7b27, "eth_change_mtu" },
	{ 0xb2ab2f52, "mmc_wait_for_cmd" },
	{ 0xe3278fc3, "netif_carrier_on" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2568424c, "skb_copy" },
	{ 0xc9161a57, "down_interruptible" },
	{ 0xc06ac3f9, "netif_carrier_off" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x1a41a5ed, "wake_lock" },
	{ 0x689fa0b2, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x4f099aa5, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf2de7cfa, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x206d8b6, "param_ops_string" },
	{ 0x1e25910c, "netif_rx" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x5d0e93c3, "mmc_wait_for_req" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x157d409, "alloc_etherdev_mq" },
	{ 0x13916ba5, "netif_rx_ni" },
	{ 0x399db83a, "dev_alloc_skb" },
	{ 0xb86e4ab9, "random32" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xe52592a, "panic" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfe661740, "register_netdev" },
	{ 0xdc8cce4f, "mmc_set_data_timeout" },
	{ 0xe9140ac5, "wireless_send_event" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc3f084ec, "skb_push" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xf0f1246c, "kvasprintf" },
	{ 0x7002a3ff, "platform_driver_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x69c1fbf9, "skb_pull" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe24008ed, "sdio_readsb" },
	{ 0xcc78460f, "sdio_unregister_driver" },
	{ 0x22717461, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x8ef606c3, "__alloc_skb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xc4763632, "sdio_release_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe5bca160, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xcf2ce378, "kfree_skb" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xde37bb9b, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0x590cf35b, "wake_up_process" },
	{ 0x459bf03d, "ether_setup" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x4c6311b8, "sdio_memcpy_toio" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x876bbb50, "kthread_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x89e9d8e5, "wake_lock_init" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xd1329880, "param_array_ops" },
	{ 0x52569c3c, "sysfs_create_bin_file" },
	{ 0x8cf51d15, "up" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x905b7a42, "skb_dequeue" },
	{ 0x4d4918c3, "unregister_netdev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xecc9d725, "__netif_schedule" },
	{ 0x45aa3728, "sdio_register_driver" },
	{ 0xd50af09d, "consume_skb" },
	{ 0x31814ebc, "sdio_memcpy_fromio" },
	{ 0x1ef4495f, "sdio_claim_host" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x75acb5b0, "skb_put" },
	{ 0x13095525, "param_ops_uint" },
	{ 0x1fc749b8, "dev_get_drvdata" },
	{ 0x94fd2876, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xeb1578c4, "sdio_disable_func" },
	{ 0x9cf39150, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2ff1a790, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
