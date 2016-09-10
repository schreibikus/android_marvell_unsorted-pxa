/****************************************************************************
*
*    Copyright (c) 2005 - 2015 by Vivante Corp.  All rights reserved.
*
*    The material in this file is confidential and contains trade secrets
*    of Vivante Corporation. This is proprietary information owned by
*    Vivante Corporation. No part of this work may be disclosed,
*    reproduced, copied, transmitted, or used in any way for any purpose,
*    without the express written permission of Vivante Corporation.
*
*****************************************************************************/


#ifndef __gc_hal_options_h_
#define __gc_hal_options_h_

/*
    gcdSECURITY

*/
#ifndef gcdSECURITY
#   define gcdSECURITY                          0
#endif

/*
    gcdPRINT_VERSION

        Print HAL version.
*/
#ifndef gcdPRINT_VERSION
#   define gcdPRINT_VERSION                     0
#endif

/*
    USE_NEW_LINUX_SIGNAL

        This define enables the Linux kernel signaling between kernel and user.
*/
#ifndef USE_NEW_LINUX_SIGNAL
#   define USE_NEW_LINUX_SIGNAL                 0
#endif

/*
    VIVANTE_PROFILER

        This define enables the profiler.
*/
#ifndef VIVANTE_PROFILER
#   define VIVANTE_PROFILER                     1
#endif

/*
    VIVANTE_PROFILER_CONTEXT

        This define enables the profiler according each context.
*/
#ifndef VIVANTE_PROFILER_CONTEXT
#   define VIVANTE_PROFILER_CONTEXT             1
#endif

#ifndef VIVANTE_PROFILER_PERDRAW
#   define VIVANTE_PROFILER_PERDRAW             0
#endif

#ifndef VIVANTE_PROFILER_NEW
#   define VIVANTE_PROFILER_NEW                 0
#endif

#ifndef VIVANTE_PROFILER_PM
#   define VIVANTE_PROFILER_PM                  1
#endif
/*
    gcdUSE_VG

        Enable VG HAL layer (only for GC350).
*/
#ifndef gcdUSE_VG
#   define gcdUSE_VG                            0
#endif

/*
    USE_SW_FB

        Set to 1 if the frame buffer memory cannot be accessed by the GPU.
*/
#ifndef USE_SW_FB
#   define USE_SW_FB                            0
#endif

/*
    PROFILE_HAL_COUNTERS

        This define enables HAL counter profiling support.  HW and SHADER
        counter profiling depends on this.
*/
#ifndef PROFILE_HAL_COUNTERS
#   define PROFILE_HAL_COUNTERS                 1
#endif

/*
    PROFILE_HW_COUNTERS

        This define enables HW counter profiling support.
*/
#ifndef PROFILE_HW_COUNTERS
#   define PROFILE_HW_COUNTERS                  1
#endif

/*
    PROFILE_SHADER_COUNTERS

        This define enables SHADER counter profiling support.
*/
#ifndef PROFILE_SHADER_COUNTERS
#   define PROFILE_SHADER_COUNTERS              1
#endif

/*
    COMMAND_PROCESSOR_VERSION

        The version of the command buffer and task manager.
*/
#define COMMAND_PROCESSOR_VERSION               1

/*
    gcdDUMP_KEY

        Set this to a string that appears in 'cat /proc/<pid>/cmdline'. E.g. 'camera'.
        HAL will create dumps for the processes matching this key.
*/
#ifndef gcdDUMP_KEY
#   define gcdDUMP_KEY                          "process"
#endif

/*
    gcdDUMP_PATH

        The dump file location. Some processes cannot write to the sdcard.
        Try apps' data dir, e.g. /data/data/com.android.launcher
*/
#ifndef gcdDUMP_PATH
#if defined(ANDROID)
#   define gcdDUMP_PATH                         "/mnt/sdcard/"
#else
#   define gcdDUMP_PATH                         "./"
#endif
#endif

/*
    gcdDUMP

        When set to 1, a dump of all states and memory uploads, as well as other
        hardware related execution will be printed to the debug console.  This
        data can be used for playing back applications.
*/
#ifndef gcdDUMP
#   define gcdDUMP                              0
#endif

/*
    gcdDUMP_API

        When set to 1, a high level dump of the EGL and GL/VG APs's are
        captured.
*/
#ifndef gcdDUMP_API
#   define gcdDUMP_API                          0
#endif



/*
    gcdDEBUG_OPTION
        When set to 1, the debug options are enabled. We must set other MACRO to enable
        sub case.
*/
#ifndef gcdDEBUG_OPTION
#   define gcdDEBUG_OPTION                      0

