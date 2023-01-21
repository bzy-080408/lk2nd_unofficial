# [中文](README_CN.md)
# lk2nd
lk2nd is a bootloader for Qualcomm MSM devices,
based on the [CodeAurora Little Kernel fork](https://source.codeaurora.org/quic/la/kernel/lk/).
It provides an Android Fastboot interface on devices where the stock bootloader
does not provide Fastboot (e.g. Samsung).

lk2nd does not replace the stock bootloader. It is packaged into an Android
boot image and then loaded by the stock bootloader as a "secondary" bootloader.
The real Android boot image is placed into the boot partition with 1 MB offset,
and then loaded by lk2nd.

## Supported SoCs
- MSM8953

### Supported devices
#### huawei devices
- the Plus mode is same as the gernic mode (e.g. MLA-AL10 is same as MLA-AL00)  
- Huawei CAN-AL00
- Huawei CAN-L01
- Huawei CAN-L02
- Huawei CAN-L03
- Huawei CAN-TL00
- Huawei MLA-AL00
- Huawei MLA-L01
- Huawei MLA-L02
- Huawei MLA-L03
- Huawei MLA-TL00
- Huawei MLA-UL00 (Maybe cannot use because I cannot find the device-tree)
#### xiaomi devices
- Xiaomi MAX2
- Xiaomi note 4X

## Installation
1. unlock the bootloader
2. Download `lk2nd.img` (as of now there's no build available so you'll need to build it yourself.)
3. Flash `lk2nd.img` using the stock flashing procedure:
  - Fastboot: `fastboot flash boot lk2nd.img`

## Usage
lk2nd provides the standard Android fastboot protocol for flashing/booting Android boot images.

Press `Volume Down` while booting to enter Fastboot mode.
Press `Volume Up` while booting to boot into Recovery mode.

**Note:** If your stock bootloader uses the same key combinations, you need to wait a bit before
pressing the volume keys. Usually, waiting until the screen turns on and/or the device vibrates
should be enough to make the stock bootloader ignore the keys.

`fastboot flash lk2nd lk2nd.img` can be used to update lk2nd directory from its
fastboot interface.

**Note:** `fastboot flash boot boot.img` will flash the actual boot image with 1 MB offset
into the boot partition. This is done to avoid replacing lk2nd (since it is also booted from
the boot partition).

Other fastboot commands work normally.

## Building
```
 make TOOLCHAIN_PREFIX=arm-none-eabi- msm8953-secondary
```
**do not use aarch64(arm64) toolchain to build it.**

# donation
![donation](donation.jpg)    
**requests:**
- ARM (32 bit) GCC tool chain  
  - Arch Linux: `arm-none-eabi-gcc`
  - Alpine Linux and postmarketOS: `gcc-arm-none-eabi`
  - Debian and Ubuntu: `gcc-arm-none-eabi`
  - Fedora: `arm-none-eabi-gcc-cs`
- [Device Tree Compiler](https://git.kernel.org/pub/scm/utils/dtc/dtc.git)
  - Arch Linux: `dtc`
  - Alpine Linux and postmarketOS: `dtc`
  - Debian and Ubuntu: `device-tree-compiler`
  - Fedora: `dtc`
- libfdt
  - Alpine Linux and postmarketOS: `dtc-dev`
  - Debian and Ubuntu: `libfdt-dev`
  - Fedora: `libfdt-devel`
- GNU tar
  - Alpine Linux and postmarketOS: `tar`


Replace `TOOLCHAIN_PREFIX` with the path to your tool chain.
`lk2nd.img` is built and placed into `build-<SoC>-secondary/lk2nd.img`.
