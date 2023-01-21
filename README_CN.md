# lk2nd
lk2nd是一个在高通MSM设备上面运行的bootloader,
基于 [CodeAurora Little Kernel fork](https://source.codeaurora.org/quic/la/kernel/lk/).
It provides an Android Fastboot interface on devices where the stock bootloader
does not provide Fastboot (e.g. Samsung).

lk2nd不会替换原始bootloader（lk1st）。它被打包到Android中引导映像，然后由股票引导加载程序作为“辅助”引导加载程序加载。真正的Android引导映像被放置在具有1MB偏移的引导分区中，然后用lk2nd加载。   

## 支持的SoC
- MSM8953

### 支持的设备
#### 华为设备
- 升级版型号和普通版差不多(e.g. MLA-AL10 和 MLA-AL00一样)  
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
- Huawei MLA-UL00 (可能用不了，因为为找不到对应的设备树)
#### 小米设备
- 小米MAX2
- 小米A2lite
- 小米A1
- 红米note5
#### 魅族设备
- Meizu M6 Note
#### 联想设备
- lenovo P2(没有测试)
## 安装
1. 从release中下载lk2nd
2. 刷写lk2nd
  - Fastboot: `fastboot flash boot lk2nd.img`（前提是解锁bootloader)
  - 使用第三方recovery刷入

## 使用 （凑合着看吧，懂这个的都懂相关的英文）
lk2nd provides the standard Android fastboot protocol for flashing/booting Android boot images.

在启动时按住 `Volume Down` fastboot模式
在启动时按住 `Volume Up` 进入rec模式

**注意：** `fastboot flash boot boot.img` 将会将真正的Android引导映像被放置在具有1MB偏移的boot分区中，然后用lk2nd加载。

Other fastboot commands work normally.

## log
# 23-1-21
添加小米MAX2支持
# 23-1-20
完，edk2也不会。。。。。
给点捐赠吧。。。
# 23-1-11  
由于postmarketos我搞不上去（哪位大佬来搞一下）  
我决定开始移植edk2 （EFIDroid）

# 23-1-10 
没后续了，有bug我修，新增适配可以提交issue。

# 22-12-30 20:55 ：
msm8953 mainline分支的管理人员在聊天室内驳回了我的合并主线请求，新进展随后通知
# 22-12-30:
整理了代码，可以拉下来自行编译了.取消了合并主线请求，因为设备树太多了。现在我在msm8953 mainline的聊天室里面请求往主线合并。
# 22-12-29:
添加支持：  
除了MLA_UL00外的其他设备（MLA_UL00的device-tree我并没有找到，请用户提交msm-id和board-id给我）  
注：现在施工已经完成，可以下载最新的release
# 22-12-28：
添加支持：  
can-al00(va-vd)  
can-cl00(va-vd)  
can-l01-va  
更新:MLA_AL00_VD  
# 22-11-30：  
添加支持：  
MLA_AL00_VD   

## 编译（注意：请使用主线lk2nd经行移植，我有空也会在此分支合并主线path）
```
$ make TOOLCHAIN_PREFIX=arm-none-eabi- <SoC>-secondary
```
# 捐赠
![donation](donation.jpg)    
**编译需要的软件包:**
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

### 联系：
- Qemu安卓，酷安、贴吧、qq、b站同名

### 警告： 根据GNU GPLv2协议，许可社会公众享有：运行、复制软件的自由，发行传播软件的自由，获得软件源码的自由，改进软件并将自己作出的改进版本向社会发行传播的自由，并且不能更改许可证
