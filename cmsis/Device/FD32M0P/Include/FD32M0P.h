/**************************************************************************//**
 * @file     FD32M0P.h
 * @brief    CMSIS Cortex-M0+ Core Peripheral Access Layer Header File for
 *           Device FD32M0P
 * @version  V3.01
 * @date     06. March 2012
 *
 * @note
 * Copyright (C) 2010-2012 ARM Limited. All rights reserved.
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


#ifndef FD32M0P_H
#define FD32M0P_H

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup FD32M0P_Definitions FD32M0P Definitions
  This file defines all structures and symbols for FD32M0P:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - Peripheral definitions
  @{
*/


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup FD32M0P_CMSIS Device CMSIS Definitions
  Configuration of the Cortex-M0+ Processor and Core Peripherals
  @{
*/

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

typedef enum IRQn
{
/******  Cortex-M0+ Processor Exceptions Numbers **************************************************/

  NonMaskableInt_IRQn           = -14,      /*!<  2 Non Maskable Interrupt                        */
  HardFault_IRQn                = -13,      /*!<  3 Cortex-M0+ Hard Fault Interrupt               */
  SVCall_IRQn                   = -5,       /*!< 11 Cortex-M0+ SV Call Interrupt                  */
  PendSV_IRQn                   = -2,       /*!< 14 Cortex-M0+ Pend SV Interrupt                  */
  SysTick_IRQn                  = -1,       /*!< 15 Cortex-M0+ System Tick Interrupt              */

/******  FD32M0P Specific Interrupt Numbers *******************************************************/
  WDG0_IRQn        = 0,
  WDG1_IRQn        = 1,
  DEBUG_SS_IRQn    = 2,
  MCU_CTRL_IRQn    = 3,
  FLASH_IRQn       = 4,
  GPIO_IRQn        = 5,
  UNUSED6_IRQn     = 6,//GPIO1_IRQn     = 6,
  COMP0_IRQn       = 7,
  COMP1_IRQn       = 8,
  COMP2_IRQn       = 9,
  ADC0_IRQn        = 10,
  ADC1_IRQn        = 11,
  DAC_IRQn         = 12,
  SPI_IRQn         = 13,
  UART0_IRQn       = 14,
  UART1_IRQn       = 15,
  TIMER_G0_IRQn    = 16,
  TIMER_A0_IRQn    = 17,
  TIMER_G1_IRQn    = 18,
  TIMER_G2_IRQn    = 19,
  TIMER_G3_IRQn    = 20,
  TIMER_G4_IRQn    = 21,
  TIMER_A1_IRQn    = 22,
  I2C0_IRQn        = 23,
  I2C1_IRQn        = 24,
  RTC_IRQn         = 25,
  DMA_IRQn         = 26,
  USB2_IRQn        = 27,
  UNUSED28_IRQn    = 28,
  UNUSED29_IRQn    = 29,
  UNUSED30_IRQn    = 30,
  UNUSED31_IRQn    = 31,
} IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M0+ Processor and Core Peripherals */
#define __CM0_REV                 0x0000    /*!< Core Revision r2p1                               */
#define __NVIC_PRIO_BITS          2         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */
#define __MPU_PRESENT             1         /*!< MPU present or not                               */
#define __VTOR_PRESENT            1         /*!< Cortex-M0+ can support the VTOR                  */

/*@}*/ /* end of group FD32M0P_CMSIS */


#include "core_cm0plus.h"             /* Cortex-M0+ processor and core peripherals         */
#include "system_FD32M0P.h"           /* FD32M0P System  include file                */


/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/
/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
  FD32M0P Device Specific Peripheral registers structures
  @{
*/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif


/*------------- System Control (SYSCTRL) --------------------------------------*/
/** @addtogroup SYSCTRL System Control
  @{
*/
typedef struct
{
  __IO   uint32_t  REMAP;          /*!< Offset: 0x000 Remap Control Register (R/W) */
  __IO   uint32_t  PMUCTRL;        /*!< Offset: 0x004 PMU Control Register (R/W) */
  __IO   uint32_t  RESETOP;        /*!< Offset: 0x008 Reset Option Register  (R/W) */
  __IO   uint32_t  EMICTRL;        /*!< Offset: 0x00C EMI Control Register  (R/W) */
  __IO   uint32_t  RSTINFO;        /*!< Offset: 0x010 Reset Information Register (R/W) */
} SYSCTRL_REGS_s;

#define SYSCTRL_REMAP_OFS                 0
#define SYSCTRL_REMAP_MASK                 (0x01ul << SYSCTRL_REMAP_OFS)               /*!< SYSCTRL MEME_CTRL: REMAP Mask */

#define SYSCTRL_PMUCTRL_EN_OFS            0
#define SYSCTRL_PMUCTRL_EN_MASK            (0x01ul << SYSCTRL_PMUCTRL_EN_OFS)          /*!< SYSCTRL PMUCTRL: PMUCTRL ENABLE Mask */

#define SYSCTRL_LOCKUPRST_RESETOP_OFS     0
#define SYSCTRL_LOCKUPRST_RESETOP_MASK     (0x01ul << SYSCTRL_LOCKUPRST_RESETOP_OFS)   /*!< SYSCTRL SYS_CTRL: LOCKUP RESET ENABLE Mask */

#define SYSCTRL_EMICTRL_SIZE_OFS          24
#define SYSCTRL_EMICTRL_SIZE_MASK          (0x00001ul << SYSCTRL_EMICTRL_SIZE_OFS)     /*!< SYSCTRL EMICTRL: SIZE Mask */

#define SYSCTRL_EMICTRL_TACYC_OFS         16
#define SYSCTRL_EMICTRL_TACYC_MASK         (0x00007ul << SYSCTRL_EMICTRL_TACYC_OFS)    /*!< SYSCTRL EMICTRL: TURNAROUNDCYCLE Mask */

#define SYSCTRL_EMICTRL_WCYC_OFS          8
#define SYSCTRL_EMICTRL_WCYC_MASK          (0x00003ul << SYSCTRL_EMICTRL_WCYC_OFS)     /*!< SYSCTRL EMICTRL: WRITECYCLE Mask */

#define SYSCTRL_EMICTRL_RCYC_OFS          0
#define SYSCTRL_EMICTRL_RCYC_MASK          (0x00007ul << SYSCTRL_EMICTRL_RCYC_OFS)     /*!< SYSCTRL EMICTRL: READCYCLE Mask */

#define SYSCTRL_RSTINFO_SYSRESETREQ_OFS   0
#define SYSCTRL_RSTINFO_SYSRESETREQ_MASK   (0x00001ul << SYSCTRL_RSTINFO_SYSRESETREQ_OFS) /*!< SYSCTRL RSTINFO: SYSRESETREQ Mask */

#define SYSCTRL_RSTINFO_WDOGRESETREQ_OFS  1
#define SYSCTRL_RSTINFO_WDOGRESETREQ_MASK  (0x00001ul << SYSCTRL_RSTINFO_WDOGRESETREQ_OFS) /*!< SYSCTRL RSTINFO: WDOGRESETREQ Mask */

#define SYSCTRL_RSTINFO_LOCKUPRESET_OFS   2
#define SYSCTRL_RSTINFO_LOCKUPRESET_MASK   (0x00001ul << SYSCTRL_RSTINFO_LOCKUPRESET_OFS) /*!< SYSCTRL RSTINFO: LOCKUPRESET Mask */

/*@}*/ /* end of group SYSCTRL */

#include "ADC_REGS.h"
#include "COMP_REGS.h"
#include "CRC_REGS.h"
#include "DAC_REGS.h"
#include "DMA_REGS.h"
#include "EVENT_FABRIC_REGS.h"
#include "FLASH_REGS.h"
#include "GPIO_REGS.h"
#include "I2C_REGS.h"
#include "IOMUX_REGS.h"
#include "MCU_CTRL_REGS.h"
#include "OPAMP_REGS.h"
#include "OTP_REGS.h"
#include "PL230_REGS.h"
#include "RTC_REGS.h"
#include "SPI_REGS.h"
//#include "TIMER_REGS.h"
//#include "TIMER_TIMG_NUM_INPUT2_REGS.h"
#include "UART_REGS.h"
#include "VREF_REGS.h"

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

/*@}*/ /* end of group FD32M0P_Peripherals */


/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/** @addtogroup FD32M0P_MemoryMap FD32M0P Memory Mapping
  @{
*/

/* Peripheral and SRAM base address */
#define FLASH_BASE        (0x00000000UL)     /*!< (FLASH     ) Base Address */
#define BOOTROM_BASE      (0x01000000UL)     /*!< (FLASH     ) Base Address */
#define SRAM_BASE         (0x20000000UL)     /*!< (SRAM      ) Base Address */
#define PERIPH_BASE       (0x3FFC0000UL)     /*!< (Peripheral) Base Address */

#define RAM_BASE          (0x20000000UL)
#define APB_BASE          (0x3FFC0000UL)
#define AHB_BASE          (0x40000000UL)

/* APB peripherals                                                           */
#define MCU_CTRL_BASE       (APB_BASE + 0x00000UL)
#define DMA_PL230_BASE      (APB_BASE + 0x01000UL)
#define DMA_MCU_BASE        (APB_BASE + 0x02000UL)
#define EVENT_FABRIC_BASE   (APB_BASE + 0x03000UL)
#define IOMUX_BASE          (APB_BASE + 0x04000UL)
#define OTP_BASE            (APB_BASE + 0x05000UL)
#define COMP0_BASE          (APB_BASE + 0x06000UL)
#define COMP1_BASE          (APB_BASE + 0x07000UL)
#define COMP2_BASE          (APB_BASE + 0x08000UL)
#define OPA0_BASE           (APB_BASE + 0x09000UL)
#define I2C0_BASE           (APB_BASE + 0x0A000UL)
#define I2C1_BASE           (APB_BASE + 0x0B000UL)
#define UART0_BASE          (APB_BASE + 0x0C000UL)
#define RTC_BASE            (APB_BASE + 0x0D000UL)
#define WDOG0_BASE          (APB_BASE + 0x0E000UL)
#define WDOG1_BASE          (APB_BASE + 0x0F000UL)
#define DAC_BASE            (APB_BASE + 0x11000UL)
#define VREF_BASE           (APB_BASE + 0x12000UL)
#define UART1_BASE          (APB_BASE + 0x13000UL)
//#define TIMER_A0_BASE       (APB_BASE + 0x14000UL)
//#define TIMER_A1_BASE       (APB_BASE + 0x15000UL)
//#define TIMER_G0_BASE       (APB_BASE + 0x16000UL)
//#define TIMER_G1_BASE       (APB_BASE + 0x17000UL)
#define FLASH_APB_BASE      (APB_BASE + 0x1B000UL)
//#define FLASH_APB_BASE      (APB_BASE + 0x1C000UL)
#define OPA1_BASE           (APB_BASE + 0x1D000UL)
#define SECURE_IP_BASE      (APB_BASE + 0x1E000UL)
#define USB2_BASE           (APB_BASE + 0x1F000UL)

/* AHB peripherals                                                           */
#define GPIO_BASE           (AHB_BASE + 0x10000UL)
#define SYSCTRL_BASE        (AHB_BASE + 0x1F000UL)
#define CRC_BASE            (AHB_BASE + 0x20000UL)
#define SPI_BASE            (AHB_BASE + 0x30000UL)
#define ADC0_BASE           (AHB_BASE + 0x40000UL)
#define ADC1_BASE           (AHB_BASE + 0x50000UL)
#define GPIO_ALIAS_BASE     (AHB_BASE + 0x60000UL)

/*@}*/ /* end of group FD32M0P_MemoryMap */


/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/

/** @addtogroup FD32M0P_PeripheralDecl FD32M0P Peripheral Declaration
  @{
*/
// APB peripherals          
#define MCU_CTRL_REGS       ((MCU_CTRL_REGS_s*)     MCU_CTRL_BASE)       
#define DMA_PL230_REGS      ((PL230_REGS_s*)        DMA_PL230_BASE)      
#define DMA_MCU_REGS        ((DMA_REGS_s*)          DMA_MCU_BASE)        
#define EVENT_FABRIC_REGS   ((EVENT_FABRIC_REGS_s*) EVENT_FABRIC_BASE)   
#define IOMUX_REGS          ((IOMUX_REGS_s*)        IOMUX_BASE)          
#define OTP_REGS            ((OTP_REGS_s*)          OTP_BASE)            
#define COMP0_REGS          ((COMP_REGS_s*)         COMP0_BASE)          
#define COMP1_REGS          ((COMP_REGS_s*)         COMP1_BASE)          
#define COMP2_REGS          ((COMP_REGS_s*)         COMP2_BASE)          
#define OPA0_REGS           ((OPA_REGS_s*)          OPA0_BASE)            
#define I2C0_REGS           ((I2C_REGS_s*)          I2C0_BASE)           
#define I2C1_REGS           ((I2C_REGS_s*)          I2C1_BASE)           
#define UART0_REGS          ((UART_REGS_s*)         UART0_BASE)          
#define RTC_REGS            ((RTC_REGS_s*)          RTC_BASE)            
#define WDOG0_REGS          ((WDOG_REGS_s*)         WDOG0_BASE)          
#define WDOG1_REGS          ((WDOG_REGS_s*)         WDOG1_BASE)          
#define DAC_REGS            ((DAC_REGS_s*)          DAC_BASE)            
#define VREF_REGS           ((VREF_REGS_s*)         VREF_BASE)           
#define UART1_REGS          ((UART_REGS_s*)         UART1_BASE)          
//#define TIMER_A0_REGS       ((TIMER_REGS_s*)        TIMER_A0_BASE)       
//#define TIMER_A1_REGS       ((TIMER_REGS_s*)        TIMER_A1_BASE)       
//#define TIMER_G0_REGS       ((TIMER_REGS_s*)        TIMER_G0_BASE)       
//#define TIMER_G1_REGS       ((TIMER_REGS_s*)        TIMER_G1_BASE)       
#define FLASH_APB_REGS      ((FLASH_APB_REGS_s*)    FLASH_APB_BASE)      
//#define FLASH_APB_REGS      ((FLASH_APB_REGS_s*)    FLASH_APB_BASE)      
#define OPA1_REGS           ((OPA_REGS_s*)          OPA1_BASE)            
#define SECURE_IP_REGS      ((SECURE_IP_REGS_s*)    SECURE_IP_BASE)      
#define USB2_REGS           ((USB2_REGS_s*)         USB2_BASE)           

// AHB peripherals          
#define GPIO_REGS           ((GPIO_REGS_s*)         GPIO_BASE)           
#define SYSCTRL_REGS        ((SYSCTRL_REGS_s*)      SYSCTRL_BASE)        
#define CRC_REGS            ((CRC_REGS_s*)          CRC_BASE)            
#define SPI_REGS            ((SPI_REGS_s*)          SPI_BASE)            
#define ADC0_REGS           ((ADC_REGS_s*)          ADC0_BASE)           
#define ADC1_REGS           ((ADC_REGS_s*)          ADC1_BASE)           
#define GPIO_ALIAS_REGS     ((GPIO_REGS_s*)         GPIO_ALIAS_BASE)   


/*@}*/ /* end of group FD32M0P_PeripheralDecl */

/*@}*/ /* end of group FD32M0P_Definitions */

#ifdef __cplusplus
}
#endif

#endif  /* FD32M0P_H */
