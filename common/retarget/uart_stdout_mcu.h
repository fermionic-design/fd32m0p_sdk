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

//define this to set UART1 as STDIO else UART0 by default 
#ifdef UART1_STDIO
#define UART_STDIO UART1_REGS
#else
#define UART_STDIO UART0_REGS
#endif

//define this to set a custom baud rate else it will be zero (ie highest baud rate supported by the system)
#ifndef STDIO_BAUD_RATE 
#define STDIO_BAUD_RATE 0
#endif

//#define UartPuts(x) uart_puts(UART_STDIO, x)

void UartStdOutInit(void);
__attribute__((section(".sram_code"))) void UartPuts(const unsigned char * data_char_arr);
__attribute__((section(".sram_code"))) static inline void UartPutc(const unsigned char data_char) {
    UART_STDIO->TXDATA[0].packed_w = data_char;
}
void UartEndSimulation(void);
void UartPass(void);
void UartFail(void);
void itoa_mcu(uint32_t value, char* str, int base);
void print_int_var(char *prefix, int var, bool is_hex);
