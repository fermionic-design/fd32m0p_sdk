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
    COMP_DESC_REG_s DESC;
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
    COMP_PWR_EN_REG_s PWR_EN;
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
    COMP_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_CTRL_u;

typedef struct COMP_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} COMP_RST_STS_REG_s;

typedef union COMP_RST_STS_u {
    COMP_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_STS_u;

typedef struct COMP_CLK_CTRL_REG_s {
    unsigned int en_async_clk_req:1; // 
} COMP_CLK_CTRL_REG_s;

typedef union COMP_CLK_CTRL_u {
    COMP_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_CLK_CTRL_u;

typedef struct COMP_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} COMP_INTR_STS_REG_s;

typedef union COMP_INTR_STS_u {
    COMP_INTR_STS_REG_s INTR_STS;
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
    COMP_INTR_EVENT_REG_s INTR_EVENT;
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
    COMP_INTR_EN_REG_s INTR_EN;
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
    COMP_INTR_NMI_EN_REG_s INTR_NMI_EN;
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
    COMP_EVENT_EN_REG_s EVENT_EN;
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
    COMP_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_SW_SET_u;

typedef struct COMP_STS_REG_s {
    unsigned int comp_out_sts:1; // 
} COMP_STS_REG_s;

typedef union COMP_STS_u {
    COMP_STS_REG_s STS;
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
    COMP_CTRL0_REG_s CTRL0;
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
    COMP_INPUT_CTRL0_REG_s INPUT_CTRL0;
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
    COMP_INPUT_CTRL1_REG_s INPUT_CTRL1;
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
    COMP_OUT_CTRL0_REG_s OUT_CTRL0;
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
    COMP_OUT_CTRL1_REG_s OUT_CTRL1;
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
    COMP_REF_CTRL0_REG_s REF_CTRL0;
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
    COMP_REF_CTRL1_REG_s REF_CTRL1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_REF_CTRL1_u;

typedef struct COMP_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} COMP_SPARE_CTRL_REG_s;

typedef union COMP_SPARE_CTRL_u {
    COMP_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_SPARE_CTRL_u;

typedef struct COMP_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} COMP_SPARE_STS_REG_s;

typedef union COMP_SPARE_STS_u {
    COMP_SPARE_STS_REG_s SPARE_STS;
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

#define COMP_DESC_module_type_OFS (0)
#define COMP_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define COMP_DESC_modue_subtype_OFS (8)
#define COMP_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define COMP_DESC_major_rev_OFS (16)
#define COMP_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define COMP_DESC_minor_rev_OFS (20)
#define COMP_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define COMP_PWR_EN_pwr_en_OFS (0)
#define COMP_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define COMP_PWR_EN_pwr_en_key_OFS (24)
#define COMP_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define COMP_RST_CTRL_rst_OFS (0)
#define COMP_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define COMP_RST_CTRL_rst_sts_clr_OFS (1)
#define COMP_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define COMP_RST_CTRL_rst_key_OFS (24)
#define COMP_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define COMP_RST_STS_rst_sts_OFS (0)
#define COMP_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define COMP_CLK_CTRL_en_async_clk_req_OFS (0)
#define COMP_CLK_CTRL_en_async_clk_req_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_STS_intr_first_OFS (0)
#define COMP_INTR_STS_intr_first_MASK ((uint32_t)0x000000FFU)
#define COMP_INTR_EVENT_comp_out_edge0_OFS (0)
#define COMP_INTR_EVENT_comp_out_edge0_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_EVENT_comp_out_edge1_OFS (1)
#define COMP_INTR_EVENT_comp_out_edge1_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_EVENT_comp_out_OFS (2)
#define COMP_INTR_EVENT_comp_out_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_EN_comp_out_edge0_en_OFS (0)
#define COMP_INTR_EN_comp_out_edge0_en_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_EN_comp_out_edge1_en_OFS (1)
#define COMP_INTR_EN_comp_out_edge1_en_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_EN_comp_out_en_OFS (2)
#define COMP_INTR_EN_comp_out_en_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_NMI_EN_comp_out_edge0_nmi_en_OFS (0)
#define COMP_INTR_NMI_EN_comp_out_edge0_nmi_en_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_NMI_EN_comp_out_edge1_nmi_en_OFS (1)
#define COMP_INTR_NMI_EN_comp_out_edge1_nmi_en_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_NMI_EN_comp_out_nmi_en_OFS (2)
#define COMP_INTR_NMI_EN_comp_out_nmi_en_MASK ((uint32_t)0x00000004U)
#define COMP_EVENT_EN_comp_out_edge0_event_en_OFS (0)
#define COMP_EVENT_EN_comp_out_edge0_event_en_MASK ((uint32_t)0x00000001U)
#define COMP_EVENT_EN_comp_out_edge1_event_en_OFS (1)
#define COMP_EVENT_EN_comp_out_edge1_event_en_MASK ((uint32_t)0x00000002U)
#define COMP_EVENT_EN_comp_out_event_en_OFS (2)
#define COMP_EVENT_EN_comp_out_event_en_MASK ((uint32_t)0x00000004U)
#define COMP_INTR_SW_SET_comp_out_edge0_sw_set_OFS (0)
#define COMP_INTR_SW_SET_comp_out_edge0_sw_set_MASK ((uint32_t)0x00000001U)
#define COMP_INTR_SW_SET_comp_out_edge1_sw_set_OFS (1)
#define COMP_INTR_SW_SET_comp_out_edge1_sw_set_MASK ((uint32_t)0x00000002U)
#define COMP_INTR_SW_SET_comp_out_sw_set_OFS (2)
#define COMP_INTR_SW_SET_comp_out_sw_set_MASK ((uint32_t)0x00000004U)
#define COMP_STS_comp_out_sts_OFS (0)
#define COMP_STS_comp_out_sts_MASK ((uint32_t)0x00000001U)
#define COMP_CTRL0_enable_OFS (0)
#define COMP_CTRL0_enable_MASK ((uint32_t)0x00000001U)
#define COMP_CTRL0_speed_OFS (8)
#define COMP_CTRL0_speed_MASK ((uint32_t)0x00000100U)
#define COMP_CTRL0_hyst_OFS (16)
#define COMP_CTRL0_hyst_MASK ((uint32_t)0x00030000U)
#define COMP_CTRL0_intr_edge_sel_OFS (24)
#define COMP_CTRL0_intr_edge_sel_MASK ((uint32_t)0x01000000U)
#define COMP_INPUT_CTRL0_in_p_en_OFS (0)
#define COMP_INPUT_CTRL0_in_p_en_MASK ((uint32_t)0x00000001U)
#define COMP_INPUT_CTRL0_in_p_sel_OFS (8)
#define COMP_INPUT_CTRL0_in_p_sel_MASK ((uint32_t)0x00000700U)
#define COMP_INPUT_CTRL0_in_m_en_OFS (16)
#define COMP_INPUT_CTRL0_in_m_en_MASK ((uint32_t)0x00010000U)
#define COMP_INPUT_CTRL0_in_m_sel_OFS (24)
#define COMP_INPUT_CTRL0_in_m_sel_MASK ((uint32_t)0x07000000U)
#define COMP_INPUT_CTRL1_in_short_OFS (0)
#define COMP_INPUT_CTRL1_in_short_MASK ((uint32_t)0x00000001U)
#define COMP_INPUT_CTRL1_in_swap_OFS (8)
#define COMP_INPUT_CTRL1_in_swap_MASK ((uint32_t)0x00000100U)
#define COMP_OUT_CTRL0_out_pol_OFS (0)
#define COMP_OUT_CTRL0_out_pol_MASK ((uint32_t)0x00000001U)
#define COMP_OUT_CTRL0_samp_en_OFS (8)
#define COMP_OUT_CTRL0_samp_en_MASK ((uint32_t)0x00000100U)
#define COMP_OUT_CTRL0_filt_en_OFS (16)
#define COMP_OUT_CTRL0_filt_en_MASK ((uint32_t)0x00010000U)
#define COMP_OUT_CTRL0_filt_delay_OFS (24)
#define COMP_OUT_CTRL0_filt_delay_MASK ((uint32_t)0x03000000U)
#define COMP_OUT_CTRL1_win_comp_en_OFS (0)
#define COMP_OUT_CTRL1_win_comp_en_MASK ((uint32_t)0x00000001U)
#define COMP_OUT_CTRL1_win_comp_sel_OFS (8)
#define COMP_OUT_CTRL1_win_comp_sel_MASK ((uint32_t)0x00000300U)
#define COMP_OUT_CTRL1_blank_en_OFS (16)
#define COMP_OUT_CTRL1_blank_en_MASK ((uint32_t)0x00010000U)
#define COMP_OUT_CTRL1_blank_src_OFS (24)
#define COMP_OUT_CTRL1_blank_src_MASK ((uint32_t)0x07000000U)
#define COMP_REF_CTRL0_ref_sel_OFS (0)
#define COMP_REF_CTRL0_ref_sel_MASK ((uint32_t)0x00000001U)
#define COMP_REF_CTRL0_ref_src_OFS (8)
#define COMP_REF_CTRL0_ref_src_MASK ((uint32_t)0x00000100U)
#define COMP_REF_CTRL0_ref_mode_OFS (16)
#define COMP_REF_CTRL0_ref_mode_MASK ((uint32_t)0x00010000U)
#define COMP_REF_CTRL1_dac_code0_OFS (0)
#define COMP_REF_CTRL1_dac_code0_MASK ((uint32_t)0x000000FFU)
#define COMP_REF_CTRL1_dac_code1_OFS (8)
#define COMP_REF_CTRL1_dac_code1_MASK ((uint32_t)0x0000FF00U)
#define COMP_REF_CTRL1_dac_mode_OFS (16)
#define COMP_REF_CTRL1_dac_mode_MASK ((uint32_t)0x00010000U)
#define COMP_REF_CTRL1_dac_code_sel_OFS (24)
#define COMP_REF_CTRL1_dac_code_sel_MASK ((uint32_t)0x01000000U)
#define COMP_SPARE_CTRL_cfg0_OFS (0)
#define COMP_SPARE_CTRL_cfg0_MASK ((uint32_t)0x000000FFU)
#define COMP_SPARE_CTRL_cfg1_OFS (8)
#define COMP_SPARE_CTRL_cfg1_MASK ((uint32_t)0x0000FF00U)
#define COMP_SPARE_STS_sts0_OFS (0)
#define COMP_SPARE_STS_sts0_MASK ((uint32_t)0x000000FFU)
#define COMP_SPARE_STS_sts1_OFS (8)
#define COMP_SPARE_STS_sts1_MASK ((uint32_t)0x0000FF00U)
#endif
