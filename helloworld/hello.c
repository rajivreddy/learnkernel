#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

int init_samle(void){
printk("I am in init_sample fucntion\n");
return 0;
}
void clean_sample(void){
printk("I ain clean sample function\n");
}
module_init(init_samle);
module_exit(clean_sample);