#if gcdDEBUG_OPTION
/*
    gcdDEBUG_OPTION_KEY
        The process name of debug application.
*/
#ifndef gcdDEBUG_OPTION_KEY
#          define gcdDEBUG_OPTION_KEY                           "process"
#       endif
/*
    gcdDEBUG_OPTION_NO_GL_DRAWS
        When set to 1, all glDrawArrays and glDrawElements will be skip.
*/
#ifndef gcdDEBUG_OPTION_NO_GL_DRAWS
#           define gcdDEBUG_OPTION_NO_GL_DRAWS                  0
#       endif
/*
    gcdDEBUG_OPTION_NO_DRAW_PRIMITIVES
        When set to 1, all DrawPrimitives will be skip.
*/
#ifndef gcdDEBUG_OPTION_NO_DRAW_PRIMITIVES
#           define gcdDEBUG_OPTION_NO_DRAW_PRIMITIVES           0
#       endif
/*
    gcdDEBUG_OPTION_SKIP_SWAP
        When set to 1, just one out of gcdDEBUG_OPTION_SKIP_FRAMES(such as 1/10) eglSwapBuffers will be resolve,
        others skip.
*/
#ifndef gcdDEBUG_OPTION_SKIP_SWAP
#           define gcdDEBUG_OPTION_SKIP_SWAP                    0
#           define gcdDEBUG_OPTION_SKIP_FRAMES                  10
#       endif
/*
    gcdDEBUG_OPTION_FORCE_16BIT_RENDER_TARGET
        When set to 1, the format of render target will force to RGB565.
*/
#ifndef gcdDEBUG_OPTION_FORCE_16BIT_RENDER_TARGET
#           define gcdDEBUG_OPTION_FORCE_16BIT_RENDER_TARGET    0
#       endif
/*
    gcdDEBUG_OPTION_NONE_TEXTURE
        When set to 1, the type of texture will be set to AQ_TEXTURE_SAMPLE_MODE_TYPE_NONE.
*/
#ifndef gcdDEBUG_OPTION_NONE_TEXTURE
#           define gcdDEBUG_OPTION_NONE_TEXTURE                 0
#       endif
/*
    gcdDEBUG_OPTION_NONE_DEPTH
        When set to 1, the depth format of surface will be set to gcvSURF_UNKNOWN.
*/
#ifndef gcdDEBUG_OPTION_NONE_DEPTH
#           define gcdDEBUG_OPTION_NONE_DEPTH                   0
#       endif

#   endif
#endif

/*
    gcdDUMP_SWAP_PER_DRAW

        When set to 1, dump swap command for every single draw to make simulation comparison happy.
        Only valid for ES3 driver for now.
*/
#ifndef gcdDUMP_SWAP_PER_DRAW
#   define gcdDUMP_SWAP_PER_DRAW                0
#endif

/*
    gcdDUMP_FRAMERATE
        When set to a value other than zero, averaqe frame rate will be dumped.
        The value set is the starting frame that the average will be calculated.
        This is needed because sometimes first few frames are too slow to be included
        in the average. Frame count starts from 1.
*/
#ifndef gcdDUMP_FRAMERATE
#   define gcdDUMP_FRAMERATE                    0
#endif

/*
    gcdENABLE_FSCALE_VAL_ADJUST
        When non-zero, FSCALE_VAL when gcvPOWER_ON can be adjusted externally.
 */
#ifndef gcdENABLE_FSCALE_VAL_ADJUST
#   define gcdENABLE_FSCALE_VAL_ADJUST          1
#endif

/*
    gcdDUMP_IN_KERNEL

        When set to 1, all dumps will happen in the kernel.  This is handy if
        you want the kernel to dump its command buffers as well and the data
        needs to be in sync.
*/
#ifndef gcdDUMP_IN_KERNEL
#   define gcdDUMP_IN_KERNEL                    0
#endif

/*
    gcdDUMP_COMMAND

        When set to non-zero, the command queue will dump all incoming command
        and context buffers as well as all other modifications to the command
        queue.
*/
#ifndef gcdDUMP_COMMAND
#   define gcdDUMP_COMMAND                      0
#endif

/*
    gcdDUMP_2D

        When set to non-zero, it will dump the 2D command and surface.
*/
#ifndef gcdDUMP_2D
#   define gcdDUMP_2D                           0
#endif

/*
    gcdDUMP_FRAME_TGA

    When set to a value other than 0, a dump of the frame specified by the value,
    will be done into frame.tga. Frame count starts from 1.
 */
#ifndef gcdDUMP_FRAME_TGA
#   define gcdDUMP_FRAME_TGA                    0
#endif
/*
    gcdNULL_DRIVER

    Set to 1 for infinite speed hardware.
    Set to 2 for bypassing the HAL.
    Set to 3 for bypassing the drivers.
*/
#ifndef gcdNULL_DRIVER
#   define gcdNULL_DRIVER  0
#endif

/*
    gcdENABLE_TIMEOUT_DETECTION

        Enable timeout detection.
*/
#ifndef gcdENABLE_TIMEOUT_DETECTION
#   define gcdENABLE_TIMEOUT_DETECTION          0
#endif

/*
    gcdCMD_BUFFER_SIZE

        Number of bytes in a command buffer.
*/
#ifndef gcdCMD_BUFFER_SIZE
#   define gcdCMD_BUFFER_SIZE                   (128 << 10)
#endif

