#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>

static unsigned int dev_major = 250;

const struct file_operations my_fops = {

};



static int __init chr_dev_init(void){

	int ret;
	
	ret = register_chrdev(dev_major,"test1",&my_fops);
	if(ret == 0){
		printk("register successful\n");
	}else{
		printk("register failed\n");
		return -EFAULT;
	}
	
	return 0;

}

static void __exit chr_dev_exit(void){

	unregister_chrdev(dev_major, "test1");
}

module_init(chr_dev_init);
module_exit(chr_dev_exit);
MODULE_LICENSE("GPL");

















