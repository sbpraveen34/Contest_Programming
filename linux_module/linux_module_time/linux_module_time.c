#include<linux/module.h>
#include<linux/kernel.h>
#include<time.h>
#include<stdio.h>

int init_module(void)
{
	time_t seconds;
	tm * timeinf;
	time(&seconds);
	timeinf=localtime(&seconds);
//	seconds=time(NULL);
	char *ch;
	ch=asctime(timeinf);
	printk(KERN_INFO "%s",ch);
	return 0;
}
void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye World\n");
}
