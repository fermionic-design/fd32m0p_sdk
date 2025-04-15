/*
 *-----------------------------------------------------------------------------
 * The confidential and proprietary information contained in this file may
 * only be used by a person authorised under and to the extent permitted
 * by a subsisting licensing agreement from Arm Limited or its affiliates.
 *
 *            (C) COPYRIGHT 2010-2013 Arm Limited or its affiliates.
 *                ALL RIGHTS RESERVED
 *
 * This entire notice must be reproduced on all copies of this file
 * and copies of this file may only be made by a person if such person is
 * permitted to do so under the terms of a subsisting license agreement
 * from Arm Limited or its affiliates.
 *
 *      SVN Information
 *
 *      Checked In          : $Date: 2023/11/09 12:43:19 GMT $
 *
 *      Revision            : $Revision: 2 $
 *
 *      Release Information : Cortex-M System Design Kit-r1p1-00rel0
 *-----------------------------------------------------------------------------
 */

 /*

 UART functions for retargetting

 */
#ifdef CORTEX_M0
#include "CMSDK_CM0.h"
#endif

#ifdef CORTEX_M0PLUS
#include "CMSDK_CM0plus.h"
#endif

#ifdef CORTEX_M3
#include "CMSDK_CM3.h"
#endif

#ifdef CORTEX_M4
#include "CMSDK_CM4.h"
#endif

void UartStdOutInit(void)
{
  CMSDK_UART2->BAUDDIV = 16;
  CMSDK_UART2->CTRL    = 0x41; // High speed test mode, TX only
  CMSDK_GPIO1->ALTFUNCSET = (1<<5);
  return;
}
// Output a character
unsigned char UartPutc(unsigned char my_ch)
{
  while ((CMSDK_UART2->STATE & 1)); // Wait if Transmit Holding register is full
  CMSDK_UART2->DATA = my_ch; // write to transmit holding register
  return (my_ch);
}
// Get a character
unsigned char UartGetc(void)
{
  while ((CMSDK_UART2->STATE & 2)==0); // Wait if Receive Holding register is empty
  return (CMSDK_UART2->DATA);
}

void UartEndSimulation(void)
{
  UartPutc((char) 0x4); // End of simulation
  while(1);
}

void UartPass(void)
{
  UartPutc((char) 0x6); // End of simulation
  //while(1);
}

void UartFail(void)
{
  UartPutc((char) 0x15); // End of simulation
  //while(1);
}

