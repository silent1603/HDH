#include <linux/module.h>
#include <linux/init.h>

//MODULE metadata
#define MODULE_NAME "tinybug"
MODULE_AUTHOR("trung");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A hello kernel module");
MODULE_VERSION("0.1");

static int __init ModuleInit(void)
{
	printk("Hello, Kernel!\n");
	return 0;
}

static void __exit ModuleExit(void)
{
	printk("Goodbye,Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
