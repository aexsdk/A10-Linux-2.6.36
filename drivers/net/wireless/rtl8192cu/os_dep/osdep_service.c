/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/


#define _OSDEP_SERVICE_C_

#include <drv_conf.h>
#include <osdep_service.h>
#include <drv_types.h>
#include <recv_osdep.h>
#include <linux/vmalloc.h>

#ifdef RTK_DMP_PLATFORM
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,12))
#include <linux/pageremap.h>
#endif
#endif

#define RT_TAG	'1178'

#ifdef MEMORY_LEAK_DEBUG
#ifdef PLATFORM_LINUX
#include <asm/atomic.h>
atomic_t _malloc_cnt = ATOMIC_INIT(0);
atomic_t _malloc_size = ATOMIC_INIT(0);
#endif
#endif /* MEMORY_LEAK_DEBUG */


inline u8* _rtw_vmalloc(u32 sz)
{
	u8 	*pbuf;
#ifdef PLATFORM_LINUX	
	pbuf = vmalloc(sz);
#endif	
	
#ifdef PLATFORM_WINDOWS
	NdisAllocateMemoryWithTag(&pbuf,sz, RT_TAG);	
#endif

	return pbuf;	
}

inline u8* _rtw_zvmalloc(u32 sz)
{
	u8 	*pbuf;
#ifdef PLATFORM_LINUX
	pbuf = _rtw_vmalloc(sz);
	if (pbuf != NULL)
		memset(pbuf, 0, sz);
#endif	
	
#ifdef PLATFORM_WINDOWS
	NdisAllocateMemoryWithTag(&pbuf,sz, RT_TAG);
	if (pbuf != NULL)
		NdisFillMemory(pbuf, sz, 0);
#endif

	return pbuf;	
}

inline void _rtw_vmfree(u8 *pbuf, u32 sz)
{
#ifdef	PLATFORM_LINUX
	vfree(pbuf);
#endif	
	
#ifdef PLATFORM_WINDOWS
	NdisFreeMemory(pbuf,sz, 0);
#endif
}

u8* _rtw_malloc(u32 sz)
{

	u8 	*pbuf=NULL;

#ifdef PLATFORM_LINUX
#ifdef RTK_DMP_PLATFORM
	if(sz > 0x4000)
		pbuf = (u8 *)dvr_malloc(sz);
	else
#endif
		pbuf = kmalloc(sz, /*GFP_KERNEL*/GFP_ATOMIC);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisAllocateMemoryWithTag(&pbuf,sz, RT_TAG);

#endif

#ifdef MEMORY_LEAK_DEBUG
#ifdef PLATFORM_LINUX
	if ( pbuf != NULL) {
		atomic_inc(&_malloc_cnt);
		atomic_add(sz, &_malloc_size);
	}
#endif
#endif /* MEMORY_LEAK_DEBUG */

	return pbuf;	
	
}


u8* _rtw_zmalloc(u32 sz)
{
	u8 	*pbuf = _rtw_malloc(sz);

	if (pbuf != NULL) {

#ifdef PLATFORM_LINUX
		memset(pbuf, 0, sz);
#endif	
	
#ifdef PLATFORM_WINDOWS
		NdisFillMemory(pbuf, sz, 0);
#endif

	}

	return pbuf;	
	
}

void	_rtw_mfree(u8 *pbuf, u32 sz)
{

#ifdef	PLATFORM_LINUX
#ifdef RTK_DMP_PLATFORM
	if(sz > 0x4000)
		dvr_free(pbuf);
	else
#endif
		kfree(pbuf);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisFreeMemory(pbuf,sz, 0);

#endif
	
#ifdef MEMORY_LEAK_DEBUG
#ifdef PLATFORM_LINUX
	atomic_dec(&_malloc_cnt);
	atomic_sub(sz, &_malloc_size);
#endif
#endif /* MEMORY_LEAK_DEBUG */
	
}


#ifdef DBG_MEM_ALLOC

struct rtw_dbg_mem_stat {
	ATOMIC_T vir_alloc; // the memory bytes we allocate now
	ATOMIC_T vir_peak; // the peak memory bytes we allocate 
	ATOMIC_T vir_alloc_err; // the error times we fail to allocate memory
	
