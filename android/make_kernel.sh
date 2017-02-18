export ARCH=arm64
export CROSS_COMPILE=../../prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-
PWD=$(pwd)

make hikey_defconfig
make -j4
cp arch/arm64/boot/dts/hisilicon/hi6220-hikey.dtb $PWD/../../device/linaro/hikey-kernel/hi6220-hikey.dtb-4.4
cp arch/arm64/boot/Image-dtb $PWD/../../device/linaro/hikey-kernel/Image-dtb-4.4
