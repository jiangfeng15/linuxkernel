#include <linux/init.h>
#include <linux/module.h>
#include "function.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jiangyingfeng");
MODULE_DESCRIPTION("multil cpp test");

static int hello_init(void)
{
        printk(KERN_DEBUG "hello, world\n");
        echoInfo(); 
	return 0;
} 
static void hello_exit(void)
{
         printk(KERN_DEBUG  "Goodbye,cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