	ATOMIC_T phy_alloc;
	ATOMIC_T phy_peak;
	ATOMIC_T phy_alloc_err;
} rtw_dbg_mem_stat;

enum {
	MEM_STAT_VIR_ALLOC_SUCCESS,
	MEM_STAT_VIR_ALLOC_FAIL,
	MEM_STAT_VIR_FREE,
	MEM_STAT_PHY_ALLOC_SUCCESS,
	MEM_STAT_PHY_ALLOC_FAIL,
	MEM_STAT_PHY_FREE
};

void rtw_dump_mem_stat (void)
{
	int vir_alloc, vir_peak, vir_alloc_err, phy_alloc, phy_peak, phy_alloc_err;
	
	vir_alloc=ATOMIC_READ(&rtw_dbg_mem_stat.vir_alloc);
	vir_peak=ATOMIC_READ(&rtw_dbg_mem_stat.vir_peak);
	vir_alloc_err=ATOMIC_READ(&rtw_dbg_mem_stat.vir_alloc_err);

	phy_alloc=ATOMIC_READ(&rtw_dbg_mem_stat.phy_alloc);
	phy_peak=ATOMIC_READ(&rtw_dbg_mem_stat.phy_peak);
	phy_alloc_err=ATOMIC_READ(&rtw_dbg_mem_stat.phy_alloc_err);

	DBG_871X("vir_alloc:%d, vir_peak:%d,vir_alloc_err:%d, phy_alloc:%d, phy_peak:%d, phy_alloc_err:%d\n"
		, vir_alloc, vir_peak, vir_alloc_err
		, phy_alloc, phy_peak, phy_alloc_err
	);
}

void rtw_update_mem_stat(u8 flag, u32 sz)
{
	static u32 update_time = 0;
	int peak, alloc;

	if(!update_time) {
		ATOMIC_SET(&rtw_dbg_mem_stat.vir_alloc,0);
		ATOMIC_SET(&rtw_dbg_mem_stat.vir_peak,0);
		ATOMIC_SET(&rtw_dbg_mem_stat.vir_alloc_err,0);
		ATOMIC_SET(&rtw_dbg_mem_stat.phy_alloc,0);
		ATOMIC_SET(&rtw_dbg_mem_stat.phy_peak,0);
		ATOMIC_SET(&rtw_dbg_mem_stat.phy_alloc_err,0);
	}
		
	switch(flag) {
		case MEM_STAT_VIR_ALLOC_SUCCESS:
			alloc = ATOMIC_ADD_RETURN(&rtw_dbg_mem_stat.vir_alloc, sz);
			peak=ATOMIC_READ(&rtw_dbg_mem_stat.vir_peak);
			if (peak<alloc)
				ATOMIC_SET(&rtw_dbg_mem_stat.vir_peak, alloc);
			break;
			
		case MEM_STAT_VIR_ALLOC_FAIL:
			ATOMIC_INC(&rtw_dbg_mem_stat.vir_alloc_err);
			break;
			
		case MEM_STAT_VIR_FREE:
			alloc = ATOMIC_SUB_RETURN(&rtw_dbg_mem_stat.vir_alloc, sz);
			break;
			
		case MEM_STAT_PHY_ALLOC_SUCCESS:
			alloc = ATOMIC_ADD_RETURN(&rtw_dbg_mem_stat.phy_alloc, sz);
			peak=ATOMIC_READ(&rtw_dbg_mem_stat.phy_peak);
			if (peak<alloc)
				ATOMIC_SET(&rtw_dbg_mem_stat.phy_peak, alloc);
			break;

		case MEM_STAT_PHY_ALLOC_FAIL:
			ATOMIC_INC(&rtw_dbg_mem_stat.phy_alloc_err);
			break;
		
		case MEM_STAT_PHY_FREE:
			alloc = ATOMIC_SUB_RETURN(&rtw_dbg_mem_stat.phy_alloc, sz);
			
	};

	if (rtw_get_passing_time_ms(update_time) > 5000) {
		rtw_dump_mem_stat();
		update_time=rtw_get_current_time();
	}
	
	
}


