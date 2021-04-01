
obj-m :=kerneltest.o
kerneltest-objs +=hello.o
kerneltest-objs +=function.o
KERNEL :=/usr/src/linux-headers-5.4.0-70-generic /
PWD :=$(shell pwd)

modules :
	$(MAKE) -C $(KERNEL) M=$(PWD) modules

.PHONEY : clean
clean :
	rm -f *.o *.ko
