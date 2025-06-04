#ifndef ADC_REGISTERS_H
#define ADC_REGISTERS_H

#include <stdint.h>

/** @defgroup ADC
 *  @{
 */
/** @defgroup ADC_REGISTERS 
 *  @{
 */
/** @defgroup ADC_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int module_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} ADC_DESC_REG_s;

typedef union {
    /** @ref ADC_DESC_REG_s */
    ADC_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DESC_u;

/** @} end of ADC_DESC_REG */ 

/** @defgroup ADC_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} ADC_PWR_EN_REG_s;

typedef union {
    /** @ref ADC_PWR_EN_REG_s */
    ADC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_PWR_EN_u;

/** @} end of ADC_PWR_EN_REG */ 

/** @defgroup ADC_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} ADC_RST_CTRL_REG_s;

typedef union {
    /** @ref ADC_RST_CTRL_REG_s */
    ADC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_CTRL_u;

/** @} end of ADC_RST_CTRL_REG */ 

/** @defgroup ADC_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} ADC_RST_STS_REG_s;

typedef union {
    /** @ref ADC_RST_STS_REG_s */
    ADC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RST_STS_u;

/** @} end of ADC_RST_STS_REG */ 

/** @defgroup ADC_DBG_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int stop_on_halt:1; // 
    unsigned int soft_stop:1; // 
} ADC_DBG_CTRL_REG_s;

typedef union {
    /** @ref ADC_DBG_CTRL_REG_s */
    ADC_DBG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DBG_CTRL_u;

/** @} end of ADC_DBG_CTRL_REG */ 

/** @defgroup ADC_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
    unsigned int clk_div:3; // 
} ADC_CLK_CTRL_REG_s;

typedef union {
    /** @ref ADC_CLK_CTRL_REG_s */
    ADC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CLK_CTRL_u;

/** @} end of ADC_CLK_CTRL_REG */ 

/** @defgroup ADC_CLK_SEL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_sel:2; // 
} ADC_CLK_SEL_REG_s;

typedef union {
    /** @ref ADC_CLK_SEL_REG_s */
    ADC_CLK_SEL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CLK_SEL_u;

/** @} end of ADC_CLK_SEL_REG */ 

/** @defgroup ADC_INTR_EVENT_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_INTR_EVENT_REG_s */
    ADC_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EVENT_u;

/** @} end of ADC_INTR_EVENT_REG */ 

/** @defgroup ADC_INTR_EN_0_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_INTR_EN_0_REG_s */
    ADC_INTR_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EN_0_u;

/** @} end of ADC_INTR_EN_0_REG */ 

/** @defgroup ADC_INTR_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int result8_flag_en:1; // 
    unsigned int result9_flag_en:1; // 
    unsigned int result10_flag_en:1; // 
    unsigned int result11_flag_en:1; // 
    unsigned int result12_flag_en:1; // 
    unsigned int result13_flag_en:1; // 
    unsigned int result14_flag_en:1; // 
    unsigned int result15_flag_en:1; // 
} ADC_INTR_EN_1_REG_s;

typedef union {
    /** @ref ADC_INTR_EN_1_REG_s */
    ADC_INTR_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_EN_1_u;

/** @} end of ADC_INTR_EN_1_REG */ 

/** @defgroup ADC_DMA_EN_0_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_DMA_EN_0_REG_s */
    ADC_DMA_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_EN_0_u;

/** @} end of ADC_DMA_EN_0_REG */ 

/** @defgroup ADC_DMA_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int result8_dma_en:1; // 
    unsigned int result9_dma_en:1; // 
    unsigned int result10_dma_en:1; // 
    unsigned int result11_dma_en:1; // 
    unsigned int result12_dma_en:1; // 
    unsigned int result13_dma_en:1; // 
    unsigned int result14_dma_en:1; // 
    unsigned int result15_dma_en:1; // 
} ADC_DMA_EN_1_REG_s;

typedef union {
    /** @ref ADC_DMA_EN_1_REG_s */
    ADC_DMA_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_EN_1_u;

/** @} end of ADC_DMA_EN_1_REG */ 

/** @defgroup ADC_EVENT_EN_0_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_EVENT_EN_0_REG_s */
    ADC_EVENT_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EVENT_EN_0_u;

/** @} end of ADC_EVENT_EN_0_REG */ 

