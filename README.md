# Chr_Dev
study char device driver

test1:
int register_chrdev(unsigned int major,const char * name,
struct file_operations *fops);

test2:
/sys/class/name
class_create(owner, name);
/sys/class/name/name------>/sys/devices/virtual/name/name
device_create(struct class * class, struct device * parent, dev_t devt, void * drvdata, const char * fmt, ...);
