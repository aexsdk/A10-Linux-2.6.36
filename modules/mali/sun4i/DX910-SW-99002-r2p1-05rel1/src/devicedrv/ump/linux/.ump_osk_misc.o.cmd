cmd_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.o := arm-none-linux-gnueabi-gcc -Wp,-MD,/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/.ump_osk_misc.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=4096 -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DSVN_REV= -DSVN_REV_STRING=\"\" -DMALI_STATE_TRACKING=0 -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/common -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../mali/common -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../mali/linux -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../../ump/include/ump -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/license/gpl  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ump_osk_misc)"  -D"KBUILD_MODNAME=KBUILD_STR(ump)"  -c -o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/.tmp_ump_osk_misc.o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.c

deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.o := \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.c \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/common/ump_osk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../mali/common/mali_osk.h \
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
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../mali/common/mali_kernel_memory_engine.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../mali/linux/mali_osk_specific.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/common/ump_kernel_memory_backend.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../../ump/include/ump/ump_kernel_interface.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/../../ump/include/ump/ump_kernel_platform.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/common/ump_kernel_types.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/common/ump_uk_types.h \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include/stdarg.h \
  include/linux/linkage.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/linkage.h \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/irqflags.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/hwcap.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/dynamic_debug.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/div64.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_kernel_linux.h \

/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.o: $(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.o)

$(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/ump/linux/ump_osk_misc.o):