///////////////////////////////////////////////////////////////////////////////
// @file     system_FD32M0P.h
// @brief    CMSIS Cortex-M0+ Device Peripheral Access Layer Header File for
//           Device CMSDK
// @version  V3.01
// @date     06. March 2012
//
// @note
// Copyright (C) 2010-2012 ARM Limited. All rights reserved.
//
// @par
// ARM Limited (ARM) is supplying this software for use with Cortex-M
// processor based microcontrollers.  This file can be freely distributed
// within development tools that are supporting such ARM based processors.
//
// @par
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
//
////////////////////////////////////////////////////////////////////////////////


#ifndef SYSTEM_FD32M0P_H
#define SYSTEM_FD32M0P_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

extern uint32_t SystemFrequency;    //!< System Clock Frequency (Core Clock)
extern uint32_t SystemCoreClock;    //!< Processor Clock Frequency


//
// Initialize the system
//
// @param  none
// @return none
//
// @brief  Setup the microcontroller system.
//         Initialize the System and update the SystemCoreClock variable.
//
extern void SystemInit (void);

//
// Update SystemCoreClock variable
//
// @param  none
// @return none
//
// @brief  Updates the SystemCoreClock with current core Clock
//         retrieved from cpu registers.
//
extern void SystemCoreClockUpdate (void);

#ifdef __cplusplus
}
#endif

#endif // SYSTEM_FD32M0P_H
