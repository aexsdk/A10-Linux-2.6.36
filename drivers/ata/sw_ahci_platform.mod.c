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
	{ 0xfa51e06d, "ahci_sdev_attrs" },
	{ 0x9cc664fd, "ahci_shost_attrs" },
	{ 0x63205de1, "ata_scsi_unlock_native_capacity" },
	{ 0xadc74993, "ata_std_bios_param" },
	{ 0xd32fe193, "ata_scsi_change_queue_depth" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xb7415284, "ata_scsi_queuecmd" },
	{ 0x2737707e, "ata_scsi_ioctl" },
	{ 0x6c737ce0, "platform_driver_unregister" },
	{ 0x3bb7692c, "platform_driver_probe" },
	{ 0xc9e3ad31, "platform_device_register" },
	{ 0x9439db48, "ahci_interrupt" },
	{ 0x983b2a7f, "ata_dummy_port_ops" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x6ae74147, "ahci_ops" },
	{ 0x1cfb2733, "ata_host_activate" },
	{ 0xa7a59ae5, "ahci_print_info" },
	{ 0xf34a6a7b, "ahci_init_controller" },
	{ 0x34319738, "ahci_reset_controller" },
	{ 0x7b7d298a, "ata_port_desc" },
	{ 0xf93d1c50, "ahci_reset_em" },
	{ 0x9ac984e9, "ata_host_alloc_pinfo" },
	{ 0x9aa1a11b, "ahci_set_em_messages" },
	{ 0x4eb6f630, "ahci_save_initial_config" },
	{ 0xc154a7be, "devm_ioremap" },
	{ 0x6346dc9b, "devm_kzalloc" },
	{ 0xb664590a, "platform_get_irq" },
	{ 0x85285edd, "platform_get_resource" },
	{ 0x5f754e5a, "memset" },
	{ 0xea147363, "printk" },
	{ 0x9f8df4c7, "clk_enable" },
	{ 0x25aed440, "clk_put" },
	{ 0x4ec2f8f7, "clk_disable" },
	{ 0xe1864d63, "dev_err" },
	{ 0xd23b3058, "clk_get" },
	{ 0x550e9a93, "ata_host_detach" },
	{ 0x1fc749b8, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci";

