#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
static int ch __initdata=45;
static int ch1 __exitdata=55;
static int __init startfuc(void)
{
	printk(KERN_INFO "some no %d",ch);
	return 0;
}
static void __exit getoutfunc(void)
{
	printk(KERN_INFO "some no on going out %d",ch1);
}
module_init(startfuc);
module_exit(getoutfunc);

