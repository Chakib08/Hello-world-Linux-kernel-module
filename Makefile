KDIR := /lib/modules/$(shell uname -r)/build

obj-m += hello_kernel_world.o

all:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules

clean:
	rm -rf *.o *.ko *.mod* *.cmd .module* modules* Module* .*.cmd .tmp*