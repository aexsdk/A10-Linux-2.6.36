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
	{ 0x274726df, "ieee80211_rx_irqsafe" },
	{ 0x1a2b73af, "kmalloc_caches" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0xd8f795ca, "del_timer" },
	{ 0xaeaae90e, "__alloc_workqueue_key" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x5580fa5a, "ieee80211_beacon_get_tim" },
	{ 0x933740ca, "cancel_work_sync" },
	{ 0xf59a7b7f, "queue_work" },
	{ 0x311211b3, "ieee80211_unregister_hw" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc37fbdab, "ieee80211_stop_queues" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xb26093ef, "ieee80211_wake_queues" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc3f084ec, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x7ac27b17, "destroy_workqueue" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x69c1fbf9, "skb_pull" },
	{ 0xda47aceb, "dev_kfree_skb_any" },
	{ 0x22717461, "skb_queue_tail" },
	{ 0x64d679a6, "kmem_cache_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3cd97cd1, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0xcf2ce378, "kfree_skb" },
	{ 0xc27487dd, "__bug" },
	{ 0x64821dd8, "ieee80211_get_buffered_bc" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa1a421c0, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6e6eb89d, "ieee80211_alloc_hw" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xcea58dda, "ieee80211_free_hw" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x905b7a42, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

