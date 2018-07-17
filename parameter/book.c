#include <linux/init.h>
#include <linux/module.h>

static char *book_name = "linux device driver revision 3";
static unsigned int book_number = 4000;
 
module_param(book_name, charp, S_IRUGO);
module_param(book_number, uint, S_IRUGO);

static int __init book_init(void)
{
	printk(KERN_INFO "The book name : %s\n", book_name);
	printk(KERN_INFO "The book number : %d\n", book_number);
	return 0;
}

static void __exit book_exit(void)
{
	printk(KERN_INFO "Book driver exit!\n");
}

module_init(book_init);
module_exit(book_exit);

MODULE_AUTHOR("Woody Chen <woody00h@gmail.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A simple module to test parameter");
MODULE_VERSION("V1.0");