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
 *      Checked In          : $Date: 2024/01/29 07:07:16 GMT $
 *
 *      Revision            : $Revision: 2 $
 *
 *      Release Information : Cortex-M System Design Kit-r1p1-00rel0
 *-----------------------------------------------------------------------------
 */
/* Functions for stdout during simulation */
/* The functions are implemented in top/verification/c_api/uart/uart_stdout_mcu.c */
#include "FD32M0P.h"
#include "uart.h"

#ifdef UART1_STDIO
#define UART_STDIO UART1_REGS
#else
#define UART_STDIO UART0_REGS
#endif

#define UartPuts(x) uart_puts(UART_STDIO, x)

void UartStdOutInit(void);
void UartEndSimulation(void);
void UartPass(void);
void UartFail(void);
void itoa_mcu(uint32_t value, char* str, int base);
void print_int_var(char *prefix, int var, bool is_hex);