/*
    gcdCMD_BUFFERS

        Number of command buffers to use per client.
*/
#ifndef gcdCMD_BUFFERS
#   define gcdCMD_BUFFERS                       2
#endif

/*
    gcdMAX_CMD_BUFFERS

        Maximum number of command buffers to use per client.
*/
#ifndef gcdMAX_CMD_BUFFERS
#   define gcdMAX_CMD_BUFFERS                   8
#endif

/*
    gcdCOMMAND_QUEUES

        Number of command queues in the kernel.
*/
#ifndef gcdCOMMAND_QUEUES
#   define gcdCOMMAND_QUEUES                    2
#endif

/*
    gcdPOWER_CONTROL_DELAY

        The delay in milliseconds required to wait until the GPU has woke up
        from a suspend or power-down state.  This is system dependent because
        the bus clock also needs to stabalize.
*/
#ifndef gcdPOWER_CONTROL_DELAY
#   define gcdPOWER_CONTROL_DELAY               0
#endif

/*
    gcdMIRROR_PAGETABLE

        Enable it when GPUs with old MMU and new MMU exist at same SoC. It makes
        each GPU use same virtual address to access same physical memory.
*/
#ifndef gcdMIRROR_PAGETABLE
#   define gcdMIRROR_PAGETABLE                  0
#endif

/*
    gcdMMU_SIZE

        Size of the MMU page table in bytes.  Each 4 bytes can hold 4kB worth of
        virtual data.
*/
#ifndef gcdMMU_SIZE
#if gcdMIRROR_PAGETABLE
#   define gcdMMU_SIZE                          0x200000
#else
#   define gcdMMU_SIZE                          (256 << 10)
#endif
#endif

/*
    gcdSECURE_USER

        Use logical addresses instead of physical addresses in user land.  In
        this case a hint table is created for both command buffers and context
        buffers, and that hint table will be used to patch up those buffers in
        the kernel when they are ready to submit.
*/
#ifndef gcdSECURE_USER
#   define gcdSECURE_USER                       0
#endif

/*
    gcdSECURE_CACHE_SLOTS

        Number of slots in the logical to DMA address cache table.  Each time a
        logical address needs to be translated into a DMA address for the GPU,
        this cache will be walked.  The replacement scheme is LRU.
*/
#ifndef gcdSECURE_CACHE_SLOTS
#   define gcdSECURE_CACHE_SLOTS                1024
#endif

/*
    gcdSECURE_CACHE_METHOD

        Replacement scheme used for Secure Cache.  The following options are
        available:

            gcdSECURE_CACHE_LRU
                A standard LRU cache.

            gcdSECURE_CACHE_LINEAR
                A linear walker with the idea that an application will always
                render the scene in a similar way, so the next entry in the
                cache should be a hit most of the time.

            gcdSECURE_CACHE_HASH
                A 256-entry hash table.

            gcdSECURE_CACHE_TABLE
                A simple cache but with potential of a lot of cache replacement.
*/
#ifndef gcdSECURE_CACHE_METHOD
#   define gcdSECURE_CACHE_METHOD               gcdSECURE_CACHE_HASH
#endif

/*
    gcdREGISTER_ACCESS_FROM_USER

        Set to 1 to allow IOCTL calls to get through from user land.  This
        should only be in debug or development drops.
*/
#ifndef gcdREGISTER_ACCESS_FROM_USER
#   define gcdREGISTER_ACCESS_FROM_USER         1
#endif

/*
    gcdHEAP_SIZE

        Set the allocation size for the internal heaps.  Each time a heap is
        full, a new heap will be allocated with this minmimum amount of bytes.
        The bigger this size, the fewer heaps there are to allocate, the better
        the performance.  However, heaps won't be freed until they are
        completely free, so there might be some more memory waste if the size is
        too big.
*/
#ifndef gcdHEAP_SIZE
#   define gcdHEAP_SIZE                         (64 << 10)
#endif

/*
    gcdPOWER_SUSPEND_WHEN_IDLE

        Set to 1 to make GPU enter gcvPOWER_SUSPEND when idle detected,
        otherwise GPU will enter gcvPOWER_IDLE.
*/
#ifndef gcdPOWER_SUSPEND_WHEN_IDLE
#   define gcdPOWER_SUSPEND_WHEN_IDLE          1
#endif

#ifndef gcdFPGA_BUILD
#   define gcdFPGA_BUILD                       0
#endif

/*
    gcdGPU_TIMEOUT

        This define specified the number of milliseconds the system will wait
        before it broadcasts the GPU is stuck.  In other words, it will define
        the timeout of any operation that needs to wait for the GPU.

        If the value is 0, no timeout will be checked for.
*/
#ifndef gcdGPU_TIMEOUT
#if gcdFPGA_BUILD
#       define gcdGPU_TIMEOUT                   0
#       define gcdGPU_2D_TIMEOUT                0
#   else
#       define gcdGPU_TIMEOUT                   20000
#       define gcdGPU_2D_TIMEOUT                4000
#   endif
#endif

