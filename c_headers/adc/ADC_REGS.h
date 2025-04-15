#ifndef ADC_REGISTERS_H
#define ADC_REGISTERS_H

#include <stdint.h>

typedef struct ADC_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int module_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} ADC_DESC_REG_s;

typedef union ADC_DESC_u {
    ADC_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DESC_u;

typedef struct ADC_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} ADC_PWR_EN_REG_s;

typedef union ADC_PWR_EN_u {
    ADC_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_PWR_EN_u;

typedef struct ADC_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} ADC_RST_CTRL_REG_s;

typedef union ADC_RST_CTRL_u {
    ADC_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_CTRL_u;

typedef struct ADC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} ADC_RST_STS_REG_s;

typedef union ADC_RST_STS_u {
    ADC_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_STS_u;

typedef struct ADC_DBG_CTRL_REG_s {
    unsigned int stop_on_halt:1; // 
    unsigned int soft_stop:1; // 
} ADC_DBG_CTRL_REG_s;

typedef union ADC_DBG_CTRL_u {
    ADC_DBG_CTRL_REG_s DBG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DBG_CTRL_u;

typedef struct ADC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
    unsigned int clk_div:3; // 
} ADC_CLK_CTRL_REG_s;

typedef union ADC_CLK_CTRL_u {
    ADC_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CLK_CTRL_u;

typedef struct ADC_CLK_SEL_REG_s {
    unsigned int clk_sel:2; // 
} ADC_CLK_SEL_REG_s;

typedef union ADC_CLK_SEL_u {
    ADC_CLK_SEL_REG_s CLK_SEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CLK_SEL_u;

typedef struct ADC_INTR_EVENT_REG_s {
    unsigned int trig_to_dma_flag:1; // 
    unsigned int ov_flag:1; // 
    unsigned int seq_ov_flow:1; // 
    unsigned int wc_in_flag:1; // 
    unsigned int wc_high_flag:1; // 
    unsigned int wc_low_flag:1; // 
    unsigned int dma_done:1; // 
    unsigned int uf_flag:1; // 
    unsigned int result0_flag:1; // 
    unsigned int result1_flag:1; // 
    unsigned int result2_flag:1; // 
    unsigned int result3_flag:1; // 
    unsigned int result4_flag:1; // 
    unsigned int result5_flag:1; // 
    unsigned int result6_flag:1; // 
    unsigned int result7_flag:1; // 
    unsigned int result8_flag:1; // 
    unsigned int result9_flag:1; // 
    unsigned int result10_flag:1; // 
    unsigned int result11_flag:1; // 
    unsigned int result12_flag:1; // 
    unsigned int result13_flag:1; // 
    unsigned int result14_flag:1; // 
    unsigned int result15_flag:1; // 
} ADC_INTR_EVENT_REG_s;

typedef union ADC_INTR_EVENT_u {
    ADC_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EVENT_u;

typedef struct ADC_INTR_EN_0_REG_s {
    unsigned int trig_to_dma_flag_en:1; // 
    unsigned int ov_flag_en:1; // 
    unsigned int seq_ov_flow_en:1; // 
    unsigned int wc_in_flag_en:1; // 
    unsigned int wc_high_flag_en:1; // 
    unsigned int wc_low_flag_en:1; // 
    unsigned int dma_done_en:1; // 
    unsigned int uf_flag_en:1; // 
    unsigned int result0_flag_en:1; // 
    unsigned int result1_flag_en:1; // 
    unsigned int result2_flag_en:1; // 
    unsigned int result3_flag_en:1; // 
    unsigned int result4_flag_en:1; // 
    unsigned int result5_flag_en:1; // 
    unsigned int result6_flag_en:1; // 
    unsigned int result7_flag_en:1; // 
} ADC_INTR_EN_0_REG_s;

typedef union ADC_INTR_EN_0_u {
    ADC_INTR_EN_0_REG_s INTR_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EN_0_u;

typedef struct ADC_INTR_EN_1_REG_s {
    unsigned int result8_flag_en:1; // 
    unsigned int result9_flag_en:1; // 
    unsigned int result10_flag_en:1; // 
    unsigned int result11_flag_en:1; // 
    unsigned int result12_flag_en:1; // 
    unsigned int result13_flag_en:1; // 
    unsigned int result14_flag_en:1; // 
    unsigned int result15_flag_en:1; // 
} ADC_INTR_EN_1_REG_s;

typedef union ADC_INTR_EN_1_u {
    ADC_INTR_EN_1_REG_s INTR_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EN_1_u;

typedef struct ADC_DMA_EN_0_REG_s {
    unsigned int trig_to_dma_en:1; // 
    unsigned int ov_dma_en:1; // 
    unsigned int seq_ov_dma_en:1; // 
    unsigned int wc_in_dma_en:1; // 
    unsigned int wc_high_dma_en:1; // 
    unsigned int wc_low_dma_en:1; // 
    unsigned int dma_done_dma_en:1; // 
    unsigned int uf_dma_en:1; // 
    unsigned int result0_dma_en:1; // 
    unsigned int result1_dma_en:1; // 
    unsigned int result2_dma_en:1; // 
    unsigned int result3_dma_en:1; // 
    unsigned int result4_dma_en:1; // 
    unsigned int result5_dma_en:1; // 
    unsigned int result6_dma_en:1; // 
    unsigned int result7_dma_en:1; // 
} ADC_DMA_EN_0_REG_s;

typedef union ADC_DMA_EN_0_u {
    ADC_DMA_EN_0_REG_s DMA_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_EN_0_u;

typedef struct ADC_DMA_EN_1_REG_s {
    unsigned int result8_dma_en:1; // 
    unsigned int result9_dma_en:1; // 
    unsigned int result10_dma_en:1; // 
    unsigned int result11_dma_en:1; // 
    unsigned int result12_dma_en:1; // 
    unsigned int result13_dma_en:1; // 
    unsigned int result14_dma_en:1; // 
    unsigned int result15_dma_en:1; // 
} ADC_DMA_EN_1_REG_s;

typedef union ADC_DMA_EN_1_u {
    ADC_DMA_EN_1_REG_s DMA_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_EN_1_u;

typedef struct ADC_EVENT_EN_0_REG_s {
    unsigned int trig_to_dma_event_en:1; // 
    unsigned int ov_flag_event_en:1; // 
    unsigned int seq_ov_flow_event_en:1; // 
    unsigned int wc_in_event_en:1; // 
    unsigned int wc_high_event_en:1; // 
    unsigned int wc_low_event_en:1; // 
    unsigned int dma_done_event_en:1; // 
    unsigned int uf_flag_event_en:1; // 
    unsigned int result0_event_en:1; // 
    unsigned int result1_event_en:1; // 
    unsigned int result2_event_en:1; // 
    unsigned int result3_event_en:1; // 
    unsigned int result4_event_en:1; // 
    unsigned int result5_event_en:1; // 
    unsigned int result6_event_en:1; // 
    unsigned int result7_event_en:1; // 
} ADC_EVENT_EN_0_REG_s;

typedef union ADC_EVENT_EN_0_u {
    ADC_EVENT_EN_0_REG_s EVENT_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EVENT_EN_0_u;

typedef struct ADC_EVENT_EN_1_REG_s {
    unsigned int result8_event_en:1; // 
    unsigned int result9_event_en:1; // 
    unsigned int result10_event_en:1; // 
    unsigned int result11_event_en:1; // 
    unsigned int result12_event_en:1; // 
    unsigned int result13_event_en:1; // 
    unsigned int result14_event_en:1; // 
    unsigned int result15_event_en:1; // 
} ADC_EVENT_EN_1_REG_s;

typedef union ADC_EVENT_EN_1_u {
    ADC_EVENT_EN_1_REG_s EVENT_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EVENT_EN_1_u;

typedef struct ADC_INTR_NMI_EN_0_REG_s {
    unsigned int trig_to_dma_flag_nmi_en:1; // 
    unsigned int ov_flag_nmi_en:1; // 
    unsigned int seq_ov_flow_nmi_en:1; // 
    unsigned int wc_in_flag_nmi_en:1; // 
    unsigned int wc_high_flag_nmi_en:1; // 
    unsigned int wc_low_flag_nmi_en:1; // 
    unsigned int dma_done_nmi_en:1; // 
    unsigned int uf_flag_nmi_en:1; // 
    unsigned int result0_flag_nmi_en:1; // 
    unsigned int result1_flag_nmi_en:1; // 
    unsigned int result2_flag_nmi_en:1; // 
    unsigned int result3_flag_nmi_en:1; // 
    unsigned int result4_flag_nmi_en:1; // 
    unsigned int result5_flag_nmi_en:1; // 
    unsigned int result6_flag_nmi_en:1; // 
    unsigned int result7_flag_nmi_en:1; // 
} ADC_INTR_NMI_EN_0_REG_s;

typedef union ADC_INTR_NMI_EN_0_u {
    ADC_INTR_NMI_EN_0_REG_s INTR_NMI_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_NMI_EN_0_u;

typedef struct ADC_INTR_NMI_EN_1_REG_s {
    unsigned int result8_flag_nmi_en:1; // 
    unsigned int result9_flag_nmi_en:1; // 
    unsigned int result10_flag_nmi_en:1; // 
    unsigned int result11_flag_nmi_en:1; // 
    unsigned int result12_flag_nmi_en:1; // 
    unsigned int result13_flag_nmi_en:1; // 
    unsigned int result14_flag_nmi_en:1; // 
    unsigned int result15_flag_nmi_en:1; // 
} ADC_INTR_NMI_EN_1_REG_s;

typedef union ADC_INTR_NMI_EN_1_u {
    ADC_INTR_NMI_EN_1_REG_s INTR_NMI_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_NMI_EN_1_u;

typedef struct ADC_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} ADC_INTR_STS_REG_s;

typedef union ADC_INTR_STS_u {
    ADC_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_STS_u;

typedef struct ADC_INTR_SW_REG_s {
    unsigned int trig_to_dma_flag_sw_set:1; // 
    unsigned int ov_flag_sw_set:1; // 
    unsigned int seq_ov_flow_sw_set:1; // 
    unsigned int wc_in_flag_sw_set:1; // 
    unsigned int wc_high_flag_sw_set:1; // 
    unsigned int wc_low_flag_sw_set:1; // 
    unsigned int dma_done_sw_set:1; // 
    unsigned int uf_flag_sw_set:1; // 
    unsigned int result0_flag_sw_set:1; // 
    unsigned int result1_flag_sw_set:1; // 
    unsigned int result2_flag_sw_set:1; // 
    unsigned int result3_flag_sw_set:1; // 
    unsigned int result4_flag_sw_set:1; // 
    unsigned int result5_flag_sw_set:1; // 
    unsigned int result6_flag_sw_set:1; // 
    unsigned int result7_flag_sw_set:1; // 
    unsigned int result8_flag_sw_set:1; // 
    unsigned int result9_flag_sw_set:1; // 
    unsigned int result10_flag_sw_set:1; // 
    unsigned int result11_flag_sw_set:1; // 
    unsigned int result12_flag_sw_set:1; // 
    unsigned int result13_flag_sw_set:1; // 
    unsigned int result14_flag_sw_set:1; // 
    unsigned int result15_flag_sw_set:1; // 
} ADC_INTR_SW_REG_s;

typedef union ADC_INTR_SW_u {
    ADC_INTR_SW_REG_s INTR_SW;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_SW_u;

typedef struct ADC_CONV_CFG_REG_s {
    unsigned int conv_mode:2; // 
    unsigned int start_addr:4; // 
    unsigned int end_addr:4; // 
    unsigned int trigger_source:1; // 
    unsigned int adc_res:2; // 
    unsigned int en_conv:1; // 
} ADC_CONV_CFG_REG_s;

typedef union ADC_CONV_CFG_u {
    ADC_CONV_CFG_REG_s CONV_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CONV_CFG_u;

typedef struct ADC_CHNL_CFG_0_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_0_REG_s;

typedef union ADC_CHNL_CFG_0_u {
    ADC_CHNL_CFG_0_REG_s CHNL_CFG_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_0_u;

typedef struct ADC_CHNL_CFG_1_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_1_REG_s;

typedef union ADC_CHNL_CFG_1_u {
    ADC_CHNL_CFG_1_REG_s CHNL_CFG_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_1_u;

typedef struct ADC_CHNL_CFG_2_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_2_REG_s;

typedef union ADC_CHNL_CFG_2_u {
    ADC_CHNL_CFG_2_REG_s CHNL_CFG_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_2_u;

typedef struct ADC_CHNL_CFG_3_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_3_REG_s;

typedef union ADC_CHNL_CFG_3_u {
    ADC_CHNL_CFG_3_REG_s CHNL_CFG_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_3_u;

typedef struct ADC_CHNL_CFG_4_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_4_REG_s;

typedef union ADC_CHNL_CFG_4_u {
    ADC_CHNL_CFG_4_REG_s CHNL_CFG_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_4_u;

typedef struct ADC_CHNL_CFG_5_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_5_REG_s;

typedef union ADC_CHNL_CFG_5_u {
    ADC_CHNL_CFG_5_REG_s CHNL_CFG_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_5_u;

typedef struct ADC_CHNL_CFG_6_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_6_REG_s;

typedef union ADC_CHNL_CFG_6_u {
    ADC_CHNL_CFG_6_REG_s CHNL_CFG_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_6_u;

typedef struct ADC_CHNL_CFG_7_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_7_REG_s;

typedef union ADC_CHNL_CFG_7_u {
    ADC_CHNL_CFG_7_REG_s CHNL_CFG_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_7_u;

typedef struct ADC_CHNL_CFG_8_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_8_REG_s;

typedef union ADC_CHNL_CFG_8_u {
    ADC_CHNL_CFG_8_REG_s CHNL_CFG_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_8_u;

typedef struct ADC_CHNL_CFG_9_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_9_REG_s;

typedef union ADC_CHNL_CFG_9_u {
    ADC_CHNL_CFG_9_REG_s CHNL_CFG_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_9_u;

typedef struct ADC_CHNL_CFG_10_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_10_REG_s;

typedef union ADC_CHNL_CFG_10_u {
    ADC_CHNL_CFG_10_REG_s CHNL_CFG_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_10_u;

typedef struct ADC_CHNL_CFG_11_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_11_REG_s;

typedef union ADC_CHNL_CFG_11_u {
    ADC_CHNL_CFG_11_REG_s CHNL_CFG_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_11_u;

typedef struct ADC_CHNL_CFG_12_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_12_REG_s;

typedef union ADC_CHNL_CFG_12_u {
    ADC_CHNL_CFG_12_REG_s CHNL_CFG_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_12_u;

typedef struct ADC_CHNL_CFG_13_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_13_REG_s;

typedef union ADC_CHNL_CFG_13_u {
    ADC_CHNL_CFG_13_REG_s CHNL_CFG_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_13_u;

typedef struct ADC_CHNL_CFG_14_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_14_REG_s;

typedef union ADC_CHNL_CFG_14_u {
    ADC_CHNL_CFG_14_REG_s CHNL_CFG_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_14_u;

typedef struct ADC_CHNL_CFG_15_REG_s {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_15_REG_s;

typedef union ADC_CHNL_CFG_15_u {
    ADC_CHNL_CFG_15_REG_s CHNL_CFG_15;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_15_u;

typedef struct ADC_RESULT_CFG_REG_s {
    unsigned int fifo_en:1; // 
} ADC_RESULT_CFG_REG_s;

typedef union ADC_RESULT_CFG_u {
    ADC_RESULT_CFG_REG_s RESULT_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_CFG_u;

typedef struct ADC_HW_AVG_CFG_REG_s {
    unsigned int hw_sample_cnt:4; // 
    unsigned int hw_avg_sample_div:4; // 
} ADC_HW_AVG_CFG_REG_s;

typedef union ADC_HW_AVG_CFG_u {
    ADC_HW_AVG_CFG_REG_s HW_AVG_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_HW_AVG_CFG_u;

typedef struct ADC_RESULT_REG_s {
    unsigned int result:16; // 
} ADC_RESULT_REG_s;

typedef union ADC_RESULT_u {
    ADC_RESULT_REG_s RESULT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_u;

typedef struct ADC_TIMER_START_REG_s {
    unsigned int timer_cnt_start:4; // 
} ADC_TIMER_START_REG_s;

typedef union ADC_TIMER_START_u {
    ADC_TIMER_START_REG_s TIMER_START;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_START_u;

typedef struct ADC_TIMER_SAMPLE_REG_s {
    unsigned int timer_cnt_sample:5; // 
} ADC_TIMER_SAMPLE_REG_s;

typedef union ADC_TIMER_SAMPLE_u {
    ADC_TIMER_SAMPLE_REG_s TIMER_SAMPLE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_SAMPLE_u;

typedef struct ADC_TIMER_CONVERSION_REG_s {
    unsigned int timer_cnt_conversion:8; // 
} ADC_TIMER_CONVERSION_REG_s;

typedef union ADC_TIMER_CONVERSION_u {
    ADC_TIMER_CONVERSION_REG_s TIMER_CONVERSION;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_CONVERSION_u;

typedef struct ADC_WINDOW_COMP_REG_s {
    unsigned int window_comp_th_low:16; // 
    unsigned int window_comp_th_high:16; // 
} ADC_WINDOW_COMP_REG_s;

typedef union ADC_WINDOW_COMP_u {
    ADC_WINDOW_COMP_REG_s WINDOW_COMP;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_WINDOW_COMP_u;

typedef struct ADC_ADC_STATUS_REG_s {
    unsigned int adc_busy:1; // 
} ADC_ADC_STATUS_REG_s;

typedef union ADC_ADC_STATUS_u {
    ADC_ADC_STATUS_REG_s ADC_STATUS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_ADC_STATUS_u;

typedef struct ADC_DMA_REG_REG_s {
    unsigned int dma_en:1; // 
} ADC_DMA_REG_REG_s;

typedef union ADC_DMA_REG_u {
    ADC_DMA_REG_REG_s DMA_REG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_REG_u;

typedef struct ADC_POWER_DN_REG_s {
    unsigned int pwr_dn:1; // 
} ADC_POWER_DN_REG_s;

typedef union ADC_POWER_DN_u {
    ADC_POWER_DN_REG_s POWER_DN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_POWER_DN_u;

typedef struct ADC_SUBS_PORT_REG_s {
    unsigned int subs_port:4; // 
} ADC_SUBS_PORT_REG_s;

typedef union ADC_SUBS_PORT_u {
    ADC_SUBS_PORT_REG_s SUBS_PORT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SUBS_PORT_u;

typedef struct ADC_PUBS_PORT_REG_s {
    unsigned int pubs_port:4; // 
} ADC_PUBS_PORT_REG_s;

typedef union ADC_PUBS_PORT_u {
    ADC_PUBS_PORT_REG_s PUBS_PORT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_PUBS_PORT_u;

typedef struct ADC_CALIBRATION_REQ_REG_s {
    unsigned int cal_req:1; // 
    unsigned int cal_done:1; // 
    unsigned int cal_ctrl:18; // 
} ADC_CALIBRATION_REQ_REG_s;

typedef union ADC_CALIBRATION_REQ_u {
    ADC_CALIBRATION_REQ_REG_s CALIBRATION_REQ;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CALIBRATION_REQ_u;

typedef struct ADC_BLOCK_ASYNC_REQ_REG_s {
    unsigned int block_async_req:1; // 
} ADC_BLOCK_ASYNC_REQ_REG_s;

typedef union ADC_BLOCK_ASYNC_REQ_u {
    ADC_BLOCK_ASYNC_REQ_REG_s BLOCK_ASYNC_REQ;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_BLOCK_ASYNC_REQ_u;

typedef struct ADC_SW_TRIGGER_REG_s {
    unsigned int sw_trigger:1; // 
    unsigned int sw_trigger_en:1; // 
} ADC_SW_TRIGGER_REG_s;

typedef union ADC_SW_TRIGGER_u {
    ADC_SW_TRIGGER_REG_s SW_TRIGGER;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SW_TRIGGER_u;

typedef struct ADC_SPARE_CTRL_REG_s {
    unsigned int adc_cfg0:8; // 
    unsigned int adc_cfg1:8; // 
    unsigned int adc_cfg2:8; // 
    unsigned int adc_cfg3:8; // 
} ADC_SPARE_CTRL_REG_s;

typedef union ADC_SPARE_CTRL_u {
    ADC_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SPARE_CTRL_u;

typedef struct ADC_SPARE_STS_REG_s {
    unsigned int adc_sts0:8; // 
    unsigned int adc_sts1:8; // 
    unsigned int adc_sts2:8; // 
    unsigned int adc_sts3:8; // 
} ADC_SPARE_STS_REG_s;

typedef union ADC_SPARE_STS_u {
    ADC_SPARE_STS_REG_s SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SPARE_STS_u;

typedef struct ADC_EOC_ANA_REG_s {
    unsigned int eoc_ana:1; // 
} ADC_EOC_ANA_REG_s;

typedef union ADC_EOC_ANA_u {
    ADC_EOC_ANA_REG_s EOC_ANA;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EOC_ANA_u;

typedef struct ADC_TEMP_SENSOR_EN_REG_s {
    unsigned int temp_sensor_en:1; // 
} ADC_TEMP_SENSOR_EN_REG_s;

typedef union ADC_TEMP_SENSOR_EN_u {
    ADC_TEMP_SENSOR_EN_REG_s TEMP_SENSOR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TEMP_SENSOR_EN_u;

typedef struct ADC_SM_STATE_REG_s {
    unsigned int curr_state:4; // 
} ADC_SM_STATE_REG_s;

typedef union ADC_SM_STATE_u {
    ADC_SM_STATE_REG_s SM_STATE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SM_STATE_u;

typedef struct ADC_DMA_TRANSFER_CNT_REG_s {
    unsigned int dma_transfer_cnt:4; // 
} ADC_DMA_TRANSFER_CNT_REG_s;

typedef union ADC_DMA_TRANSFER_CNT_u {
    ADC_DMA_TRANSFER_CNT_REG_s DMA_TRANSFER_CNT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_TRANSFER_CNT_u;

typedef struct ADC_REGS_s{
    volatile ADC_DESC_u DESC;
    volatile ADC_PWR_EN_u PWR_EN;
    volatile ADC_RST_CTRL_u RST_CTRL;
    volatile ADC_RST_STS_u RST_STS;
    volatile ADC_DBG_CTRL_u DBG_CTRL;
    volatile ADC_CLK_CTRL_u CLK_CTRL;
    volatile ADC_CLK_SEL_u CLK_SEL;
    volatile ADC_INTR_EVENT_u INTR_EVENT;
    volatile ADC_INTR_EN_0_u INTR_EN_0;
    volatile ADC_INTR_EN_1_u INTR_EN_1;
    volatile ADC_DMA_EN_0_u DMA_EN_0;
    volatile ADC_DMA_EN_1_u DMA_EN_1;
    volatile ADC_EVENT_EN_0_u EVENT_EN_0;
    volatile ADC_EVENT_EN_1_u EVENT_EN_1;
    volatile ADC_INTR_NMI_EN_0_u INTR_NMI_EN_0;
    volatile ADC_INTR_NMI_EN_1_u INTR_NMI_EN_1;
    volatile ADC_INTR_STS_u INTR_STS;
    volatile ADC_INTR_SW_u INTR_SW;
    volatile ADC_CONV_CFG_u CONV_CFG;
    volatile ADC_CHNL_CFG_0_u CHNL_CFG_0;
    volatile ADC_CHNL_CFG_1_u CHNL_CFG_1;
    volatile ADC_CHNL_CFG_2_u CHNL_CFG_2;
    volatile ADC_CHNL_CFG_3_u CHNL_CFG_3;
    volatile ADC_CHNL_CFG_4_u CHNL_CFG_4;
    volatile ADC_CHNL_CFG_5_u CHNL_CFG_5;
    volatile ADC_CHNL_CFG_6_u CHNL_CFG_6;
    volatile ADC_CHNL_CFG_7_u CHNL_CFG_7;
    volatile ADC_CHNL_CFG_8_u CHNL_CFG_8;
    volatile ADC_CHNL_CFG_9_u CHNL_CFG_9;
    volatile ADC_CHNL_CFG_10_u CHNL_CFG_10;
    volatile ADC_CHNL_CFG_11_u CHNL_CFG_11;
    volatile ADC_CHNL_CFG_12_u CHNL_CFG_12;
    volatile ADC_CHNL_CFG_13_u CHNL_CFG_13;
    volatile ADC_CHNL_CFG_14_u CHNL_CFG_14;
    volatile ADC_CHNL_CFG_15_u CHNL_CFG_15;
    volatile ADC_RESULT_CFG_u RESULT_CFG;
    volatile ADC_HW_AVG_CFG_u HW_AVG_CFG;
    volatile ADC_RESULT_u RESULT[16];
    volatile ADC_TIMER_START_u TIMER_START;
    volatile ADC_TIMER_SAMPLE_u TIMER_SAMPLE;
    volatile ADC_TIMER_CONVERSION_u TIMER_CONVERSION;
    volatile ADC_WINDOW_COMP_u WINDOW_COMP;
    volatile ADC_ADC_STATUS_u ADC_STATUS;
    volatile ADC_DMA_REG_u DMA_REG;
    volatile ADC_POWER_DN_u POWER_DN;
    volatile ADC_SUBS_PORT_u SUBS_PORT;
    volatile ADC_PUBS_PORT_u PUBS_PORT;
    volatile ADC_CALIBRATION_REQ_u CALIBRATION_REQ;
    volatile ADC_BLOCK_ASYNC_REQ_u BLOCK_ASYNC_REQ;
    volatile ADC_SW_TRIGGER_u SW_TRIGGER;
    volatile ADC_SPARE_CTRL_u SPARE_CTRL;
    volatile ADC_SPARE_STS_u SPARE_STS;
    volatile ADC_EOC_ANA_u EOC_ANA;
    volatile ADC_TEMP_SENSOR_EN_u TEMP_SENSOR_EN;
    volatile ADC_SM_STATE_u SM_STATE;
    volatile ADC_DMA_TRANSFER_CNT_u DMA_TRANSFER_CNT;
} ADC_REGS_s;

#define ADC_DESC_module_type_OFS (0)
#define ADC_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define ADC_DESC_module_subtype_OFS (8)
#define ADC_DESC_module_subtype_MASK ((uint32_t)0x0000FF00U)
#define ADC_DESC_major_rev_OFS (16)
#define ADC_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define ADC_DESC_minor_rev_OFS (20)
#define ADC_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define ADC_PWR_EN_pwr_en_OFS (0)
#define ADC_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define ADC_PWR_EN_pwr_en_key_OFS (24)
#define ADC_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define ADC_RST_CTRL_rst_OFS (0)
#define ADC_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define ADC_RST_CTRL_rst_sts_clr_OFS (1)
#define ADC_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define ADC_RST_CTRL_rst_key_OFS (24)
#define ADC_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define ADC_RST_STS_rst_sts_OFS (0)
#define ADC_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define ADC_DBG_CTRL_stop_on_halt_OFS (0)
#define ADC_DBG_CTRL_stop_on_halt_MASK ((uint32_t)0x00000001U)
#define ADC_DBG_CTRL_soft_stop_OFS (1)
#define ADC_DBG_CTRL_soft_stop_MASK ((uint32_t)0x00000002U)
#define ADC_CLK_CTRL_clk_en_OFS (0)
#define ADC_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define ADC_CLK_CTRL_clk_div_OFS (1)
#define ADC_CLK_CTRL_clk_div_MASK ((uint32_t)0x0000000EU)
#define ADC_CLK_SEL_clk_sel_OFS (0)
#define ADC_CLK_SEL_clk_sel_MASK ((uint32_t)0x00000003U)
#define ADC_INTR_EVENT_trig_to_dma_flag_OFS (0)
#define ADC_INTR_EVENT_trig_to_dma_flag_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EVENT_ov_flag_OFS (1)
#define ADC_INTR_EVENT_ov_flag_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EVENT_seq_ov_flow_OFS (2)
#define ADC_INTR_EVENT_seq_ov_flow_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EVENT_wc_in_flag_OFS (3)
#define ADC_INTR_EVENT_wc_in_flag_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EVENT_wc_high_flag_OFS (4)
#define ADC_INTR_EVENT_wc_high_flag_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EVENT_wc_low_flag_OFS (5)
#define ADC_INTR_EVENT_wc_low_flag_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EVENT_dma_done_OFS (6)
#define ADC_INTR_EVENT_dma_done_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EVENT_uf_flag_OFS (7)
#define ADC_INTR_EVENT_uf_flag_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_EVENT_result0_flag_OFS (8)
#define ADC_INTR_EVENT_result0_flag_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_EVENT_result1_flag_OFS (9)
#define ADC_INTR_EVENT_result1_flag_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_EVENT_result2_flag_OFS (10)
#define ADC_INTR_EVENT_result2_flag_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_EVENT_result3_flag_OFS (11)
#define ADC_INTR_EVENT_result3_flag_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_EVENT_result4_flag_OFS (12)
#define ADC_INTR_EVENT_result4_flag_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_EVENT_result5_flag_OFS (13)
#define ADC_INTR_EVENT_result5_flag_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_EVENT_result6_flag_OFS (14)
#define ADC_INTR_EVENT_result6_flag_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_EVENT_result7_flag_OFS (15)
#define ADC_INTR_EVENT_result7_flag_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_EVENT_result8_flag_OFS (16)
#define ADC_INTR_EVENT_result8_flag_MASK ((uint32_t)0x00010000U)
#define ADC_INTR_EVENT_result9_flag_OFS (17)
#define ADC_INTR_EVENT_result9_flag_MASK ((uint32_t)0x00020000U)
#define ADC_INTR_EVENT_result10_flag_OFS (18)
#define ADC_INTR_EVENT_result10_flag_MASK ((uint32_t)0x00040000U)
#define ADC_INTR_EVENT_result11_flag_OFS (19)
#define ADC_INTR_EVENT_result11_flag_MASK ((uint32_t)0x00080000U)
#define ADC_INTR_EVENT_result12_flag_OFS (20)
#define ADC_INTR_EVENT_result12_flag_MASK ((uint32_t)0x00100000U)
#define ADC_INTR_EVENT_result13_flag_OFS (21)
#define ADC_INTR_EVENT_result13_flag_MASK ((uint32_t)0x00200000U)
#define ADC_INTR_EVENT_result14_flag_OFS (22)
#define ADC_INTR_EVENT_result14_flag_MASK ((uint32_t)0x00400000U)
#define ADC_INTR_EVENT_result15_flag_OFS (23)
#define ADC_INTR_EVENT_result15_flag_MASK ((uint32_t)0x00800000U)
#define ADC_INTR_EN_0_trig_to_dma_flag_en_OFS (0)
#define ADC_INTR_EN_0_trig_to_dma_flag_en_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EN_0_ov_flag_en_OFS (1)
#define ADC_INTR_EN_0_ov_flag_en_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EN_0_seq_ov_flow_en_OFS (2)
#define ADC_INTR_EN_0_seq_ov_flow_en_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EN_0_wc_in_flag_en_OFS (3)
#define ADC_INTR_EN_0_wc_in_flag_en_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EN_0_wc_high_flag_en_OFS (4)
#define ADC_INTR_EN_0_wc_high_flag_en_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EN_0_wc_low_flag_en_OFS (5)
#define ADC_INTR_EN_0_wc_low_flag_en_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EN_0_dma_done_en_OFS (6)
#define ADC_INTR_EN_0_dma_done_en_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EN_0_uf_flag_en_OFS (7)
#define ADC_INTR_EN_0_uf_flag_en_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_EN_0_result0_flag_en_OFS (8)
#define ADC_INTR_EN_0_result0_flag_en_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_EN_0_result1_flag_en_OFS (9)
#define ADC_INTR_EN_0_result1_flag_en_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_EN_0_result2_flag_en_OFS (10)
#define ADC_INTR_EN_0_result2_flag_en_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_EN_0_result3_flag_en_OFS (11)
#define ADC_INTR_EN_0_result3_flag_en_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_EN_0_result4_flag_en_OFS (12)
#define ADC_INTR_EN_0_result4_flag_en_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_EN_0_result5_flag_en_OFS (13)
#define ADC_INTR_EN_0_result5_flag_en_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_EN_0_result6_flag_en_OFS (14)
#define ADC_INTR_EN_0_result6_flag_en_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_EN_0_result7_flag_en_OFS (15)
#define ADC_INTR_EN_0_result7_flag_en_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_EN_1_result8_flag_en_OFS (0)
#define ADC_INTR_EN_1_result8_flag_en_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EN_1_result9_flag_en_OFS (1)
#define ADC_INTR_EN_1_result9_flag_en_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EN_1_result10_flag_en_OFS (2)
#define ADC_INTR_EN_1_result10_flag_en_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EN_1_result11_flag_en_OFS (3)
#define ADC_INTR_EN_1_result11_flag_en_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EN_1_result12_flag_en_OFS (4)
#define ADC_INTR_EN_1_result12_flag_en_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EN_1_result13_flag_en_OFS (5)
#define ADC_INTR_EN_1_result13_flag_en_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EN_1_result14_flag_en_OFS (6)
#define ADC_INTR_EN_1_result14_flag_en_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EN_1_result15_flag_en_OFS (7)
#define ADC_INTR_EN_1_result15_flag_en_MASK ((uint32_t)0x00000080U)
#define ADC_DMA_EN_0_trig_to_dma_en_OFS (0)
#define ADC_DMA_EN_0_trig_to_dma_en_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_EN_0_ov_dma_en_OFS (1)
#define ADC_DMA_EN_0_ov_dma_en_MASK ((uint32_t)0x00000002U)
#define ADC_DMA_EN_0_seq_ov_dma_en_OFS (2)
#define ADC_DMA_EN_0_seq_ov_dma_en_MASK ((uint32_t)0x00000004U)
#define ADC_DMA_EN_0_wc_in_dma_en_OFS (3)
#define ADC_DMA_EN_0_wc_in_dma_en_MASK ((uint32_t)0x00000008U)
#define ADC_DMA_EN_0_wc_high_dma_en_OFS (4)
#define ADC_DMA_EN_0_wc_high_dma_en_MASK ((uint32_t)0x00000010U)
#define ADC_DMA_EN_0_wc_low_dma_en_OFS (5)
#define ADC_DMA_EN_0_wc_low_dma_en_MASK ((uint32_t)0x00000020U)
#define ADC_DMA_EN_0_dma_done_dma_en_OFS (6)
#define ADC_DMA_EN_0_dma_done_dma_en_MASK ((uint32_t)0x00000040U)
#define ADC_DMA_EN_0_uf_dma_en_OFS (7)
#define ADC_DMA_EN_0_uf_dma_en_MASK ((uint32_t)0x00000080U)
#define ADC_DMA_EN_0_result0_dma_en_OFS (8)
#define ADC_DMA_EN_0_result0_dma_en_MASK ((uint32_t)0x00000100U)
#define ADC_DMA_EN_0_result1_dma_en_OFS (9)
#define ADC_DMA_EN_0_result1_dma_en_MASK ((uint32_t)0x00000200U)
#define ADC_DMA_EN_0_result2_dma_en_OFS (10)
#define ADC_DMA_EN_0_result2_dma_en_MASK ((uint32_t)0x00000400U)
#define ADC_DMA_EN_0_result3_dma_en_OFS (11)
#define ADC_DMA_EN_0_result3_dma_en_MASK ((uint32_t)0x00000800U)
#define ADC_DMA_EN_0_result4_dma_en_OFS (12)
#define ADC_DMA_EN_0_result4_dma_en_MASK ((uint32_t)0x00001000U)
#define ADC_DMA_EN_0_result5_dma_en_OFS (13)
#define ADC_DMA_EN_0_result5_dma_en_MASK ((uint32_t)0x00002000U)
#define ADC_DMA_EN_0_result6_dma_en_OFS (14)
#define ADC_DMA_EN_0_result6_dma_en_MASK ((uint32_t)0x00004000U)
#define ADC_DMA_EN_0_result7_dma_en_OFS (15)
#define ADC_DMA_EN_0_result7_dma_en_MASK ((uint32_t)0x00008000U)
#define ADC_DMA_EN_1_result8_dma_en_OFS (0)
#define ADC_DMA_EN_1_result8_dma_en_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_EN_1_result9_dma_en_OFS (1)
#define ADC_DMA_EN_1_result9_dma_en_MASK ((uint32_t)0x00000002U)
#define ADC_DMA_EN_1_result10_dma_en_OFS (2)
#define ADC_DMA_EN_1_result10_dma_en_MASK ((uint32_t)0x00000004U)
#define ADC_DMA_EN_1_result11_dma_en_OFS (3)
#define ADC_DMA_EN_1_result11_dma_en_MASK ((uint32_t)0x00000008U)
#define ADC_DMA_EN_1_result12_dma_en_OFS (4)
#define ADC_DMA_EN_1_result12_dma_en_MASK ((uint32_t)0x00000010U)
#define ADC_DMA_EN_1_result13_dma_en_OFS (5)
#define ADC_DMA_EN_1_result13_dma_en_MASK ((uint32_t)0x00000020U)
#define ADC_DMA_EN_1_result14_dma_en_OFS (6)
#define ADC_DMA_EN_1_result14_dma_en_MASK ((uint32_t)0x00000040U)
#define ADC_DMA_EN_1_result15_dma_en_OFS (7)
#define ADC_DMA_EN_1_result15_dma_en_MASK ((uint32_t)0x00000080U)
#define ADC_EVENT_EN_0_trig_to_dma_event_en_OFS (0)
#define ADC_EVENT_EN_0_trig_to_dma_event_en_MASK ((uint32_t)0x00000001U)
#define ADC_EVENT_EN_0_ov_flag_event_en_OFS (1)
#define ADC_EVENT_EN_0_ov_flag_event_en_MASK ((uint32_t)0x00000002U)
#define ADC_EVENT_EN_0_seq_ov_flow_event_en_OFS (2)
#define ADC_EVENT_EN_0_seq_ov_flow_event_en_MASK ((uint32_t)0x00000004U)
#define ADC_EVENT_EN_0_wc_in_event_en_OFS (3)
#define ADC_EVENT_EN_0_wc_in_event_en_MASK ((uint32_t)0x00000008U)
#define ADC_EVENT_EN_0_wc_high_event_en_OFS (4)
#define ADC_EVENT_EN_0_wc_high_event_en_MASK ((uint32_t)0x00000010U)
#define ADC_EVENT_EN_0_wc_low_event_en_OFS (5)
#define ADC_EVENT_EN_0_wc_low_event_en_MASK ((uint32_t)0x00000020U)
#define ADC_EVENT_EN_0_dma_done_event_en_OFS (6)
#define ADC_EVENT_EN_0_dma_done_event_en_MASK ((uint32_t)0x00000040U)
#define ADC_EVENT_EN_0_uf_flag_event_en_OFS (7)
#define ADC_EVENT_EN_0_uf_flag_event_en_MASK ((uint32_t)0x00000080U)
#define ADC_EVENT_EN_0_result0_event_en_OFS (8)
#define ADC_EVENT_EN_0_result0_event_en_MASK ((uint32_t)0x00000100U)
#define ADC_EVENT_EN_0_result1_event_en_OFS (9)
#define ADC_EVENT_EN_0_result1_event_en_MASK ((uint32_t)0x00000200U)
#define ADC_EVENT_EN_0_result2_event_en_OFS (10)
#define ADC_EVENT_EN_0_result2_event_en_MASK ((uint32_t)0x00000400U)
#define ADC_EVENT_EN_0_result3_event_en_OFS (11)
#define ADC_EVENT_EN_0_result3_event_en_MASK ((uint32_t)0x00000800U)
#define ADC_EVENT_EN_0_result4_event_en_OFS (12)
#define ADC_EVENT_EN_0_result4_event_en_MASK ((uint32_t)0x00001000U)
#define ADC_EVENT_EN_0_result5_event_en_OFS (13)
#define ADC_EVENT_EN_0_result5_event_en_MASK ((uint32_t)0x00002000U)
#define ADC_EVENT_EN_0_result6_event_en_OFS (14)
#define ADC_EVENT_EN_0_result6_event_en_MASK ((uint32_t)0x00004000U)
#define ADC_EVENT_EN_0_result7_event_en_OFS (15)
#define ADC_EVENT_EN_0_result7_event_en_MASK ((uint32_t)0x00008000U)
#define ADC_EVENT_EN_1_result8_event_en_OFS (0)
#define ADC_EVENT_EN_1_result8_event_en_MASK ((uint32_t)0x00000001U)
#define ADC_EVENT_EN_1_result9_event_en_OFS (1)
#define ADC_EVENT_EN_1_result9_event_en_MASK ((uint32_t)0x00000002U)
#define ADC_EVENT_EN_1_result10_event_en_OFS (2)
#define ADC_EVENT_EN_1_result10_event_en_MASK ((uint32_t)0x00000004U)
#define ADC_EVENT_EN_1_result11_event_en_OFS (3)
#define ADC_EVENT_EN_1_result11_event_en_MASK ((uint32_t)0x00000008U)
#define ADC_EVENT_EN_1_result12_event_en_OFS (4)
#define ADC_EVENT_EN_1_result12_event_en_MASK ((uint32_t)0x00000010U)
#define ADC_EVENT_EN_1_result13_event_en_OFS (5)
#define ADC_EVENT_EN_1_result13_event_en_MASK ((uint32_t)0x00000020U)
#define ADC_EVENT_EN_1_result14_event_en_OFS (6)
#define ADC_EVENT_EN_1_result14_event_en_MASK ((uint32_t)0x00000040U)
#define ADC_EVENT_EN_1_result15_event_en_OFS (7)
#define ADC_EVENT_EN_1_result15_event_en_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_NMI_EN_0_trig_to_dma_flag_nmi_en_OFS (0)
#define ADC_INTR_NMI_EN_0_trig_to_dma_flag_nmi_en_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_NMI_EN_0_ov_flag_nmi_en_OFS (1)
#define ADC_INTR_NMI_EN_0_ov_flag_nmi_en_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_NMI_EN_0_seq_ov_flow_nmi_en_OFS (2)
#define ADC_INTR_NMI_EN_0_seq_ov_flow_nmi_en_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_NMI_EN_0_wc_in_flag_nmi_en_OFS (3)
#define ADC_INTR_NMI_EN_0_wc_in_flag_nmi_en_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_NMI_EN_0_wc_high_flag_nmi_en_OFS (4)
#define ADC_INTR_NMI_EN_0_wc_high_flag_nmi_en_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_NMI_EN_0_wc_low_flag_nmi_en_OFS (5)
#define ADC_INTR_NMI_EN_0_wc_low_flag_nmi_en_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_NMI_EN_0_dma_done_nmi_en_OFS (6)
#define ADC_INTR_NMI_EN_0_dma_done_nmi_en_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_NMI_EN_0_uf_flag_nmi_en_OFS (7)
#define ADC_INTR_NMI_EN_0_uf_flag_nmi_en_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_NMI_EN_0_result0_flag_nmi_en_OFS (8)
#define ADC_INTR_NMI_EN_0_result0_flag_nmi_en_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_NMI_EN_0_result1_flag_nmi_en_OFS (9)
#define ADC_INTR_NMI_EN_0_result1_flag_nmi_en_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_NMI_EN_0_result2_flag_nmi_en_OFS (10)
#define ADC_INTR_NMI_EN_0_result2_flag_nmi_en_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_NMI_EN_0_result3_flag_nmi_en_OFS (11)
#define ADC_INTR_NMI_EN_0_result3_flag_nmi_en_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_NMI_EN_0_result4_flag_nmi_en_OFS (12)
#define ADC_INTR_NMI_EN_0_result4_flag_nmi_en_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_NMI_EN_0_result5_flag_nmi_en_OFS (13)
#define ADC_INTR_NMI_EN_0_result5_flag_nmi_en_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_NMI_EN_0_result6_flag_nmi_en_OFS (14)
#define ADC_INTR_NMI_EN_0_result6_flag_nmi_en_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_NMI_EN_0_result7_flag_nmi_en_OFS (15)
#define ADC_INTR_NMI_EN_0_result7_flag_nmi_en_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_NMI_EN_1_result8_flag_nmi_en_OFS (0)
#define ADC_INTR_NMI_EN_1_result8_flag_nmi_en_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_NMI_EN_1_result9_flag_nmi_en_OFS (1)
#define ADC_INTR_NMI_EN_1_result9_flag_nmi_en_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_NMI_EN_1_result10_flag_nmi_en_OFS (2)
#define ADC_INTR_NMI_EN_1_result10_flag_nmi_en_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_NMI_EN_1_result11_flag_nmi_en_OFS (3)
#define ADC_INTR_NMI_EN_1_result11_flag_nmi_en_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_NMI_EN_1_result12_flag_nmi_en_OFS (4)
#define ADC_INTR_NMI_EN_1_result12_flag_nmi_en_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_NMI_EN_1_result13_flag_nmi_en_OFS (5)
#define ADC_INTR_NMI_EN_1_result13_flag_nmi_en_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_NMI_EN_1_result14_flag_nmi_en_OFS (6)
#define ADC_INTR_NMI_EN_1_result14_flag_nmi_en_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_NMI_EN_1_result15_flag_nmi_en_OFS (7)
#define ADC_INTR_NMI_EN_1_result15_flag_nmi_en_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_STS_intr_first_OFS (0)
#define ADC_INTR_STS_intr_first_MASK ((uint32_t)0x000000FFU)
#define ADC_INTR_SW_trig_to_dma_flag_sw_set_OFS (0)
#define ADC_INTR_SW_trig_to_dma_flag_sw_set_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_SW_ov_flag_sw_set_OFS (1)
#define ADC_INTR_SW_ov_flag_sw_set_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_SW_seq_ov_flow_sw_set_OFS (2)
#define ADC_INTR_SW_seq_ov_flow_sw_set_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_SW_wc_in_flag_sw_set_OFS (3)
#define ADC_INTR_SW_wc_in_flag_sw_set_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_SW_wc_high_flag_sw_set_OFS (4)
#define ADC_INTR_SW_wc_high_flag_sw_set_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_SW_wc_low_flag_sw_set_OFS (5)
#define ADC_INTR_SW_wc_low_flag_sw_set_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_SW_dma_done_sw_set_OFS (6)
#define ADC_INTR_SW_dma_done_sw_set_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_SW_uf_flag_sw_set_OFS (7)
#define ADC_INTR_SW_uf_flag_sw_set_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_SW_result0_flag_sw_set_OFS (8)
#define ADC_INTR_SW_result0_flag_sw_set_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_SW_result1_flag_sw_set_OFS (9)
#define ADC_INTR_SW_result1_flag_sw_set_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_SW_result2_flag_sw_set_OFS (10)
#define ADC_INTR_SW_result2_flag_sw_set_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_SW_result3_flag_sw_set_OFS (11)
#define ADC_INTR_SW_result3_flag_sw_set_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_SW_result4_flag_sw_set_OFS (12)
#define ADC_INTR_SW_result4_flag_sw_set_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_SW_result5_flag_sw_set_OFS (13)
#define ADC_INTR_SW_result5_flag_sw_set_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_SW_result6_flag_sw_set_OFS (14)
#define ADC_INTR_SW_result6_flag_sw_set_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_SW_result7_flag_sw_set_OFS (15)
#define ADC_INTR_SW_result7_flag_sw_set_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_SW_result8_flag_sw_set_OFS (16)
#define ADC_INTR_SW_result8_flag_sw_set_MASK ((uint32_t)0x00010000U)
#define ADC_INTR_SW_result9_flag_sw_set_OFS (17)
#define ADC_INTR_SW_result9_flag_sw_set_MASK ((uint32_t)0x00020000U)
#define ADC_INTR_SW_result10_flag_sw_set_OFS (18)
#define ADC_INTR_SW_result10_flag_sw_set_MASK ((uint32_t)0x00040000U)
#define ADC_INTR_SW_result11_flag_sw_set_OFS (19)
#define ADC_INTR_SW_result11_flag_sw_set_MASK ((uint32_t)0x00080000U)
#define ADC_INTR_SW_result12_flag_sw_set_OFS (20)
#define ADC_INTR_SW_result12_flag_sw_set_MASK ((uint32_t)0x00100000U)
#define ADC_INTR_SW_result13_flag_sw_set_OFS (21)
#define ADC_INTR_SW_result13_flag_sw_set_MASK ((uint32_t)0x00200000U)
#define ADC_INTR_SW_result14_flag_sw_set_OFS (22)
#define ADC_INTR_SW_result14_flag_sw_set_MASK ((uint32_t)0x00400000U)
#define ADC_INTR_SW_result15_flag_sw_set_OFS (23)
#define ADC_INTR_SW_result15_flag_sw_set_MASK ((uint32_t)0x00800000U)
#define ADC_CONV_CFG_conv_mode_OFS (0)
#define ADC_CONV_CFG_conv_mode_MASK ((uint32_t)0x00000003U)
#define ADC_CONV_CFG_start_addr_OFS (2)
#define ADC_CONV_CFG_start_addr_MASK ((uint32_t)0x0000003CU)
#define ADC_CONV_CFG_end_addr_OFS (6)
#define ADC_CONV_CFG_end_addr_MASK ((uint32_t)0x000003C0U)
#define ADC_CONV_CFG_trigger_source_OFS (10)
#define ADC_CONV_CFG_trigger_source_MASK ((uint32_t)0x00000400U)
#define ADC_CONV_CFG_adc_res_OFS (11)
#define ADC_CONV_CFG_adc_res_MASK ((uint32_t)0x00001800U)
#define ADC_CONV_CFG_en_conv_OFS (13)
#define ADC_CONV_CFG_en_conv_MASK ((uint32_t)0x00002000U)
#define ADC_CHNL_CFG_0_channel_sel_OFS (0)
#define ADC_CHNL_CFG_0_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_0_vref_sel_OFS (4)
#define ADC_CHNL_CFG_0_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_0_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_0_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_0_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_0_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_0_bcs_en_OFS (8)
#define ADC_CHNL_CFG_0_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_1_channel_sel_OFS (0)
#define ADC_CHNL_CFG_1_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_1_vref_sel_OFS (4)
#define ADC_CHNL_CFG_1_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_1_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_1_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_1_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_1_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_1_bcs_en_OFS (8)
#define ADC_CHNL_CFG_1_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_2_channel_sel_OFS (0)
#define ADC_CHNL_CFG_2_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_2_vref_sel_OFS (4)
#define ADC_CHNL_CFG_2_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_2_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_2_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_2_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_2_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_2_bcs_en_OFS (8)
#define ADC_CHNL_CFG_2_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_3_channel_sel_OFS (0)
#define ADC_CHNL_CFG_3_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_3_vref_sel_OFS (4)
#define ADC_CHNL_CFG_3_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_3_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_3_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_3_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_3_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_3_bcs_en_OFS (8)
#define ADC_CHNL_CFG_3_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_4_channel_sel_OFS (0)
#define ADC_CHNL_CFG_4_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_4_vref_sel_OFS (4)
#define ADC_CHNL_CFG_4_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_4_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_4_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_4_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_4_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_4_bcs_en_OFS (8)
#define ADC_CHNL_CFG_4_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_5_channel_sel_OFS (0)
#define ADC_CHNL_CFG_5_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_5_vref_sel_OFS (4)
#define ADC_CHNL_CFG_5_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_5_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_5_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_5_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_5_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_5_bcs_en_OFS (8)
#define ADC_CHNL_CFG_5_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_6_channel_sel_OFS (0)
#define ADC_CHNL_CFG_6_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_6_vref_sel_OFS (4)
#define ADC_CHNL_CFG_6_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_6_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_6_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_6_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_6_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_6_bcs_en_OFS (8)
#define ADC_CHNL_CFG_6_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_7_channel_sel_OFS (0)
#define ADC_CHNL_CFG_7_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_7_vref_sel_OFS (4)
#define ADC_CHNL_CFG_7_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_7_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_7_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_7_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_7_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_7_bcs_en_OFS (8)
#define ADC_CHNL_CFG_7_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_8_channel_sel_OFS (0)
#define ADC_CHNL_CFG_8_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_8_vref_sel_OFS (4)
#define ADC_CHNL_CFG_8_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_8_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_8_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_8_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_8_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_8_bcs_en_OFS (8)
#define ADC_CHNL_CFG_8_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_9_channel_sel_OFS (0)
#define ADC_CHNL_CFG_9_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_9_vref_sel_OFS (4)
#define ADC_CHNL_CFG_9_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_9_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_9_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_9_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_9_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_9_bcs_en_OFS (8)
#define ADC_CHNL_CFG_9_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_10_channel_sel_OFS (0)
#define ADC_CHNL_CFG_10_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_10_vref_sel_OFS (4)
#define ADC_CHNL_CFG_10_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_10_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_10_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_10_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_10_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_10_bcs_en_OFS (8)
#define ADC_CHNL_CFG_10_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_11_channel_sel_OFS (0)
#define ADC_CHNL_CFG_11_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_11_vref_sel_OFS (4)
#define ADC_CHNL_CFG_11_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_11_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_11_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_11_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_11_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_11_bcs_en_OFS (8)
#define ADC_CHNL_CFG_11_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_12_channel_sel_OFS (0)
#define ADC_CHNL_CFG_12_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_12_vref_sel_OFS (4)
#define ADC_CHNL_CFG_12_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_12_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_12_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_12_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_12_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_12_bcs_en_OFS (8)
#define ADC_CHNL_CFG_12_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_13_channel_sel_OFS (0)
#define ADC_CHNL_CFG_13_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_13_vref_sel_OFS (4)
#define ADC_CHNL_CFG_13_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_13_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_13_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_13_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_13_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_13_bcs_en_OFS (8)
#define ADC_CHNL_CFG_13_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_14_channel_sel_OFS (0)
#define ADC_CHNL_CFG_14_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_14_vref_sel_OFS (4)
#define ADC_CHNL_CFG_14_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_14_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_14_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_14_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_14_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_14_bcs_en_OFS (8)
#define ADC_CHNL_CFG_14_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_15_channel_sel_OFS (0)
#define ADC_CHNL_CFG_15_channel_sel_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_15_vref_sel_OFS (4)
#define ADC_CHNL_CFG_15_vref_sel_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_15_hw_avg_en_OFS (6)
#define ADC_CHNL_CFG_15_hw_avg_en_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_15_window_comp_en_OFS (7)
#define ADC_CHNL_CFG_15_window_comp_en_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_15_bcs_en_OFS (8)
#define ADC_CHNL_CFG_15_bcs_en_MASK ((uint32_t)0x00000100U)
#define ADC_RESULT_CFG_fifo_en_OFS (0)
#define ADC_RESULT_CFG_fifo_en_MASK ((uint32_t)0x00000001U)
#define ADC_HW_AVG_CFG_hw_sample_cnt_OFS (0)
#define ADC_HW_AVG_CFG_hw_sample_cnt_MASK ((uint32_t)0x0000000FU)
#define ADC_HW_AVG_CFG_hw_avg_sample_div_OFS (4)
#define ADC_HW_AVG_CFG_hw_avg_sample_div_MASK ((uint32_t)0x000000F0U)
#define ADC_RESULT_result_OFS (0)
#define ADC_RESULT_result_MASK ((uint32_t)0x0000FFFFU)
#define ADC_TIMER_START_timer_cnt_start_OFS (0)
#define ADC_TIMER_START_timer_cnt_start_MASK ((uint32_t)0x0000000FU)
#define ADC_TIMER_SAMPLE_timer_cnt_sample_OFS (0)
#define ADC_TIMER_SAMPLE_timer_cnt_sample_MASK ((uint32_t)0x0000001FU)
#define ADC_TIMER_CONVERSION_timer_cnt_conversion_OFS (0)
#define ADC_TIMER_CONVERSION_timer_cnt_conversion_MASK ((uint32_t)0x000000FFU)
#define ADC_WINDOW_COMP_window_comp_th_low_OFS (0)
#define ADC_WINDOW_COMP_window_comp_th_low_MASK ((uint32_t)0x0000FFFFU)
#define ADC_WINDOW_COMP_window_comp_th_high_OFS (16)
#define ADC_WINDOW_COMP_window_comp_th_high_MASK ((uint32_t)0xFFFF0000U)
#define ADC_ADC_STATUS_adc_busy_OFS (0)
#define ADC_ADC_STATUS_adc_busy_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_REG_dma_en_OFS (0)
#define ADC_DMA_REG_dma_en_MASK ((uint32_t)0x00000001U)
#define ADC_POWER_DN_pwr_dn_OFS (0)
#define ADC_POWER_DN_pwr_dn_MASK ((uint32_t)0x00000001U)
#define ADC_SUBS_PORT_subs_port_OFS (0)
#define ADC_SUBS_PORT_subs_port_MASK ((uint32_t)0x0000000FU)
#define ADC_PUBS_PORT_pubs_port_OFS (0)
#define ADC_PUBS_PORT_pubs_port_MASK ((uint32_t)0x0000000FU)
#define ADC_CALIBRATION_REQ_cal_req_OFS (0)
#define ADC_CALIBRATION_REQ_cal_req_MASK ((uint32_t)0x00000001U)
#define ADC_CALIBRATION_REQ_cal_done_OFS (1)
#define ADC_CALIBRATION_REQ_cal_done_MASK ((uint32_t)0x00000002U)
#define ADC_CALIBRATION_REQ_cal_ctrl_OFS (2)
#define ADC_CALIBRATION_REQ_cal_ctrl_MASK ((uint32_t)0x000FFFFCU)
#define ADC_BLOCK_ASYNC_REQ_block_async_req_OFS (0)
#define ADC_BLOCK_ASYNC_REQ_block_async_req_MASK ((uint32_t)0x00000001U)
#define ADC_SW_TRIGGER_sw_trigger_OFS (0)
#define ADC_SW_TRIGGER_sw_trigger_MASK ((uint32_t)0x00000001U)
#define ADC_SW_TRIGGER_sw_trigger_en_OFS (1)
#define ADC_SW_TRIGGER_sw_trigger_en_MASK ((uint32_t)0x00000002U)
#define ADC_SPARE_CTRL_adc_cfg0_OFS (0)
#define ADC_SPARE_CTRL_adc_cfg0_MASK ((uint32_t)0x000000FFU)
#define ADC_SPARE_CTRL_adc_cfg1_OFS (8)
#define ADC_SPARE_CTRL_adc_cfg1_MASK ((uint32_t)0x0000FF00U)
#define ADC_SPARE_CTRL_adc_cfg2_OFS (16)
#define ADC_SPARE_CTRL_adc_cfg2_MASK ((uint32_t)0x00FF0000U)
#define ADC_SPARE_CTRL_adc_cfg3_OFS (24)
#define ADC_SPARE_CTRL_adc_cfg3_MASK ((uint32_t)0xFF000000U)
#define ADC_SPARE_STS_adc_sts0_OFS (0)
#define ADC_SPARE_STS_adc_sts0_MASK ((uint32_t)0x000000FFU)
#define ADC_SPARE_STS_adc_sts1_OFS (8)
#define ADC_SPARE_STS_adc_sts1_MASK ((uint32_t)0x0000FF00U)
#define ADC_SPARE_STS_adc_sts2_OFS (16)
#define ADC_SPARE_STS_adc_sts2_MASK ((uint32_t)0x00FF0000U)
#define ADC_SPARE_STS_adc_sts3_OFS (24)
#define ADC_SPARE_STS_adc_sts3_MASK ((uint32_t)0xFF000000U)
#define ADC_EOC_ANA_eoc_ana_OFS (0)
#define ADC_EOC_ANA_eoc_ana_MASK ((uint32_t)0x00000001U)
#define ADC_TEMP_SENSOR_EN_temp_sensor_en_OFS (0)
#define ADC_TEMP_SENSOR_EN_temp_sensor_en_MASK ((uint32_t)0x00000001U)
#define ADC_SM_STATE_curr_state_OFS (0)
#define ADC_SM_STATE_curr_state_MASK ((uint32_t)0x0000000FU)
#define ADC_DMA_TRANSFER_CNT_dma_transfer_cnt_OFS (0)
#define ADC_DMA_TRANSFER_CNT_dma_transfer_cnt_MASK ((uint32_t)0x0000000FU)
#endif
