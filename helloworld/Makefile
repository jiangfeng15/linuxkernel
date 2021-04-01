
obj-m :=hello.o
KERNEL :=/usr/src/linux-headers-5.4.0-70-generic /
PWD :=$(shell pwd)

modules :
	$(MAKE) -C $(KERNEL) M=$(PWD) modules

.PHONEY : clean
clean :
	rm -f *.o *.ko