/*
    gcdGPU_ADVANCETIMER

        it is advance timer.
*/
#ifndef gcdGPU_ADVANCETIMER
#   define gcdGPU_ADVANCETIMER                  250
#endif

/*
    gcdSTATIC_LINK

        This define disalbes static linking;
*/
#ifndef gcdSTATIC_LINK
#   define gcdSTATIC_LINK                       0
#endif

/*
    gcdUSE_NEW_HEAP

        Setting this define to 1 enables new heap.
*/
#ifndef gcdUSE_NEW_HEAP
#   define gcdUSE_NEW_HEAP                      0
#endif

/*
    gcdCMD_NO_2D_CONTEXT

        This define enables no-context 2D command buffer.
*/
#ifndef gcdCMD_NO_2D_CONTEXT
#   define gcdCMD_NO_2D_CONTEXT                 1
#endif

/*
    gcdENABLE_BUFFER_ALIGNMENT

    When enabled, video memory is allocated  with atleast 16KB aligment
    between multiple sub-buffers.
*/
#ifndef gcdENABLE_BUFFER_ALIGNMENT
#   define gcdENABLE_BUFFER_ALIGNMENT             1
#endif

/*
    gcdENABLE_BANK_ALIGNMENT

    When enabled, video memory is allocated bank aligned. The vendor can modify
    _GetSurfaceBankAlignment() and _GetBankOffsetBytes() to define how
    different types of allocations are bank and channel aligned.
    When disabled (default), no bank alignment is done.
*/
#ifndef gcdENABLE_BANK_ALIGNMENT
#   define gcdENABLE_BANK_ALIGNMENT             0
#endif

/*
    gcdBANK_BIT_START

    Specifies the start bit of the bank (inclusive).
*/
#ifndef gcdBANK_BIT_START
#   define gcdBANK_BIT_START                    12
#endif

/*
    gcdBANK_BIT_END

    Specifies the end bit of the bank (inclusive).
*/
#ifndef gcdBANK_BIT_END
#   define gcdBANK_BIT_END                      14
#endif

/*
    gcdBANK_CHANNEL_BIT

    When set, video memory when allocated bank aligned is allocated such that
    render and depth buffer addresses alternate on the channel bit specified.
    This option has an effect only when gcdENABLE_BANK_ALIGNMENT is enabled.
    When disabled (default), no alteration is done.
*/
#ifndef gcdBANK_CHANNEL_BIT
#   define gcdBANK_CHANNEL_BIT                  7
#endif

/*
    gcdDYNAMIC_SPEED

        When non-zero, it informs the kernel driver to use the speed throttling
        broadcasting functions to inform the system the GPU should be spet up or
        slowed down. It will send a broadcast for slowdown each "interval"
        specified by this define in milliseconds
        (gckOS_BroadcastCalibrateSpeed).
*/
#ifndef gcdDYNAMIC_SPEED
#    define gcdDYNAMIC_SPEED                    2000
#endif

/*
    gcdDYNAMIC_EVENT_THRESHOLD

        When non-zero, it specifies the maximum number of available events at
        which the kernel driver will issue a broadcast to speed up the GPU
        (gckOS_BroadcastHurry).
*/
#ifndef gcdDYNAMIC_EVENT_THRESHOLD
#    define gcdDYNAMIC_EVENT_THRESHOLD          5
#endif

/*
    gcdENABLE_PROFILING

        Enable profiling macros.
*/
#ifndef gcdENABLE_PROFILING
#   define gcdENABLE_PROFILING                  0
#endif

/*
    gcdENABLE_128B_MERGE

        Enable 128B merge for the BUS control.
*/
#ifndef gcdENABLE_128B_MERGE
#   define gcdENABLE_128B_MERGE                 0
#endif

/*
    gcdFRAME_DB

        When non-zero, it specified the number of frames inside the frame
        database. The frame DB will collect per-frame timestamps and hardware
        counters.
*/
#ifndef gcdFRAME_DB
#   define gcdFRAME_DB                          0
#   define gcdFRAME_DB_RESET                    0
#   define gcdFRAME_DB_NAME                     "/var/log/frameDB.log"
#endif

/*
    gcdDISABLE_CORES_2D3D
            disable the 2D3D cores for 2D openVG
*/
#ifndef gcdDISABLE_CORES_2D3D
#   define gcdDISABLE_CORES_2D3D                0
#endif

/*
   gcdPAGED_MEMORY_CACHEABLE

        When non-zero, paged memory will be cacheable.

        Normally, driver will detemines whether a video memory
        is cacheable or not. When cacheable is not neccessary,
        it will be writecombine.

        This option is only for those SOC which can't enable
        writecombine without enabling cacheable.
*/
#ifndef gcdPAGED_MEMORY_CACHEABLE
#   define gcdPAGED_MEMORY_CACHEABLE            0
#endif