inline u8* dbg_rtw_vmalloc(u32 sz, const char *func, int line)
{
	u8  *p;
	DBG_871X("DBG_MEM_ALLOC %s:%d %s(%d)\n", func,  line, __FUNCTION__, (sz));
	
	p=_rtw_vmalloc((sz));

	rtw_update_mem_stat(
		p ? MEM_STAT_VIR_ALLOC_SUCCESS : MEM_STAT_VIR_ALLOC_FAIL
		, sz
	);
	
	return p;
}

inline u8* dbg_rtw_zvmalloc(u32 sz, const char *func, int line)
{
	u8 *p;
	DBG_871X("DBG_MEM_ALLOC %s:%d %s(%d)\n", func, line, __FUNCTION__, (sz)); 
	
	p=_rtw_zvmalloc((sz)); 

	rtw_update_mem_stat(
		p ? MEM_STAT_VIR_ALLOC_SUCCESS : MEM_STAT_VIR_ALLOC_FAIL
		, sz
	);

	return p;
}

inline void dbg_rtw_vmfree(u8 *pbuf, u32 sz, const char *func, int line)
{
	DBG_871X("DBG_MEM_ALLOC %s:%d %s(%p,%d)\n",  func, line, __FUNCTION__, (pbuf), (sz));
	
	_rtw_vmfree((pbuf), (sz)); 

	rtw_update_mem_stat(
		MEM_STAT_VIR_FREE
		, sz
	);

}

inline u8* dbg_rtw_malloc(u32 sz, const char *func, int line) 
{
	u8 *p;
	
	if((sz)>4096) 
		DBG_871X("DBG_MEM_ALLOC !!!!!!!!!!!!!! %s:%d %s(%d)\n", func, line, __FUNCTION__, (sz)); 

	p=_rtw_malloc((sz));
	
	rtw_update_mem_stat(
		p ? MEM_STAT_PHY_ALLOC_SUCCESS : MEM_STAT_PHY_ALLOC_FAIL
		, sz
	);

	return p;
}

inline u8* dbg_rtw_zmalloc(u32 sz, const char *func, int line)
{
	u8 *p;

	if((sz)>4096)
		DBG_871X("DBG_MEM_ALLOC !!!!!!!!!!!!!! %s:%d %s(%d)\n", func, line, __FUNCTION__, (sz));

	p = _rtw_zmalloc((sz));

	rtw_update_mem_stat(
		p ? MEM_STAT_PHY_ALLOC_SUCCESS : MEM_STAT_PHY_ALLOC_FAIL
		, sz
	);

	return p;
		
}

inline void dbg_rtw_mfree(u8 *pbuf, u32 sz, const char *func, int line)
{
	if((sz)>4096)
		DBG_871X("DBG_MEM_ALLOC !!!!!!!!!!!!!! %s:%d %s(%p,%d)\n", func, line, __FUNCTION__, (pbuf), (sz));
	
	_rtw_mfree((pbuf), (sz));

	rtw_update_mem_stat(
		MEM_STAT_PHY_FREE
		, sz
	);
}
#endif


void _rtw_memcpy(void* dst, void* src, u32 sz)
{

#ifdef PLATFORM_LINUX

	memcpy(dst, src, sz);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisMoveMemory(dst, src, sz);

#endif

}

int	_rtw_memcmp(void *dst, void *src, u32 sz)
{

#ifdef PLATFORM_LINUX
//under Linux/GNU/GLibc, the return value of memcmp for two same mem. chunk is 0

	if (!(memcmp(dst, src, sz)))
		return _TRUE;
	else
		return _FALSE;
#endif


#ifdef PLATFORM_WINDOWS
//under Windows, the return value of NdisEqualMemory for two same mem. chunk is 1
	
	if (NdisEqualMemory (dst, src, sz))
		return _TRUE;
	else
		return _FALSE;

#endif	
	
	
	
}

void _rtw_memset(void *pbuf, int c, u32 sz)
{

#ifdef PLATFORM_LINUX

        memset(pbuf, c, sz);

#endif

#ifdef PLATFORM_WINDOWS
#if 0
	NdisZeroMemory(pbuf, sz);
	if (c != 0) memset(pbuf, c, sz);
#else
	NdisFillMemory(pbuf, sz, c);
#endif
#endif

}

void _rtw_init_listhead(_list *list)
{

#ifdef PLATFORM_LINUX

        INIT_LIST_HEAD(list);

#endif

#ifdef PLATFORM_WINDOWS

        NdisInitializeListHead(list);

#endif

}


