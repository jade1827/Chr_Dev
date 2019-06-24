KERNDIR := /lib/modules/`uname -r`/build

PWD := $(shell pwd)

obj-m += reg_udev.o

all:
	make -C $(KERNDIR) M=$(PWD) modules

clean:
	make -C $(KERNDIR) M=$(PWD) clean
