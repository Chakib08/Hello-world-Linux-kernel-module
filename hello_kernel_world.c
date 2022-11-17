#include <linux/kernel.h>
#include <linux/module.h>


static int init_mod(void)
{
    printk("Hello Linux kernel world !\n");
    return 0;
}

static void exit_mod(void)
{
    printk("Good bye Linux kernel world \n");
}

module_init(init_mod);
module_exit(exit_mod);

MODULE_DESCRIPTION("Hello world kernel module");
MODULE_AUTHOR("Mohamed Lamine Kartobi <chakibdace@gmail.com>");
MODULE_LICENSE("GPL");