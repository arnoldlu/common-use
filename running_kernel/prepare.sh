#!/bin/bash
#Install build tools
sudo apt-get install qemu libncurses5-dev gcc-arm-linux-gnueabi build-essential

#Downlaod source code
git clone https://github.com/arnoldlu/linux.git -b running_kernel_4.0
git clone https://github.com/arnoldlu/busybox.git -b 1_24_stable


#Run Kernel+Busybox in QEMU
qemu-system-arm -M vexpress-a9 -smp 4 -m 1024M -kernel arch/arm/boot/zImage -append "rdinit=/linuxrc console=ttyAMA0 loglevel=8" -dtb arch/arm/boot/dts/vexpress-v2p-ca9.dtb -nographic

