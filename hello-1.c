/*  
 *  hello-1.c - The simplest kernel module.
 *  Courtesy:https://tldp.org/LDP/lkmpg/2.6/html/lkmpg.html
 * 	Author: Devika
 *   	
 */
/* Simple Kernel Program */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int init_module(void)/* Called when the module is insmoded into the kernel*/
{
	printk(KERN_INFO "Hello Devika Harikrishnan 1.\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup_module(void)/* Called just before a module is rmmoded. Will undo whatever init module did*/
{
	printk(KERN_INFO "Goodbye Devika 1.\n");/* log to syslog*/
}
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Welcome Devika Module");
MODULE_AUTHOR("Devika");