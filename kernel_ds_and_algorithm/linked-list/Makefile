obj-m:=doubly-linked-list.o hlist.o

KERNELBUILD:=/lib/modules/$(shell uname -r)/build

default:
	make -C ${KERNELBUILD} M=$(shell pwd) modules
clean:
	rm -rf *.o *.cmd *.ko *.mod.c .tmp_versions
