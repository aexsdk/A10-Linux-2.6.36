cmd_drivers/video/sun4i/disp/OSAL/OSAL_Thread.o := arm-none-linux-gnueabi-gcc -Wp,-MD,drivers/video/sun4i/disp/OSAL/.OSAL_Thread.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=4096 -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(OSAL_Thread)"  -D"KBUILD_MODNAME=KBUILD_STR(disp)"  -c -o drivers/video/sun4i/disp/OSAL/.tmp_OSAL_Thread.o drivers/video/sun4i/disp/OSAL/OSAL_Thread.c

deps_drivers/video/sun4i/disp/OSAL/OSAL_Thread.o := \
  drivers/video/sun4i/disp/OSAL/OSAL_Thread.c \

drivers/video/sun4i/disp/OSAL/OSAL_Thread.o: $(deps_drivers/video/sun4i/disp/OSAL/OSAL_Thread.o)

$(deps_drivers/video/sun4i/disp/OSAL/OSAL_Thread.o):
