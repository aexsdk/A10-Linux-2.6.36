cmd_arch/arm/kernel/entry-armv.o := arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/kernel/.entry-armv.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o arch/arm/kernel/entry-armv.o arch/arm/kernel/entry-armv.S

deps_arch/arm/kernel/entry-armv.o := \
  arch/arm/kernel/entry-armv.S \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/local/timers.h) \
    $(wildcard include/config/kprobes.h) \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/needs/syscall/for/cmpxchg.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/neon.h) \
    $(wildcard include/config/cpu/arm610.h) \
    $(wildcard include/config/cpu/arm710.h) \
    $(wildcard include/config/iwmmxt.h) \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/vfp.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/memory.h \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/zone/dma.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/const.h \
  arch/arm/mach-sun4i/include/mach/memory.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/glue.h \
    $(wildcard include/config/cpu/abrt/lv4t.h) \
    $(wildcard include/config/cpu/abrt/ev4.h) \
    $(wildcard include/config/cpu/abrt/ev4t.h) \
    $(wildcard include/config/cpu/abrt/ev5tj.h) \
    $(wildcard include/config/cpu/abrt/ev5t.h) \
    $(wildcard include/config/cpu/abrt/ev6.h) \
    $(wildcard include/config/cpu/abrt/ev7.h) \
    $(wildcard include/config/cpu/pabrt/legacy.h) \
    $(wildcard include/config/cpu/pabrt/v6.h) \
    $(wildcard include/config/cpu/pabrt/v7.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/vfpmacros.h \
    $(wildcard include/config/vfpv3.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/hwcap.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/vfp.h \
  arch/arm/mach-sun4i/include/mach/entry-macro.S \
  arch/arm/mach-sun4i/include/mach/hardware.h \
  arch/arm/mach-sun4i/include/mach/platform.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/hardware/vic.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/thread_notify.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/unwind.h \
    $(wildcard include/config/arm/unwind.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/oabi/compat.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/tls.h \
    $(wildcard include/config/tls/reg/emul.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  arch/arm/kernel/entry-header.S \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/alignment/trap.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/linkage.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/linkage.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/ptrace.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/fpstate.h \

arch/arm/kernel/entry-armv.o: $(deps_arch/arm/kernel/entry-armv.o)

$(deps_arch/arm/kernel/entry-armv.o):
