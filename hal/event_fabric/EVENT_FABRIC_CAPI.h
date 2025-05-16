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
 *      Checked In          : $Date: 2024/01/11 18:19:43 GMT $
 *
 *      Revision            : $Revision: 1 $
 *
 *      Release Information : Cortex-M System Design Kit-r1p1-00rel0
 *-----------------------------------------------------------------------------
 */
/* Functions for stdout during simulation */
/* The functions are implemented in top/verification/c_api/event_fabric/event_fabric_CAPI.h */
#ifndef event_h_include
#define event_h_include
#include "EVENT_FABRIC_REGS.h"
#include "EVENT_FABRIC_RW_API.h"

#define EVENT_FABRIC_REGS   ((EVENT_FABRIC_REGS_s *)      0x3FFC3000)     // EVENT_FABRIC_REGS Common APB Address Space

#define EVENT_FABRIC_PUB_ID_ADC_0       0
#define EVENT_FABRIC_PUB_ID_ADC_1       1
#define EVENT_FABRIC_PUB_ID_GPIO        2
#define EVENT_FABRIC_PUB_ID_RTC         3
#define EVENT_FABRIC_PUB_ID_COMP_0      4
#define EVENT_FABRIC_PUB_ID_COMP_1      5
#define EVENT_FABRIC_PUB_ID_COMP_2      6
#define EVENT_FABRIC_PUB_ID_DAC         9
#define EVENT_FABRIC_PUB0_ID_TIM_A_0    10
#define EVENT_FABRIC_PUB1_ID_TIM_A_0    11
#define EVENT_FABRIC_PUB0_ID_TIM_A_1    12
#define EVENT_FABRIC_PUB1_ID_TIM_A_1    13
#define EVENT_FABRIC_PUB0_ID_TIM_G_0    14
#define EVENT_FABRIC_PUB1_ID_TIM_G_0    15
#define EVENT_FABRIC_PUB0_ID_TIM_G_1    16
#define EVENT_FABRIC_PUB1_ID_TIM_G_1    17
#define EVENT_FABRIC_PUB0_ID_TIM_G_2    18
#define EVENT_FABRIC_PUB1_ID_TIM_G_2    19
#define EVENT_FABRIC_PUB0_ID_TIM_G_3    20
#define EVENT_FABRIC_PUB1_ID_TIM_G_3    21
#define EVENT_FABRIC_PUB0_ID_TIM_G_4    22
#define EVENT_FABRIC_PUB1_ID_TIM_G_4    23

#define EVENT_FABRIC_SUB_ID_ADC_0       0
#define EVENT_FABRIC_SUB_ID_ADC_1       1
#define EVENT_FABRIC_SUB0_ID_GPIO       2
#define EVENT_FABRIC_SUB1_ID_GPIO       3
#define EVENT_FABRIC_SUB0_ID_COMP       4
#define EVENT_FABRIC_SUB1_ID_COMP       5
#define EVENT_FABRIC_SUB0_ID_COMP       6
#define EVENT_FABRIC_SUB1_ID_COMP       7
#define EVENT_FABRIC_SUB0_ID_COMP       8
#define EVENT_FABRIC_SUB1_ID_COMP       9
#define EVENT_FABRIC_SUB0_ID_DAC        10
#define EVENT_FABRIC_SUB0_ID_TIM_A_0    11
#define EVENT_FABRIC_SUB1_ID_TIM_A_0    12
#define EVENT_FABRIC_SUB0_ID_TIM_A_1    13
#define EVENT_FABRIC_SUB1_ID_TIM_A_1    14
#define EVENT_FABRIC_SUB0_ID_TIM_G_0    15
#define EVENT_FABRIC_SUB1_ID_TIM_G_0    16
#define EVENT_FABRIC_SUB0_ID_TIM_G_1    17
#define EVENT_FABRIC_SUB1_ID_TIM_G_1    18
#define EVENT_FABRIC_SUB0_ID_TIM_G_2    19
#define EVENT_FABRIC_SUB1_ID_TIM_G_2    20
#define EVENT_FABRIC_SUB0_ID_TIM_G_3    21
#define EVENT_FABRIC_SUB1_ID_TIM_G_3    22
#define EVENT_FABRIC_SUB0_ID_TIM_G_4    23
#define EVENT_FABRIC_SUB1_ID_TIM_G_4    24

#define DMA_PUB_ID_USB2                 14
#define DMA_PUB_ID_SPI_RX               13
#define DMA_PUB_ID_SPI_TX               12
#define DMA_PUB_ID_I2C_1_TX             11
#define DMA_PUB_ID_I2C_1_RX             10
#define DMA_PUB_ID_I2C_0_TX             9
#define DMA_PUB_ID_I2C_0_RX             8
#define DMA_PUB_ID_UART_1_TX            7
#define DMA_PUB_ID_UART_1_RX            6
#define DMA_PUB_ID_UART_0_TX            5
#define DMA_PUB_ID_UART_0_RX            4
#define DMA_PUB_ID_ADC_1                3
#define DMA_PUB_ID_ADC_0                2
#define DMA_PUB_ID_DAC                  1

#define GENERIC_FABRIC                  0
#define DMA_FABRIC                      1

#define DMA_CHANNELS                    16
#define EVENT_FABRIC_CHANNELS           26
#define EVENT_FABRIC_NUMBER_OF_PUB      23
#define EVENT_FABRIC_NUMBER_OF_SUB      24


typedef struct chnl_cfg {
   uint8_t pub;
   uint8_t sub;
} chnl_cfg;


extern void event_fabric_pub_to_dma_channel_cfg     (EVENT_FABRIC_REGS_s * registers, uint32_t pub_id, uint32_t chan_id);

extern void event_fabric_pub_to_sub_channel_cfg     (EVENT_FABRIC_REGS_s * registers, uint32_t pub_id, uint32_t sub_id, uint32_t chan_id);

extern void get_event_fabric_full_chnl_cfg          (EVENT_FABRIC_REGS_s * registers, chnl_cfg* chnl);

extern void get_dma_full_chnl_cfg                   (EVENT_FABRIC_REGS_s * registers, chnl_cfg* chnl);

#endif
