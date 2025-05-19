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

typedef enum {
    EVENT_FABRIC_PUB_ID_ADC_0       = 0,
    EVENT_FABRIC_PUB_ID_ADC_1       = 1,
    EVENT_FABRIC_PUB_ID_GPIO        = 2,
    EVENT_FABRIC_PUB_ID_RTC         = 3,
    EVENT_FABRIC_PUB_ID_COMP_0      = 4,
    EVENT_FABRIC_PUB_ID_COMP_1      = 5,
    EVENT_FABRIC_PUB_ID_COMP_2      = 6,
    EVENT_FABRIC_PUB_ID_DAC         = 9,
    EVENT_FABRIC_PUB0_ID_TIM_A_0    = 10,
    EVENT_FABRIC_PUB1_ID_TIM_A_0    = 11,
    EVENT_FABRIC_PUB0_ID_TIM_A_1    = 12,
    EVENT_FABRIC_PUB1_ID_TIM_A_1    = 13,
    EVENT_FABRIC_PUB0_ID_TIM_G_0    = 14,
    EVENT_FABRIC_PUB1_ID_TIM_G_0    = 15,
    EVENT_FABRIC_PUB0_ID_TIM_G_1    = 16,
    EVENT_FABRIC_PUB1_ID_TIM_G_1    = 17,
    EVENT_FABRIC_PUB0_ID_TIM_G_2    = 18,
    EVENT_FABRIC_PUB1_ID_TIM_G_2    = 19,
    EVENT_FABRIC_PUB0_ID_TIM_G_3    = 20,
    EVENT_FABRIC_PUB1_ID_TIM_G_3    = 21,
    EVENT_FABRIC_PUB0_ID_TIM_G_4    = 22,
    EVENT_FABRIC_PUB1_ID_TIM_G_4    = 23,
} EVENT_FABRIC_PUB_ID_E;

typedef enum {
    EVENT_FABRIC_SUB_ID_ADC_0       = 0,
    EVENT_FABRIC_SUB_ID_ADC_1       = 1,
    EVENT_FABRIC_SUB0_ID_GPIO       = 2,
    EVENT_FABRIC_SUB1_ID_GPIO       = 3,
    EVENT_FABRIC_SUB0_ID_COMP_0     = 4,
    EVENT_FABRIC_SUB1_ID_COMP_0     = 5,
    EVENT_FABRIC_SUB0_ID_COMP_1     = 6,
    EVENT_FABRIC_SUB1_ID_COMP_1     = 7,
    EVENT_FABRIC_SUB0_ID_COMP_2     = 8,
    EVENT_FABRIC_SUB1_ID_COMP_2     = 9,
    EVENT_FABRIC_SUB0_ID_DAC        = 10,
    EVENT_FABRIC_SUB0_ID_TIM_A_0    = 11,
    EVENT_FABRIC_SUB1_ID_TIM_A_0    = 12,
    EVENT_FABRIC_SUB0_ID_TIM_A_1    = 13,
    EVENT_FABRIC_SUB1_ID_TIM_A_1    = 14,
    EVENT_FABRIC_SUB0_ID_TIM_G_0    = 15,
    EVENT_FABRIC_SUB1_ID_TIM_G_0    = 16,
    EVENT_FABRIC_SUB0_ID_TIM_G_1    = 17,
    EVENT_FABRIC_SUB1_ID_TIM_G_1    = 18,
    EVENT_FABRIC_SUB0_ID_TIM_G_2    = 19,
    EVENT_FABRIC_SUB1_ID_TIM_G_2    = 20,
    EVENT_FABRIC_SUB0_ID_TIM_G_3    = 21,
    EVENT_FABRIC_SUB1_ID_TIM_G_3    = 22,
    EVENT_FABRIC_SUB0_ID_TIM_G_4    = 23,
    EVENT_FABRIC_SUB1_ID_TIM_G_4    = 24,
} EVENT_FABRIC_SUB_ID_E;
                             
typedef enum {
	EVENT_FABRIC_CHAN_ID_DISCONNECT = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_DISCONNECT,
	EVENT_FABRIC_CHAN_ID_1          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_1,
	EVENT_FABRIC_CHAN_ID_2          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_2,
	EVENT_FABRIC_CHAN_ID_3          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_3,
	EVENT_FABRIC_CHAN_ID_4          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_4,
	EVENT_FABRIC_CHAN_ID_5          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_5,
	EVENT_FABRIC_CHAN_ID_6          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_6,
	EVENT_FABRIC_CHAN_ID_7          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_7,
	EVENT_FABRIC_CHAN_ID_8          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_8,
	EVENT_FABRIC_CHAN_ID_9          = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_9,
	EVENT_FABRIC_CHAN_ID_10         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_10,
	EVENT_FABRIC_CHAN_ID_11         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_11,
	EVENT_FABRIC_CHAN_ID_12         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_12,
	EVENT_FABRIC_CHAN_ID_13         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_13,
	EVENT_FABRIC_CHAN_ID_14         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_14,
	EVENT_FABRIC_CHAN_ID_15         = 	EVENT_FABRIC_GEN_SUB_CHAN_ID_15,
} EVENT_FABRIC_CHAN_ID_E;

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


extern void event_fabric_pub_to_dma_channel_cfg     (EVENT_FABRIC_REGS_s * registers, EVENT_FABRIC_DMA_PUB_EVENT_ID_E pub_id, uint32_t chan_id);

extern void event_fabric_pub_to_sub_channel_cfg     (EVENT_FABRIC_REGS_s * registers, EVENT_FABRIC_PUB_ID_E pub_id, EVENT_FABRIC_SUB_ID_E sub_id, EVENT_FABRIC_CHAN_ID_E chan_id);

extern void get_event_fabric_full_chnl_cfg          (EVENT_FABRIC_REGS_s * registers, chnl_cfg* chnl);

extern void get_dma_full_chnl_cfg                   (EVENT_FABRIC_REGS_s * registers, chnl_cfg* chnl);

#endif
