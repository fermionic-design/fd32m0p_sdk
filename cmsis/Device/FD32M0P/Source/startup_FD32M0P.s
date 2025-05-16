/**************************************************************************//**
 * @file     startup_FD32M0P.s
 * @brief    CMSIS Cortex-M0+ Core Device Startup File for
 *           Device FD32M0P
 * @version  V3.01
 * @date     06. March 2012
 *
 * @note      Should use with GCC for ARM Embedded Processors
 * Copyright (C) 2012 ARM Limited. All rights reserved.
 *
 * @par
 * ARM Limited (ARM) is supplying this software for use with Cortex-M
 * processor based microcontrollers.  This file can be freely distributed
 * within development tools that are supporting such ARM based processors.
 *
 * @par
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************/
/*****************************************************************************/
/* startup_FD32M0P.s: Startup file for CMSDK device series               */
/*****************************************************************************/
/* Version: GNU Tools for ARM Embedded Processors                          */
/*****************************************************************************/


    .syntax unified
    .arch armv6-m

    .section .stack
    .align 3

/*
// <h> Stack Configuration
//   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

    .section .stack
    .align 3
#ifdef __STACK_SIZE
    .equ    Stack_Size, __STACK_SIZE
#else
    .equ    Stack_Size, 0x200
#endif
    .globl    __StackTop
    .globl    __StackLimit
__StackLimit:
    .space    Stack_Size
    .size __StackLimit, . - __StackLimit
__StackTop:
    .size __StackTop, . - __StackTop


/*
// <h> Heap Configuration
//   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

    .section .heap
    .align 3
#ifdef __HEAP_SIZE
    .equ    Heap_Size, __HEAP_SIZE
#else
    .equ    Heap_Size, 0
#endif
    .globl    __HeapBase
    .globl    __HeapLimit
__HeapBase:
    .if    Heap_Size
    .space    Heap_Size
    .endif
    .size __HeapBase, . - __HeapBase
__HeapLimit:
    .size __HeapLimit, . - __HeapLimit


/* Vector Table */

    .section .isr_vector
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                  /* Top of Stack                  */
    .long   Reset_Handler               /* Reset Handler                 */
    .long   NMI_Handler                 /* NMI Handler                   */
    .long   HardFault_Handler           /* Hard Fault Handler            */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   0                           /* Reserved                      */
    .long   SVC_Handler                 /* SVCall Handler                */
    .long   0                           /* Debug Monitor Handler         */
    .long   0                           /* Reserved                      */
    .long   PendSV_Handler              /* PendSV Handler                */
    .long   SysTick_Handler             /* SysTick Handler               */

    /* External Interrupts */
    .long   WDG0_IRQ_Handler         /* 16+ 0: */
    .long   WDG1_IRQ_Handler         /* 16+ 1: */
    .long   DEBUG_SS_IRQ_Handler     /* 16+ 2: */
    .long   MCU_CTRL_IRQ_Handler     /* 16+ 3: */
    .long   FLASH_IRQ_Handler        /* 16+ 4: */
    .long   GPIO_IRQ_Handler         /* 16+ 5: */
    .long   UNUSED_IRQ6_Handler          /* 16+ 6: Unused */
    .long   COMP0_IRQ_Handler        /* 16+ 7: */
    .long   COMP1_IRQ_Handler        /* 16+ 8: */
    .long   COMP2_IRQ_Handler        /* 16+ 9: */
    .long   ADC0_IRQ_Handler         /* 16+10: */
    .long   ADC1_IRQ_Handler         /* 16+11: */
    .long   DAC_IRQ_Handler          /* 16+12: */
    .long   SPI_IRQ_Handler          /* 16+13: */
    .long   UART0_IRQ_Handler        /* 16+14: */
    .long   UART1_IRQ_Handler        /* 16+15: */
    .long   TIMER_G0_IRQ_Handler     /* 16+16: */
    .long   TIMER_A0_IRQ_Handler     /* 16+17: */
    .long   TIMER_G1_IRQ_Handler     /* 16+18: */
    .long   TIMER_G2_IRQ_Handler     /* 16+19: */
    .long   TIMER_G3_IRQ_Handler     /* 16+20: */
    .long   TIMER_G4_IRQ_Handler     /* 16+21: */
    .long   TIMER_A1_IRQ_Handler     /* 16+22: */
    .long   I2C0_IRQ_Handler         /* 16+23: */
    .long   I2C1_IRQ_Handler         /* 16+24: */
    .long   RTC_IRQ_Handler          /* 16+25: */
    .long   DMA_IRQ_Handler          /* 16+26: */
    .long   USB2_IRQ_Handler         /* 16+27: */
    .long   UNUSED_IRQ28_Handler         /* 16+28: Unused */
    .long   UNUSED_IRQ29_Handler         /* 16+29: Unused */
    .long   UNUSED_IRQ30_Handler         /* 16+30: Unused */
    .long   UNUSED_IRQ31_Handler         /* 16+31: Unused */

    .size    __isr_vector, . - __isr_vector

