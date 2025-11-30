#include <linux/module.h>
#include <linux/init.h>

int my_init(void)
{
    printk("hello - Hello from Kernel module!\n");
    return 0;
}

void my_exit (void)
{
    printk("hello - Goodbye from Kernel module!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
