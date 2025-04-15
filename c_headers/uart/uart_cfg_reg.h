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
 *      Checked In          : $Date: 2024/02/12 06:02:00 GMT $
 *
 *      Revision            : $Revision: 6 $
 *
 *      Release Information : Cortex-M System Design Kit-r1p1-00rel0
 *-----------------------------------------------------------------------------
 */
/* Functions for stdout during simulation */
/* The functions are implemented in top/verification/c_api/uart/uart_cfg_reg.c */
extern void UartStdOutRegInit(void);
extern void UartClkSel(int clock_sel);
extern void CFG_UartFrameLength(int length);
extern void CFG_UartEn(int en);
extern void CFG_UartParityen(int parity_en, int parity_type, int stick_parity);
extern void CFG_UartStopBit(int stop_bit);
extern void CFG_UartMsbFirst(int msb_first);
extern void CFG_UartIOMux(void);
extern void UartBaudrate(int baud, int uart_clock, int oversampling);
extern void UartFifoEn(void);
extern void UartLpbkEn(void);
extern void Rx_en(int en);
extern void CTS_En(int en);
extern void uart_RTS_EN(int en);
extern void uart_tx_fifo_ls(int val);
extern void uart_rx_fifo_ls(int val);
extern void Majority_vote_en(int en);
extern void Glitch_Width(int glitch_width);