/* Reset Handler */
    .text
    .thumb
    .thumb_func
    .align 2
    .globl    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
/*     Loop to copy data from read only memory to RAM. The ranges
 *      of copy from/to are specified by following symbols evaluated in
 *      linker script.
 *      __etext: End of code section, i.e., begin of data sections to copy from.
 *      __data_start__/__data_end__: RAM address range that data should be
 *      copied to. Both must be aligned to 4 bytes boundary.  */

    ldr    r1, =__etext
    ldr    r2, =__data_start__
    ldr    r3, =__data_end__

    subs    r3, r2
    ble    .LC1
.LC0:
    subs    r3, #4
    ldr    r0, [r1, r3]
    str    r0, [r2, r3]
    bgt    .LC0
.LC1:

#ifdef __STARTUP_CLEAR_BSS
/*     This part of work usually is done in C library startup code. Otherwise,
 *     define this macro to enable it in this startup.
 *
 *     Loop to zero out BSS section, which uses following symbols
 *     in linker script:
 *      __bss_start__: start of BSS section. Must align to 4
 *      __bss_end__: end of BSS section. Must align to 4
 */
    ldr r1, =__bss_start__
    ldr r2, =__bss_end__

    subs    r2, r1
    ble .LC3

    movs    r0, 0
.LC2:
    str r0, [r1, r2]
    subs    r2, 4
    bge .LC2
.LC3:
#endif /* __STARTUP_CLEAR_BSS */

#ifndef __NO_SYSTEM_INIT
    /* bl    SystemInit */
    ldr     r0,=SystemInit
    blx     r0
#endif

    bl    _start

    .pool
    .size Reset_Handler, . - Reset_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro    def_default_handler    handler_name
    .align 1
    .thumb_func
    .weak    \handler_name
    .type    \handler_name, %function
\handler_name :
    b    .
    .size    \handler_name, . - \handler_name
    .endm

/* System Exception Handlers */

    def_default_handler    NMI_Handler
    def_default_handler    HardFault_Handler
    def_default_handler    MemManage_Handler
    def_default_handler    BusFault_Handler
    def_default_handler    UsageFault_Handler
    def_default_handler    SVC_Handler
    def_default_handler    DebugMon_Handler
    def_default_handler    PendSV_Handler
    def_default_handler    SysTick_Handler

/* IRQ Handlers */

    def_default_handler WDG0_IRQ_Handler    
    def_default_handler WDG1_IRQ_Handler    
    def_default_handler DEBUG_SS_IRQ_Handler
    def_default_handler MCU_CTRL_IRQ_Handler
    def_default_handler FLASH_IRQ_Handler   
    def_default_handler GPIO_IRQ_Handler    
    def_default_handler UNUSED_IRQ6_Handler
    def_default_handler COMP0_IRQ_Handler   
    def_default_handler COMP1_IRQ_Handler   
    def_default_handler COMP2_IRQ_Handler   
    def_default_handler ADC0_IRQ_Handler    
    def_default_handler ADC1_IRQ_Handler    
    def_default_handler DAC_IRQ_Handler     
    def_default_handler SPI_IRQ_Handler     
    def_default_handler UART0_IRQ_Handler   
    def_default_handler UART1_IRQ_Handler   
    def_default_handler TIMER_G0_IRQ_Handler
    def_default_handler TIMER_A0_IRQ_Handler
    def_default_handler TIMER_G1_IRQ_Handler
    def_default_handler TIMER_G2_IRQ_Handler
    def_default_handler TIMER_G3_IRQ_Handler
    def_default_handler TIMER_G4_IRQ_Handler
    def_default_handler TIMER_A1_IRQ_Handler
    def_default_handler I2C0_IRQ_Handler    
    def_default_handler I2C1_IRQ_Handler    
    def_default_handler RTC_IRQ_Handler     
    def_default_handler DMA_IRQ_Handler     
    def_default_handler USB2_IRQ_Handler    
    def_default_handler UNUSED_IRQ28_Handler         
    def_default_handler UNUSED_IRQ29_Handler         
    def_default_handler UNUSED_IRQ30_Handler         
    def_default_handler UNUSED_IRQ31_Handler         

    /*
    def_default_handler    Default_Handler
    .weak    DEF_IRQHandler
    .set    DEF_IRQHandler, Default_Handler
    */
    .end