/*
For the following list_xxx operations, 
caller must guarantee the atomic context.
Otherwise, there will be racing condition.
*/
u32	rtw_is_list_empty(_list *phead)
{

#ifdef PLATFORM_LINUX

	if (list_empty(phead))
		return _TRUE;
	else
		return _FALSE;

#endif
	

#ifdef PLATFORM_WINDOWS

	if (IsListEmpty(phead))
		return _TRUE;
	else
		return _FALSE;

#endif

	
}


void rtw_list_insert_tail(_list *plist, _list *phead)
{

#ifdef PLATFORM_LINUX	
	
	list_add_tail(plist, phead);
	
#endif
	
#ifdef PLATFORM_WINDOWS

  InsertTailList(phead, plist);

#endif		
	
}


/*

Caller must check if the list is empty before calling rtw_list_delete

*/


void _rtw_init_sema(_sema	*sema, int init_val)
{

#ifdef PLATFORM_LINUX

	sema_init(sema, init_val);

#endif

#ifdef PLATFORM_OS_XP

	KeInitializeSemaphore(sema, init_val,  SEMA_UPBND); // count=0;

#endif
	
#ifdef PLATFORM_OS_CE
	if(*sema == NULL)
		*sema = CreateSemaphore(NULL, init_val, SEMA_UPBND, NULL);
#endif

}

void _rtw_free_sema(_sema	*sema)
{

#ifdef PLATFORM_OS_CE
	CloseHandle(*sema);
#endif

}

void _rtw_up_sema(_sema	*sema)
{

#ifdef PLATFORM_LINUX

	up(sema);

#endif	

#ifdef PLATFORM_OS_XP

	KeReleaseSemaphore(sema, IO_NETWORK_INCREMENT, 1,  FALSE );

#endif

#ifdef PLATFORM_OS_CE
	ReleaseSemaphore(*sema,  1,  NULL );
#endif
}

u32 _rtw_down_sema(_sema *sema)
{

#ifdef PLATFORM_LINUX
	
	if (down_interruptible(sema))
		return _FAIL;
	else
		return _SUCCESS;

#endif    	

#ifdef PLATFORM_OS_XP

	if(STATUS_SUCCESS == KeWaitForSingleObject(sema, Executive, KernelMode, TRUE, NULL))
		return  _SUCCESS;
	else
		return _FAIL;
#endif

#ifdef PLATFORM_OS_CE
	if(WAIT_OBJECT_0 == WaitForSingleObject(*sema, INFINITE ))
		return _SUCCESS; 
	else
		return _FAIL;
#endif
}



void	_rtw_mutex_init(_mutex *pmutex)
{
#ifdef PLATFORM_LINUX

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,37))
	mutex_init(pmutex);
#else
	init_MUTEX(pmutex);
#endif

#endif

#ifdef PLATFORM_OS_XP

	KeInitializeMutex(pmutex, 0);

#endif

#ifdef PLATFORM_OS_CE
	*pmutex =  CreateMutex( NULL, _FALSE, NULL);
#endif
}


void	_rtw_mutex_free(_mutex *pmutex)
{
#ifdef PLATFORM_LINUX

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,37))
	mutex_destroy(pmutex);
#else	
#endif

#endif

#ifdef PLATFORM_OS_XP

#endif

#ifdef PLATFORM_OS_CE

#endif
}

void	_rtw_spinlock_init(_lock *plock)
{

#ifdef PLATFORM_LINUX

	spin_lock_init(plock);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisAllocateSpinLock(plock);

#endif
	
}

void	_rtw_spinlock_free(_lock *plock)
{

	
#ifdef PLATFORM_WINDOWS

	NdisFreeSpinLock(plock);

#endif
	
}


void	_rtw_spinlock(_lock	*plock)
{

#ifdef PLATFORM_LINUX

	spin_lock(plock);

#endif
	
#ifdef PLATFORM_WINDOWS

	NdisAcquireSpinLock(plock);

#endif
	
}

void	_rtw_spinunlock(_lock *plock)
{

#ifdef PLATFORM_LINUX

	spin_unlock(plock);

#endif
	
#ifdef PLATFORM_WINDOWS

	NdisReleaseSpinLock(plock);

#endif
}