/*
   gcdNONPAGED_MEMORY_CACHEABLE

        When non-zero, non paged memory will be cacheable.
*/
#ifndef gcdNONPAGED_MEMORY_CACHEABLE
#   define gcdNONPAGED_MEMORY_CACHEABLE         0
#endif

/*
   gcdNONPAGED_MEMORY_BUFFERABLE

        When non-zero, non paged memory will be bufferable.
        gcdNONPAGED_MEMORY_BUFFERABLE and gcdNONPAGED_MEMORY_CACHEABLE
        can't be set 1 at same time
*/
#ifndef gcdNONPAGED_MEMORY_BUFFERABLE
#   define gcdNONPAGED_MEMORY_BUFFERABLE        1
#endif

/*
    gcdENABLE_INFINITE_SPEED_HW
            enable the Infinte HW , this is for 2D openVG
*/
#ifndef gcdENABLE_INFINITE_SPEED_HW
#   define gcdENABLE_INFINITE_SPEED_HW          0
#endif

/*
    gcdMULTI_GPU

    Enable/disable multi-GPU support.
    0      : Disable multi-GPU support
    1      : Enable one of the 3D cores
    [2..X] : Number of 3D GPU Cores
*/
#ifndef gcdMULTI_GPU
#   define gcdMULTI_GPU                         0
#endif

/*
    gcdMULTI_GPU_AFFINITY

    Enable/disable the binding of a context to one GPU
*/
#ifndef gcdMULTI_GPU_AFFINITY
#   define gcdMULTI_GPU_AFFINITY                0
#endif

/*
    gcdPOWEROFF_TIMEOUT

        When non-zero, GPU will power off automatically from
        idle state, and gcdPOWEROFF_TIMEOUT is also the default
        timeout in milliseconds.
 */
#ifndef gcdPOWEROFF_TIMEOUT
#   define gcdPOWEROFF_TIMEOUT                  300
#endif

/*
    QNX_SINGLE_THREADED_DEBUGGING
*/
#ifndef QNX_SINGLE_THREADED_DEBUGGING
#   define QNX_SINGLE_THREADED_DEBUGGING        0
#endif

/*
    gcdRENDER_THREADS

        Number of render threads. Make it zero, and there will be no render
        threads.
*/
#ifndef gcdRENDER_THREADS
#   define gcdRENDER_THREADS                    0
#endif

/*
    gcdSMP

        This define enables SMP support.

        Currently, it only works on Linux/Android,
        Kbuild will config it according to whether
        CONFIG_SMP is set.

*/
#ifndef gcdSMP
#ifdef __APPLE__
#   define gcdSMP                               1
#else
#   define gcdSMP                               0
#endif
#endif

/*
    gcdSHARED_RESOLVE_BUFFER_ENABLED

        Use shared resolve buffer for all app buffers.
*/
#ifndef gcdSHARED_RESOLVE_BUFFER_ENABLED
#   define gcdSHARED_RESOLVE_BUFFER_ENABLED     0
#endif

/*
     gcdUSE_TRIANGLE_STRIP_PATCH
 */
#ifndef gcdUSE_TRIANGLE_STRIP_PATCH
#   define gcdUSE_TRIANGLE_STRIP_PATCH          1
#endif

/*
    gcdENABLE_OUTER_CACHE_PATCH

        Enable the outer cache patch.
*/
#ifndef gcdENABLE_OUTER_CACHE_PATCH
#   define gcdENABLE_OUTER_CACHE_PATCH          0
#endif

/*
    gcdPROCESS_ADDRESS_SPACE

        When non-zero, every process which attaches to galcore has its own GPU
        address space, size of which is gcdPROCESS_ADDRESS_SPACE_SIZE.
*/
#ifndef gcdPROCESS_ADDRESS_SPACE
#   define gcdPROCESS_ADDRESS_SPACE             0
#   define gcdPROCESS_ADDRESS_SPACE_SIZE        0x80000000
#endif

/*
    gcdSHARED_PAGETABLE

        When non-zero, multiple GPUs in one chip with same MMU use
        one shared pagetable. So that when accessing same surface,
        they can use same GPU virtual address.
*/
#ifndef gcdSHARED_PAGETABLE
#   define gcdSHARED_PAGETABLE                  !gcdPROCESS_ADDRESS_SPACE
#endif

#ifndef gcdUSE_PVR
#   define gcdUSE_PVR                           1
#endif

/*
    gcdSMALL_BLOCK_SIZE

        When non-zero, a part of VIDMEM will be reserved for requests
        whose requesting size is less than gcdSMALL_BLOCK_SIZE.

        For Linux, it's the size of a page. If this requeset fallbacks
        to gcvPOOL_CONTIGUOUS or gcvPOOL_VIRTUAL, memory will be wasted
        because they allocate a page at least.
*/
#ifndef gcdSMALL_BLOCK_SIZE
#   define gcdSMALL_BLOCK_SIZE                  4096
#   define gcdRATIO_FOR_SMALL_MEMORY            32
#endif