/** @defgroup ADC_EVENT_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int result8_event_en:1; // 
    unsigned int result9_event_en:1; // 
    unsigned int result10_event_en:1; // 
    unsigned int result11_event_en:1; // 
    unsigned int result12_event_en:1; // 
    unsigned int result13_event_en:1; // 
    unsigned int result14_event_en:1; // 
    unsigned int result15_event_en:1; // 
} ADC_EVENT_EN_1_REG_s;

typedef union {
    /** @ref ADC_EVENT_EN_1_REG_s */
    ADC_EVENT_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EVENT_EN_1_u;

/** @} end of ADC_EVENT_EN_1_REG */ 

/** @defgroup ADC_INTR_NMI_EN_0_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_INTR_NMI_EN_0_REG_s */
    ADC_INTR_NMI_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_NMI_EN_0_u;

/** @} end of ADC_INTR_NMI_EN_0_REG */ 

/** @defgroup ADC_INTR_NMI_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int result8_flag_nmi_en:1; // 
    unsigned int result9_flag_nmi_en:1; // 
    unsigned int result10_flag_nmi_en:1; // 
    unsigned int result11_flag_nmi_en:1; // 
    unsigned int result12_flag_nmi_en:1; // 
    unsigned int result13_flag_nmi_en:1; // 
    unsigned int result14_flag_nmi_en:1; // 
    unsigned int result15_flag_nmi_en:1; // 
} ADC_INTR_NMI_EN_1_REG_s;

typedef union {
    /** @ref ADC_INTR_NMI_EN_1_REG_s */
    ADC_INTR_NMI_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_NMI_EN_1_u;

/** @} end of ADC_INTR_NMI_EN_1_REG */ 

/** @defgroup ADC_INTR_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int intr_first:8; // 
} ADC_INTR_STS_REG_s;

typedef union {
    /** @ref ADC_INTR_STS_REG_s */
    ADC_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_STS_u;

/** @} end of ADC_INTR_STS_REG */ 

/** @defgroup ADC_INTR_SW_REG 
 *  @{
 */