void	_rtw_spinlock_ex(_lock	*plock)
{

#ifdef PLATFORM_LINUX

	spin_lock(plock);

#endif
	
#ifdef PLATFORM_WINDOWS

	NdisDprAcquireSpinLock(plock);

#endif
	
}

void	_rtw_spinunlock_ex(_lock *plock)
{

#ifdef PLATFORM_LINUX

	spin_unlock(plock);

#endif
	
#ifdef PLATFORM_WINDOWS

	NdisDprReleaseSpinLock(plock);

#endif
}



void	_rtw_init_queue(_queue	*pqueue)
{

	_rtw_init_listhead(&(pqueue->queue));

	_rtw_spinlock_init(&(pqueue->lock));

}

u32	  _rtw_queue_empty(_queue	*pqueue)
{
	return (rtw_is_list_empty(&(pqueue->queue)));
}


u32 rtw_end_of_queue_search(_list *head, _list *plist)
{
	if (head == plist)
		return _TRUE;
	else
		return _FALSE;
}


u32	rtw_get_current_time(void)
{
	
#ifdef PLATFORM_LINUX
	return jiffies;
#endif	

#ifdef PLATFORM_WINDOWS
	LARGE_INTEGER	SystemTime;
	NdisGetCurrentSystemTime(&SystemTime);
	return (u32)(SystemTime.LowPart);// count of 100-nanosecond intervals 
#endif
}

inline u32 rtw_systime_to_ms(u32 systime)
{
#ifdef PLATFORM_LINUX
	return systime*1000/HZ;
#endif	
	
#ifdef PLATFORM_WINDOWS
	return systime /10000 ; 
#endif
}

// the input parameter start use the same unit as returned by rtw_get_current_time
inline s32 rtw_get_passing_time_ms(u32 start)
{
#ifdef PLATFORM_LINUX
	return rtw_systime_to_ms(jiffies-start);
#endif

#ifdef PLATFORM_WINDOWS
	LARGE_INTEGER	SystemTime;
	NdisGetCurrentSystemTime(&SystemTime);
	return rtw_systime_to_ms((u32)(SystemTime.LowPart) - start) ;
#endif
}

inline s32 rtw_get_time_interval_ms(u32 start, u32 end)
{
#ifdef PLATFORM_LINUX
	return rtw_systime_to_ms(end-start);
#endif
	
#ifdef PLATFORM_WINDOWS
	return rtw_systime_to_ms(end-start);
#endif
}
	

void rtw_sleep_schedulable(int ms)	
{

#ifdef PLATFORM_LINUX

    u32 delta;
    
    delta = (ms * HZ)/1000;//(ms)
    if (delta == 0) {
        delta = 1;// 1 ms
    }
    set_current_state(TASK_INTERRUPTIBLE);
    if (schedule_timeout(delta) != 0) {
        return ;
    }
    return;

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisMSleep(ms*1000); //(us)*1000=(ms)

#endif

}


void rtw_msleep_os(int ms)
{

#ifdef PLATFORM_LINUX

  	msleep((unsigned int)ms);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisMSleep(ms*1000); //(us)*1000=(ms)

#endif


}
void rtw_usleep_os(int us)
{

#ifdef PLATFORM_LINUX
  	
      // msleep((unsigned int)us);
      if ( 1 < (us/1000) )
                msleep(1);
      else
		msleep( (us/1000) + 1);

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisMSleep(us); //(us)

#endif


}


