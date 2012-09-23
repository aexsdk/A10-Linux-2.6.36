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
	{ 0x983b2a7f, "ata_dummy_port_ops" },
	{ 0xbbd06ca0, "ata_port_freeze" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x8e98e6cf, "dev_attr_sw_activity" },
	{ 0x6346dc9b, "devm_kzalloc" },
	{ 0xb8711b5d, "dev_printk" },
	{ 0xdaa35f7e, "sata_pmp_error_handler" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf3448eb, "sata_pmp_qc_defer_cmd_switch" },
	{ 0xd5152710, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xdab84eb0, "dev_attr_em_message" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x10f11be9, "sata_pmp_port_ops" },
	{ 0x5585af2f, "ata_ehi_push_desc" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xea147363, "printk" },
	{ 0xe49ff3b0, "ata_wait_register" },
	{ 0xd5262659, "ata_std_qc_defer" },
	{ 0x1cc11a78, "ata_link_abort" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfb5103aa, "dev_attr_unload_heads" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xacda52c3, "ata_ehi_clear_desc" },
	{ 0xce08a825, "sata_link_hardreset" },
	{ 0x7fab2120, "_dev_info" },
	{ 0x531dcb8, "ata_dev_classify" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x8b752ac1, "ata_tf_to_fis" },
	{ 0x8ab0934d, "dev_attr_em_message_type" },
	{ 0xc27487dd, "__bug" },
	{ 0x5e54f748, "ata_wait_after_reset" },
	{ 0x28a0bc4c, "ata_qc_complete_multiple" },
	{ 0x80822a59, "ata_link_next" },
	{ 0x9d669763, "memcpy" },
	{ 0x67df75, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x776463d8, "dev_warn" },
	{ 0x67e3abcb, "ata_std_postreset" },
	{ 0x7f23eb7c, "ata_link_online" },
	{ 0xaecb1d31, "dev_attr_link_power_management_policy" },
	{ 0x273a7200, "ata_port_abort" },
	{ 0xbba40307, "sata_async_notification" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

