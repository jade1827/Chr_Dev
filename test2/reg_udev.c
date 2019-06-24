#include<linux/init.h>
#include<linux/module.h>
#include<linux/device.h>
#include<linux/fs.h>


static unsigned int dev_major = 250;
static struct class *devcls;
static struct device *dev;

const struct file_operations my_fops = {

};



static int __init chr_dev_init(void){

	int ret;
	
	ret = register_chrdev(dev_major,"test2",&my_fops);
	if(ret == 0){
		printk("register successful\n");
	}else{
		printk("register failed\n");
		return -EFAULT;
	}
	
	devcls = class_create(THIS_MODULE, "chr_cls");
	
	dev = device_create(devcls, NULL, MKDEV(dev_major,0), NULL,"%s","test2_node");

	return 0;
}

static void __exit chr_dev_exit(void){
	device_destroy(devcls, MKDEV(dev_major,0));
	class_destroy(devcls);
	unregister_chrdev(dev_major, "test2");
}

module_init(chr_dev_init);
module_exit(chr_dev_exit);
MODULE_LICENSE("GPL");

