/*
    gcdCONTIGUOUS_SIZE_LIMIT
        When non-zero, size of video node from gcvPOOL_CONTIGUOUS is
        limited by gcdCONTIGUOUS_SIZE_LIMIT.
*/
#ifndef gcdCONTIGUOUS_SIZE_LIMIT
#   define gcdCONTIGUOUS_SIZE_LIMIT             0
#endif

/*
    gcdLINK_QUEUE_SIZE

        When non-zero, driver maintains a queue to record information of
        latest lined context buffer and command buffer. Data in this queue
        is be used to debug.
*/
#ifndef gcdLINK_QUEUE_SIZE
#   define gcdLINK_QUEUE_SIZE                   64
#endif

/*  gcdALPHA_KILL_IN_SHADER

        Enable alpha kill inside the shader. This will be set automatically by the
        HAL if certain states match a criteria.
*/
#ifndef gcdALPHA_KILL_IN_SHADER
#   define gcdALPHA_KILL_IN_SHADER              1
#endif



/*
    gcdDVFS

        When non-zero, software will make use of dynamic voltage and
        frequency feature.
 */
#ifndef gcdDVFS
#   define gcdDVFS                              0
#   define gcdDVFS_ANAYLSE_WINDOW               4
#   define gcdDVFS_POLLING_TIME                 (gcdDVFS_ANAYLSE_WINDOW * 4)
#endif

#ifndef gcdSYNC
#   define gcdSYNC                              1
#endif

#ifndef gcdSHADER_SRC_BY_MACHINECODE
#   define gcdSHADER_SRC_BY_MACHINECODE         1
#endif

#ifndef gcdGLB27_SHADER_REPLACE_OPTIMIZATION
#    define gcdGLB27_SHADER_REPLACE_OPTIMIZATION 1
#endif

/*
    gcdSTREAM_OUT_BUFFER

        Enable suppport for the secondary stream out buffer.
*/
#ifndef gcdSTREAM_OUT_BUFFER
#   define gcdSTREAM_OUT_BUFFER                 0
#   define gcdSTREAM_OUT_NAIVE_SYNC             0
#endif

/*
    gcdUSE_HARDWARE_CONFIGURATION_TABLES

        Enable the use of hardware configuration tables,
        instead of query hardware and determine the features.
*/
#ifndef gcdUSE_HARDWARE_CONFIGURATION_TABLES
#   define gcdUSE_HARDWARE_CONFIGURATION_TABLES 0
#endif

/*
    gcdSUPPORT_SWAP_RECTANGLE

        Support swap with a specific rectangle.

        Set the rectangle with eglSetSwapRectangleVIV api.
        Android only.
*/
#ifndef gcdSUPPORT_SWAP_RECTANGLE
#   define gcdSUPPORT_SWAP_RECTANGLE            0
#endif

/*
    gcdGPU_LINEAR_BUFFER_ENABLED

        Use linear buffer for GPU apps so HWC can do 2D composition.
        Android only.
*/
#ifndef gcdGPU_LINEAR_BUFFER_ENABLED
#   define gcdGPU_LINEAR_BUFFER_ENABLED         1
#endif

/*
    gcdENABLE_RENDER_INTO_WINDOW

        Enable Render-Into-Window (ie, No-Resolve) feature on android.
        NOTE that even if enabled, it still depends on hardware feature and
        android application behavior. When hardware feature or application
        behavior can not support render into window mode, it will fail back
        to normal mode.
        When Render-Into-Window is finally used, window back buffer of android
        applications will be allocated matching render target tiling format.
        Otherwise buffer tiling is decided by the above option
        'gcdGPU_LINEAR_BUFFER_ENABLED'.
        Android only for now.
*/
#ifndef gcdENABLE_RENDER_INTO_WINDOW
#   define gcdENABLE_RENDER_INTO_WINDOW         1
#endif

/*
    gcdENABLE_RENDER_INTO_WINDOW_WITH_FC

        Enable Direct-rendering (ie, No-Resolve) with tile status.
        This is expremental and in development stage.
        This will dynamically check if color compression is available.
*/
#ifndef gcdENABLE_RENDER_INTO_WINDOW_WITH_FC
#   define gcdENABLE_RENDER_INTO_WINDOW_WITH_FC 1
#endif

/*
    gcdENABLE_BLIT_BUFFER_PRESERVE

        Render-Into-Window (ie, No-Resolve) does not include preserved swap
        behavior.  This feature can enable buffer preserve in No-Resolve mode.
        When enabled, previous buffer (may be part of ) will be resolve-blitted
        to current buffer.
*/
#ifndef gcdENABLE_BLIT_BUFFER_PRESERVE
#   define gcdENABLE_BLIT_BUFFER_PRESERVE       1
#endif

