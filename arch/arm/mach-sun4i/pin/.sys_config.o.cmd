cmd_arch/arm/mach-sun4i/pin/sys_config.o := arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-sun4i/pin/.sys_config.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2         -c -o arch/arm/mach-sun4i/pin/sys_config.o arch/arm/mach-sun4i/pin/sys_config.S

deps_arch/arm/mach-sun4i/pin/sys_config.o := \
  arch/arm/mach-sun4i/pin/sys_config.S \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/mach-sun4i/pin/sys_config.o: $(deps_arch/arm/mach-sun4i/pin/sys_config.o)

$(deps_arch/arm/mach-sun4i/pin/sys_config.o):
