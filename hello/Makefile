obj-m := hello.o
KERNEL_DIR := /home/woody/linux-4.8/
PWD := $(shell pwd)
all:
	make -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules
clean:
	rm *.o *.ko *.mod.c
 
.PHONY:clean