/*
    gcdANDROID_NATIVE_FENCE_SYNC

        Enable android native fence sync. It is introduced since jellybean-4.2.
        Depends on linux kernel option: CONFIG_SYNC.

        0: Disabled
        1: Build framework for native fence sync feature, and EGL extension
        2: Enable async swap buffers for client
           * Native fence sync for client 'queueBuffer' in EGL, which is
             'acquireFenceFd' for layer in compositor side.
        3. Enable async hwcomposer composition.
           * 'releaseFenceFd' for layer in compositor side, which is native
             fence sync when client 'dequeueBuffer'
           * Native fence sync for compositor 'queueBuffer' in EGL, which is
             'acquireFenceFd' for framebuffer target for DC
 */
#ifndef gcdANDROID_NATIVE_FENCE_SYNC
#   define gcdANDROID_NATIVE_FENCE_SYNC         0
#endif

/*
    gcdANDROID_IMPLICIT_NATIVE_BUFFER_SYNC

        Enable implicit android native buffer sync.

        For non-HW_RENDER buffer, CPU (or other hardware) and GPU can access
        the buffer at the same time. This is to add implicit synchronization
        between CPU (or the hardware) and GPU.

        Eventually, please do not use implicit native buffer sync, but use
        "fence sync" or "android native fence sync" instead in libgui, which
        can be enabled in frameworks/native/libs/gui/Android.mk. This kind
        of synchronization should be done by app but not driver itself.

        Please disable this option when either "fence sync" or
        "android native fence sync" is enabled.
 */
#ifndef gcdANDROID_IMPLICIT_NATIVE_BUFFER_SYNC
#   define gcdANDROID_IMPLICIT_NATIVE_BUFFER_SYNC   1
#endif

/*
 * Implicit native buffer sync is not needed when ANDROID_native_fence_sync
 * is available.
 */
#if gcdANDROID_NATIVE_FENCE_SYNC
#   undef  gcdANDROID_IMPLICIT_NATIVE_BUFFER_SYNC
#   define gcdANDROID_IMPLICIT_NATIVE_BUFFER_SYNC   0
#endif

/*
    gcdANDROID_UNALIGNED_LINEAR_COMPOSITION_ADJUST

        Enable source surface address adjust when composition on android.
        Android only.
*/
#ifndef gcdANDROID_UNALIGNED_LINEAR_COMPOSITION_ADJUST
#   define  gcdANDROID_UNALIGNED_LINEAR_COMPOSITION_ADJUST      1
#endif

/*
    gcdUSE_WCLIP_PATCH

        Enable wclipping patch.
*/
#ifndef gcdUSE_WCLIP_PATCH
#   define gcdUSE_WCLIP_PATCH                   1
#endif

#ifndef gcdUSE_NPOT_PATCH
#   define gcdUSE_NPOT_PATCH                    1
#endif

/*
    gcd3DBLIT

        TODO: Should be replaced by feature bit if available.
*/
#ifndef gcd3DBLIT
#   define gcd3DBLIT                            0
#endif

/*
    gcdINTERNAL_COMMENT

        Wrap internal comment, content wrapped by it and the macor itself
        will be removed in release driver.
*/
#ifndef gcdINTERNAL_COMMENT
#   define gcdINTERNAL_COMMENT                  1
#endif

/*
    gcdRTT_DISABLE_FC

        Disable RTT FC support. For test only.
*/
#ifndef gcdRTT_DISABLE_FC
#   define gcdRTT_DISABLE_FC                    0
#endif

/*
    gcdFORCE_MIPMAP

        Force generate mipmap for texture.
*/
#ifndef gcdFORCE_MIPMAP
#   define gcdFORCE_MIPMAP                      0
#endif

/*
    gcdFORCE_BILINEAR

        Force bilinear for mipfilter.
*/
#ifndef gcdFORCE_BILINEAR
#   define gcdFORCE_BILINEAR                    1
#endif

/*
    gcdBINARY_TRACE

        When non-zero, binary trace will be generated.

        When gcdBINARY_TRACE_FILE_SIZE is non-zero, binary trace buffer will
        be written to a file which size is limited to
        gcdBINARY_TRACE_FILE_SIZE.
*/
#ifndef gcdBINARY_TRACE
#   define gcdBINARY_TRACE                       0
#   define gcdBINARY_TRACE_FILE_SIZE             0
#endif

#ifndef gcdMOVG
#   define gcdMOVG                              0
#   define gcdENABLE_TS_DOUBLE_BUFFER           1
#else
#if gcdMOVG
#       define gcdENABLE_TS_DOUBLE_BUFFER       0
#else
#       define gcdENABLE_TS_DOUBLE_BUFFER       1
#endif
#endif

/*  gcdINTERRUPT_STATISTIC
 *
 *  Monitor the event send to GPU and interrupt issued by GPU.
 */

#ifndef gcdINTERRUPT_STATISTIC
#if defined(LINUX)
#   define gcdINTERRUPT_STATISTIC               1
#else
#   define gcdINTERRUPT_STATISTIC               0
#endif
#endif