#ifdef DBG_DELAY_OS
void _rtw_mdelay_os(int ms, const char *func, const int line)
{
	if(ms>10)
		DBG_871X("%s:%d %s(%d)\n", func, line, __FUNCTION__, ms);
		rtw_msleep_os(ms);
	return;


	DBG_871X("%s:%d %s(%d)\n", func, line, __FUNCTION__, ms);

#if defined(PLATFORM_LINUX)

   	mdelay((unsigned long)ms); 

#elif defined(PLATFORM_WINDOWS)

	NdisStallExecution(ms*1000); //(us)*1000=(ms)

#endif


}
void _rtw_udelay_os(int us, const char *func, const int line)
{

	if(us > 1000) {
	DBG_871X("%s:%d %s(%d)\n", func, line, __FUNCTION__, us);
		rtw_usleep_os(us);
		return;
	}


	//DBG_871X("%s:%d %s(%d)\n", func, line, __FUNCTION__, us);
	
	
#if defined(PLATFORM_LINUX)

      udelay((unsigned long)us); 

#elif defined(PLATFORM_WINDOWS)

	NdisStallExecution(us); //(us)

#endif

}
#else
void rtw_mdelay_os(int ms)
{

#ifdef PLATFORM_LINUX

   	mdelay((unsigned long)ms); 

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisStallExecution(ms*1000); //(us)*1000=(ms)

#endif


}
void rtw_udelay_os(int us)
{

#ifdef PLATFORM_LINUX

      udelay((unsigned long)us); 

#endif	
	
#ifdef PLATFORM_WINDOWS

	NdisStallExecution(us); //(us)

#endif

}
#endif

#define RTW_SUSPEND_LOCK_NAME "rtw_wifi"

#ifdef CONFIG_WAKELOCK
static struct wake_lock rtw_suspend_lock;
#elif defined(CONFIG_ANDROID_POWER)
static android_suspend_lock_t rtw_suspend_lock ={
	.name = RTW_SUSPEND_LOCK_NAME
};
#endif

inline void rtw_suspend_lock_init()
{
	#if  defined(CONFIG_WAKELOCK) || defined(CONFIG_ANDROID_POWER)
	DBG_871X("##########%s ###########\n", __FUNCTION__);
	#endif

	#ifdef CONFIG_WAKELOCK
	wake_lock_init(&rtw_suspend_lock, WAKE_LOCK_SUSPEND, RTW_SUSPEND_LOCK_NAME);
	#elif defined(CONFIG_ANDROID_POWER)
	android_init_suspend_lock(&rtw_suspend_lock);
	#endif
	
}

inline void rtw_suspend_lock_uninit()
{

	#if  defined(CONFIG_WAKELOCK) || defined(CONFIG_ANDROID_POWER)
	DBG_871X("##########%s###########\n", __FUNCTION__);
	if(rtw_suspend_lock.link.next == LIST_POISON1 || rtw_suspend_lock.link.prev == LIST_POISON2) {
		DBG_871X("##########%s########### list poison!!\n", __FUNCTION__);
		return;	
	}
	#endif
	
	#ifdef CONFIG_WAKELOCK
	wake_lock_destroy(&rtw_suspend_lock);
	#elif defined(CONFIG_ANDROID_POWER)
	android_uninit_suspend_lock(&rtw_suspend_lock);
	#endif
}


inline void rtw_lock_suspend()
{

	#if  defined(CONFIG_WAKELOCK) || defined(CONFIG_ANDROID_POWER)
	//DBG_871X("##########%s###########\n", __FUNCTION__);
	if(rtw_suspend_lock.link.next == LIST_POISON1 || rtw_suspend_lock.link.prev == LIST_POISON2) {
		DBG_871X("##########%s########### list poison!!\n", __FUNCTION__);
		return;	
	}
	#endif
	
	#ifdef CONFIG_WAKELOCK
	wake_lock(&rtw_suspend_lock);
	#elif defined(CONFIG_ANDROID_POWER)
	android_lock_suspend(&rtw_suspend_lock);
	#endif
}

inline void rtw_unlock_suspend()
{
	#if  defined(CONFIG_WAKELOCK) || defined(CONFIG_ANDROID_POWER)
	//DBG_871X("##########%s###########\n", __FUNCTION__);
	if(rtw_suspend_lock.link.next == LIST_POISON1 || rtw_suspend_lock.link.prev == LIST_POISON2) {
		DBG_871X("##########%s########### list poison!!\n", __FUNCTION__);
		return;	
	}
	#endif
	
	#ifdef CONFIG_WAKELOCK
	wake_unlock(&rtw_suspend_lock);
	#elif defined(CONFIG_ANDROID_POWER)
	android_unlock_suspend(&rtw_suspend_lock);
	#endif
}


inline void ATOMIC_SET(ATOMIC_T *v, int i)
{
	#ifdef PLATFORM_LINUX
	atomic_set(v,i);
	#elif defined(PLATFORM_WINDOWS)
	*v=i;// other choice????
	#endif
}

