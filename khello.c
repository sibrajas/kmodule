#include <linux/module.h>
#include <linux/kernel.h>

static int __init khello_init(void)
{
    printk(KERN_INFO "Hello world\n");
    return 15; 
}

static void __exit khello_exit(void)
{
    printk("khello unloaded.\n");
}

module_init(khello_init);
module_exit(khello_exit); 


MODULE_LICENSE("My Own License");
MODULE_AUTHOR("sibrajas");
MODULE_DESCRIPTION("A simple kernel module.");
