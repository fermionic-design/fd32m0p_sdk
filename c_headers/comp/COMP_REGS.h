#ifndef COMP_REGISTERS_H
#define COMP_REGISTERS_H

#include <stdint.h>

typedef struct COMP_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} COMP_DESC_REG_s;

typedef union COMP_DESC_u {
    COMP_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_DESC_u;

typedef struct COMP_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} COMP_PWR_EN_REG_s;

typedef union COMP_PWR_EN_u {
    COMP_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_PWR_EN_u;

typedef struct COMP_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} COMP_RST_CTRL_REG_s;

typedef union COMP_RST_CTRL_u {
    COMP_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_CTRL_u;

typedef struct COMP_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} COMP_RST_STS_REG_s;

typedef union COMP_RST_STS_u {
    COMP_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_STS_u;

typedef struct COMP_CLK_CTRL_REG_s {
    unsigned int en_async_clk_req:1; // 
} COMP_CLK_CTRL_REG_s;

typedef union COMP_CLK_CTRL_u {
    COMP_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_CLK_CTRL_u;

typedef struct COMP_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} COMP_INTR_STS_REG_s;

typedef union COMP_INTR_STS_u {
    COMP_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_STS_u;

typedef struct COMP_INTR_EVENT_REG_s {
    unsigned int comp_out_edge0:1; // 
    unsigned int comp_out_edge1:1; // 
    unsigned int comp_out:1; // 
} COMP_INTR_EVENT_REG_s;

typedef union COMP_INTR_EVENT_u {
    COMP_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_EVENT_u;

typedef struct COMP_INTR_EN_REG_s {
    unsigned int comp_out_edge0_en:1; // 
    unsigned int comp_out_edge1_en:1; // 
    unsigned int comp_out_en:1; // 
} COMP_INTR_EN_REG_s;

typedef union COMP_INTR_EN_u {
    COMP_INTR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_EN_u;

typedef struct COMP_INTR_NMI_EN_REG_s {
    unsigned int comp_out_edge0_nmi_en:1; // 
    unsigned int comp_out_edge1_nmi_en:1; // 
    unsigned int comp_out_nmi_en:1; // 
} COMP_INTR_NMI_EN_REG_s;

typedef union COMP_INTR_NMI_EN_u {
    COMP_INTR_NMI_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_NMI_EN_u;

typedef struct COMP_EVENT_EN_REG_s {
    unsigned int comp_out_edge0_event_en:1; // 
    unsigned int comp_out_edge1_event_en:1; // 
    unsigned int comp_out_event_en:1; // 
} COMP_EVENT_EN_REG_s;

typedef union COMP_EVENT_EN_u {
    COMP_EVENT_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_EVENT_EN_u;

typedef struct COMP_INTR_SW_SET_REG_s {
    unsigned int comp_out_edge0_sw_set:1; // 
    unsigned int comp_out_edge1_sw_set:1; // 
    unsigned int comp_out_sw_set:1; // 
} COMP_INTR_SW_SET_REG_s;

typedef union COMP_INTR_SW_SET_u {
    COMP_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_SW_SET_u;

typedef struct COMP_STS_REG_s {
    unsigned int comp_out_sts:1; // 
} COMP_STS_REG_s;

typedef union COMP_STS_u {
    COMP_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_STS_u;

typedef struct COMP_CTRL0_REG_s {
    unsigned int enable:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int speed:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int hyst:2; // 
    unsigned int rsvd_2:6; // 
    unsigned int intr_edge_sel:1; // 
} COMP_CTRL0_REG_s;

typedef union COMP_CTRL0_u {
    COMP_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_CTRL0_u;

typedef struct COMP_INPUT_CTRL0_REG_s {
    unsigned int in_p_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int in_p_sel:3; // 
    unsigned int rsvd_1:5; // 
    unsigned int in_m_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int in_m_sel:3; // 
} COMP_INPUT_CTRL0_REG_s;

typedef union COMP_INPUT_CTRL0_u {
    COMP_INPUT_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INPUT_CTRL0_u;

typedef struct COMP_INPUT_CTRL1_REG_s {
    unsigned int in_short:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int in_swap:1; // 
} COMP_INPUT_CTRL1_REG_s;

typedef union COMP_INPUT_CTRL1_u {
    COMP_INPUT_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INPUT_CTRL1_u;

typedef struct COMP_OUT_CTRL0_REG_s {
    unsigned int out_pol:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int samp_en:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int filt_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int filt_delay:2; // 
} COMP_OUT_CTRL0_REG_s;

typedef union COMP_OUT_CTRL0_u {
    COMP_OUT_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_OUT_CTRL0_u;

typedef struct COMP_OUT_CTRL1_REG_s {
    unsigned int win_comp_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int win_comp_sel:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int blank_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int blank_src:3; // 
} COMP_OUT_CTRL1_REG_s;

typedef union COMP_OUT_CTRL1_u {
    COMP_OUT_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_OUT_CTRL1_u;

typedef struct COMP_REF_CTRL0_REG_s {
    unsigned int ref_sel:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int ref_src:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int ref_mode:1; // 
} COMP_REF_CTRL0_REG_s;

typedef union COMP_REF_CTRL0_u {
    COMP_REF_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_REF_CTRL0_u;

typedef struct COMP_REF_CTRL1_REG_s {
    unsigned int dac_code0:8; // 
    unsigned int dac_code1:8; // 
    unsigned int dac_mode:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dac_code_sel:1; // 
} COMP_REF_CTRL1_REG_s;

typedef union COMP_REF_CTRL1_u {
    COMP_REF_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_REF_CTRL1_u;

typedef struct COMP_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} COMP_SPARE_CTRL_REG_s;

typedef union COMP_SPARE_CTRL_u {
    COMP_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_SPARE_CTRL_u;

typedef struct COMP_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} COMP_SPARE_STS_REG_s;

typedef union COMP_SPARE_STS_u {
    COMP_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_SPARE_STS_u;

typedef struct COMP_REGS_s{
    volatile COMP_DESC_u DESC;
    volatile COMP_PWR_EN_u PWR_EN;
    volatile COMP_RST_CTRL_u RST_CTRL;
    volatile COMP_RST_STS_u RST_STS;
    volatile COMP_CLK_CTRL_u CLK_CTRL;
    volatile COMP_INTR_STS_u INTR_STS;
    volatile COMP_INTR_EVENT_u INTR_EVENT;
    volatile COMP_INTR_EN_u INTR_EN;
    volatile COMP_INTR_NMI_EN_u INTR_NMI_EN;
    volatile COMP_EVENT_EN_u EVENT_EN;
    volatile COMP_INTR_SW_SET_u INTR_SW_SET;
    volatile COMP_STS_u STS;
    volatile COMP_CTRL0_u CTRL0;
    volatile COMP_INPUT_CTRL0_u INPUT_CTRL0;
    volatile COMP_INPUT_CTRL1_u INPUT_CTRL1;
    volatile COMP_OUT_CTRL0_u OUT_CTRL0;
    volatile COMP_OUT_CTRL1_u OUT_CTRL1;
    volatile COMP_REF_CTRL0_u REF_CTRL0;
    volatile COMP_REF_CTRL1_u REF_CTRL1;
    volatile COMP_SPARE_CTRL_u SPARE_CTRL;
    volatile COMP_SPARE_STS_u SPARE_STS;
} COMP_REGS_s;

#define COMP_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define COMP_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define COMP_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)

#define COMP_INTR_EVENT_COMP_OUT_EDGE0_IDX (0)
#define COMP_INTR_EVENT_COMP_OUT_EDGE1_IDX (1)
#define COMP_INTR_EVENT_COMP_OUT_IDX (2)

typedef enum {
	COMP_CTRL0_SPEED_LOW_SPEED = 0,
	COMP_CTRL0_SPEED_HIGH_SPEED = 1,
} COMP_CTRL0_SPEED_E;

typedef enum {
	COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_IN0 = 0,
	COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_IN1 = 1,
	COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_IN2 = 2,
	COMP_INPUT_CTRL0_IN_P_SEL_INT_DAC_OUT = 3,
	COMP_INPUT_CTRL0_IN_P_SEL_INT_OPA1_OUT = 4,
	COMP_INPUT_CTRL0_IN_P_SEL_COMPX_PSEL_OUT = 5,
} COMP_INPUT_CTRL0_IN_P_SEL_E;

typedef enum {
	COMP_INPUT_CTRL0_IN_M_SEL_INV_IN0 = 0,
	COMP_INPUT_CTRL0_IN_M_SEL_INV_IN1 = 1,
	COMP_INPUT_CTRL0_IN_M_SEL_INV_IN2 = 2,
	COMP_INPUT_CTRL0_IN_M_SEL_INT_OPA0_OUT = 3,
} COMP_INPUT_CTRL0_IN_M_SEL_E;

typedef enum {
	COMP_OUT_CTRL0_OUT_POL_NO_INV = 0,
	COMP_OUT_CTRL0_OUT_POL_INV_OUT = 1,
} COMP_OUT_CTRL0_OUT_POL_E;

typedef enum {
	COMP_OUT_CTRL0_FILT_DELAY_70NS = 0,
	COMP_OUT_CTRL0_FILT_DELAY_500NS = 1,
	COMP_OUT_CTRL0_FILT_DELAY_1200NS = 2,
	COMP_OUT_CTRL0_FILT_DELAY_2700NS = 3,
} COMP_OUT_CTRL0_FILT_DELAY_E;

typedef enum {
	COMP_OUT_CTRL1_WIN_COMP_SEL_COMP0 = 0,
	COMP_OUT_CTRL1_WIN_COMP_SEL_COMP1 = 1,
	COMP_OUT_CTRL1_WIN_COMP_SEL_COMP2 = 2,
} COMP_OUT_CTRL1_WIN_COMP_SEL_E;

typedef enum {
	COMP_REF_CTRL0_REF_MODE_STATIC = 0,
	COMP_REF_CTRL0_REF_MODE_SAMPLED = 1,
} COMP_REF_CTRL0_REF_MODE_E;

typedef enum {
	COMP_REF_CTRL1_DAC_MODE_SW_HYST = 0,
	COMP_REF_CTRL1_DAC_MODE_HW_HYST = 1,
} COMP_REF_CTRL1_DAC_MODE_E;

typedef enum {
	COMP_REF_CTRL1_DAC_CODE_SEL_CODE0 = 0,
	COMP_REF_CTRL1_DAC_CODE_SEL_CODE1 = 1,
} COMP_REF_CTRL1_DAC_CODE_SEL_E;

#define COMP_DESC_MODULE_TYPE_OFS (0)
#define COMP_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define COMP_DESC_MODUE_SUBTYPE_OFS (8)
#define COMP_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define COMP_DESC_MAJOR_REV_OFS (16)
#define COMP_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define COMP_DESC_MINOR_REV_OFS (20)
#define COMP_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define COMP_PWR_EN_PWR_EN_OFS (0)
#define COMP_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define COMP_PWR_EN_PWR_EN_KEY_OFS (24)
#define COMP_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define COMP_RST_CTRL_RST_OFS (0)
#define COMP_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define COMP_RST_CTRL_RST_STS_CLR_OFS (1)
#define COMP_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define COMP_RST_CTRL_RST_KEY_OFS (24)
#define COMP_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define COMP_RST_STS_RST_STS_OFS (0)
#define COMP_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define COMP_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS (0)
#define COMP_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_STS_INTR_FIRST_OFS (0)
#define COMP_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x000000FFU)
#define COMP_INTR_EVENT_COMP_OUT_EDGE0_OFS (0)
#define COMP_INTR_EVENT_COMP_OUT_EDGE0_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_EVENT_COMP_OUT_EDGE1_OFS (1)
#define COMP_INTR_EVENT_COMP_OUT_EDGE1_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_EVENT_COMP_OUT_OFS (2)
#define COMP_INTR_EVENT_COMP_OUT_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_EN_COMP_OUT_EDGE0_EN_OFS (0)
#define COMP_INTR_EN_COMP_OUT_EDGE0_EN_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_EN_COMP_OUT_EDGE1_EN_OFS (1)
#define COMP_INTR_EN_COMP_OUT_EDGE1_EN_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_EN_COMP_OUT_EN_OFS (2)
#define COMP_INTR_EN_COMP_OUT_EN_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_NMI_EN_COMP_OUT_EDGE0_NMI_EN_OFS (0)
#define COMP_INTR_NMI_EN_COMP_OUT_EDGE0_NMI_EN_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_NMI_EN_COMP_OUT_EDGE1_NMI_EN_OFS (1)
#define COMP_INTR_NMI_EN_COMP_OUT_EDGE1_NMI_EN_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_NMI_EN_COMP_OUT_NMI_EN_OFS (2)
#define COMP_INTR_NMI_EN_COMP_OUT_NMI_EN_MASK ((uint32_t)0x00000004U)
#define COMP_EVENT_EN_COMP_OUT_EDGE0_EVENT_EN_OFS (0)
#define COMP_EVENT_EN_COMP_OUT_EDGE0_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define COMP_EVENT_EN_COMP_OUT_EDGE1_EVENT_EN_OFS (1)
#define COMP_EVENT_EN_COMP_OUT_EDGE1_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define COMP_EVENT_EN_COMP_OUT_EVENT_EN_OFS (2)
#define COMP_EVENT_EN_COMP_OUT_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_SW_SET_COMP_OUT_EDGE0_SW_SET_OFS (0)
#define COMP_INTR_SW_SET_COMP_OUT_EDGE0_SW_SET_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_SW_SET_COMP_OUT_EDGE1_SW_SET_OFS (1)
#define COMP_INTR_SW_SET_COMP_OUT_EDGE1_SW_SET_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_SW_SET_COMP_OUT_SW_SET_OFS (2)
#define COMP_INTR_SW_SET_COMP_OUT_SW_SET_MASK ((uint32_t)0x00000004U)
#define COMP_STS_COMP_OUT_STS_OFS (0)
#define COMP_STS_COMP_OUT_STS_MASK ((uint32_t)0x00000001U)
#define COMP_CTRL0_ENABLE_OFS (0)
#define COMP_CTRL0_ENABLE_MASK ((uint32_t)0x00000001U)
#define COMP_CTRL0_SPEED_OFS (8)
#define COMP_CTRL0_SPEED_MASK ((uint32_t)0x00000100U)
#define COMP_CTRL0_HYST_OFS (16)
#define COMP_CTRL0_HYST_MASK ((uint32_t)0x00030000U)
#define COMP_CTRL0_INTR_EDGE_SEL_OFS (24)
#define COMP_CTRL0_INTR_EDGE_SEL_MASK ((uint32_t)0x01000000U)
#define COMP_INPUT_CTRL0_IN_P_EN_OFS (0)
#define COMP_INPUT_CTRL0_IN_P_EN_MASK ((uint32_t)0x00000001U)
#define COMP_INPUT_CTRL0_IN_P_SEL_OFS (8)
#define COMP_INPUT_CTRL0_IN_P_SEL_MASK ((uint32_t)0x00000700U)
#define COMP_INPUT_CTRL0_IN_M_EN_OFS (16)
#define COMP_INPUT_CTRL0_IN_M_EN_MASK ((uint32_t)0x00010000U)
#define COMP_INPUT_CTRL0_IN_M_SEL_OFS (24)
#define COMP_INPUT_CTRL0_IN_M_SEL_MASK ((uint32_t)0x07000000U)
#define COMP_INPUT_CTRL1_IN_SHORT_OFS (0)
#define COMP_INPUT_CTRL1_IN_SHORT_MASK ((uint32_t)0x00000001U)
#define COMP_INPUT_CTRL1_IN_SWAP_OFS (8)
#define COMP_INPUT_CTRL1_IN_SWAP_MASK ((uint32_t)0x00000100U)
#define COMP_OUT_CTRL0_OUT_POL_OFS (0)
#define COMP_OUT_CTRL0_OUT_POL_MASK ((uint32_t)0x00000001U)
#define COMP_OUT_CTRL0_SAMP_EN_OFS (8)
#define COMP_OUT_CTRL0_SAMP_EN_MASK ((uint32_t)0x00000100U)
#define COMP_OUT_CTRL0_FILT_EN_OFS (16)
#define COMP_OUT_CTRL0_FILT_EN_MASK ((uint32_t)0x00010000U)
#define COMP_OUT_CTRL0_FILT_DELAY_OFS (24)
#define COMP_OUT_CTRL0_FILT_DELAY_MASK ((uint32_t)0x03000000U)
#define COMP_OUT_CTRL1_WIN_COMP_EN_OFS (0)
#define COMP_OUT_CTRL1_WIN_COMP_EN_MASK ((uint32_t)0x00000001U)
#define COMP_OUT_CTRL1_WIN_COMP_SEL_OFS (8)
#define COMP_OUT_CTRL1_WIN_COMP_SEL_MASK ((uint32_t)0x00000300U)
#define COMP_OUT_CTRL1_BLANK_EN_OFS (16)
#define COMP_OUT_CTRL1_BLANK_EN_MASK ((uint32_t)0x00010000U)
#define COMP_OUT_CTRL1_BLANK_SRC_OFS (24)
#define COMP_OUT_CTRL1_BLANK_SRC_MASK ((uint32_t)0x07000000U)
#define COMP_REF_CTRL0_REF_SEL_OFS (0)
#define COMP_REF_CTRL0_REF_SEL_MASK ((uint32_t)0x00000001U)
#define COMP_REF_CTRL0_REF_SRC_OFS (8)
#define COMP_REF_CTRL0_REF_SRC_MASK ((uint32_t)0x00000100U)
#define COMP_REF_CTRL0_REF_MODE_OFS (16)
#define COMP_REF_CTRL0_REF_MODE_MASK ((uint32_t)0x00010000U)
#define COMP_REF_CTRL1_DAC_CODE0_OFS (0)
#define COMP_REF_CTRL1_DAC_CODE0_MASK ((uint32_t)0x000000FFU)
#define COMP_REF_CTRL1_DAC_CODE1_OFS (8)
#define COMP_REF_CTRL1_DAC_CODE1_MASK ((uint32_t)0x0000FF00U)
#define COMP_REF_CTRL1_DAC_MODE_OFS (16)
#define COMP_REF_CTRL1_DAC_MODE_MASK ((uint32_t)0x00010000U)
#define COMP_REF_CTRL1_DAC_CODE_SEL_OFS (24)
#define COMP_REF_CTRL1_DAC_CODE_SEL_MASK ((uint32_t)0x01000000U)
#define COMP_SPARE_CTRL_CFG0_OFS (0)
#define COMP_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define COMP_SPARE_CTRL_CFG1_OFS (8)
#define COMP_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define COMP_SPARE_STS_STS0_OFS (0)
#define COMP_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define COMP_SPARE_STS_STS1_OFS (8)
#define COMP_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)

#endif