typedef struct {
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

typedef union {
    /** @ref ADC_INTR_SW_REG_s */
    ADC_INTR_SW_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_INTR_SW_u;

/** @} end of ADC_INTR_SW_REG */ 

/** @defgroup ADC_CONV_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int conv_mode:2; // 
    unsigned int start_addr:4; // 
    unsigned int end_addr:4; // 
    unsigned int trigger_source:1; // 
    unsigned int adc_res:2; // 
    unsigned int en_conv:1; // 
} ADC_CONV_CFG_REG_s;

typedef union {
    /** @ref ADC_CONV_CFG_REG_s */
    ADC_CONV_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CONV_CFG_u;

/** @} end of ADC_CONV_CFG_REG */ 

/** @defgroup ADC_CHNL_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int channel_sel:4; // 
    unsigned int vref_sel:2; // 
    unsigned int hw_avg_en:1; // 
    unsigned int window_comp_en:1; // 
    unsigned int bcs_en:1; // 
} ADC_CHNL_CFG_REG_s;

typedef union {
    /** @ref ADC_CHNL_CFG_REG_s */
    ADC_CHNL_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CHNL_CFG_u;

/** @} end of ADC_CHNL_CFG_REG */ 

/** @defgroup ADC_RESULT_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int fifo_en:1; // 
} ADC_RESULT_CFG_REG_s;

typedef union {
    /** @ref ADC_RESULT_CFG_REG_s */
    ADC_RESULT_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_CFG_u;

/** @} end of ADC_RESULT_CFG_REG */ 

/** @defgroup ADC_HW_AVG_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int hw_sample_cnt:4; // 
    unsigned int hw_avg_sample_div:4; // 
} ADC_HW_AVG_CFG_REG_s;

typedef union {
    /** @ref ADC_HW_AVG_CFG_REG_s */
    ADC_HW_AVG_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_HW_AVG_CFG_u;

/** @} end of ADC_HW_AVG_CFG_REG */ 

/** @defgroup ADC_RESULT_REG 
 *  @{
 */
typedef struct {
    unsigned int result:16; // 
} ADC_RESULT_REG_s;

typedef union {
    /** @ref ADC_RESULT_REG_s */
    ADC_RESULT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_RESULT_u;

/** @} end of ADC_RESULT_REG */ 

/** @defgroup ADC_TIMER_START_REG 
 *  @{
 */
typedef struct {
    unsigned int timer_cnt_start:4; // 
} ADC_TIMER_START_REG_s;

typedef union {
    /** @ref ADC_TIMER_START_REG_s */
    ADC_TIMER_START_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_START_u;

/** @} end of ADC_TIMER_START_REG */ 

/** @defgroup ADC_TIMER_SAMPLE_REG 
 *  @{
 */
typedef struct {
    unsigned int timer_cnt_sample:5; // 
} ADC_TIMER_SAMPLE_REG_s;

typedef union {
    /** @ref ADC_TIMER_SAMPLE_REG_s */
    ADC_TIMER_SAMPLE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_SAMPLE_u;

/** @} end of ADC_TIMER_SAMPLE_REG */ 

/** @defgroup ADC_TIMER_CONVERSION_REG 
 *  @{
 */
typedef struct {
    unsigned int timer_cnt_conversion:8; // 
} ADC_TIMER_CONVERSION_REG_s;

typedef union {
    /** @ref ADC_TIMER_CONVERSION_REG_s */
    ADC_TIMER_CONVERSION_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TIMER_CONVERSION_u;

/** @} end of ADC_TIMER_CONVERSION_REG */ 

/** @defgroup ADC_WINDOW_COMP_REG 
 *  @{
 */
typedef struct {
    unsigned int window_comp_th_low:16; // 
    unsigned int window_comp_th_high:16; // 
} ADC_WINDOW_COMP_REG_s;

typedef union {
    /** @ref ADC_WINDOW_COMP_REG_s */
    ADC_WINDOW_COMP_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_WINDOW_COMP_u;

/** @} end of ADC_WINDOW_COMP_REG */ 

/** @defgroup ADC_STATUS_REG 
 *  @{
 */
typedef struct {
    unsigned int adc_busy:1; // 
} ADC_STATUS_REG_s;

typedef union {
    /** @ref ADC_STATUS_REG_s */
    ADC_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_STATUS_u;

/** @} end of ADC_STATUS_REG */ 

/** @defgroup ADC_DMA_REG_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_en:1; // 
} ADC_DMA_REG_REG_s;

typedef union {
    /** @ref ADC_DMA_REG_REG_s */
    ADC_DMA_REG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_REG_u;

/** @} end of ADC_DMA_REG_REG */ 

/** @defgroup ADC_POWER_DN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_dn:1; // 
} ADC_POWER_DN_REG_s;

typedef union {
    /** @ref ADC_POWER_DN_REG_s */
    ADC_POWER_DN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_POWER_DN_u;

/** @} end of ADC_POWER_DN_REG */ 

/** @defgroup ADC_SUBS_PORT_REG 
 *  @{
 */
typedef struct {
    unsigned int subs_port:4; // 
} ADC_SUBS_PORT_REG_s;

typedef union {
    /** @ref ADC_SUBS_PORT_REG_s */
    ADC_SUBS_PORT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SUBS_PORT_u;

/** @} end of ADC_SUBS_PORT_REG */ 

/** @defgroup ADC_PUBS_PORT_REG 
 *  @{
 */
typedef struct {
    unsigned int pubs_port:4; // 
} ADC_PUBS_PORT_REG_s;

typedef union {
    /** @ref ADC_PUBS_PORT_REG_s */
    ADC_PUBS_PORT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_PUBS_PORT_u;

/** @} end of ADC_PUBS_PORT_REG */ 

/** @defgroup ADC_CALIBRATION_REQ_REG 
 *  @{
 */
typedef struct {
    unsigned int cal_req:1; // 
    unsigned int cal_done:1; // 
    unsigned int cal_ctrl:18; // 
} ADC_CALIBRATION_REQ_REG_s;

typedef union {
    /** @ref ADC_CALIBRATION_REQ_REG_s */
    ADC_CALIBRATION_REQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_CALIBRATION_REQ_u;

/** @} end of ADC_CALIBRATION_REQ_REG */ 

/** @defgroup ADC_BLOCK_ASYNC_REQ_REG 
 *  @{
 */
typedef struct {
    unsigned int block_async_req:1; // 
} ADC_BLOCK_ASYNC_REQ_REG_s;

typedef union {
    /** @ref ADC_BLOCK_ASYNC_REQ_REG_s */
    ADC_BLOCK_ASYNC_REQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_BLOCK_ASYNC_REQ_u;

/** @} end of ADC_BLOCK_ASYNC_REQ_REG */ 

/** @defgroup ADC_SW_TRIGGER_REG 
 *  @{
 */
typedef struct {
    unsigned int sw_trigger:1; // 
    unsigned int sw_trigger_en:1; // 
} ADC_SW_TRIGGER_REG_s;

typedef union {
    /** @ref ADC_SW_TRIGGER_REG_s */
    ADC_SW_TRIGGER_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SW_TRIGGER_u;

/** @} end of ADC_SW_TRIGGER_REG */ 

/** @defgroup ADC_SPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int adc_cfg0:8; // 
    unsigned int adc_cfg1:8; // 
    unsigned int adc_cfg2:8; // 
    unsigned int adc_cfg3:8; // 
} ADC_SPARE_CTRL_REG_s;

typedef union {
    /** @ref ADC_SPARE_CTRL_REG_s */
    ADC_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SPARE_CTRL_u;

/** @} end of ADC_SPARE_CTRL_REG */ 

/** @defgroup ADC_SPARE_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int adc_sts0:8; // 
    unsigned int adc_sts1:8; // 
    unsigned int adc_sts2:8; // 
    unsigned int adc_sts3:8; // 
} ADC_SPARE_STS_REG_s;

typedef union {
    /** @ref ADC_SPARE_STS_REG_s */
    ADC_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SPARE_STS_u;

/** @} end of ADC_SPARE_STS_REG */ 

/** @defgroup ADC_EOC_ANA_REG 
 *  @{
 */
typedef struct {
    unsigned int eoc_ana:1; // 
} ADC_EOC_ANA_REG_s;

typedef union {
    /** @ref ADC_EOC_ANA_REG_s */
    ADC_EOC_ANA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_EOC_ANA_u;

/** @} end of ADC_EOC_ANA_REG */ 

/** @defgroup ADC_TEMP_SENSOR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int temp_sensor_en:1; // 
} ADC_TEMP_SENSOR_EN_REG_s;

typedef union {
    /** @ref ADC_TEMP_SENSOR_EN_REG_s */
    ADC_TEMP_SENSOR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_TEMP_SENSOR_EN_u;

/** @} end of ADC_TEMP_SENSOR_EN_REG */ 

/** @defgroup ADC_SM_STATE_REG 
 *  @{
 */
typedef struct {
    unsigned int curr_state:4; // 
} ADC_SM_STATE_REG_s;

typedef union {
    /** @ref ADC_SM_STATE_REG_s */
    ADC_SM_STATE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_SM_STATE_u;

/** @} end of ADC_SM_STATE_REG */ 

/** @defgroup ADC_DMA_TRANSFER_CNT_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_transfer_cnt:4; // 
} ADC_DMA_TRANSFER_CNT_REG_s;

typedef union {
    /** @ref ADC_DMA_TRANSFER_CNT_REG_s */
    ADC_DMA_TRANSFER_CNT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} ADC_DMA_TRANSFER_CNT_u;

/** @} end of ADC_DMA_TRANSFER_CNT_REG */ 

/** @} end of ADC_REGISTERS */ 

typedef struct {
    volatile  ADC_DESC_u DESC;
    volatile  ADC_PWR_EN_u PWR_EN;
    volatile  ADC_RST_CTRL_u RST_CTRL;
    volatile  ADC_RST_STS_u RST_STS;
    volatile  ADC_DBG_CTRL_u DBG_CTRL;
    volatile  ADC_CLK_CTRL_u CLK_CTRL;
    volatile  ADC_CLK_SEL_u CLK_SEL;
    volatile  ADC_INTR_EVENT_u INTR_EVENT;
    volatile  ADC_INTR_EN_0_u INTR_EN_0;
    volatile  ADC_INTR_EN_1_u INTR_EN_1;
    volatile  ADC_DMA_EN_0_u DMA_EN_0;
    volatile  ADC_DMA_EN_1_u DMA_EN_1;
    volatile  ADC_EVENT_EN_0_u EVENT_EN_0;
    volatile  ADC_EVENT_EN_1_u EVENT_EN_1;
    volatile  ADC_INTR_NMI_EN_0_u INTR_NMI_EN_0;
    volatile  ADC_INTR_NMI_EN_1_u INTR_NMI_EN_1;
    volatile  ADC_INTR_STS_u INTR_STS;
    volatile  ADC_INTR_SW_u INTR_SW;
    volatile  ADC_CONV_CFG_u CONV_CFG;
    volatile  ADC_CHNL_CFG_u CHNL_CFG[16];
    volatile  ADC_RESULT_CFG_u RESULT_CFG;
    volatile  ADC_HW_AVG_CFG_u HW_AVG_CFG;
    volatile  ADC_RESULT_u RESULT[16];
    volatile  ADC_TIMER_START_u TIMER_START;
    volatile  ADC_TIMER_SAMPLE_u TIMER_SAMPLE;
    volatile  ADC_TIMER_CONVERSION_u TIMER_CONVERSION;
    volatile  ADC_WINDOW_COMP_u WINDOW_COMP;
    volatile  ADC_STATUS_u STATUS;
    volatile  ADC_DMA_REG_u DMA_REG;
    volatile  ADC_POWER_DN_u POWER_DN;
    volatile  ADC_SUBS_PORT_u SUBS_PORT;
    volatile  ADC_PUBS_PORT_u PUBS_PORT;
    volatile  ADC_CALIBRATION_REQ_u CALIBRATION_REQ;
    volatile  ADC_BLOCK_ASYNC_REQ_u BLOCK_ASYNC_REQ;
    volatile  ADC_SW_TRIGGER_u SW_TRIGGER;
    volatile  ADC_SPARE_CTRL_u SPARE_CTRL;
    volatile  ADC_SPARE_STS_u SPARE_STS;
    volatile  ADC_EOC_ANA_u EOC_ANA;
    volatile  ADC_TEMP_SENSOR_EN_u TEMP_SENSOR_EN;
    volatile  ADC_SM_STATE_u SM_STATE;
    volatile  ADC_DMA_TRANSFER_CNT_u DMA_TRANSFER_CNT;
} ADC_REGS_s;

/** @defgroup ADC_KEY 
 *  @{
 */
#define ADC_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define ADC_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define ADC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)
/** @} end of ADC_KEY*/ 


/** @defgroup ADC_INTERRUPTS 
 *  @{
 */
#define ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_IDX (0)
#define ADC_INTR_EVENT_OV_FLAG_IDX (1)
#define ADC_INTR_EVENT_SEQ_OV_FLOW_IDX (2)
#define ADC_INTR_EVENT_WC_IN_FLAG_IDX (3)
#define ADC_INTR_EVENT_WC_HIGH_FLAG_IDX (4)
#define ADC_INTR_EVENT_WC_LOW_FLAG_IDX (5)
#define ADC_INTR_EVENT_DMA_DONE_IDX (6)
#define ADC_INTR_EVENT_UF_FLAG_IDX (7)
#define ADC_INTR_EVENT_RESULT0_FLAG_IDX (8)
#define ADC_INTR_EVENT_RESULT1_FLAG_IDX (9)
#define ADC_INTR_EVENT_RESULT2_FLAG_IDX (10)
#define ADC_INTR_EVENT_RESULT3_FLAG_IDX (11)
#define ADC_INTR_EVENT_RESULT4_FLAG_IDX (12)
#define ADC_INTR_EVENT_RESULT5_FLAG_IDX (13)
#define ADC_INTR_EVENT_RESULT6_FLAG_IDX (14)
#define ADC_INTR_EVENT_RESULT7_FLAG_IDX (15)
#define ADC_INTR_EVENT_RESULT8_FLAG_IDX (16)
#define ADC_INTR_EVENT_RESULT9_FLAG_IDX (17)
#define ADC_INTR_EVENT_RESULT10_FLAG_IDX (18)
#define ADC_INTR_EVENT_RESULT11_FLAG_IDX (19)
#define ADC_INTR_EVENT_RESULT12_FLAG_IDX (20)
#define ADC_INTR_EVENT_RESULT13_FLAG_IDX (21)
#define ADC_INTR_EVENT_RESULT14_FLAG_IDX (22)
#define ADC_INTR_EVENT_RESULT15_FLAG_IDX (23)
/** @} end of ADC_INTERRUPTS */ 

/** @defgroup ADC_ENUM 
 *  @{
 */

typedef enum {
	ADC_CLK_CTRL_CLK_DIV_BY_1 = 0,
	ADC_CLK_CTRL_CLK_DIV_BY_2 = 1,
	ADC_CLK_CTRL_CLK_DIV_BY_3 = 2,
	ADC_CLK_CTRL_CLK_DIV_BY_4 = 3,
	ADC_CLK_CTRL_CLK_DIV_BY_5 = 4,
	ADC_CLK_CTRL_CLK_DIV_BY_6 = 5,
	ADC_CLK_CTRL_CLK_DIV_BY_7 = 6,
	ADC_CLK_CTRL_CLK_DIV_BY_8 = 7,
} ADC_CLK_CTRL_CLK_DIV_E;

typedef enum {
	ADC_CLK_SEL_APB = 0,
	ADC_CLK_SEL_AHB = 1,
	ADC_CLK_SEL_HF = 2,
} ADC_CLK_SEL_E;

typedef enum {
	ADC_CONV_CFG_CONV_MODE_SINGLE_CONV = 0,
	ADC_CONV_CFG_CONV_MODE_SINGLE_RPT_CONV = 1,
	ADC_CONV_CFG_CONV_MODE_MULTI_CH_CONV = 2,
	ADC_CONV_CFG_CONV_MODE_MULTI_CH_RPT_CONV = 3,
} ADC_CONV_CFG_CONV_MODE_E;

typedef enum {
	ADC_CONV_CFG_TRIGGER_SOURCE_HW = 0,
	ADC_CONV_CFG_TRIGGER_SOURCE_SW = 1,
} ADC_CONV_CFG_TRIGGER_SOURCE_E;

typedef enum {
	ADC_CONV_CFG_ADC_RES_8_BIT = 0,
	ADC_CONV_CFG_ADC_RES_10_BIT = 1,
	ADC_CONV_CFG_ADC_RES_12_BIT = 2,
} ADC_CONV_CFG_ADC_RES_E;

typedef enum {
	ADC_CHNL_CFG_CHANNEL_SEL_CH0_PA27 = 0,
	ADC_CHNL_CFG_CHANNEL_SEL_CH1_PA26 = 1,
	ADC_CHNL_CFG_CHANNEL_SEL_CH2_PA25 = 2,
	ADC_CHNL_CFG_CHANNEL_SEL_CH3_PA24 = 3,
	ADC_CHNL_CFG_CHANNEL_SEL_CH4_PA22 = 4,
	ADC_CHNL_CFG_CHANNEL_SEL_CH5_PA21 = 5,
	ADC_CHNL_CFG_CHANNEL_SEL_CH6_PA20 = 6,
	ADC_CHNL_CFG_CHANNEL_SEL_CH7_PA18 = 7,
	ADC_CHNL_CFG_CHANNEL_SEL_CH8_PA16 = 8,
	ADC_CHNL_CFG_CHANNEL_SEL_CH9_PA15 = 9,
	ADC_CHNL_CFG_CHANNEL_SEL_TEMP_SENSOR = 11,
	ADC_CHNL_CFG_CHANNEL_SEL_BATT_MON = 15,
} ADC_CHNL_CFG_CHANNEL_SEL_E;

typedef enum {
	ADC_CHNL_CFG_VREF_SEL_EXT = 0,
	ADC_CHNL_CFG_VREF_SEL_INT = 1,
} ADC_CHNL_CFG_VREF_SEL_E;

typedef enum {
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_0 = 0,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_2 = 1,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_4 = 2,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_8 = 3,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_16 = 4,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_32 = 5,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_64 = 6,
	ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_128 = 7,
} ADC_HW_AVG_CFG_HW_SAMPLE_CNT_E;

typedef enum {
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_1 = 0,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_2 = 1,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_4 = 2,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_8 = 3,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_16 = 4,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_32 = 5,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_64 = 6,
	ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_128 = 7,
} ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_E;
/** @} end of ADC_ENUM */ 


/** @defgroup ADC_REGISTER_FLAGS 
 *  @{
 */
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
#define ADC_CHNL_CFG_CHANNEL_SEL_OFS (0)
#define ADC_CHNL_CFG_CHANNEL_SEL_MASK ((uint32_t)0x0000000FU)
#define ADC_CHNL_CFG_VREF_SEL_OFS (4)
#define ADC_CHNL_CFG_VREF_SEL_MASK ((uint32_t)0x00000030U)
#define ADC_CHNL_CFG_HW_AVG_EN_OFS (6)
#define ADC_CHNL_CFG_HW_AVG_EN_MASK ((uint32_t)0x00000040U)
#define ADC_CHNL_CFG_WINDOW_COMP_EN_OFS (7)
#define ADC_CHNL_CFG_WINDOW_COMP_EN_MASK ((uint32_t)0x00000080U)
#define ADC_CHNL_CFG_BCS_EN_OFS (8)
#define ADC_CHNL_CFG_BCS_EN_MASK ((uint32_t)0x00000100U)
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
#define ADC_STATUS_ADC_BUSY_OFS (0)
#define ADC_STATUS_ADC_BUSY_MASK ((uint32_t)0x00000001U)
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
/** @} end of ADC_REGISTER_FLAGS */ 

/** @} end of ADC */


#endif
