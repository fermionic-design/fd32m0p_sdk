#ifndef DAC_REGISTERS_H
#define DAC_REGISTERS_H

#include <stdint.h>

typedef struct DAC_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} DAC_DESC_REG_s;

typedef union DAC_DESC_u {
    DAC_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DESC_u;

typedef struct DAC_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} DAC_PWR_EN_REG_s;

typedef union DAC_PWR_EN_u {
    DAC_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_PWR_EN_u;

typedef struct DAC_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} DAC_RST_CTRL_REG_s;

typedef union DAC_RST_CTRL_u {
    DAC_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_CTRL_u;

typedef struct DAC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} DAC_RST_STS_REG_s;

typedef union DAC_RST_STS_u {
    DAC_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_STS_u;

typedef struct DAC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} DAC_CLK_CTRL_REG_s;

typedef union DAC_CLK_CTRL_u {
    DAC_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CLK_CTRL_u;

typedef struct DAC_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} DAC_INTR_STS_REG_s;

typedef union DAC_INTR_STS_u {
    DAC_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_STS_u;

typedef struct DAC_INTR_EVENT_REG_s {
    unsigned int dac_rdy:1; // 
    unsigned int fifo_full:1; // 
    unsigned int fifo_almost_full:1; // 
    unsigned int fifo_empty:1; // 
    unsigned int fifo_almost_empty:1; // 
    unsigned int fifo_overflow:1; // 
    unsigned int fifo_underflow:1; // 
    unsigned int dma_done:1; // 
} DAC_INTR_EVENT_REG_s;

typedef union DAC_INTR_EVENT_u {
    DAC_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_EVENT_u;

typedef struct DAC_INTR_EN_REG_s {
    unsigned int dac_rdy_en:1; // 
    unsigned int fifo_full_en:1; // 
    unsigned int fifo_almost_full_en:1; // 
    unsigned int fifo_empty_en:1; // 
    unsigned int fifo_almost_empty_en:1; // 
    unsigned int fifo_overflow_en:1; // 
    unsigned int fifo_underflow_en:1; // 
    unsigned int dma_done_en:1; // 
} DAC_INTR_EN_REG_s;

typedef union DAC_INTR_EN_u {
    DAC_INTR_EN_REG_s INTR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_EN_u;

typedef struct DAC_INTR_NMI_EN_REG_s {
    unsigned int dac_rdy_nmi_en:1; // 
    unsigned int fifo_full_nmi_en:1; // 
    unsigned int fifo_almost_full_nmi_en:1; // 
    unsigned int fifo_empty_nmi_en:1; // 
    unsigned int fifo_almost_empty_nmi_en:1; // 
    unsigned int fifo_overflow_nmi_en:1; // 
    unsigned int fifo_underflow_nmi_en:1; // 
    unsigned int dma_done_nmi_en:1; // 
} DAC_INTR_NMI_EN_REG_s;

typedef union DAC_INTR_NMI_EN_u {
    DAC_INTR_NMI_EN_REG_s INTR_NMI_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_NMI_EN_u;

typedef struct DAC_EVENT_EN_REG_s {
    unsigned int dac_rdy_event_en:1; // 
    unsigned int fifo_full_event_en:1; // 
    unsigned int fifo_almost_full_event_en:1; // 
    unsigned int fifo_empty_event_en:1; // 
    unsigned int fifo_almost_empty_event_en:1; // 
    unsigned int fifo_overflow_event_en:1; // 
    unsigned int fifo_underflow_event_en:1; // 
    unsigned int dma_done_event_en:1; // 
} DAC_EVENT_EN_REG_s;

typedef union DAC_EVENT_EN_u {
    DAC_EVENT_EN_REG_s EVENT_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_EVENT_EN_u;

typedef struct DAC_INTR_SW_SET_REG_s {
    unsigned int dac_rdy_sw_set:1; // 
    unsigned int fifo_full_sw_set:1; // 
    unsigned int fifo_almost_full_sw_set:1; // 
    unsigned int fifo_empty_sw_set:1; // 
    unsigned int fifo_almost_empty_sw_set:1; // 
    unsigned int fifo_overflow_sw_set:1; // 
    unsigned int fifo_underflow_sw_set:1; // 
    unsigned int dma_done_sw_set:1; // 
} DAC_INTR_SW_SET_REG_s;

typedef union DAC_INTR_SW_SET_u {
    DAC_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_SW_SET_u;

typedef struct DAC_EVENT_CTRL_REG_s {
    unsigned int chan_id0:4; // 
} DAC_EVENT_CTRL_REG_s;

typedef union DAC_EVENT_CTRL_u {
    DAC_EVENT_CTRL_REG_s EVENT_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_EVENT_CTRL_u;

typedef struct DAC_DAC_CTRL0_REG_s {
    unsigned int enable:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int res:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int data_fmt:1; // 
} DAC_DAC_CTRL0_REG_s;

typedef union DAC_DAC_CTRL0_u {
    DAC_DAC_CTRL0_REG_s DAC_CTRL0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DAC_CTRL0_u;

typedef struct DAC_DAC_CTRL1_REG_s {
    unsigned int amp_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int amp_hiz:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int vrefp_sel:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int out_en:1; // 
} DAC_DAC_CTRL1_REG_s;

typedef union DAC_DAC_CTRL1_u {
    DAC_DAC_CTRL1_REG_s DAC_CTRL1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DAC_CTRL1_u;

typedef struct DAC_DAC_CTRL2_REG_s {
    unsigned int fifo_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int fifo_th:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int fifo_trig_sel:2; // 
    unsigned int rsvd_2:6; // 
    unsigned int dma_trig_en:1; // 
} DAC_DAC_CTRL2_REG_s;

typedef union DAC_DAC_CTRL2_u {
    DAC_DAC_CTRL2_REG_s DAC_CTRL2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DAC_CTRL2_u;

typedef struct DAC_DAC_CTRL3_REG_s {
    unsigned int samp_tim_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int samp_tim_rate:4; // 
} DAC_DAC_CTRL3_REG_s;

typedef union DAC_DAC_CTRL3_u {
    DAC_DAC_CTRL3_REG_s DAC_CTRL3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DAC_CTRL3_u;

typedef struct DAC_DAC_DATA_REG_s {
    unsigned int dac_code:12; // 
} DAC_DAC_DATA_REG_s;

typedef union DAC_DAC_DATA_u {
    DAC_DAC_DATA_REG_s DAC_DATA;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DAC_DATA_u;

typedef struct DAC_CAL_CTRL_REG_s {
    unsigned int cal_en:1; // 
    unsigned int cal_sel:1; // 
} DAC_CAL_CTRL_REG_s;

typedef union DAC_CAL_CTRL_u {
    DAC_CAL_CTRL_REG_s CAL_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CAL_CTRL_u;

typedef struct DAC_CAL_STS_REG_s {
    unsigned int cal_done:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int cal_data:7; // 
} DAC_CAL_STS_REG_s;

typedef union DAC_CAL_STS_u {
    DAC_CAL_STS_REG_s CAL_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CAL_STS_u;

typedef struct DAC_REGS_s{
    volatile DAC_DESC_u DESC;
    volatile DAC_PWR_EN_u PWR_EN;
    volatile DAC_RST_CTRL_u RST_CTRL;
    volatile DAC_RST_STS_u RST_STS;
    volatile DAC_CLK_CTRL_u CLK_CTRL;
    volatile DAC_INTR_STS_u INTR_STS;
    volatile DAC_INTR_EVENT_u INTR_EVENT;
    volatile DAC_INTR_EN_u INTR_EN;
    volatile DAC_INTR_NMI_EN_u INTR_NMI_EN;
    volatile DAC_EVENT_EN_u EVENT_EN;
    volatile DAC_INTR_SW_SET_u INTR_SW_SET;
    volatile DAC_EVENT_CTRL_u EVENT_CTRL;
    volatile DAC_DAC_CTRL0_u DAC_CTRL0;
    volatile DAC_DAC_CTRL1_u DAC_CTRL1;
    volatile DAC_DAC_CTRL2_u DAC_CTRL2;
    volatile DAC_DAC_CTRL3_u DAC_CTRL3;
    volatile DAC_DAC_DATA_u DAC_DATA;
    volatile DAC_CAL_CTRL_u CAL_CTRL;
    volatile DAC_CAL_STS_u CAL_STS;
} DAC_REGS_s;

#define DAC_DESC_module_type_OFS (0)
#define DAC_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define DAC_DESC_modue_subtype_OFS (8)
#define DAC_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define DAC_DESC_major_rev_OFS (16)
#define DAC_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define DAC_DESC_minor_rev_OFS (20)
#define DAC_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define DAC_PWR_EN_pwr_en_OFS (0)
#define DAC_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define DAC_PWR_EN_pwr_en_key_OFS (24)
#define DAC_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define DAC_RST_CTRL_rst_OFS (0)
#define DAC_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define DAC_RST_CTRL_rst_sts_clr_OFS (1)
#define DAC_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define DAC_RST_CTRL_rst_key_OFS (24)
#define DAC_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define DAC_RST_STS_rst_sts_OFS (0)
#define DAC_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define DAC_CLK_CTRL_clk_en_OFS (0)
#define DAC_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_STS_intr_first_OFS (0)
#define DAC_INTR_STS_intr_first_MASK ((uint32_t)0x000000FFU)
#define DAC_INTR_EVENT_dac_rdy_OFS (0)
#define DAC_INTR_EVENT_dac_rdy_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_EVENT_fifo_full_OFS (1)
#define DAC_INTR_EVENT_fifo_full_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_EVENT_fifo_almost_full_OFS (2)
#define DAC_INTR_EVENT_fifo_almost_full_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_EVENT_fifo_empty_OFS (3)
#define DAC_INTR_EVENT_fifo_empty_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_EVENT_fifo_almost_empty_OFS (4)
#define DAC_INTR_EVENT_fifo_almost_empty_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_EVENT_fifo_overflow_OFS (5)
#define DAC_INTR_EVENT_fifo_overflow_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_EVENT_fifo_underflow_OFS (6)
#define DAC_INTR_EVENT_fifo_underflow_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_EVENT_dma_done_OFS (7)
#define DAC_INTR_EVENT_dma_done_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_EN_dac_rdy_en_OFS (0)
#define DAC_INTR_EN_dac_rdy_en_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_EN_fifo_full_en_OFS (1)
#define DAC_INTR_EN_fifo_full_en_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_EN_fifo_almost_full_en_OFS (2)
#define DAC_INTR_EN_fifo_almost_full_en_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_EN_fifo_empty_en_OFS (3)
#define DAC_INTR_EN_fifo_empty_en_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_EN_fifo_almost_empty_en_OFS (4)
#define DAC_INTR_EN_fifo_almost_empty_en_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_EN_fifo_overflow_en_OFS (5)
#define DAC_INTR_EN_fifo_overflow_en_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_EN_fifo_underflow_en_OFS (6)
#define DAC_INTR_EN_fifo_underflow_en_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_EN_dma_done_en_OFS (7)
#define DAC_INTR_EN_dma_done_en_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_NMI_EN_dac_rdy_nmi_en_OFS (0)
#define DAC_INTR_NMI_EN_dac_rdy_nmi_en_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_NMI_EN_fifo_full_nmi_en_OFS (1)
#define DAC_INTR_NMI_EN_fifo_full_nmi_en_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_NMI_EN_fifo_almost_full_nmi_en_OFS (2)
#define DAC_INTR_NMI_EN_fifo_almost_full_nmi_en_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_NMI_EN_fifo_empty_nmi_en_OFS (3)
#define DAC_INTR_NMI_EN_fifo_empty_nmi_en_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_NMI_EN_fifo_almost_empty_nmi_en_OFS (4)
#define DAC_INTR_NMI_EN_fifo_almost_empty_nmi_en_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_NMI_EN_fifo_overflow_nmi_en_OFS (5)
#define DAC_INTR_NMI_EN_fifo_overflow_nmi_en_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_NMI_EN_fifo_underflow_nmi_en_OFS (6)
#define DAC_INTR_NMI_EN_fifo_underflow_nmi_en_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_NMI_EN_dma_done_nmi_en_OFS (7)
#define DAC_INTR_NMI_EN_dma_done_nmi_en_MASK ((uint32_t)0x00000080U)
#define DAC_EVENT_EN_dac_rdy_event_en_OFS (0)
#define DAC_EVENT_EN_dac_rdy_event_en_MASK ((uint32_t)0x00000001U)
#define DAC_EVENT_EN_fifo_full_event_en_OFS (1)
#define DAC_EVENT_EN_fifo_full_event_en_MASK ((uint32_t)0x00000002U)
#define DAC_EVENT_EN_fifo_almost_full_event_en_OFS (2)
#define DAC_EVENT_EN_fifo_almost_full_event_en_MASK ((uint32_t)0x00000004U)
#define DAC_EVENT_EN_fifo_empty_event_en_OFS (3)
#define DAC_EVENT_EN_fifo_empty_event_en_MASK ((uint32_t)0x00000008U)
#define DAC_EVENT_EN_fifo_almost_empty_event_en_OFS (4)
#define DAC_EVENT_EN_fifo_almost_empty_event_en_MASK ((uint32_t)0x00000010U)
#define DAC_EVENT_EN_fifo_overflow_event_en_OFS (5)
#define DAC_EVENT_EN_fifo_overflow_event_en_MASK ((uint32_t)0x00000020U)
#define DAC_EVENT_EN_fifo_underflow_event_en_OFS (6)
#define DAC_EVENT_EN_fifo_underflow_event_en_MASK ((uint32_t)0x00000040U)
#define DAC_EVENT_EN_dma_done_event_en_OFS (7)
#define DAC_EVENT_EN_dma_done_event_en_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_SW_SET_dac_rdy_sw_set_OFS (0)
#define DAC_INTR_SW_SET_dac_rdy_sw_set_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_SW_SET_fifo_full_sw_set_OFS (1)
#define DAC_INTR_SW_SET_fifo_full_sw_set_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_SW_SET_fifo_almost_full_sw_set_OFS (2)
#define DAC_INTR_SW_SET_fifo_almost_full_sw_set_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_SW_SET_fifo_empty_sw_set_OFS (3)
#define DAC_INTR_SW_SET_fifo_empty_sw_set_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_SW_SET_fifo_almost_empty_sw_set_OFS (4)
#define DAC_INTR_SW_SET_fifo_almost_empty_sw_set_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_SW_SET_fifo_overflow_sw_set_OFS (5)
#define DAC_INTR_SW_SET_fifo_overflow_sw_set_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_SW_SET_fifo_underflow_sw_set_OFS (6)
#define DAC_INTR_SW_SET_fifo_underflow_sw_set_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_SW_SET_dma_done_sw_set_OFS (7)
#define DAC_INTR_SW_SET_dma_done_sw_set_MASK ((uint32_t)0x00000080U)
#define DAC_EVENT_CTRL_chan_id0_OFS (0)
#define DAC_EVENT_CTRL_chan_id0_MASK ((uint32_t)0x0000000FU)
#define DAC_DAC_CTRL0_enable_OFS (0)
#define DAC_DAC_CTRL0_enable_MASK ((uint32_t)0x00000001U)
#define DAC_DAC_CTRL0_res_OFS (8)
#define DAC_DAC_CTRL0_res_MASK ((uint32_t)0x00000100U)
#define DAC_DAC_CTRL0_data_fmt_OFS (16)
#define DAC_DAC_CTRL0_data_fmt_MASK ((uint32_t)0x00010000U)
#define DAC_DAC_CTRL1_amp_en_OFS (0)
#define DAC_DAC_CTRL1_amp_en_MASK ((uint32_t)0x00000001U)
#define DAC_DAC_CTRL1_amp_hiz_OFS (8)
#define DAC_DAC_CTRL1_amp_hiz_MASK ((uint32_t)0x00000300U)
#define DAC_DAC_CTRL1_vrefp_sel_OFS (16)
#define DAC_DAC_CTRL1_vrefp_sel_MASK ((uint32_t)0x00010000U)
#define DAC_DAC_CTRL1_out_en_OFS (24)
#define DAC_DAC_CTRL1_out_en_MASK ((uint32_t)0x01000000U)
#define DAC_DAC_CTRL2_fifo_en_OFS (0)
#define DAC_DAC_CTRL2_fifo_en_MASK ((uint32_t)0x00000001U)
#define DAC_DAC_CTRL2_fifo_th_OFS (8)
#define DAC_DAC_CTRL2_fifo_th_MASK ((uint32_t)0x00000300U)
#define DAC_DAC_CTRL2_fifo_trig_sel_OFS (16)
#define DAC_DAC_CTRL2_fifo_trig_sel_MASK ((uint32_t)0x00030000U)
#define DAC_DAC_CTRL2_dma_trig_en_OFS (24)
#define DAC_DAC_CTRL2_dma_trig_en_MASK ((uint32_t)0x01000000U)
#define DAC_DAC_CTRL3_samp_tim_en_OFS (0)
#define DAC_DAC_CTRL3_samp_tim_en_MASK ((uint32_t)0x00000001U)
#define DAC_DAC_CTRL3_samp_tim_rate_OFS (8)
#define DAC_DAC_CTRL3_samp_tim_rate_MASK ((uint32_t)0x00000F00U)
#define DAC_DAC_DATA_dac_code_OFS (0)
#define DAC_DAC_DATA_dac_code_MASK ((uint32_t)0x00000FFFU)
#define DAC_CAL_CTRL_cal_en_OFS (0)
#define DAC_CAL_CTRL_cal_en_MASK ((uint32_t)0x00000001U)
#define DAC_CAL_CTRL_cal_sel_OFS (1)
#define DAC_CAL_CTRL_cal_sel_MASK ((uint32_t)0x00000002U)
#define DAC_CAL_STS_cal_done_OFS (0)
#define DAC_CAL_STS_cal_done_MASK ((uint32_t)0x00000001U)
#define DAC_CAL_STS_cal_data_OFS (8)
#define DAC_CAL_STS_cal_data_MASK ((uint32_t)0x00007F00U)
#endif
