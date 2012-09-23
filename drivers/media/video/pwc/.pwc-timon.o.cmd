cmd_drivers/media/video/pwc/pwc-timon.o := arm-none-linux-gnueabi-gcc -Wp,-MD,drivers/media/video/pwc/.pwc-timon.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=4096 -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(pwc_timon)"  -D"KBUILD_MODNAME=KBUILD_STR(pwc)"  -c -o drivers/media/video/pwc/.tmp_pwc-timon.o drivers/media/video/pwc/pwc-timon.c

deps_drivers/media/video/pwc/pwc-timon.o := \
  drivers/media/video/pwc/pwc-timon.c \
  drivers/media/video/pwc/pwc-timon.h \
  include/media/pwc-ioctl.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/posix_types.h \
  include/linux/version.h \

drivers/media/video/pwc/pwc-timon.o: $(deps_drivers/media/video/pwc/pwc-timon.o)

$(deps_drivers/media/video/pwc/pwc-timon.o):
