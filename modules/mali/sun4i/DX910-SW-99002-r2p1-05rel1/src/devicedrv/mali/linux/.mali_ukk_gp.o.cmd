cmd_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.o := arm-none-linux-gnueabi-gcc -Wp,-MD,/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/.mali_ukk_gp.o.d  -nostdinc -isystem /home/s665a10/kk10/lichee/buildroot/output/external-toolchain/bin/../lib/gcc/arm-none-linux-gnueabi/4.5.1/include -I/home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun4i/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=4096 -fno-omit-frame-pointer -fno-optimize-sibling-calls -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/../../ump/include/ump -DUSING_OS_MEMORY=0 -DUSING_MMU=1 -DUSING_UMP=1 -D_MALI_OSK_SPECIFIC_INDIRECT_MMAP -DMALI_TIMELINE_PROFILING_ENABLED=0 -DMALI_POWER_MGMT_TEST_SUITE=0 -DMALI_PMM_RUNTIME_JOB_CONTROL_ON=0 -DMALI_STATE_TRACKING=1 -DMALI_OS_MEMORY_KERNEL_BUFFER_SIZE_IN_MB=6 -DUSING_MALI_PMM=1 -DMALI_GPU_UTILIZATION=0 -DSVN_REV= -DSVN_REV_STRING=\"\" -DMALI_UKK_HAS_IMPLICIT_MMAP_CLEANUP -DMALI_USE_UNIFIED_MEMORY_PROVIDER=1 -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/platform -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/license/gpl -I/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/pmm -DUSING_MALI400 -DUSING_MALI400_L2_CACHE  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(mali_ukk_gp)"  -D"KBUILD_MODNAME=KBUILD_STR(mali)"  -c -o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/.tmp_mali_ukk_gp.o /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.c

deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.o := \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.c \
  include/linux/fs.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  include/linux/limits.h \
  include/linux/ioctl.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/linux/blk_types.h \
    $(wildcard include/config/blk/dev/integrity.h) \
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
  include/linux/linkage.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/linkage.h \
  include/linux/wait.h \
    $(wildcard include/config/lockdep.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  include/linux/prefetch.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/processor.h \
    $(wildcard include/config/mmu.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/hwcap.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
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
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/bitops.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
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
  include/linux/stringify.h \
  include/linux/bottom_half.h \
  include/linux/spinlock_types.h \
  include/linux/spinlock_types_up.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/rwlock_types.h \
  include/linux/spinlock_up.h \
  include/linux/rwlock.h \
  include/linux/spinlock_api_up.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  include/asm-generic/atomic-long.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/current.h \
  include/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rculist.h \
  include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/string.h \
  include/linux/seqlock.h \
  include/linux/completion.h \
  include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  include/linux/rcutree.h \
    $(wildcard include/config/no/hz.h) \
  include/linux/path.h \
  include/linux/stat.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/stat.h \
  include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  include/linux/math64.h \
  include/linux/kobject.h \
    $(wildcard include/config/hotplug.h) \
  include/linux/sysfs.h \
  include/linux/errno.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/kobject_ns.h \
  include/linux/kref.h \
  include/linux/radix-tree.h \
  include/linux/prio_tree.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
  include/linux/pid.h \
  include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
  include/linux/capability.h \
  include/linux/semaphore.h \
  include/linux/fiemap.h \
  include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/linux/percpu_counter.h \
  include/linux/smp.h \
    $(wildcard include/config/use/generic/smp/helpers.h) \
  include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  include/linux/pfn.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/percpu.h \
  include/asm-generic/percpu.h \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  include/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/dqblk_qtree.h \
  include/linux/nfs_fs_i.h \
  include/linux/nfs.h \
  include/linux/sunrpc/msg_prot.h \
  include/linux/inet.h \
  include/linux/fcntl.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/fcntl.h \
  include/asm-generic/fcntl.h \
  include/linux/err.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/uaccess.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/memory.h \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/zone/dma.h) \
  include/linux/const.h \
  arch/arm/mach-sun4i/include/mach/memory.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_ukk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_osk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_memory_engine.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_osk_specific.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_uk_types.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/regs/mali_200_regs.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_osk.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_common.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_kernel_session_manager.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_wrappers.h \
  /home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/common/mali_uk_types.h \

/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.o: $(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.o)

$(deps_/home/s665a10/kk10/lichee/linux-2.6.36/modules/mali/sun4i/DX910-SW-99002-r2p1-05rel1/src/devicedrv/mali/linux/mali_ukk_gp.o):