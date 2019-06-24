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
	{ 0x35746b77, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xaf243a97, "class_destroy" },
	{ 0x77cb5806, "device_destroy" },
	{ 0xb0f2df0b, "device_create" },
	{ 0xa55d174, "__class_create" },
	{ 0x50eedeb8, "printk" },
	{ 0x930fa371, "__register_chrdev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FC43960F3746A57954B88C8");
