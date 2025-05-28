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
    DAC_DESC_REG_s;
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
    DAC_PWR_EN_REG_s;
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
    DAC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_CTRL_u;

typedef struct DAC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} DAC_RST_STS_REG_s;

typedef union DAC_RST_STS_u {
    DAC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_STS_u;

typedef struct DAC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} DAC_CLK_CTRL_REG_s;

typedef union DAC_CLK_CTRL_u {
    DAC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CLK_CTRL_u;

typedef struct DAC_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} DAC_INTR_STS_REG_s;

typedef union DAC_INTR_STS_u {
    DAC_INTR_STS_REG_s;
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
    DAC_INTR_EVENT_REG_s;
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
    DAC_INTR_EN_REG_s;
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
    DAC_INTR_NMI_EN_REG_s;
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
    DAC_EVENT_EN_REG_s;
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
    DAC_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_SW_SET_u;

typedef struct DAC_EVENT_CTRL_REG_s {
    unsigned int chan_id0:4; // 
} DAC_EVENT_CTRL_REG_s;

typedef union DAC_EVENT_CTRL_u {
    DAC_EVENT_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_EVENT_CTRL_u;

typedef struct DAC_CTRL0_REG_s {
    unsigned int enable:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int res:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int data_fmt:1; // 
} DAC_CTRL0_REG_s;

typedef union DAC_CTRL0_u {
    DAC_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL0_u;

typedef struct DAC_CTRL1_REG_s {
    unsigned int amp_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int amp_hiz:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int vrefp_sel:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int out_en:1; // 
} DAC_CTRL1_REG_s;

typedef union DAC_CTRL1_u {
    DAC_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL1_u;

typedef struct DAC_CTRL2_REG_s {
    unsigned int fifo_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int fifo_th:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int fifo_trig_sel:2; // 
    unsigned int rsvd_2:6; // 
    unsigned int dma_trig_en:1; // 
} DAC_CTRL2_REG_s;

typedef union DAC_CTRL2_u {
    DAC_CTRL2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL2_u;

typedef struct DAC_CTRL3_REG_s {
    unsigned int samp_tim_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int samp_tim_rate:4; // 
} DAC_CTRL3_REG_s;

typedef union DAC_CTRL3_u {
    DAC_CTRL3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL3_u;

typedef struct DAC_DATA_REG_s {
    unsigned int dac_code:13; // 
} DAC_DATA_REG_s;

typedef union DAC_DATA_u {
    DAC_DATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DATA_u;

typedef struct DAC_CAL_CTRL_REG_s {
    unsigned int cal_en:1; // 
    unsigned int cal_sel:1; // 
} DAC_CAL_CTRL_REG_s;

typedef union DAC_CAL_CTRL_u {
    DAC_CAL_CTRL_REG_s;
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
    DAC_CAL_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CAL_STS_u;

typedef struct DAC_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} DAC_SPARE_CTRL_REG_s;

typedef union DAC_SPARE_CTRL_u {
    DAC_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_SPARE_CTRL_u;

typedef struct DAC_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} DAC_SPARE_STS_REG_s;

typedef union DAC_SPARE_STS_u {
    DAC_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_SPARE_STS_u;

typedef struct DAC_REGS_s{
    volatile  DAC_DESC_u DESC;
    volatile  DAC_PWR_EN_u PWR_EN;
    volatile  DAC_RST_CTRL_u RST_CTRL;
    volatile  DAC_RST_STS_u RST_STS;
    volatile  DAC_CLK_CTRL_u CLK_CTRL;
    volatile  DAC_INTR_STS_u INTR_STS;
    volatile  DAC_INTR_EVENT_u INTR_EVENT;
    volatile  DAC_INTR_EN_u INTR_EN;
    volatile  DAC_INTR_NMI_EN_u INTR_NMI_EN;
    volatile  DAC_EVENT_EN_u EVENT_EN;
    volatile  DAC_INTR_SW_SET_u INTR_SW_SET;
    volatile  DAC_EVENT_CTRL_u EVENT_CTRL;
    volatile  DAC_CTRL0_u CTRL0;
    volatile  DAC_CTRL1_u CTRL1;
    volatile  DAC_CTRL2_u CTRL2;
    volatile  DAC_CTRL3_u CTRL3;
    volatile  DAC_DATA_u DATA;
    volatile  DAC_CAL_CTRL_u CAL_CTRL;
    volatile  DAC_CAL_STS_u CAL_STS;
    volatile  DAC_SPARE_CTRL_u SPARE_CTRL;
    volatile  DAC_SPARE_STS_u SPARE_STS;
} DAC_REGS_s;

#define DAC_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define DAC_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define DAC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)

#define DAC_INTR_EVENT_DAC_RDY_IDX (0)
#define DAC_INTR_EVENT_FIFO_FULL_IDX (1)
#define DAC_INTR_EVENT_FIFO_ALMOST_FULL_IDX (2)
#define DAC_INTR_EVENT_FIFO_EMPTY_IDX (3)
#define DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_IDX (4)
#define DAC_INTR_EVENT_FIFO_OVERFLOW_IDX (5)
#define DAC_INTR_EVENT_FIFO_UNDERFLOW_IDX (6)
#define DAC_INTR_EVENT_DMA_DONE_IDX (7)

typedef enum {
	DAC_CTRL0_RES_8BIT = 0,
	DAC_CTRL0_RES_13BIT = 1,
} DAC_CTRL0_RES_E;

typedef enum {
	DAC_CTRL0_DATA_FMT_BINARY = 0,
	DAC_CTRL0_DATA_FMT_TWOS_COMPLEMENT = 1,
} DAC_CTRL0_DATA_FMT_E;

typedef enum {
	DAC_CTRL1_VREFP_SEL_EXT = 0,
	DAC_CTRL1_VREFP_SEL_INT = 1,
} DAC_CTRL1_VREFP_SEL_E;

typedef enum {
	DAC_CTRL2_FIFO_TH_EMPTY = 0,
	DAC_CTRL2_FIFO_TH_ALMOST_EMPTY = 1,
} DAC_CTRL2_FIFO_TH_E;

typedef enum {
	DAC_CTRL2_FIFO_TRIG_SEL_HW_TRIGGER = 0,
	DAC_CTRL2_FIFO_TRIG_SEL_FIFO_EMPTY = 1,
} DAC_CTRL2_FIFO_TRIG_SEL_E;

#define DAC_DESC_MODULE_TYPE_OFS (0)
#define DAC_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define DAC_DESC_MODUE_SUBTYPE_OFS (8)
#define DAC_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define DAC_DESC_MAJOR_REV_OFS (16)
#define DAC_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define DAC_DESC_MINOR_REV_OFS (20)
#define DAC_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define DAC_PWR_EN_PWR_EN_OFS (0)
#define DAC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define DAC_PWR_EN_PWR_EN_KEY_OFS (24)
#define DAC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define DAC_RST_CTRL_RST_OFS (0)
#define DAC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define DAC_RST_CTRL_RST_STS_CLR_OFS (1)
#define DAC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define DAC_RST_CTRL_RST_KEY_OFS (24)
#define DAC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define DAC_RST_STS_RST_STS_OFS (0)
#define DAC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define DAC_CLK_CTRL_CLK_EN_OFS (0)
#define DAC_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_STS_INTR_FIRST_OFS (0)
#define DAC_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x000000FFU)
#define DAC_INTR_EVENT_DAC_RDY_OFS (0)
#define DAC_INTR_EVENT_DAC_RDY_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_EVENT_FIFO_FULL_OFS (1)
#define DAC_INTR_EVENT_FIFO_FULL_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_EVENT_FIFO_ALMOST_FULL_OFS (2)
#define DAC_INTR_EVENT_FIFO_ALMOST_FULL_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_EVENT_FIFO_EMPTY_OFS (3)
#define DAC_INTR_EVENT_FIFO_EMPTY_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_OFS (4)
#define DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_EVENT_FIFO_OVERFLOW_OFS (5)
#define DAC_INTR_EVENT_FIFO_OVERFLOW_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_EVENT_FIFO_UNDERFLOW_OFS (6)
#define DAC_INTR_EVENT_FIFO_UNDERFLOW_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_EVENT_DMA_DONE_OFS (7)
#define DAC_INTR_EVENT_DMA_DONE_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_EN_DAC_RDY_EN_OFS (0)
#define DAC_INTR_EN_DAC_RDY_EN_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_EN_FIFO_FULL_EN_OFS (1)
#define DAC_INTR_EN_FIFO_FULL_EN_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_EN_FIFO_ALMOST_FULL_EN_OFS (2)
#define DAC_INTR_EN_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_EN_FIFO_EMPTY_EN_OFS (3)
#define DAC_INTR_EN_FIFO_EMPTY_EN_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_EN_FIFO_ALMOST_EMPTY_EN_OFS (4)
#define DAC_INTR_EN_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_EN_FIFO_OVERFLOW_EN_OFS (5)
#define DAC_INTR_EN_FIFO_OVERFLOW_EN_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_EN_FIFO_UNDERFLOW_EN_OFS (6)
#define DAC_INTR_EN_FIFO_UNDERFLOW_EN_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_EN_DMA_DONE_EN_OFS (7)
#define DAC_INTR_EN_DMA_DONE_EN_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_NMI_EN_DAC_RDY_NMI_EN_OFS (0)
#define DAC_INTR_NMI_EN_DAC_RDY_NMI_EN_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_NMI_EN_FIFO_FULL_NMI_EN_OFS (1)
#define DAC_INTR_NMI_EN_FIFO_FULL_NMI_EN_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_NMI_EN_FIFO_ALMOST_FULL_NMI_EN_OFS (2)
#define DAC_INTR_NMI_EN_FIFO_ALMOST_FULL_NMI_EN_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_NMI_EN_FIFO_EMPTY_NMI_EN_OFS (3)
#define DAC_INTR_NMI_EN_FIFO_EMPTY_NMI_EN_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_NMI_EN_FIFO_ALMOST_EMPTY_NMI_EN_OFS (4)
#define DAC_INTR_NMI_EN_FIFO_ALMOST_EMPTY_NMI_EN_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_NMI_EN_FIFO_OVERFLOW_NMI_EN_OFS (5)
#define DAC_INTR_NMI_EN_FIFO_OVERFLOW_NMI_EN_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_NMI_EN_FIFO_UNDERFLOW_NMI_EN_OFS (6)
#define DAC_INTR_NMI_EN_FIFO_UNDERFLOW_NMI_EN_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_NMI_EN_DMA_DONE_NMI_EN_OFS (7)
#define DAC_INTR_NMI_EN_DMA_DONE_NMI_EN_MASK ((uint32_t)0x00000080U)
#define DAC_EVENT_EN_DAC_RDY_EVENT_EN_OFS (0)
#define DAC_EVENT_EN_DAC_RDY_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define DAC_EVENT_EN_FIFO_FULL_EVENT_EN_OFS (1)
#define DAC_EVENT_EN_FIFO_FULL_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define DAC_EVENT_EN_FIFO_ALMOST_FULL_EVENT_EN_OFS (2)
#define DAC_EVENT_EN_FIFO_ALMOST_FULL_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define DAC_EVENT_EN_FIFO_EMPTY_EVENT_EN_OFS (3)
#define DAC_EVENT_EN_FIFO_EMPTY_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define DAC_EVENT_EN_FIFO_ALMOST_EMPTY_EVENT_EN_OFS (4)
#define DAC_EVENT_EN_FIFO_ALMOST_EMPTY_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define DAC_EVENT_EN_FIFO_OVERFLOW_EVENT_EN_OFS (5)
#define DAC_EVENT_EN_FIFO_OVERFLOW_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define DAC_EVENT_EN_FIFO_UNDERFLOW_EVENT_EN_OFS (6)
#define DAC_EVENT_EN_FIFO_UNDERFLOW_EVENT_EN_MASK ((uint32_t)0x00000040U)
#define DAC_EVENT_EN_DMA_DONE_EVENT_EN_OFS (7)
#define DAC_EVENT_EN_DMA_DONE_EVENT_EN_MASK ((uint32_t)0x00000080U)
#define DAC_INTR_SW_SET_DAC_RDY_SW_SET_OFS (0)
#define DAC_INTR_SW_SET_DAC_RDY_SW_SET_MASK ((uint32_t)0x00000001U)
#define DAC_INTR_SW_SET_FIFO_FULL_SW_SET_OFS (1)
#define DAC_INTR_SW_SET_FIFO_FULL_SW_SET_MASK ((uint32_t)0x00000002U)
#define DAC_INTR_SW_SET_FIFO_ALMOST_FULL_SW_SET_OFS (2)
#define DAC_INTR_SW_SET_FIFO_ALMOST_FULL_SW_SET_MASK ((uint32_t)0x00000004U)
#define DAC_INTR_SW_SET_FIFO_EMPTY_SW_SET_OFS (3)
#define DAC_INTR_SW_SET_FIFO_EMPTY_SW_SET_MASK ((uint32_t)0x00000008U)
#define DAC_INTR_SW_SET_FIFO_ALMOST_EMPTY_SW_SET_OFS (4)
#define DAC_INTR_SW_SET_FIFO_ALMOST_EMPTY_SW_SET_MASK ((uint32_t)0x00000010U)
#define DAC_INTR_SW_SET_FIFO_OVERFLOW_SW_SET_OFS (5)
#define DAC_INTR_SW_SET_FIFO_OVERFLOW_SW_SET_MASK ((uint32_t)0x00000020U)
#define DAC_INTR_SW_SET_FIFO_UNDERFLOW_SW_SET_OFS (6)
#define DAC_INTR_SW_SET_FIFO_UNDERFLOW_SW_SET_MASK ((uint32_t)0x00000040U)
#define DAC_INTR_SW_SET_DMA_DONE_SW_SET_OFS (7)
#define DAC_INTR_SW_SET_DMA_DONE_SW_SET_MASK ((uint32_t)0x00000080U)
#define DAC_EVENT_CTRL_CHAN_ID0_OFS (0)
#define DAC_EVENT_CTRL_CHAN_ID0_MASK ((uint32_t)0x0000000FU)
#define DAC_CTRL0_ENABLE_OFS (0)
#define DAC_CTRL0_ENABLE_MASK ((uint32_t)0x00000001U)
#define DAC_CTRL0_RES_OFS (8)
#define DAC_CTRL0_RES_MASK ((uint32_t)0x00000100U)
#define DAC_CTRL0_DATA_FMT_OFS (16)
#define DAC_CTRL0_DATA_FMT_MASK ((uint32_t)0x00010000U)
#define DAC_CTRL1_AMP_EN_OFS (0)
#define DAC_CTRL1_AMP_EN_MASK ((uint32_t)0x00000001U)
#define DAC_CTRL1_AMP_HIZ_OFS (8)
#define DAC_CTRL1_AMP_HIZ_MASK ((uint32_t)0x00000100U)
#define DAC_CTRL1_VREFP_SEL_OFS (16)
#define DAC_CTRL1_VREFP_SEL_MASK ((uint32_t)0x00010000U)
#define DAC_CTRL1_OUT_EN_OFS (24)
#define DAC_CTRL1_OUT_EN_MASK ((uint32_t)0x01000000U)
#define DAC_CTRL2_FIFO_EN_OFS (0)
#define DAC_CTRL2_FIFO_EN_MASK ((uint32_t)0x00000001U)
#define DAC_CTRL2_FIFO_TH_OFS (8)
#define DAC_CTRL2_FIFO_TH_MASK ((uint32_t)0x00000300U)
#define DAC_CTRL2_FIFO_TRIG_SEL_OFS (16)
#define DAC_CTRL2_FIFO_TRIG_SEL_MASK ((uint32_t)0x00030000U)
#define DAC_CTRL2_DMA_TRIG_EN_OFS (24)
#define DAC_CTRL2_DMA_TRIG_EN_MASK ((uint32_t)0x01000000U)
#define DAC_CTRL3_SAMP_TIM_EN_OFS (0)
#define DAC_CTRL3_SAMP_TIM_EN_MASK ((uint32_t)0x00000001U)
#define DAC_CTRL3_SAMP_TIM_RATE_OFS (8)
#define DAC_CTRL3_SAMP_TIM_RATE_MASK ((uint32_t)0x00000F00U)
#define DAC_DATA_DAC_CODE_OFS (0)
#define DAC_DATA_DAC_CODE_MASK ((uint32_t)0x00001FFFU)
#define DAC_CAL_CTRL_CAL_EN_OFS (0)
#define DAC_CAL_CTRL_CAL_EN_MASK ((uint32_t)0x00000001U)
#define DAC_CAL_CTRL_CAL_SEL_OFS (1)
#define DAC_CAL_CTRL_CAL_SEL_MASK ((uint32_t)0x00000002U)
#define DAC_CAL_STS_CAL_DONE_OFS (0)
#define DAC_CAL_STS_CAL_DONE_MASK ((uint32_t)0x00000001U)
#define DAC_CAL_STS_CAL_DATA_OFS (8)
#define DAC_CAL_STS_CAL_DATA_MASK ((uint32_t)0x00007F00U)
#define DAC_SPARE_CTRL_CFG0_OFS (0)
#define DAC_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define DAC_SPARE_CTRL_CFG1_OFS (8)
#define DAC_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define DAC_SPARE_STS_STS0_OFS (0)
#define DAC_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define DAC_SPARE_STS_STS1_OFS (8)
#define DAC_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)

#endif