/*
    gcdYINVERTED_RENDERING
        When it's not zero, we will rendering display buffer
        with top-bottom direction. All other offscreen rendering
        will be bottom-top, which follow OpenGL ES spec.
*/
#ifndef gcdYINVERTED_RENDERING
#   define gcdYINVERTED_RENDERING 1
#endif

#if gcdYINVERTED_RENDERING
/* disable unaligned linear composition adjust in Y-inverted rendering mode. */
#   undef  gcdANDROID_UNALIGNED_LINEAR_COMPOSITION_ADJUST
#   define gcdANDROID_UNALIGNED_LINEAR_COMPOSITION_ADJUST 0
#endif

/*
    gcdFENCE_WAIT_LOOP_COUNT
        Wait fence, loop count.
*/
#ifndef gcdFENCE_WAIT_LOOP_COUNT
#   define gcdFENCE_WAIT_LOOP_COUNT 10000
#endif

/*
    gcdHAL_3D_DRAWBLIT
        When it's not zero, we will enable HAL 3D drawblit
        to replace client 3dblit.
*/
#ifndef gcdHAL_3D_DRAWBLIT
#   define gcdHAL_3D_DRAWBLIT 1
#endif

/*
    gcdPARTIAL_FAST_CLEAR
        When it's not zero, partial fast clear is enabled.
        Depends on gcdHAL_3D_DRAWBLIT, if gcdHAL_3D_DRAWBLIT is not enabled,
        only available when scissor box is completely aligned.
        Expremental, under test.
*/
#ifndef gcdPARTIAL_FAST_CLEAR
#   define gcdPARTIAL_FAST_CLEAR                1
#endif

/*
    gcdREMOVE_SURF_ORIENTATION
        When it's not zero, we will remove surface orientation function.
        It wil become to a parameter of resolve function.
*/
#ifndef gcdREMOVE_SURF_ORIENTATION
#   define gcdREMOVE_SURF_ORIENTATION 0
#endif

/*
    gcdPATTERN_FAST_PATH
         For pattern match
*/
#ifndef gcdPATTERN_FAST_PATH
#   define gcdPATTERN_FAST_PATH       1
#endif

/*
    gcdUSE_INPUT_DEVICE
         disable input devices usage under fb mode to support fb+vdk multi-process
*/
#ifndef gcdUSE_INPUT_DEVICE
#   define gcdUSE_INPUT_DEVICE        1
#endif


/*
    gcdFRAMEINFO_STATISTIC
        When enable, collect frame information.
*/
#ifndef gcdFRAMEINFO_STATISTIC

#if (defined(DBG) && DBG) || defined(DEBUG) || defined(_DEBUG) || gcdDUMP
#   define gcdFRAMEINFO_STATISTIC      1
#else
#   define gcdFRAMEINFO_STATISTIC      0
#endif

#endif

/*
    gcdPACKED_OUTPUT_ADDRESS
        When it's not zero, ps output is already packed after linked
*/
#ifndef gcdPACKED_OUTPUT_ADDRESS
#   define gcdPACKED_OUTPUT_ADDRESS             1
#endif

/*
    gcdENABLE_THIRD_PARTY_OPERATION
        Enable third party operation like tpc or not.
*/
#ifndef gcdENABLE_THIRD_PARTY_OPERATION
#   define gcdENABLE_THIRD_PARTY_OPERATION      0
#endif


/*
    Core configurations. By default enable all cores.
*/
#ifndef gcdENABLE_3D
#   define gcdENABLE_3D                         1
#endif

#ifndef gcdENABLE_2D
#   define gcdENABLE_2D                         1
#endif

#ifndef gcdENABLE_VG
#   define gcdENABLE_VG                         0
#endif


#if gcdENABLE_VG
#ifdef LINUX
#       define GC355_PROFILER                   1
#	else
#   	define GC355_PROFILER                   0
#   endif
#else
# 	define GC355_PROFILER                       0
#endif

#ifndef gcdGC355_MEM_PRINT
#   define gcdGC355_MEM_PRINT                      0
#else
#if (!((gcdENABLE_3D == 0) && (gcdENABLE_2D == 0) && (gcdENABLE_VG == 1)))
#      undef gcdGC355_MEM_PRINT
#      define gcdGC355_MEM_PRINT                   0
#   endif
#endif

#ifndef gcdENABLE_UNIFIED_CONSTANT
#   define gcdENABLE_UNIFIED_CONSTANT           1
#endif

/*
    gcdRECORD_COMMAND
*/
#ifndef gcdRECORD_COMMAND
#   define gcdRECORD_COMMAND                    0
#endif

/*
    gcdALLOC_CMD_FROM_RESERVE

    Provide a way by which location of command buffer can be
    specified. This is a DEBUG option to limit command buffer
    to some memory range.
*/
#ifndef gcdALLOC_CMD_FROM_RESERVE
#   define gcdALLOC_CMD_FROM_RESERVE            1
#endif

#endif /* __gc_hal_options_h_ */
