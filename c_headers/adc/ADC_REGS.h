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
    ADC_DESC_REG_s;
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
    ADC_PWR_EN_REG_s;
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
    ADC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_CTRL_u;

typedef struct ADC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} ADC_RST_STS_REG_s;

typedef union ADC_RST_STS_u {
    ADC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_STS_u;

typedef struct ADC_DBG_CTRL_REG_s {
    unsigned int stop_on_halt:1; // 
    unsigned int soft_stop:1; // 
} ADC_DBG_CTRL_REG_s;

typedef union ADC_DBG_CTRL_u {
    ADC_DBG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DBG_CTRL_u;

typedef struct ADC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
    unsigned int clk_div:3; // 
} ADC_CLK_CTRL_REG_s;

typedef union ADC_CLK_CTRL_u {
    ADC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CLK_CTRL_u;

typedef struct ADC_CLK_SEL_REG_s {
    unsigned int clk_sel:2; // 
} ADC_CLK_SEL_REG_s;

typedef union ADC_CLK_SEL_u {
    ADC_CLK_SEL_REG_s;
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
    ADC_INTR_EVENT_REG_s;
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
    ADC_INTR_EN_0_REG_s;
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
    ADC_INTR_EN_1_REG_s;
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
    ADC_DMA_EN_0_REG_s;
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
    ADC_DMA_EN_1_REG_s;
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
    ADC_EVENT_EN_0_REG_s;
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
    ADC_EVENT_EN_1_REG_s;
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
    ADC_INTR_NMI_EN_0_REG_s;
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
    ADC_INTR_NMI_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_NMI_EN_1_u;

typedef struct ADC_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} ADC_INTR_STS_REG_s;

typedef union ADC_INTR_STS_u {
    ADC_INTR_STS_REG_s;
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
    ADC_INTR_SW_REG_s;
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
    ADC_CONV_CFG_REG_s;
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
    ADC_CHNL_CFG_0_REG_s;
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
    ADC_CHNL_CFG_1_REG_s;
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
    ADC_CHNL_CFG_2_REG_s;
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
    ADC_CHNL_CFG_3_REG_s;
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
    ADC_CHNL_CFG_4_REG_s;
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
    ADC_CHNL_CFG_5_REG_s;
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
    ADC_CHNL_CFG_6_REG_s;
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
    ADC_CHNL_CFG_7_REG_s;
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
    ADC_CHNL_CFG_8_REG_s;
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
    ADC_CHNL_CFG_9_REG_s;
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
    ADC_CHNL_CFG_10_REG_s;
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
    ADC_CHNL_CFG_11_REG_s;
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
    ADC_CHNL_CFG_12_REG_s;
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
    ADC_CHNL_CFG_13_REG_s;
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
    ADC_CHNL_CFG_14_REG_s;
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
    ADC_CHNL_CFG_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_15_u;

typedef struct ADC_RESULT_CFG_REG_s {
    unsigned int fifo_en:1; // 
} ADC_RESULT_CFG_REG_s;

typedef union ADC_RESULT_CFG_u {
    ADC_RESULT_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_CFG_u;

typedef struct ADC_HW_AVG_CFG_REG_s {
    unsigned int hw_sample_cnt:4; // 
    unsigned int hw_avg_sample_div:4; // 
} ADC_HW_AVG_CFG_REG_s;

typedef union ADC_HW_AVG_CFG_u {
    ADC_HW_AVG_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_HW_AVG_CFG_u;

typedef struct ADC_RESULT_REG_s {
    unsigned int result:16; // 
} ADC_RESULT_REG_s;

typedef union ADC_RESULT_u {
    ADC_RESULT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_u;

typedef struct ADC_TIMER_START_REG_s {
    unsigned int timer_cnt_start:4; // 
} ADC_TIMER_START_REG_s;

typedef union ADC_TIMER_START_u {
    ADC_TIMER_START_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_START_u;

typedef struct ADC_TIMER_SAMPLE_REG_s {
    unsigned int timer_cnt_sample:5; // 
} ADC_TIMER_SAMPLE_REG_s;

typedef union ADC_TIMER_SAMPLE_u {
    ADC_TIMER_SAMPLE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_SAMPLE_u;

typedef struct ADC_TIMER_CONVERSION_REG_s {
    unsigned int timer_cnt_conversion:8; // 
} ADC_TIMER_CONVERSION_REG_s;

typedef union ADC_TIMER_CONVERSION_u {
    ADC_TIMER_CONVERSION_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_CONVERSION_u;

typedef struct ADC_WINDOW_COMP_REG_s {
    unsigned int window_comp_th_low:16; // 
    unsigned int window_comp_th_high:16; // 
} ADC_WINDOW_COMP_REG_s;

typedef union ADC_WINDOW_COMP_u {
    ADC_WINDOW_COMP_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_WINDOW_COMP_u;

typedef struct ADC_ADC_STATUS_REG_s {
    unsigned int adc_busy:1; // 
} ADC_ADC_STATUS_REG_s;

typedef union ADC_ADC_STATUS_u {
    ADC_ADC_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_ADC_STATUS_u;

typedef struct ADC_DMA_REG_REG_s {
    unsigned int dma_en:1; // 
} ADC_DMA_REG_REG_s;

typedef union ADC_DMA_REG_u {
    ADC_DMA_REG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_REG_u;

typedef struct ADC_POWER_DN_REG_s {
    unsigned int pwr_dn:1; // 
} ADC_POWER_DN_REG_s;

typedef union ADC_POWER_DN_u {
    ADC_POWER_DN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_POWER_DN_u;

typedef struct ADC_SUBS_PORT_REG_s {
    unsigned int subs_port:4; // 
} ADC_SUBS_PORT_REG_s;

typedef union ADC_SUBS_PORT_u {
    ADC_SUBS_PORT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SUBS_PORT_u;

typedef struct ADC_PUBS_PORT_REG_s {
    unsigned int pubs_port:4; // 
} ADC_PUBS_PORT_REG_s;

typedef union ADC_PUBS_PORT_u {
    ADC_PUBS_PORT_REG_s;
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
    ADC_CALIBRATION_REQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CALIBRATION_REQ_u;

typedef struct ADC_BLOCK_ASYNC_REQ_REG_s {
    unsigned int block_async_req:1; // 
} ADC_BLOCK_ASYNC_REQ_REG_s;

typedef union ADC_BLOCK_ASYNC_REQ_u {
    ADC_BLOCK_ASYNC_REQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_BLOCK_ASYNC_REQ_u;

typedef struct ADC_SW_TRIGGER_REG_s {
    unsigned int sw_trigger:1; // 
    unsigned int sw_trigger_en:1; // 
} ADC_SW_TRIGGER_REG_s;

typedef union ADC_SW_TRIGGER_u {
    ADC_SW_TRIGGER_REG_s;
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
    ADC_SPARE_CTRL_REG_s;
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
    ADC_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SPARE_STS_u;

typedef struct ADC_EOC_ANA_REG_s {
    unsigned int eoc_ana:1; // 
} ADC_EOC_ANA_REG_s;

typedef union ADC_EOC_ANA_u {
    ADC_EOC_ANA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EOC_ANA_u;

typedef struct ADC_TEMP_SENSOR_EN_REG_s {
    unsigned int temp_sensor_en:1; // 
} ADC_TEMP_SENSOR_EN_REG_s;

typedef union ADC_TEMP_SENSOR_EN_u {
    ADC_TEMP_SENSOR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TEMP_SENSOR_EN_u;

typedef struct ADC_SM_STATE_REG_s {
    unsigned int curr_state:4; // 
} ADC_SM_STATE_REG_s;

typedef union ADC_SM_STATE_u {
    ADC_SM_STATE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SM_STATE_u;

typedef struct ADC_DMA_TRANSFER_CNT_REG_s {
    unsigned int dma_transfer_cnt:4; // 
} ADC_DMA_TRANSFER_CNT_REG_s;

typedef union ADC_DMA_TRANSFER_CNT_u {
    ADC_DMA_TRANSFER_CNT_REG_s;
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

#define ADC_DESC_MODULE_TYPE_OFS (0)
#define ADC_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define ADC_DESC_MODULE_SUBTYPE_OFS (8)
#define ADC_DESC_MODULE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define ADC_DESC_MAJOR_REV_OFS (16)
#define ADC_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define ADC_DESC_MINOR_REV_OFS (20)
#define ADC_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define ADC_PWR_EN_PWR_EN_OFS (0)
#define ADC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define ADC_PWR_EN_PWR_EN_KEY_OFS (24)
#define ADC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define ADC_RST_CTRL_RST_OFS (0)
#define ADC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define ADC_RST_CTRL_RST_STS_CLR_OFS (1)
#define ADC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define ADC_RST_CTRL_RST_KEY_OFS (24)
#define ADC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define ADC_RST_STS_RST_STS_OFS (0)
#define ADC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define ADC_DBG_CTRL_STOP_ON_HALT_OFS (0)
#define ADC_DBG_CTRL_STOP_ON_HALT_MASK ((uint32_t)0x00000001U)
#define ADC_DBG_CTRL_SOFT_STOP_OFS (1)
#define ADC_DBG_CTRL_SOFT_STOP_MASK ((uint32_t)0x00000002U)
#define ADC_CLK_CTRL_CLK_EN_OFS (0)
#define ADC_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define ADC_CLK_CTRL_CLK_DIV_OFS (1)
#define ADC_CLK_CTRL_CLK_DIV_MASK ((uint32_t)0x0000000EU)
#define ADC_CLK_SEL_CLK_SEL_OFS (0)
#define ADC_CLK_SEL_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_OFS (0)
#define ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EVENT_OV_FLAG_OFS (1)
#define ADC_INTR_EVENT_OV_FLAG_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EVENT_SEQ_OV_FLOW_OFS (2)
#define ADC_INTR_EVENT_SEQ_OV_FLOW_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EVENT_WC_IN_FLAG_OFS (3)
#define ADC_INTR_EVENT_WC_IN_FLAG_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EVENT_WC_HIGH_FLAG_OFS (4)
#define ADC_INTR_EVENT_WC_HIGH_FLAG_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EVENT_WC_LOW_FLAG_OFS (5)
#define ADC_INTR_EVENT_WC_LOW_FLAG_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EVENT_DMA_DONE_OFS (6)
#define ADC_INTR_EVENT_DMA_DONE_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EVENT_UF_FLAG_OFS (7)
#define ADC_INTR_EVENT_UF_FLAG_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_EVENT_RESULT0_FLAG_OFS (8)
#define ADC_INTR_EVENT_RESULT0_FLAG_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_EVENT_RESULT1_FLAG_OFS (9)
#define ADC_INTR_EVENT_RESULT1_FLAG_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_EVENT_RESULT2_FLAG_OFS (10)
#define ADC_INTR_EVENT_RESULT2_FLAG_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_EVENT_RESULT3_FLAG_OFS (11)
#define ADC_INTR_EVENT_RESULT3_FLAG_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_EVENT_RESULT4_FLAG_OFS (12)
#define ADC_INTR_EVENT_RESULT4_FLAG_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_EVENT_RESULT5_FLAG_OFS (13)
#define ADC_INTR_EVENT_RESULT5_FLAG_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_EVENT_RESULT6_FLAG_OFS (14)
#define ADC_INTR_EVENT_RESULT6_FLAG_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_EVENT_RESULT7_FLAG_OFS (15)
#define ADC_INTR_EVENT_RESULT7_FLAG_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_EVENT_RESULT8_FLAG_OFS (16)
#define ADC_INTR_EVENT_RESULT8_FLAG_MASK ((uint32_t)0x00010000U)
#define ADC_INTR_EVENT_RESULT9_FLAG_OFS (17)
#define ADC_INTR_EVENT_RESULT9_FLAG_MASK ((uint32_t)0x00020000U)
#define ADC_INTR_EVENT_RESULT10_FLAG_OFS (18)
#define ADC_INTR_EVENT_RESULT10_FLAG_MASK ((uint32_t)0x00040000U)
#define ADC_INTR_EVENT_RESULT11_FLAG_OFS (19)
#define ADC_INTR_EVENT_RESULT11_FLAG_MASK ((uint32_t)0x00080000U)
#define ADC_INTR_EVENT_RESULT12_FLAG_OFS (20)
#define ADC_INTR_EVENT_RESULT12_FLAG_MASK ((uint32_t)0x00100000U)
#define ADC_INTR_EVENT_RESULT13_FLAG_OFS (21)
#define ADC_INTR_EVENT_RESULT13_FLAG_MASK ((uint32_t)0x00200000U)
#define ADC_INTR_EVENT_RESULT14_FLAG_OFS (22)
#define ADC_INTR_EVENT_RESULT14_FLAG_MASK ((uint32_t)0x00400000U)
#define ADC_INTR_EVENT_RESULT15_FLAG_OFS (23)
#define ADC_INTR_EVENT_RESULT15_FLAG_MASK ((uint32_t)0x00800000U)
#define ADC_INTR_EN_0_TRIG_TO_DMA_FLAG_EN_OFS (0)
#define ADC_INTR_EN_0_TRIG_TO_DMA_FLAG_EN_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EN_0_OV_FLAG_EN_OFS (1)
#define ADC_INTR_EN_0_OV_FLAG_EN_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EN_0_SEQ_OV_FLOW_EN_OFS (2)
#define ADC_INTR_EN_0_SEQ_OV_FLOW_EN_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EN_0_WC_IN_FLAG_EN_OFS (3)
#define ADC_INTR_EN_0_WC_IN_FLAG_EN_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EN_0_WC_HIGH_FLAG_EN_OFS (4)
#define ADC_INTR_EN_0_WC_HIGH_FLAG_EN_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EN_0_WC_LOW_FLAG_EN_OFS (5)
#define ADC_INTR_EN_0_WC_LOW_FLAG_EN_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EN_0_DMA_DONE_EN_OFS (6)
#define ADC_INTR_EN_0_DMA_DONE_EN_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EN_0_UF_FLAG_EN_OFS (7)
#define ADC_INTR_EN_0_UF_FLAG_EN_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_EN_0_RESULT0_FLAG_EN_OFS (8)
#define ADC_INTR_EN_0_RESULT0_FLAG_EN_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_EN_0_RESULT1_FLAG_EN_OFS (9)
#define ADC_INTR_EN_0_RESULT1_FLAG_EN_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_EN_0_RESULT2_FLAG_EN_OFS (10)
#define ADC_INTR_EN_0_RESULT2_FLAG_EN_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_EN_0_RESULT3_FLAG_EN_OFS (11)
#define ADC_INTR_EN_0_RESULT3_FLAG_EN_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_EN_0_RESULT4_FLAG_EN_OFS (12)
#define ADC_INTR_EN_0_RESULT4_FLAG_EN_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_EN_0_RESULT5_FLAG_EN_OFS (13)
#define ADC_INTR_EN_0_RESULT5_FLAG_EN_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_EN_0_RESULT6_FLAG_EN_OFS (14)
#define ADC_INTR_EN_0_RESULT6_FLAG_EN_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_EN_0_RESULT7_FLAG_EN_OFS (15)
#define ADC_INTR_EN_0_RESULT7_FLAG_EN_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_EN_1_RESULT8_FLAG_EN_OFS (0)
#define ADC_INTR_EN_1_RESULT8_FLAG_EN_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_EN_1_RESULT9_FLAG_EN_OFS (1)
#define ADC_INTR_EN_1_RESULT9_FLAG_EN_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_EN_1_RESULT10_FLAG_EN_OFS (2)
#define ADC_INTR_EN_1_RESULT10_FLAG_EN_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_EN_1_RESULT11_FLAG_EN_OFS (3)
#define ADC_INTR_EN_1_RESULT11_FLAG_EN_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_EN_1_RESULT12_FLAG_EN_OFS (4)
#define ADC_INTR_EN_1_RESULT12_FLAG_EN_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_EN_1_RESULT13_FLAG_EN_OFS (5)
#define ADC_INTR_EN_1_RESULT13_FLAG_EN_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_EN_1_RESULT14_FLAG_EN_OFS (6)
#define ADC_INTR_EN_1_RESULT14_FLAG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_EN_1_RESULT15_FLAG_EN_OFS (7)
#define ADC_INTR_EN_1_RESULT15_FLAG_EN_MASK ((uint32_t)0x00000080U)
#define ADC_DMA_EN_0_TRIG_TO_DMA_EN_OFS (0)
#define ADC_DMA_EN_0_TRIG_TO_DMA_EN_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_EN_0_OV_DMA_EN_OFS (1)
#define ADC_DMA_EN_0_OV_DMA_EN_MASK ((uint32_t)0x00000002U)
#define ADC_DMA_EN_0_SEQ_OV_DMA_EN_OFS (2)
#define ADC_DMA_EN_0_SEQ_OV_DMA_EN_MASK ((uint32_t)0x00000004U)
#define ADC_DMA_EN_0_WC_IN_DMA_EN_OFS (3)
#define ADC_DMA_EN_0_WC_IN_DMA_EN_MASK ((uint32_t)0x00000008U)
#define ADC_DMA_EN_0_WC_HIGH_DMA_EN_OFS (4)
#define ADC_DMA_EN_0_WC_HIGH_DMA_EN_MASK ((uint32_t)0x00000010U)
#define ADC_DMA_EN_0_WC_LOW_DMA_EN_OFS (5)
#define ADC_DMA_EN_0_WC_LOW_DMA_EN_MASK ((uint32_t)0x00000020U)
#define ADC_DMA_EN_0_DMA_DONE_DMA_EN_OFS (6)
#define ADC_DMA_EN_0_DMA_DONE_DMA_EN_MASK ((uint32_t)0x00000040U)
#define ADC_DMA_EN_0_UF_DMA_EN_OFS (7)
#define ADC_DMA_EN_0_UF_DMA_EN_MASK ((uint32_t)0x00000080U)
#define ADC_DMA_EN_0_RESULT0_DMA_EN_OFS (8)
#define ADC_DMA_EN_0_RESULT0_DMA_EN_MASK ((uint32_t)0x00000100U)
#define ADC_DMA_EN_0_RESULT1_DMA_EN_OFS (9)
#define ADC_DMA_EN_0_RESULT1_DMA_EN_MASK ((uint32_t)0x00000200U)
#define ADC_DMA_EN_0_RESULT2_DMA_EN_OFS (10)
#define ADC_DMA_EN_0_RESULT2_DMA_EN_MASK ((uint32_t)0x00000400U)
#define ADC_DMA_EN_0_RESULT3_DMA_EN_OFS (11)
#define ADC_DMA_EN_0_RESULT3_DMA_EN_MASK ((uint32_t)0x00000800U)
#define ADC_DMA_EN_0_RESULT4_DMA_EN_OFS (12)
#define ADC_DMA_EN_0_RESULT4_DMA_EN_MASK ((uint32_t)0x00001000U)
#define ADC_DMA_EN_0_RESULT5_DMA_EN_OFS (13)
#define ADC_DMA_EN_0_RESULT5_DMA_EN_MASK ((uint32_t)0x00002000U)
#define ADC_DMA_EN_0_RESULT6_DMA_EN_OFS (14)
#define ADC_DMA_EN_0_RESULT6_DMA_EN_MASK ((uint32_t)0x00004000U)
#define ADC_DMA_EN_0_RESULT7_DMA_EN_OFS (15)
#define ADC_DMA_EN_0_RESULT7_DMA_EN_MASK ((uint32_t)0x00008000U)
#define ADC_DMA_EN_1_RESULT8_DMA_EN_OFS (0)
#define ADC_DMA_EN_1_RESULT8_DMA_EN_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_EN_1_RESULT9_DMA_EN_OFS (1)
#define ADC_DMA_EN_1_RESULT9_DMA_EN_MASK ((uint32_t)0x00000002U)
#define ADC_DMA_EN_1_RESULT10_DMA_EN_OFS (2)
#define ADC_DMA_EN_1_RESULT10_DMA_EN_MASK ((uint32_t)0x00000004U)
#define ADC_DMA_EN_1_RESULT11_DMA_EN_OFS (3)
#define ADC_DMA_EN_1_RESULT11_DMA_EN_MASK ((uint32_t)0x00000008U)
#define ADC_DMA_EN_1_RESULT12_DMA_EN_OFS (4)
#define ADC_DMA_EN_1_RESULT12_DMA_EN_MASK ((uint32_t)0x00000010U)
#define ADC_DMA_EN_1_RESULT13_DMA_EN_OFS (5)
#define ADC_DMA_EN_1_RESULT13_DMA_EN_MASK ((uint32_t)0x00000020U)
#define ADC_DMA_EN_1_RESULT14_DMA_EN_OFS (6)
#define ADC_DMA_EN_1_RESULT14_DMA_EN_MASK ((uint32_t)0x00000040U)
#define ADC_DMA_EN_1_RESULT15_DMA_EN_OFS (7)
#define ADC_DMA_EN_1_RESULT15_DMA_EN_MASK ((uint32_t)0x00000080U)
#define ADC_EVENT_EN_0_TRIG_TO_DMA_EVENT_EN_OFS (0)
#define ADC_EVENT_EN_0_TRIG_TO_DMA_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define ADC_EVENT_EN_0_OV_FLAG_EVENT_EN_OFS (1)
#define ADC_EVENT_EN_0_OV_FLAG_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define ADC_EVENT_EN_0_SEQ_OV_FLOW_EVENT_EN_OFS (2)
#define ADC_EVENT_EN_0_SEQ_OV_FLOW_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define ADC_EVENT_EN_0_WC_IN_EVENT_EN_OFS (3)
#define ADC_EVENT_EN_0_WC_IN_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define ADC_EVENT_EN_0_WC_HIGH_EVENT_EN_OFS (4)
#define ADC_EVENT_EN_0_WC_HIGH_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define ADC_EVENT_EN_0_WC_LOW_EVENT_EN_OFS (5)
#define ADC_EVENT_EN_0_WC_LOW_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define ADC_EVENT_EN_0_DMA_DONE_EVENT_EN_OFS (6)
#define ADC_EVENT_EN_0_DMA_DONE_EVENT_EN_MASK ((uint32_t)0x00000040U)
#define ADC_EVENT_EN_0_UF_FLAG_EVENT_EN_OFS (7)
#define ADC_EVENT_EN_0_UF_FLAG_EVENT_EN_MASK ((uint32_t)0x00000080U)
#define ADC_EVENT_EN_0_RESULT0_EVENT_EN_OFS (8)
#define ADC_EVENT_EN_0_RESULT0_EVENT_EN_MASK ((uint32_t)0x00000100U)
#define ADC_EVENT_EN_0_RESULT1_EVENT_EN_OFS (9)
#define ADC_EVENT_EN_0_RESULT1_EVENT_EN_MASK ((uint32_t)0x00000200U)
#define ADC_EVENT_EN_0_RESULT2_EVENT_EN_OFS (10)
#define ADC_EVENT_EN_0_RESULT2_EVENT_EN_MASK ((uint32_t)0x00000400U)
#define ADC_EVENT_EN_0_RESULT3_EVENT_EN_OFS (11)
#define ADC_EVENT_EN_0_RESULT3_EVENT_EN_MASK ((uint32_t)0x00000800U)
#define ADC_EVENT_EN_0_RESULT4_EVENT_EN_OFS (12)
#define ADC_EVENT_EN_0_RESULT4_EVENT_EN_MASK ((uint32_t)0x00001000U)
#define ADC_EVENT_EN_0_RESULT5_EVENT_EN_OFS (13)
#define ADC_EVENT_EN_0_RESULT5_EVENT_EN_MASK ((uint32_t)0x00002000U)
#define ADC_EVENT_EN_0_RESULT6_EVENT_EN_OFS (14)
#define ADC_EVENT_EN_0_RESULT6_EVENT_EN_MASK ((uint32_t)0x00004000U)
#define ADC_EVENT_EN_0_RESULT7_EVENT_EN_OFS (15)
#define ADC_EVENT_EN_0_RESULT7_EVENT_EN_MASK ((uint32_t)0x00008000U)
#define ADC_EVENT_EN_1_RESULT8_EVENT_EN_OFS (0)
#define ADC_EVENT_EN_1_RESULT8_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define ADC_EVENT_EN_1_RESULT9_EVENT_EN_OFS (1)
#define ADC_EVENT_EN_1_RESULT9_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define ADC_EVENT_EN_1_RESULT10_EVENT_EN_OFS (2)
#define ADC_EVENT_EN_1_RESULT10_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define ADC_EVENT_EN_1_RESULT11_EVENT_EN_OFS (3)
#define ADC_EVENT_EN_1_RESULT11_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define ADC_EVENT_EN_1_RESULT12_EVENT_EN_OFS (4)
#define ADC_EVENT_EN_1_RESULT12_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define ADC_EVENT_EN_1_RESULT13_EVENT_EN_OFS (5)
#define ADC_EVENT_EN_1_RESULT13_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define ADC_EVENT_EN_1_RESULT14_EVENT_EN_OFS (6)
#define ADC_EVENT_EN_1_RESULT14_EVENT_EN_MASK ((uint32_t)0x00000040U)
#define ADC_EVENT_EN_1_RESULT15_EVENT_EN_OFS (7)
#define ADC_EVENT_EN_1_RESULT15_EVENT_EN_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_NMI_EN_0_TRIG_TO_DMA_FLAG_NMI_EN_OFS (0)
#define ADC_INTR_NMI_EN_0_TRIG_TO_DMA_FLAG_NMI_EN_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_NMI_EN_0_OV_FLAG_NMI_EN_OFS (1)
#define ADC_INTR_NMI_EN_0_OV_FLAG_NMI_EN_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_NMI_EN_0_SEQ_OV_FLOW_NMI_EN_OFS (2)
#define ADC_INTR_NMI_EN_0_SEQ_OV_FLOW_NMI_EN_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_NMI_EN_0_WC_IN_FLAG_NMI_EN_OFS (3)
#define ADC_INTR_NMI_EN_0_WC_IN_FLAG_NMI_EN_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_NMI_EN_0_WC_HIGH_FLAG_NMI_EN_OFS (4)
#define ADC_INTR_NMI_EN_0_WC_HIGH_FLAG_NMI_EN_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_NMI_EN_0_WC_LOW_FLAG_NMI_EN_OFS (5)
#define ADC_INTR_NMI_EN_0_WC_LOW_FLAG_NMI_EN_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_NMI_EN_0_DMA_DONE_NMI_EN_OFS (6)
#define ADC_INTR_NMI_EN_0_DMA_DONE_NMI_EN_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_NMI_EN_0_UF_FLAG_NMI_EN_OFS (7)
#define ADC_INTR_NMI_EN_0_UF_FLAG_NMI_EN_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_NMI_EN_0_RESULT0_FLAG_NMI_EN_OFS (8)
#define ADC_INTR_NMI_EN_0_RESULT0_FLAG_NMI_EN_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_NMI_EN_0_RESULT1_FLAG_NMI_EN_OFS (9)
#define ADC_INTR_NMI_EN_0_RESULT1_FLAG_NMI_EN_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_NMI_EN_0_RESULT2_FLAG_NMI_EN_OFS (10)
#define ADC_INTR_NMI_EN_0_RESULT2_FLAG_NMI_EN_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_NMI_EN_0_RESULT3_FLAG_NMI_EN_OFS (11)
#define ADC_INTR_NMI_EN_0_RESULT3_FLAG_NMI_EN_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_NMI_EN_0_RESULT4_FLAG_NMI_EN_OFS (12)
#define ADC_INTR_NMI_EN_0_RESULT4_FLAG_NMI_EN_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_NMI_EN_0_RESULT5_FLAG_NMI_EN_OFS (13)
#define ADC_INTR_NMI_EN_0_RESULT5_FLAG_NMI_EN_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_NMI_EN_0_RESULT6_FLAG_NMI_EN_OFS (14)
#define ADC_INTR_NMI_EN_0_RESULT6_FLAG_NMI_EN_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_NMI_EN_0_RESULT7_FLAG_NMI_EN_OFS (15)
#define ADC_INTR_NMI_EN_0_RESULT7_FLAG_NMI_EN_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_NMI_EN_1_RESULT8_FLAG_NMI_EN_OFS (0)
#define ADC_INTR_NMI_EN_1_RESULT8_FLAG_NMI_EN_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_NMI_EN_1_RESULT9_FLAG_NMI_EN_OFS (1)
#define ADC_INTR_NMI_EN_1_RESULT9_FLAG_NMI_EN_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_NMI_EN_1_RESULT10_FLAG_NMI_EN_OFS (2)
#define ADC_INTR_NMI_EN_1_RESULT10_FLAG_NMI_EN_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_NMI_EN_1_RESULT11_FLAG_NMI_EN_OFS (3)
#define ADC_INTR_NMI_EN_1_RESULT11_FLAG_NMI_EN_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_NMI_EN_1_RESULT12_FLAG_NMI_EN_OFS (4)
#define ADC_INTR_NMI_EN_1_RESULT12_FLAG_NMI_EN_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_NMI_EN_1_RESULT13_FLAG_NMI_EN_OFS (5)
#define ADC_INTR_NMI_EN_1_RESULT13_FLAG_NMI_EN_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_NMI_EN_1_RESULT14_FLAG_NMI_EN_OFS (6)
#define ADC_INTR_NMI_EN_1_RESULT14_FLAG_NMI_EN_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_NMI_EN_1_RESULT15_FLAG_NMI_EN_OFS (7)
#define ADC_INTR_NMI_EN_1_RESULT15_FLAG_NMI_EN_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_STS_INTR_FIRST_OFS (0)
#define ADC_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x000000FFU)
#define ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_OFS (0)
#define ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_MASK ((uint32_t)0x00000001U)
#define ADC_INTR_SW_OV_FLAG_SW_SET_OFS (1)
#define ADC_INTR_SW_OV_FLAG_SW_SET_MASK ((uint32_t)0x00000002U)
#define ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_OFS (2)
#define ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_MASK ((uint32_t)0x00000004U)
#define ADC_INTR_SW_WC_IN_FLAG_SW_SET_OFS (3)
#define ADC_INTR_SW_WC_IN_FLAG_SW_SET_MASK ((uint32_t)0x00000008U)
#define ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_OFS (4)
#define ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_MASK ((uint32_t)0x00000010U)
#define ADC_INTR_SW_WC_LOW_FLAG_SW_SET_OFS (5)
#define ADC_INTR_SW_WC_LOW_FLAG_SW_SET_MASK ((uint32_t)0x00000020U)
#define ADC_INTR_SW_DMA_DONE_SW_SET_OFS (6)
#define ADC_INTR_SW_DMA_DONE_SW_SET_MASK ((uint32_t)0x00000040U)
#define ADC_INTR_SW_UF_FLAG_SW_SET_OFS (7)
#define ADC_INTR_SW_UF_FLAG_SW_SET_MASK ((uint32_t)0x00000080U)
#define ADC_INTR_SW_RESULT0_FLAG_SW_SET_OFS (8)
#define ADC_INTR_SW_RESULT0_FLAG_SW_SET_MASK ((uint32_t)0x00000100U)
#define ADC_INTR_SW_RESULT1_FLAG_SW_SET_OFS (9)
#define ADC_INTR_SW_RESULT1_FLAG_SW_SET_MASK ((uint32_t)0x00000200U)
#define ADC_INTR_SW_RESULT2_FLAG_SW_SET_OFS (10)
#define ADC_INTR_SW_RESULT2_FLAG_SW_SET_MASK ((uint32_t)0x00000400U)
#define ADC_INTR_SW_RESULT3_FLAG_SW_SET_OFS (11)
#define ADC_INTR_SW_RESULT3_FLAG_SW_SET_MASK ((uint32_t)0x00000800U)
#define ADC_INTR_SW_RESULT4_FLAG_SW_SET_OFS (12)
#define ADC_INTR_SW_RESULT4_FLAG_SW_SET_MASK ((uint32_t)0x00001000U)
#define ADC_INTR_SW_RESULT5_FLAG_SW_SET_OFS (13)
#define ADC_INTR_SW_RESULT5_FLAG_SW_SET_MASK ((uint32_t)0x00002000U)
#define ADC_INTR_SW_RESULT6_FLAG_SW_SET_OFS (14)
#define ADC_INTR_SW_RESULT6_FLAG_SW_SET_MASK ((uint32_t)0x00004000U)
#define ADC_INTR_SW_RESULT7_FLAG_SW_SET_OFS (15)
#define ADC_INTR_SW_RESULT7_FLAG_SW_SET_MASK ((uint32_t)0x00008000U)
#define ADC_INTR_SW_RESULT8_FLAG_SW_SET_OFS (16)
#define ADC_INTR_SW_RESULT8_FLAG_SW_SET_MASK ((uint32_t)0x00010000U)
#define ADC_INTR_SW_RESULT9_FLAG_SW_SET_OFS (17)
#define ADC_INTR_SW_RESULT9_FLAG_SW_SET_MASK ((uint32_t)0x00020000U)
#define ADC_INTR_SW_RESULT10_FLAG_SW_SET_OFS (18)
#define ADC_INTR_SW_RESULT10_FLAG_SW_SET_MASK ((uint32_t)0x00040000U)
#define ADC_INTR_SW_RESULT11_FLAG_SW_SET_OFS (19)
#define ADC_INTR_SW_RESULT11_FLAG_SW_SET_MASK ((uint32_t)0x00080000U)
#define ADC_INTR_SW_RESULT12_FLAG_SW_SET_OFS (20)
#define ADC_INTR_SW_RESULT12_FLAG_SW_SET_MASK ((uint32_t)0x00100000U)
#define ADC_INTR_SW_RESULT13_FLAG_SW_SET_OFS (21)
#define ADC_INTR_SW_RESULT13_FLAG_SW_SET_MASK ((uint32_t)0x00200000U)
#define ADC_INTR_SW_RESULT14_FLAG_SW_SET_OFS (22)
#define ADC_INTR_SW_RESULT14_FLAG_SW_SET_MASK ((uint32_t)0x00400000U)
#define ADC_INTR_SW_RESULT15_FLAG_SW_SET_OFS (23)
#define ADC_INTR_SW_RESULT15_FLAG_SW_SET_MASK ((uint32_t)0x00800000U)
#define ADC_CONV_CFG_CONV_MODE_OFS (0)
#define ADC_CONV_CFG_CONV_MODE_MASK ((uint32_t)0x00000003U)
#define ADC_CONV_CFG_START_ADDR_OFS (2)
#define ADC_CONV_CFG_START_ADDR_MASK ((uint32_t)0x0000003CU)
#define ADC_CONV_CFG_END_ADDR_OFS (6)
#define ADC_CONV_CFG_END_ADDR_MASK ((uint32_t)0x000003C0U)
#define ADC_CONV_CFG_TRIGGER_SOURCE_OFS (10)
#define ADC_CONV_CFG_TRIGGER_SOURCE_MASK ((uint32_t)0x00000400U)
#define ADC_CONV_CFG_ADC_RES_OFS (11)
#define ADC_CONV_CFG_ADC_RES_MASK ((uint32_t)0x00001800U)
#define ADC_CONV_CFG_EN_CONV_OFS (13)
#define ADC_CONV_CFG_EN_CONV_MASK ((uint32_t)0x00002000U)
#define ADC_CHNL_CFG_0_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_0_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_0_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_0_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_0_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_0_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_0_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_0_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_0_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_0_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_1_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_1_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_1_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_1_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_1_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_1_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_1_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_1_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_1_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_1_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_2_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_2_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_2_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_2_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_2_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_2_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_2_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_2_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_2_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_2_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_3_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_3_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_3_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_3_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_3_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_3_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_3_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_3_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_3_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_3_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_4_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_4_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_4_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_4_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_4_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_4_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_4_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_4_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_4_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_4_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_5_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_5_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_5_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_5_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_5_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_5_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_5_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_5_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_5_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_5_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_6_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_6_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_6_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_6_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_6_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_6_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_6_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_6_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_6_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_6_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_7_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_7_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_7_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_7_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_7_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_7_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_7_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_7_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_7_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_7_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_8_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_8_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_8_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_8_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_8_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_8_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_8_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_8_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_8_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_8_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_9_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_9_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_9_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_9_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_9_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_9_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_9_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_9_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_9_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_9_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_10_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_10_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_10_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_10_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_10_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_10_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_10_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_10_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_10_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_10_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_11_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_11_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_11_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_11_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_11_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_11_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_11_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_11_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_11_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_11_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_12_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_12_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_12_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_12_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_12_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_12_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_12_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_12_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_12_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_12_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_13_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_13_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_13_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_13_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_13_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_13_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_13_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_13_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_13_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_13_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_14_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_14_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_14_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_14_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_14_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_14_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_14_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_14_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_14_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_14_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_CHNL_CFG_15_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_15_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_15_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_15_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_15_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_15_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_15_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_15_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_15_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_15_BCS_EN_MASK ((uint32_t)0x00000100U)
#define ADC_RESULT_CFG_FIFO_EN_OFS (0)
#define ADC_RESULT_CFG_FIFO_EN_MASK ((uint32_t)0x00000001U)
#define ADC_HW_AVG_CFG_HW_SAMPLE_CNT_OFS (0)
#define ADC_HW_AVG_CFG_HW_SAMPLE_CNT_MASK ((uint32_t)0x0000000FU)
#define ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_OFS (4)
#define ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_MASK ((uint32_t)0x000000F0U)
#define ADC_RESULT_RESULT_OFS (0)
#define ADC_RESULT_RESULT_MASK ((uint32_t)0x0000FFFFU)
#define ADC_TIMER_START_TIMER_CNT_START_OFS (0)
#define ADC_TIMER_START_TIMER_CNT_START_MASK ((uint32_t)0x0000000FU)
#define ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_OFS (0)
#define ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_MASK ((uint32_t)0x0000001FU)
#define ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_OFS (0)
#define ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_MASK ((uint32_t)0x000000FFU)
#define ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_OFS (0)
#define ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_MASK ((uint32_t)0x0000FFFFU)
#define ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_OFS (16)
#define ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_MASK ((uint32_t)0xFFFF0000U)
#define ADC_ADC_STATUS_ADC_BUSY_OFS (0)
#define ADC_ADC_STATUS_ADC_BUSY_MASK ((uint32_t)0x00000001U)
#define ADC_DMA_REG_DMA_EN_OFS (0)
#define ADC_DMA_REG_DMA_EN_MASK ((uint32_t)0x00000001U)
#define ADC_POWER_DN_PWR_DN_OFS (0)
#define ADC_POWER_DN_PWR_DN_MASK ((uint32_t)0x00000001U)
#define ADC_SUBS_PORT_SUBS_PORT_OFS (0)
#define ADC_SUBS_PORT_SUBS_PORT_MASK ((uint32_t)0x0000000FU)
#define ADC_PUBS_PORT_PUBS_PORT_OFS (0)
#define ADC_PUBS_PORT_PUBS_PORT_MASK ((uint32_t)0x0000000FU)
#define ADC_CALIBRATION_REQ_CAL_REQ_OFS (0)
#define ADC_CALIBRATION_REQ_CAL_REQ_MASK ((uint32_t)0x00000001U)
#define ADC_CALIBRATION_REQ_CAL_DONE_OFS (1)
#define ADC_CALIBRATION_REQ_CAL_DONE_MASK ((uint32_t)0x00000002U)
#define ADC_CALIBRATION_REQ_CAL_CTRL_OFS (2)
#define ADC_CALIBRATION_REQ_CAL_CTRL_MASK ((uint32_t)0x000FFFFCU)
#define ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_OFS (0)
#define ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_MASK ((uint32_t)0x00000001U)
#define ADC_SW_TRIGGER_SW_TRIGGER_OFS (0)
#define ADC_SW_TRIGGER_SW_TRIGGER_MASK ((uint32_t)0x00000001U)
#define ADC_SW_TRIGGER_SW_TRIGGER_EN_OFS (1)
#define ADC_SW_TRIGGER_SW_TRIGGER_EN_MASK ((uint32_t)0x00000002U)
#define ADC_SPARE_CTRL_ADC_CFG0_OFS (0)
#define ADC_SPARE_CTRL_ADC_CFG0_MASK ((uint32_t)0x000000FFU)
#define ADC_SPARE_CTRL_ADC_CFG1_OFS (8)
#define ADC_SPARE_CTRL_ADC_CFG1_MASK ((uint32_t)0x0000FF00U)
#define ADC_SPARE_CTRL_ADC_CFG2_OFS (16)
#define ADC_SPARE_CTRL_ADC_CFG2_MASK ((uint32_t)0x00FF0000U)
#define ADC_SPARE_CTRL_ADC_CFG3_OFS (24)
#define ADC_SPARE_CTRL_ADC_CFG3_MASK ((uint32_t)0xFF000000U)
#define ADC_SPARE_STS_ADC_STS0_OFS (0)
#define ADC_SPARE_STS_ADC_STS0_MASK ((uint32_t)0x000000FFU)
#define ADC_SPARE_STS_ADC_STS1_OFS (8)
#define ADC_SPARE_STS_ADC_STS1_MASK ((uint32_t)0x0000FF00U)
#define ADC_SPARE_STS_ADC_STS2_OFS (16)
#define ADC_SPARE_STS_ADC_STS2_MASK ((uint32_t)0x00FF0000U)
#define ADC_SPARE_STS_ADC_STS3_OFS (24)
#define ADC_SPARE_STS_ADC_STS3_MASK ((uint32_t)0xFF000000U)
#define ADC_EOC_ANA_EOC_ANA_OFS (0)
#define ADC_EOC_ANA_EOC_ANA_MASK ((uint32_t)0x00000001U)
#define ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_OFS (0)
#define ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_MASK ((uint32_t)0x00000001U)
#define ADC_SM_STATE_CURR_STATE_OFS (0)
#define ADC_SM_STATE_CURR_STATE_MASK ((uint32_t)0x0000000FU)
#define ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_OFS (0)
#define ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_MASK ((uint32_t)0x0000000FU)
#endif
