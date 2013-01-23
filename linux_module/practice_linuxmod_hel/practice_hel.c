#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
static int __init untiled(void)
{
	printk(KERN_INFO "Hello\n");
	return 0;
}
static void __exit untiled2(void)
{
	printk(KERN_INFO "exit panna poren\n");
}
module_init(untiled);
module_exit(untiled2);

