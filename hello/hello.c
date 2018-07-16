/*
 *a simple kernel module :hello
 *Woody Chen
 *Licensed under GPLv2 or later
 */
 
#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello World!\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye World!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Woody Chen <woody00h@gmail.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A simple hello world module");
MODULE_ALIAS("a simplest module");