inline int ATOMIC_READ(ATOMIC_T *v)
{
	#ifdef PLATFORM_LINUX
	return atomic_read(v);
	#elif defined(PLATFORM_WINDOWS)
	return *v; // other choice????
	#endif
}

inline void ATOMIC_ADD(ATOMIC_T *v, int i)
{
	#ifdef PLATFORM_LINUX
	atomic_add(i,v);
	#elif defined(PLATFORM_WINDOWS)
	InterlockedAdd(v,i);
	#endif
}
inline void ATOMIC_SUB(ATOMIC_T *v, int i)
{
	#ifdef PLATFORM_LINUX
	atomic_sub(i,v);
	#elif defined(PLATFORM_WINDOWS)
	InterlockedAdd(v,-i);
	#endif
}

inline void ATOMIC_INC(ATOMIC_T *v)
{
	#ifdef PLATFORM_LINUX
	atomic_inc(v);
	#elif defined(PLATFORM_WINDOWS)
	InterlockedIncrement(v);
	#endif
}

inline void ATOMIC_DEC(ATOMIC_T *v)
{
	#ifdef PLATFORM_LINUX
	atomic_dec(v);
	#elif defined(PLATFORM_WINDOWS)
	InterlockedDecrement(v);
	#endif
}

inline int ATOMIC_ADD_RETURN(ATOMIC_T *v, int i)
{
	#ifdef PLATFORM_LINUX
	return atomic_add_return(i,v);
	#elif defined(PLATFORM_WINDOWS)
	return InterlockedAdd(v,i);
	#endif
}

inline int ATOMIC_SUB_RETURN(ATOMIC_T *v, int i)
{
	#ifdef PLATFORM_LINUX
	return atomic_sub_return(i,v);
	#elif defined(PLATFORM_WINDOWS)
	return InterlockedAdd(v,-i);
	#endif
}

inline int ATOMIC_INC_RETURN(ATOMIC_T *v)
{
	#ifdef PLATFORM_LINUX
	return atomic_inc_return(v);
	#elif defined(PLATFORM_WINDOWS)
	return InterlockedIncrement(v);
	#endif
}

inline int ATOMIC_DEC_RETURN(ATOMIC_T *v)
{
	#ifdef PLATFORM_LINUX
	return atomic_dec_return(v);
	#elif defined(PLATFORM_WINDOWS)
	return InterlockedDecrement(v);
	#endif
}


#ifdef PLATFORM_LINUX
int openFile(struct file **fpp, char *path,int flag,int mode) 
{ 
	struct file *fp; 
 
	fp=filp_open(path, flag, mode); 
	if(IS_ERR(fp)) {
		*fpp=NULL;
		return PTR_ERR(fp);
	}
	else {
		*fpp=fp; 
		return 0;
	}	
}

int closeFile(struct file *fp) 
{ 
	filp_close(fp,NULL); 
	return 0; 
}

int readFile(struct file *fp,char *buf,int len) 
{ 
	int rlen=0, sum=0;
	
	if (!fp->f_op || !fp->f_op->read) 
		return -EPERM;

	while(sum<len) {
		rlen=fp->f_op->read(fp,buf+sum,len-sum, &fp->f_pos);
		if(rlen>0)
			sum+=rlen;
		else if(0 != rlen)
			return rlen;
		else
			break;
	}
	
	return  sum;

}

int writeFile(struct file *fp,char *buf,int len) 
{ 
	int wlen=0, sum=0;
	
	if (!fp->f_op || !fp->f_op->write) 
		return -EPERM; 

	while(sum<len) {
		wlen=fp->f_op->write(fp,buf+sum,len-sum, &fp->f_pos);
		if(wlen>0)
			sum+=wlen;
		else if(0 != wlen)
			return wlen;
		else
			break;
	}

	return sum;

}
#endif

#if 1 //#ifdef MEM_ALLOC_REFINE_ADAPTOR
#ifdef PLATFORM_LINUX
struct net_device *rtw_alloc_etherdev_with_old_priv(int sizeof_priv, void *old_priv)
{
	struct net_device *pnetdev;
	struct rtw_netdev_priv_indicator *pnpi;
	
	pnetdev = alloc_etherdev(sizeof(struct rtw_netdev_priv_indicator));
	if (!pnetdev)
		goto RETURN;
	
