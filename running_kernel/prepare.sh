#!/bin/bash
#Install build tools
sudo apt-get install qemu libncurses5-dev gcc-arm-linux-gnueabi build-essential

#Downlaod source code
wget https://www.kernel.org/pub/linux/kernel/v4.x/linux-4.0.tar.gz
wget https://busybox.net/downloads/busybox-1.24.0.tar.bz2


#Build busybox
export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabi-
make menuconfig #P684
make -j4 install
#Configure _install folter P685

#Build Linux kernel
export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabi-
make vexpress_defconfig
make menuconfig #P685-686
make bzImage -j4 ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
make dtbs

#Run Kernel+Busybox in QEMU
qemu-system-arm -M vexpress-a9 -smp 4 -m 1024M -kernel arch/arm/boot/zImage -append "rdinit=/linuxrc console=ttyAMA0 loglevel=8" -dtb arch/arm/boot/dts/vexpress-v2p-ca9.dtb -nographic

