cmd_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.o := arm-none-linux-gnueabi-gcc -Wp,-MD,/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/.mali_pmm.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=4096 -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/../../ump/include/ump -DUSING_OS_MEMORY=0 -DUSING_MMU=1 -DUSING_UMP=1 -D_MALI_OSK_SPECIFIC_INDIRECT_MMAP -DMALI_TIMELINE_PROFILING_ENABLED=0 -DMALI_POWER_MGMT_TEST_SUITE=0 -DMALI_PMM_RUNTIME_JOB_CONTROL_ON=0 -DMALI_STATE_TRACKING=1 -DMALI_OS_MEMORY_KERNEL_BUFFER_SIZE_IN_MB=6 -DUSING_MALI_PMM=1 -DMALI_GPU_UTILIZATION=0 -DSVN_REV= -DSVN_REV_STRING=\"\" -DMALI_UKK_HAS_IMPLICIT_MMAP_CLEANUP -DMALI_USE_UNIFIED_MEMORY_PROVIDER=1 -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/platform -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/license/gpl -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm -DUSING_MALI400 -DUSING_MALI400_L2_CACHE  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(mali_pmm)"  -D"KBUILD_MODNAME=KBUILD_STR(mali)"  -c -o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/.tmp_mali_pmm.o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.c

deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.o := \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.c \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_ukk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_osk.h \
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
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_memory_engine.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_osk_specific.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_uk_types.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/regs/mali_200_regs.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_common.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_subsystem.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_common.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_session_manager.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_uk_types.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm_system.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm_state.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm_policy.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/platform/mali_platform.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_osk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.h \

/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.o: $(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.o)

$(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm/mali_pmm.o):