	pnpi = netdev_priv(pnetdev);
	pnpi->priv=old_priv;
	pnpi->sizeof_priv=sizeof_priv;

RETURN:
	return pnetdev;
}

struct net_device *rtw_alloc_etherdev(int sizeof_priv)
{
	struct net_device *pnetdev;
	struct rtw_netdev_priv_indicator *pnpi;
	
	pnetdev = alloc_etherdev(sizeof(struct rtw_netdev_priv_indicator));
	if (!pnetdev)
		goto RETURN;
	
	pnpi = netdev_priv(pnetdev);
	
	pnpi->priv = rtw_zvmalloc(sizeof_priv);
	if (!pnpi->priv) {
		free_netdev(pnetdev);
		pnetdev = NULL;
		goto RETURN;
	}
	
	pnpi->sizeof_priv=sizeof_priv;
RETURN:
	return pnetdev;
}

void rtw_free_netdev(struct net_device * netdev)
{
	struct rtw_netdev_priv_indicator *pnpi;
	
	if(!netdev)
		goto RETURN;
	
	pnpi = netdev_priv(netdev);

	if(!pnpi->priv)
		goto RETURN;

	rtw_vmfree(pnpi->priv, pnpi->sizeof_priv);
	free_netdev(netdev);

RETURN:
	return;
}

/*
* Jeff: this function should be called under ioctl (rtnl_lock is accquired) while 
* LINUX_VERSION_CODE < KERNEL_VERSION(2,6,26)
*/
int rtw_change_ifname(_adapter *padapter, const char *ifname)
{
	struct net_device *pnetdev;
	struct net_device *cur_pnetdev = padapter->pnetdev;
	int ret;

	if(!padapter)
		goto error;
	
	//free the old_pnetdev
	if(padapter->old_pnetdev) {
		free_netdev(padapter->old_pnetdev);
		padapter->old_pnetdev = NULL;
	}

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26))
	if(!rtnl_is_locked())
		unregister_netdev(cur_pnetdev);
	else
#endif
		unregister_netdevice(cur_pnetdev);

	#ifdef CONFIG_PROC_DEBUG
	rtw_proc_remove_one(cur_pnetdev);
	#endif //CONFIG_PROC_DEBUG

	padapter->old_pnetdev=cur_pnetdev;

	pnetdev = rtw_init_netdev(padapter);
	if (!pnetdev)  {
		ret = -1;
		goto error;
	}

#ifdef CONFIG_USB_HCI

	SET_NETDEV_DEV(pnetdev, &padapter->dvobjpriv.pusbintf->dev);

	usb_set_intfdata(padapter->dvobjpriv.pusbintf, pnetdev);

#elif defined(CONFIG_PCI_HCI)

#if LINUX_VERSION_CODE > KERNEL_VERSION(2,5,0)
	SET_NETDEV_DEV(pnetdev, &padapter->dvobjpriv.ppcidev->dev);
#endif

	pci_set_drvdata(padapter->dvobjpriv.ppcidev, pnetdev);

#endif

	rtw_init_netdev_name(pnetdev, ifname);

	_rtw_memcpy(pnetdev->dev_addr, padapter->eeprompriv.mac_addr, ETH_ALEN);

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26))
	if(!rtnl_is_locked())
		ret = register_netdev(pnetdev);
	else
#endif
		ret = register_netdevice(pnetdev);

	if ( ret != 0) {
		RT_TRACE(_module_hci_intfs_c_,_drv_err_,("register_netdev() failed\n"));
		goto error;
	}

	#ifdef CONFIG_PROC_DEBUG
	rtw_proc_init_one(pnetdev);
	#endif //CONFIG_PROC_DEBUG

	return 0;

error:
	
	return -1;
	
}
#endif
#endif //MEM_ALLOC_REFINE_ADAPTOR

u64 rtw_modular64(u64 x, u64 y)
{
#ifdef PLATFORM_LINUX
	return do_div(x, y);
#elif defined(PLATFORM_WINDOWS)
	return (x % y);
#endif
}

u64 rtw_division64(u64 x, u64 y)
{
#ifdef PLATFORM_LINUX
	do_div(x, y);
	return x;
#elif defined(PLATFORM_WINDOWS)
	return (x / y);
#endif
}

