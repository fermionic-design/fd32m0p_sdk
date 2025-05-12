#ifndef TIMER_REGISTERS_H
#define TIMER_REGISTERS_H

#include <stdint.h>

typedef struct TIMER_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} TIMER_DESC_REG_s;

typedef union TIMER_DESC_u {
    TIMER_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_DESC_u;

typedef struct TIMER_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} TIMER_PWR_EN_REG_s;

typedef union TIMER_PWR_EN_u {
    TIMER_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_PWR_EN_u;

typedef struct TIMER_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} TIMER_RST_CTRL_REG_s;

typedef union TIMER_RST_CTRL_u {
    TIMER_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RST_CTRL_u;

typedef struct TIMER_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} TIMER_RST_STS_REG_s;

typedef union TIMER_RST_STS_u {
    TIMER_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RST_STS_u;

typedef struct TIMER_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} TIMER_CLK_CTRL_REG_s;

typedef union TIMER_CLK_CTRL_u {
    TIMER_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CLK_CTRL_u;

typedef struct TIMER_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} TIMER_INTR_STS_REG_s;

typedef union TIMER_INTR_STS_u {
    TIMER_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_STS_u;

typedef struct TIMER_INTR_EVENT_REG_s {
    unsigned int ctr_zero:1; // 
    unsigned int ctr_load:1; // 
    unsigned int ccd_0:1; // 
    unsigned int ccu_0:1; // 
    unsigned int ccd_1:1; // 
    unsigned int ccu_1:1; // 
    unsigned int ccd_2:1; // 
    unsigned int ccu_2:1; // 
    unsigned int ccd_3:1; // 
    unsigned int ccu_3:1; // 
    unsigned int ccd_4:1; // 
    unsigned int ccu_4:1; // 
    unsigned int ccd_5:1; // 
    unsigned int ccu_5:1; // 
    unsigned int fault:1; // 
    unsigned int trig_ov:1; // 
    unsigned int rctr_zero:1; // 
    unsigned int qei_ctr_dc:1; // 
    unsigned int qei_err:1; // 
} TIMER_INTR_EVENT_REG_s;

typedef union TIMER_INTR_EVENT_u {
    TIMER_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_EVENT_u;

typedef struct TIMER_INTR_EN_0_REG_s {
    unsigned int ctr_zero_en:1; // 
    unsigned int ctr_load_en:1; // 
    unsigned int ccd_0_en:1; // 
    unsigned int ccu_0_en:1; // 
    unsigned int ccd_1_en:1; // 
    unsigned int ccu_1_en:1; // 
    unsigned int ccd_2_en:1; // 
    unsigned int ccu_2_en:1; // 
    unsigned int ccd_3_en:1; // 
    unsigned int ccu_3_en:1; // 
    unsigned int ccd_4_en:1; // 
    unsigned int ccu_4_en:1; // 
    unsigned int ccd_5_en:1; // 
    unsigned int ccu_5_en:1; // 
    unsigned int fault_en:1; // 
    unsigned int trig_ov_en:1; // 
} TIMER_INTR_EN_0_REG_s;

typedef union TIMER_INTR_EN_0_u {
    TIMER_INTR_EN_0_REG_s INTR_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_EN_0_u;

typedef struct TIMER_INTR_EN_1_REG_s {
    unsigned int rctr_zero_en:1; // 
    unsigned int qei_ctr_dc_en:1; // 
    unsigned int qei_err_en:1; // 
} TIMER_INTR_EN_1_REG_s;

typedef union TIMER_INTR_EN_1_u {
    TIMER_INTR_EN_1_REG_s INTR_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_EN_1_u;

typedef struct TIMER_INTR_NMI_EN_0_REG_s {
    unsigned int ctr_zero_nmi_en:1; // 
    unsigned int ctr_load_nmi_en:1; // 
    unsigned int ccd_0_nmi_en:1; // 
    unsigned int ccu_0_nmi_en:1; // 
    unsigned int ccd_1_nmi_en:1; // 
    unsigned int ccu_1_nmi_en:1; // 
    unsigned int ccd_2_nmi_en:1; // 
    unsigned int ccu_2_nmi_en:1; // 
    unsigned int ccd_3_nmi_en:1; // 
    unsigned int ccu_3_nmi_en:1; // 
    unsigned int ccd_4_nmi_en:1; // 
    unsigned int ccu_4_nmi_en:1; // 
    unsigned int ccd_5_nmi_en:1; // 
    unsigned int ccu_5_nmi_en:1; // 
    unsigned int fault_nmi_en:1; // 
    unsigned int trig_ov_nmi_en:1; // 
} TIMER_INTR_NMI_EN_0_REG_s;

typedef union TIMER_INTR_NMI_EN_0_u {
    TIMER_INTR_NMI_EN_0_REG_s INTR_NMI_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_NMI_EN_0_u;

typedef struct TIMER_INTR_NMI_EN_1_REG_s {
    unsigned int rctr_zero_nmi_en:1; // 
    unsigned int qei_ctr_dc_nmi_en:1; // 
    unsigned int qei_err_nmi_en:1; // 
} TIMER_INTR_NMI_EN_1_REG_s;

typedef union TIMER_INTR_NMI_EN_1_u {
    TIMER_INTR_NMI_EN_1_REG_s INTR_NMI_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_NMI_EN_1_u;

typedef struct TIMER_EVENT_EN_0_0_REG_s {
    unsigned int ctr_zero_event_en_0:1; // 
    unsigned int ctr_load_event_en_0:1; // 
    unsigned int ccd_0_event_en_0:1; // 
    unsigned int ccu_0_event_en_0:1; // 
    unsigned int ccd_1_event_en_0:1; // 
    unsigned int ccu_1_event_en_0:1; // 
    unsigned int ccd_2_event_en_0:1; // 
    unsigned int ccu_2_event_en_0:1; // 
    unsigned int ccd_3_event_en_0:1; // 
    unsigned int ccu_3_event_en_0:1; // 
    unsigned int ccd_4_event_en_0:1; // 
    unsigned int ccu_4_event_en_0:1; // 
    unsigned int ccd_5_event_en_0:1; // 
    unsigned int ccu_5_event_en_0:1; // 
    unsigned int fault_event_en_0:1; // 
    unsigned int trig_ov_event_en_0:1; // 
} TIMER_EVENT_EN_0_0_REG_s;

typedef union TIMER_EVENT_EN_0_0_u {
    TIMER_EVENT_EN_0_0_REG_s EVENT_EN_0_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_EN_0_0_u;

typedef struct TIMER_EVENT_EN_0_1_REG_s {
    unsigned int rctr_zero_event_en_0:1; // 
    unsigned int qei_ctr_dc_event_en_0:1; // 
    unsigned int qei_err_event_en_0:1; // 
} TIMER_EVENT_EN_0_1_REG_s;

typedef union TIMER_EVENT_EN_0_1_u {
    TIMER_EVENT_EN_0_1_REG_s EVENT_EN_0_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_EN_0_1_u;

typedef struct TIMER_EVENT_EN_1_0_REG_s {
    unsigned int ctr_zero_event_en_1:1; // 
    unsigned int ctr_load_event_en_1:1; // 
    unsigned int ccd_0_event_en_1:1; // 
    unsigned int ccu_0_event_en_1:1; // 
    unsigned int ccd_1_event_en_1:1; // 
    unsigned int ccu_1_event_en_1:1; // 
    unsigned int ccd_2_event_en_1:1; // 
    unsigned int ccu_2_event_en_1:1; // 
    unsigned int ccd_3_event_en_1:1; // 
    unsigned int ccu_3_event_en_1:1; // 
    unsigned int ccd_4_event_en_1:1; // 
    unsigned int ccu_4_event_en_1:1; // 
    unsigned int ccd_5_event_en_1:1; // 
    unsigned int ccu_5_event_en_1:1; // 
    unsigned int fault_event_en_1:1; // 
    unsigned int trig_ov_event_en_1:1; // 
} TIMER_EVENT_EN_1_0_REG_s;

typedef union TIMER_EVENT_EN_1_0_u {
    TIMER_EVENT_EN_1_0_REG_s EVENT_EN_1_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_EN_1_0_u;

typedef struct TIMER_EVENT_EN_1_1_REG_s {
    unsigned int rctr_zero_event_en_1:1; // 
    unsigned int qei_ctr_dc_event_en_1:1; // 
    unsigned int qei_err_event_en_1:1; // 
} TIMER_EVENT_EN_1_1_REG_s;

typedef union TIMER_EVENT_EN_1_1_u {
    TIMER_EVENT_EN_1_1_REG_s EVENT_EN_1_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_EN_1_1_u;

typedef struct TIMER_INTR_SW_SET_REG_s {
    unsigned int ctr_zero_sw_set:1; // 
    unsigned int ctr_load_sw_set:1; // 
    unsigned int ccd_0_sw_set:1; // 
    unsigned int ccu_0_sw_set:1; // 
    unsigned int ccd_1_sw_set:1; // 
    unsigned int ccu_1_sw_set:1; // 
    unsigned int ccd_2_sw_set:1; // 
    unsigned int ccu_2_sw_set:1; // 
    unsigned int ccd_3_sw_set:1; // 
    unsigned int ccu_3_sw_set:1; // 
    unsigned int ccd_4_sw_set:1; // 
    unsigned int ccu_4_sw_set:1; // 
    unsigned int ccd_5_sw_set:1; // 
    unsigned int ccu_5_sw_set:1; // 
    unsigned int fault_sw_set:1; // 
    unsigned int trig_ov_sw_set:1; // 
    unsigned int rctr_zero_sw_set:1; // 
    unsigned int qei_ctr_dc_sw_set:1; // 
    unsigned int qei_err_sw_set:1; // 
} TIMER_INTR_SW_SET_REG_s;

typedef union TIMER_INTR_SW_SET_u {
    TIMER_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_SW_SET_u;

typedef struct TIMER_EVENT_CTRL_REG_s {
    unsigned int chan_id0:4; // 
    unsigned int chan_id1:4; // 
} TIMER_EVENT_CTRL_REG_s;

typedef union TIMER_EVENT_CTRL_u {
    TIMER_EVENT_CTRL_REG_s EVENT_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_CTRL_u;

typedef struct TIMER_CLK_CONFIG_REG_s {
    unsigned int clk_sel:2; // 
    unsigned int clk_div:11; // 
} TIMER_CLK_CONFIG_REG_s;

typedef union TIMER_CLK_CONFIG_u {
    TIMER_CLK_CONFIG_REG_s CLK_CONFIG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CLK_CONFIG_u;

typedef struct TIMER_TRIG_IN_REG_s {
    unsigned int trig_en:1; // 
    unsigned int trig_sel:5; // 
} TIMER_TRIG_IN_REG_s;

typedef union TIMER_TRIG_IN_u {
    TIMER_TRIG_IN_REG_s TRIG_IN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TRIG_IN_u;

typedef struct TIMER_TRIG_OUT_REG_s {
    unsigned int trig_out_en:1; // 
    unsigned int trig_sw_en:1; // 
    unsigned int trig_hw_en:1; // 
    unsigned int trig_hw_sel:4; // 
} TIMER_TRIG_OUT_REG_s;

typedef union TIMER_TRIG_OUT_u {
    TIMER_TRIG_OUT_REG_s TRIG_OUT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TRIG_OUT_u;

typedef struct TIMER_INPUT_FILTER_CC_0_REG_s {
    unsigned int filter_en_0:1; // 
    unsigned int is_consecutive_prd_0:1; // 
    unsigned int filter_period_0:2; // 
} TIMER_INPUT_FILTER_CC_0_REG_s;

typedef union TIMER_INPUT_FILTER_CC_0_u {
    TIMER_INPUT_FILTER_CC_0_REG_s INPUT_FILTER_CC_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_FILTER_CC_0_u;

typedef struct TIMER_INPUT_FILTER_CC_1_REG_s {
    unsigned int filter_en_1:1; // 
    unsigned int is_consecutive_prd_1:1; // 
    unsigned int filter_period_1:2; // 
} TIMER_INPUT_FILTER_CC_1_REG_s;

typedef union TIMER_INPUT_FILTER_CC_1_u {
    TIMER_INPUT_FILTER_CC_1_REG_s INPUT_FILTER_CC_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_FILTER_CC_1_u;

typedef struct TIMER_INPUT_FILTER_CC_2_REG_s {
    unsigned int filter_en_2:1; // 
    unsigned int is_consecutive_prd_2:1; // 
    unsigned int filter_period_2:2; // 
} TIMER_INPUT_FILTER_CC_2_REG_s;

typedef union TIMER_INPUT_FILTER_CC_2_u {
    TIMER_INPUT_FILTER_CC_2_REG_s INPUT_FILTER_CC_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_FILTER_CC_2_u;

typedef struct TIMER_INPUT_FILTER_CC_3_REG_s {
    unsigned int filter_en_3:1; // 
    unsigned int is_consecutive_prd_3:1; // 
    unsigned int filter_period_3:2; // 
} TIMER_INPUT_FILTER_CC_3_REG_s;

typedef union TIMER_INPUT_FILTER_CC_3_u {
    TIMER_INPUT_FILTER_CC_3_REG_s INPUT_FILTER_CC_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_FILTER_CC_3_u;

typedef struct TIMER_INPUT_CC_0_REG_s {
    unsigned int input_sel_0:4; // 
    unsigned int input_inv_0:1; // 
} TIMER_INPUT_CC_0_REG_s;

typedef union TIMER_INPUT_CC_0_u {
    TIMER_INPUT_CC_0_REG_s INPUT_CC_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_0_u;

typedef struct TIMER_INPUT_CC_1_REG_s {
    unsigned int input_sel_1:4; // 
    unsigned int input_inv_1:1; // 
} TIMER_INPUT_CC_1_REG_s;

typedef union TIMER_INPUT_CC_1_u {
    TIMER_INPUT_CC_1_REG_s INPUT_CC_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_1_u;

typedef struct TIMER_INPUT_CC_2_REG_s {
    unsigned int input_sel_2:4; // 
    unsigned int input_inv_2:1; // 
} TIMER_INPUT_CC_2_REG_s;

typedef union TIMER_INPUT_CC_2_u {
    TIMER_INPUT_CC_2_REG_s INPUT_CC_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_2_u;

typedef struct TIMER_INPUT_CC_3_REG_s {
    unsigned int input_sel_3:4; // 
    unsigned int input_inv_3:1; // 
} TIMER_INPUT_CC_3_REG_s;

typedef union TIMER_INPUT_CC_3_u {
    TIMER_INPUT_CC_3_REG_s INPUT_CC_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_3_u;

typedef struct TIMER_CC0_CMN_CTRL_REG_s {
    unsigned int is_capture_0:1; // 
    unsigned int cc2d_sel_0:3; // 
    unsigned int cc2u_sel_0:3; // 
    unsigned int suppress_coc_event_gen_0:1; // 
} TIMER_CC0_CMN_CTRL_REG_s;

typedef union TIMER_CC0_CMN_CTRL_u {
    TIMER_CC0_CMN_CTRL_REG_s CC0_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_CMN_CTRL_u;

typedef struct TIMER_CC1_CMN_CTRL_REG_s {
    unsigned int is_capture_1:1; // 
    unsigned int cc2d_sel_1:3; // 
    unsigned int cc2u_sel_1:3; // 
    unsigned int suppress_coc_event_gen_1:1; // 
} TIMER_CC1_CMN_CTRL_REG_s;

typedef union TIMER_CC1_CMN_CTRL_u {
    TIMER_CC1_CMN_CTRL_REG_s CC1_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_CMN_CTRL_u;

typedef struct TIMER_CC0_CAPTURE_CTRL_REG_s {
    unsigned int cap_cond_0:2; // 
    unsigned int load_cond_0:2; // 
    unsigned int zero_cond_0:2; // 
    unsigned int adv_cond_0:3; // 
    unsigned int cap_val_0:16; // 
} TIMER_CC0_CAPTURE_CTRL_REG_s;

typedef union TIMER_CC0_CAPTURE_CTRL_u {
    TIMER_CC0_CAPTURE_CTRL_REG_s CC0_CAPTURE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_CAPTURE_CTRL_u;

typedef struct TIMER_CC1_CAPTURE_CTRL_REG_s {
    unsigned int cap_cond_1:2; // 
    unsigned int load_cond_1:2; // 
    unsigned int zero_cond_1:2; // 
    unsigned int adv_cond_1:3; // 
    unsigned int cap_val_1:16; // 
} TIMER_CC1_CAPTURE_CTRL_REG_s;

typedef union TIMER_CC1_CAPTURE_CTRL_u {
    TIMER_CC1_CAPTURE_CTRL_REG_s CC1_CAPTURE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_CAPTURE_CTRL_u;

typedef struct TIMER_CC0_COMPARE_CTRL_REG_s {
    unsigned int comp_val_0:16; // 
    unsigned int comp_val_update_method_0:3; // 
    unsigned int ccact_update_method_0:3; // 
} TIMER_CC0_COMPARE_CTRL_REG_s;

typedef union TIMER_CC0_COMPARE_CTRL_u {
    TIMER_CC0_COMPARE_CTRL_REG_s CC0_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_COMPARE_CTRL_u;

typedef struct TIMER_CC1_COMPARE_CTRL_REG_s {
    unsigned int comp_val_1:16; // 
    unsigned int comp_val_update_method_1:3; // 
    unsigned int ccact_update_method_1:3; // 
} TIMER_CC1_COMPARE_CTRL_REG_s;

typedef union TIMER_CC1_COMPARE_CTRL_u {
    TIMER_CC1_COMPARE_CTRL_REG_s CC1_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_COMPARE_CTRL_u;

typedef struct TIMER_CC2_CMN_CTRL_REG_s {
    unsigned int is_capture_2:1; // 
    unsigned int cc2d_sel_2:3; // 
    unsigned int cc2u_sel_2:3; // 
    unsigned int suppress_coc_event_gen_2:1; // 
} TIMER_CC2_CMN_CTRL_REG_s;

typedef union TIMER_CC2_CMN_CTRL_u {
    TIMER_CC2_CMN_CTRL_REG_s CC2_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_CMN_CTRL_u;

typedef struct TIMER_CC3_CMN_CTRL_REG_s {
    unsigned int is_capture_3:1; // 
    unsigned int cc2d_sel_3:3; // 
    unsigned int cc2u_sel_3:3; // 
    unsigned int suppress_coc_event_gen_3:1; // 
} TIMER_CC3_CMN_CTRL_REG_s;

typedef union TIMER_CC3_CMN_CTRL_u {
    TIMER_CC3_CMN_CTRL_REG_s CC3_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_CMN_CTRL_u;

typedef struct TIMER_CC2_CAPTURE_CTRL_REG_s {
    unsigned int cap_cond_2:2; // 
    unsigned int load_cond_2:2; // 
    unsigned int zero_cond_2:2; // 
    unsigned int adv_cond_2:3; // 
    unsigned int cap_val_2:16; // 
} TIMER_CC2_CAPTURE_CTRL_REG_s;

typedef union TIMER_CC2_CAPTURE_CTRL_u {
    TIMER_CC2_CAPTURE_CTRL_REG_s CC2_CAPTURE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_CAPTURE_CTRL_u;

typedef struct TIMER_CC3_CAPTURE_CTRL_REG_s {
    unsigned int cap_cond_3:2; // 
    unsigned int load_cond_3:2; // 
    unsigned int zero_cond_3:2; // 
    unsigned int adv_cond_3:3; // 
    unsigned int cap_val_3:16; // 
} TIMER_CC3_CAPTURE_CTRL_REG_s;

typedef union TIMER_CC3_CAPTURE_CTRL_u {
    TIMER_CC3_CAPTURE_CTRL_REG_s CC3_CAPTURE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_CAPTURE_CTRL_u;

typedef struct TIMER_CC2_COMPARE_CTRL_REG_s {
    unsigned int comp_val_2:16; // 
    unsigned int comp_val_update_method_2:3; // 
    unsigned int ccact_update_method_2:3; // 
} TIMER_CC2_COMPARE_CTRL_REG_s;

typedef union TIMER_CC2_COMPARE_CTRL_u {
    TIMER_CC2_COMPARE_CTRL_REG_s CC2_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_COMPARE_CTRL_u;

typedef struct TIMER_CC3_COMPARE_CTRL_REG_s {
    unsigned int comp_val_3:16; // 
    unsigned int comp_val_update_method_3:3; // 
    unsigned int ccact_update_method_3:3; // 
} TIMER_CC3_COMPARE_CTRL_REG_s;

typedef union TIMER_CC3_COMPARE_CTRL_u {
    TIMER_CC3_COMPARE_CTRL_REG_s CC3_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_COMPARE_CTRL_u;

typedef struct TIMER_CC4_CMN_CTRL_REG_s {
    unsigned int suppress_coc_event_gen_4:1; // 
} TIMER_CC4_CMN_CTRL_REG_s;

typedef union TIMER_CC4_CMN_CTRL_u {
    TIMER_CC4_CMN_CTRL_REG_s CC4_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC4_CMN_CTRL_u;

typedef struct TIMER_CC5_CMN_CTRL_REG_s {
    unsigned int suppress_coc_event_gen_5:1; // 
} TIMER_CC5_CMN_CTRL_REG_s;

typedef union TIMER_CC5_CMN_CTRL_u {
    TIMER_CC5_CMN_CTRL_REG_s CC5_CMN_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC5_CMN_CTRL_u;

typedef struct TIMER_CC4_COMPARE_CTRL_REG_s {
    unsigned int comp_val_4:16; // 
    unsigned int comp_val_update_method_4:3; // 
} TIMER_CC4_COMPARE_CTRL_REG_s;

typedef union TIMER_CC4_COMPARE_CTRL_u {
    TIMER_CC4_COMPARE_CTRL_REG_s CC4_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC4_COMPARE_CTRL_u;

typedef struct TIMER_CC5_COMPARE_CTRL_REG_s {
    unsigned int comp_val_5:16; // 
    unsigned int comp_val_update_method_5:3; // 
} TIMER_CC5_COMPARE_CTRL_REG_s;

typedef union TIMER_CC5_COMPARE_CTRL_u {
    TIMER_CC5_COMPARE_CTRL_REG_s CC5_COMPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC5_COMPARE_CTRL_u;

typedef struct TIMER_CC0_CC_PWM_CFG_REG_s {
    unsigned int cc_out_cc2d_0:2; // 
    unsigned int cc_out_cc2u_0:2; // 
    unsigned int cc_out_ccd_0:2; // 
    unsigned int cc_out_ccu_0:2; // 
    unsigned int cc_out_load_0:2; // 
    unsigned int cc_out_zero_0:2; // 
    unsigned int cc_out_fault_entry_0:3; // 
    unsigned int cc_out_fault_exit_0:3; // 
} TIMER_CC0_CC_PWM_CFG_REG_s;

typedef union TIMER_CC0_CC_PWM_CFG_u {
    TIMER_CC0_CC_PWM_CFG_REG_s CC0_CC_PWM_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_CC_PWM_CFG_u;

typedef struct TIMER_CC1_CC_PWM_CFG_REG_s {
    unsigned int cc_out_cc2d_1:2; // 
    unsigned int cc_out_cc2u_1:2; // 
    unsigned int cc_out_ccd_1:2; // 
    unsigned int cc_out_ccu_1:2; // 
    unsigned int cc_out_load_1:2; // 
    unsigned int cc_out_zero_1:2; // 
    unsigned int cc_out_fault_entry_1:3; // 
    unsigned int cc_out_fault_exit_1:3; // 
} TIMER_CC1_CC_PWM_CFG_REG_s;

typedef union TIMER_CC1_CC_PWM_CFG_u {
    TIMER_CC1_CC_PWM_CFG_REG_s CC1_CC_PWM_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_CC_PWM_CFG_u;

typedef struct TIMER_CC2_CC_PWM_CFG_REG_s {
    unsigned int cc_out_cc2d_2:2; // 
    unsigned int cc_out_cc2u_2:2; // 
    unsigned int cc_out_ccd_2:2; // 
    unsigned int cc_out_ccu_2:2; // 
    unsigned int cc_out_load_2:2; // 
    unsigned int cc_out_zero_2:2; // 
    unsigned int cc_out_fault_entry_2:3; // 
    unsigned int cc_out_fault_exit_2:3; // 
} TIMER_CC2_CC_PWM_CFG_REG_s;

typedef union TIMER_CC2_CC_PWM_CFG_u {
    TIMER_CC2_CC_PWM_CFG_REG_s CC2_CC_PWM_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_CC_PWM_CFG_u;

typedef struct TIMER_CC3_CC_PWM_CFG_REG_s {
    unsigned int cc_out_cc2d_3:2; // 
    unsigned int cc_out_cc2u_3:2; // 
    unsigned int cc_out_ccd_3:2; // 
    unsigned int cc_out_ccu_3:2; // 
    unsigned int cc_out_load_3:2; // 
    unsigned int cc_out_zero_3:2; // 
    unsigned int cc_out_fault_entry_3:3; // 
    unsigned int cc_out_fault_exit_3:3; // 
} TIMER_CC3_CC_PWM_CFG_REG_s;

typedef union TIMER_CC3_CC_PWM_CFG_u {
    TIMER_CC3_CC_PWM_CFG_REG_s CC3_CC_PWM_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_CC_PWM_CFG_u;

typedef struct TIMER_DEADBAND_CFG_REG_s {
    unsigned int db_mode:1; // 
    unsigned int db_rise_delay:12; // 
    unsigned int db_fall_delay:12; // 
} TIMER_DEADBAND_CFG_REG_s;

typedef union TIMER_DEADBAND_CFG_u {
    TIMER_DEADBAND_CFG_REG_s DEADBAND_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_DEADBAND_CFG_u;

typedef struct TIMER_CC0_OUTPUT_CTL_REG_s {
    unsigned int cc_out_sel_0:4; // 
    unsigned int cc_out_inv_0:1; // 
    unsigned int cc_out_val_init_0:1; // 
} TIMER_CC0_OUTPUT_CTL_REG_s;

typedef union TIMER_CC0_OUTPUT_CTL_u {
    TIMER_CC0_OUTPUT_CTL_REG_s CC0_OUTPUT_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_OUTPUT_CTL_u;

typedef struct TIMER_CC1_OUTPUT_CTL_REG_s {
    unsigned int cc_out_sel_1:4; // 
    unsigned int cc_out_inv_1:1; // 
    unsigned int cc_out_val_init_1:1; // 
} TIMER_CC1_OUTPUT_CTL_REG_s;

typedef union TIMER_CC1_OUTPUT_CTL_u {
    TIMER_CC1_OUTPUT_CTL_REG_s CC1_OUTPUT_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_OUTPUT_CTL_u;

typedef struct TIMER_CC0_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_0:2; // 
    unsigned int cc_cmpl_out_sw_force_0:2; // 
} TIMER_CC0_SW_FORCE_REG_s;

typedef union TIMER_CC0_SW_FORCE_u {
    TIMER_CC0_SW_FORCE_REG_s CC0_SW_FORCE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_SW_FORCE_u;

typedef struct TIMER_CC1_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_1:2; // 
    unsigned int cc_cmpl_out_sw_force_1:2; // 
} TIMER_CC1_SW_FORCE_REG_s;

typedef union TIMER_CC1_SW_FORCE_u {
    TIMER_CC1_SW_FORCE_REG_s CC1_SW_FORCE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_SW_FORCE_u;

typedef struct TIMER_CC2_OUTPUT_CTL_REG_s {
    unsigned int cc_out_sel_2:4; // 
    unsigned int cc_out_inv_2:1; // 
    unsigned int cc_out_val_init_2:1; // 
} TIMER_CC2_OUTPUT_CTL_REG_s;

typedef union TIMER_CC2_OUTPUT_CTL_u {
    TIMER_CC2_OUTPUT_CTL_REG_s CC2_OUTPUT_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_OUTPUT_CTL_u;

typedef struct TIMER_CC3_OUTPUT_CTL_REG_s {
    unsigned int cc_out_sel_3:4; // 
    unsigned int cc_out_inv_3:1; // 
    unsigned int cc_out_val_init_3:1; // 
} TIMER_CC3_OUTPUT_CTL_REG_s;

typedef union TIMER_CC3_OUTPUT_CTL_u {
    TIMER_CC3_OUTPUT_CTL_REG_s CC3_OUTPUT_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_OUTPUT_CTL_u;

typedef struct TIMER_CC2_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_2:2; // 
    unsigned int cc_cmpl_out_sw_force_2:2; // 
} TIMER_CC2_SW_FORCE_REG_s;

typedef union TIMER_CC2_SW_FORCE_u {
    TIMER_CC2_SW_FORCE_REG_s CC2_SW_FORCE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_SW_FORCE_u;

typedef struct TIMER_CC3_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_3:2; // 
    unsigned int cc_cmpl_out_sw_force_3:2; // 
} TIMER_CC3_SW_FORCE_REG_s;

typedef union TIMER_CC3_SW_FORCE_u {
    TIMER_CC3_SW_FORCE_REG_s CC3_SW_FORCE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_SW_FORCE_u;

typedef struct TIMER_FAULT_IN_CTL_REG_s {
    unsigned int fault_filter_en:1; // 
    unsigned int fault_is_consecutive_period:1; // 
    unsigned int fault_filter_period:2; // 
} TIMER_FAULT_IN_CTL_REG_s;

typedef union TIMER_FAULT_IN_CTL_u {
    TIMER_FAULT_IN_CTL_REG_s FAULT_IN_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_FAULT_IN_CTL_u;

typedef struct TIMER_FAULT_SRC_CTL_REG_s {
    unsigned int fault_ext2_en:1; // 
    unsigned int fault_ext1_en:1; // 
    unsigned int fault_ext0_en:1; // 
    unsigned int fault_comp2_en:1; // 
    unsigned int fault_comp1_en:1; // 
    unsigned int fault_comp0_en:1; // 
    unsigned int fault_sys_clk_en:1; // 
    unsigned int fault_ext2_act_val:1; // 
    unsigned int fault_ext1_act_val:1; // 
    unsigned int fault_ext0_act_val:1; // 
    unsigned int fault_comp2_act_val:1; // 
    unsigned int fault_comp1_act_val:1; // 
    unsigned int fault_comp0_act_val:1; // 
    unsigned int trig_is_fault:1; // 
    unsigned int fault_in_en:1; // 
    unsigned int fault_dependent_on_input:1; // 
    unsigned int fault_latch_sel:2; // 
} TIMER_FAULT_SRC_CTL_REG_s;

typedef union TIMER_FAULT_SRC_CTL_u {
    TIMER_FAULT_SRC_CTL_REG_s FAULT_SRC_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_FAULT_SRC_CTL_u;

typedef struct TIMER_CTR_CTL_REG_s {
    unsigned int ctr_en:1; // 
    unsigned int repeat_mode:1; // 
    unsigned int count_mode:2; // 
    unsigned int ctr_zero_ctrl:3; // 
    unsigned int ctr_load_ctrl:3; // 
    unsigned int ctr_adv_ctrl:3; // 
    unsigned int suppress_ctr_event_gen:1; // 
    unsigned int pl_en:1; // 
    unsigned int ctr_during_fault:1; // 
    unsigned int ctr_exit_fault:2; // 
    unsigned int ctr_after_debug:2; // 
} TIMER_CTR_CTL_REG_s;

typedef union TIMER_CTR_CTL_u {
    TIMER_CTR_CTL_REG_s CTR_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_CTL_u;

typedef struct TIMER_CTR_VAL_REG_s {
    unsigned int ctr_val:16; // 
} TIMER_CTR_VAL_REG_s;

typedef union TIMER_CTR_VAL_u {
    TIMER_CTR_VAL_REG_s CTR_VAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_VAL_u;

typedef struct TIMER_CTR_LOAD_VAL_REG_s {
    unsigned int ctr_load_val:16; // 
} TIMER_CTR_LOAD_VAL_REG_s;

typedef union TIMER_CTR_LOAD_VAL_u {
    TIMER_CTR_LOAD_VAL_REG_s CTR_LOAD_VAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_LOAD_VAL_u;

typedef struct TIMER_CTR_PL_VAL_REG_s {
    unsigned int pl_val:16; // 
} TIMER_CTR_PL_VAL_REG_s;

typedef union TIMER_CTR_PL_VAL_u {
    TIMER_CTR_PL_VAL_REG_s CTR_PL_VAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_PL_VAL_u;

typedef struct TIMER_DEBUG_CTRL_REG_s {
    unsigned int run_in_halt_mode:1; // 
} TIMER_DEBUG_CTRL_REG_s;

typedef union TIMER_DEBUG_CTRL_u {
    TIMER_DEBUG_CTRL_REG_s DEBUG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_DEBUG_CTRL_u;

typedef struct TIMER_RCTR_VAL_REG_s {
    unsigned int rctr_val:8; // 
} TIMER_RCTR_VAL_REG_s;

typedef union TIMER_RCTR_VAL_u {
    TIMER_RCTR_VAL_REG_s RCTR_VAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RCTR_VAL_u;

typedef struct TIMER_RCTR_LOAD_VAL_REG_s {
    unsigned int rctr_load_val:8; // 
} TIMER_RCTR_LOAD_VAL_REG_s;

typedef union TIMER_RCTR_LOAD_VAL_u {
    TIMER_RCTR_LOAD_VAL_REG_s RCTR_LOAD_VAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RCTR_LOAD_VAL_u;

typedef struct TIMER_QEI_DIR_REG_s {
    unsigned int qei_dir:1; // 
} TIMER_QEI_DIR_REG_s;

typedef union TIMER_QEI_DIR_u {
    TIMER_QEI_DIR_REG_s QEI_DIR;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_QEI_DIR_u;

typedef struct TIMER_REGS_s{
    volatile TIMER_DESC_u DESC;
    volatile TIMER_PWR_EN_u PWR_EN;
    volatile TIMER_RST_CTRL_u RST_CTRL;
    volatile TIMER_RST_STS_u RST_STS;
    volatile TIMER_CLK_CTRL_u CLK_CTRL;
    volatile TIMER_INTR_STS_u INTR_STS;
    volatile TIMER_INTR_EVENT_u INTR_EVENT;
    volatile TIMER_INTR_EN_0_u INTR_EN_0;
    volatile TIMER_INTR_EN_1_u INTR_EN_1;
    volatile TIMER_INTR_NMI_EN_0_u INTR_NMI_EN_0;
    volatile TIMER_INTR_NMI_EN_1_u INTR_NMI_EN_1;
    volatile TIMER_EVENT_EN_0_0_u EVENT_EN_0_0;
    volatile TIMER_EVENT_EN_0_1_u EVENT_EN_0_1;
    volatile TIMER_EVENT_EN_1_0_u EVENT_EN_1_0;
    volatile TIMER_EVENT_EN_1_1_u EVENT_EN_1_1;
    volatile TIMER_INTR_SW_SET_u INTR_SW_SET;
    volatile TIMER_EVENT_CTRL_u EVENT_CTRL;
    volatile TIMER_CLK_CONFIG_u CLK_CONFIG;
    volatile TIMER_TRIG_IN_u TRIG_IN;
    volatile TIMER_TRIG_OUT_u TRIG_OUT;
    volatile TIMER_INPUT_FILTER_CC_0_u INPUT_FILTER_CC_0;
    volatile TIMER_INPUT_FILTER_CC_1_u INPUT_FILTER_CC_1;
    volatile TIMER_INPUT_FILTER_CC_2_u INPUT_FILTER_CC_2;
    volatile TIMER_INPUT_FILTER_CC_3_u INPUT_FILTER_CC_3;
    volatile TIMER_INPUT_CC_0_u INPUT_CC_0;
    volatile TIMER_INPUT_CC_1_u INPUT_CC_1;
    volatile TIMER_INPUT_CC_2_u INPUT_CC_2;
    volatile TIMER_INPUT_CC_3_u INPUT_CC_3;
    volatile TIMER_CC0_CMN_CTRL_u CC0_CMN_CTRL;
    volatile TIMER_CC1_CMN_CTRL_u CC1_CMN_CTRL;
    volatile TIMER_CC0_CAPTURE_CTRL_u CC0_CAPTURE_CTRL;
    volatile TIMER_CC1_CAPTURE_CTRL_u CC1_CAPTURE_CTRL;
    volatile TIMER_CC0_COMPARE_CTRL_u CC0_COMPARE_CTRL;
    volatile TIMER_CC1_COMPARE_CTRL_u CC1_COMPARE_CTRL;
    volatile TIMER_CC2_CMN_CTRL_u CC2_CMN_CTRL;
    volatile TIMER_CC3_CMN_CTRL_u CC3_CMN_CTRL;
    volatile TIMER_CC2_CAPTURE_CTRL_u CC2_CAPTURE_CTRL;
    volatile TIMER_CC3_CAPTURE_CTRL_u CC3_CAPTURE_CTRL;
    volatile TIMER_CC2_COMPARE_CTRL_u CC2_COMPARE_CTRL;
    volatile TIMER_CC3_COMPARE_CTRL_u CC3_COMPARE_CTRL;
    volatile TIMER_CC4_CMN_CTRL_u CC4_CMN_CTRL;
    volatile TIMER_CC5_CMN_CTRL_u CC5_CMN_CTRL;
    volatile TIMER_CC4_COMPARE_CTRL_u CC4_COMPARE_CTRL;
    volatile TIMER_CC5_COMPARE_CTRL_u CC5_COMPARE_CTRL;
    volatile TIMER_CC0_CC_PWM_CFG_u CC0_CC_PWM_CFG;
    volatile TIMER_CC1_CC_PWM_CFG_u CC1_CC_PWM_CFG;
    volatile TIMER_CC2_CC_PWM_CFG_u CC2_CC_PWM_CFG;
    volatile TIMER_CC3_CC_PWM_CFG_u CC3_CC_PWM_CFG;
    volatile TIMER_DEADBAND_CFG_u DEADBAND_CFG;
    volatile TIMER_CC0_OUTPUT_CTL_u CC0_OUTPUT_CTL;
    volatile TIMER_CC1_OUTPUT_CTL_u CC1_OUTPUT_CTL;
    volatile TIMER_CC0_SW_FORCE_u CC0_SW_FORCE;
    volatile TIMER_CC1_SW_FORCE_u CC1_SW_FORCE;
    volatile TIMER_CC2_OUTPUT_CTL_u CC2_OUTPUT_CTL;
    volatile TIMER_CC3_OUTPUT_CTL_u CC3_OUTPUT_CTL;
    volatile TIMER_CC2_SW_FORCE_u CC2_SW_FORCE;
    volatile TIMER_CC3_SW_FORCE_u CC3_SW_FORCE;
    volatile TIMER_FAULT_IN_CTL_u FAULT_IN_CTL;
    volatile TIMER_FAULT_SRC_CTL_u FAULT_SRC_CTL;
    volatile TIMER_CTR_CTL_u CTR_CTL;
    volatile TIMER_CTR_VAL_u CTR_VAL;
    volatile TIMER_CTR_LOAD_VAL_u CTR_LOAD_VAL;
    volatile TIMER_CTR_PL_VAL_u CTR_PL_VAL;
    volatile TIMER_DEBUG_CTRL_u DEBUG_CTRL;
    volatile TIMER_RCTR_VAL_u RCTR_VAL;
    volatile TIMER_RCTR_LOAD_VAL_u RCTR_LOAD_VAL;
    volatile TIMER_QEI_DIR_u QEI_DIR;
} TIMER_REGS_s;

#define TIMER_DESC_module_type_OFS (0)
#define TIMER_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define TIMER_DESC_modue_subtype_OFS (8)
#define TIMER_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define TIMER_DESC_major_rev_OFS (16)
#define TIMER_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define TIMER_DESC_minor_rev_OFS (20)
#define TIMER_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define TIMER_PWR_EN_pwr_en_OFS (0)
#define TIMER_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define TIMER_PWR_EN_pwr_en_key_OFS (24)
#define TIMER_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define TIMER_RST_CTRL_rst_OFS (0)
#define TIMER_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define TIMER_RST_CTRL_rst_sts_clr_OFS (1)
#define TIMER_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define TIMER_RST_CTRL_rst_key_OFS (24)
#define TIMER_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define TIMER_RST_STS_rst_sts_OFS (0)
#define TIMER_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define TIMER_CLK_CTRL_clk_en_OFS (0)
#define TIMER_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_STS_intr_first_OFS (0)
#define TIMER_INTR_STS_intr_first_MASK ((uint32_t)0x0000003FU)
#define TIMER_INTR_EVENT_ctr_zero_OFS (0)
#define TIMER_INTR_EVENT_ctr_zero_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EVENT_ctr_load_OFS (1)
#define TIMER_INTR_EVENT_ctr_load_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EVENT_ccd_0_OFS (2)
#define TIMER_INTR_EVENT_ccd_0_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_EVENT_ccu_0_OFS (3)
#define TIMER_INTR_EVENT_ccu_0_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_EVENT_ccd_1_OFS (4)
#define TIMER_INTR_EVENT_ccd_1_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_EVENT_ccu_1_OFS (5)
#define TIMER_INTR_EVENT_ccu_1_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_EVENT_ccd_2_OFS (6)
#define TIMER_INTR_EVENT_ccd_2_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_EVENT_ccu_2_OFS (7)
#define TIMER_INTR_EVENT_ccu_2_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_EVENT_ccd_3_OFS (8)
#define TIMER_INTR_EVENT_ccd_3_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_EVENT_ccu_3_OFS (9)
#define TIMER_INTR_EVENT_ccu_3_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_EVENT_ccd_4_OFS (10)
#define TIMER_INTR_EVENT_ccd_4_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_EVENT_ccu_4_OFS (11)
#define TIMER_INTR_EVENT_ccu_4_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_EVENT_ccd_5_OFS (12)
#define TIMER_INTR_EVENT_ccd_5_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_EVENT_ccu_5_OFS (13)
#define TIMER_INTR_EVENT_ccu_5_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_EVENT_fault_OFS (14)
#define TIMER_INTR_EVENT_fault_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_EVENT_trig_ov_OFS (15)
#define TIMER_INTR_EVENT_trig_ov_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_EVENT_rctr_zero_OFS (16)
#define TIMER_INTR_EVENT_rctr_zero_MASK ((uint32_t)0x00010000U)
#define TIMER_INTR_EVENT_qei_ctr_dc_OFS (17)
#define TIMER_INTR_EVENT_qei_ctr_dc_MASK ((uint32_t)0x00020000U)
#define TIMER_INTR_EVENT_qei_err_OFS (18)
#define TIMER_INTR_EVENT_qei_err_MASK ((uint32_t)0x00040000U)
#define TIMER_INTR_EN_0_ctr_zero_en_OFS (0)
#define TIMER_INTR_EN_0_ctr_zero_en_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EN_0_ctr_load_en_OFS (1)
#define TIMER_INTR_EN_0_ctr_load_en_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EN_0_ccd_0_en_OFS (2)
#define TIMER_INTR_EN_0_ccd_0_en_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_EN_0_ccu_0_en_OFS (3)
#define TIMER_INTR_EN_0_ccu_0_en_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_EN_0_ccd_1_en_OFS (4)
#define TIMER_INTR_EN_0_ccd_1_en_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_EN_0_ccu_1_en_OFS (5)
#define TIMER_INTR_EN_0_ccu_1_en_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_EN_0_ccd_2_en_OFS (6)
#define TIMER_INTR_EN_0_ccd_2_en_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_EN_0_ccu_2_en_OFS (7)
#define TIMER_INTR_EN_0_ccu_2_en_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_EN_0_ccd_3_en_OFS (8)
#define TIMER_INTR_EN_0_ccd_3_en_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_EN_0_ccu_3_en_OFS (9)
#define TIMER_INTR_EN_0_ccu_3_en_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_EN_0_ccd_4_en_OFS (10)
#define TIMER_INTR_EN_0_ccd_4_en_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_EN_0_ccu_4_en_OFS (11)
#define TIMER_INTR_EN_0_ccu_4_en_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_EN_0_ccd_5_en_OFS (12)
#define TIMER_INTR_EN_0_ccd_5_en_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_EN_0_ccu_5_en_OFS (13)
#define TIMER_INTR_EN_0_ccu_5_en_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_EN_0_fault_en_OFS (14)
#define TIMER_INTR_EN_0_fault_en_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_EN_0_trig_ov_en_OFS (15)
#define TIMER_INTR_EN_0_trig_ov_en_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_EN_1_rctr_zero_en_OFS (0)
#define TIMER_INTR_EN_1_rctr_zero_en_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EN_1_qei_ctr_dc_en_OFS (1)
#define TIMER_INTR_EN_1_qei_ctr_dc_en_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EN_1_qei_err_en_OFS (2)
#define TIMER_INTR_EN_1_qei_err_en_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_NMI_EN_0_ctr_zero_nmi_en_OFS (0)
#define TIMER_INTR_NMI_EN_0_ctr_zero_nmi_en_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_NMI_EN_0_ctr_load_nmi_en_OFS (1)
#define TIMER_INTR_NMI_EN_0_ctr_load_nmi_en_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_NMI_EN_0_ccd_0_nmi_en_OFS (2)
#define TIMER_INTR_NMI_EN_0_ccd_0_nmi_en_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_NMI_EN_0_ccu_0_nmi_en_OFS (3)
#define TIMER_INTR_NMI_EN_0_ccu_0_nmi_en_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_NMI_EN_0_ccd_1_nmi_en_OFS (4)
#define TIMER_INTR_NMI_EN_0_ccd_1_nmi_en_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_NMI_EN_0_ccu_1_nmi_en_OFS (5)
#define TIMER_INTR_NMI_EN_0_ccu_1_nmi_en_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_NMI_EN_0_ccd_2_nmi_en_OFS (6)
#define TIMER_INTR_NMI_EN_0_ccd_2_nmi_en_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_NMI_EN_0_ccu_2_nmi_en_OFS (7)
#define TIMER_INTR_NMI_EN_0_ccu_2_nmi_en_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_NMI_EN_0_ccd_3_nmi_en_OFS (8)
#define TIMER_INTR_NMI_EN_0_ccd_3_nmi_en_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_NMI_EN_0_ccu_3_nmi_en_OFS (9)
#define TIMER_INTR_NMI_EN_0_ccu_3_nmi_en_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_NMI_EN_0_ccd_4_nmi_en_OFS (10)
#define TIMER_INTR_NMI_EN_0_ccd_4_nmi_en_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_NMI_EN_0_ccu_4_nmi_en_OFS (11)
#define TIMER_INTR_NMI_EN_0_ccu_4_nmi_en_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_NMI_EN_0_ccd_5_nmi_en_OFS (12)
#define TIMER_INTR_NMI_EN_0_ccd_5_nmi_en_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_NMI_EN_0_ccu_5_nmi_en_OFS (13)
#define TIMER_INTR_NMI_EN_0_ccu_5_nmi_en_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_NMI_EN_0_fault_nmi_en_OFS (14)
#define TIMER_INTR_NMI_EN_0_fault_nmi_en_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_NMI_EN_0_trig_ov_nmi_en_OFS (15)
#define TIMER_INTR_NMI_EN_0_trig_ov_nmi_en_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_NMI_EN_1_rctr_zero_nmi_en_OFS (0)
#define TIMER_INTR_NMI_EN_1_rctr_zero_nmi_en_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_NMI_EN_1_qei_ctr_dc_nmi_en_OFS (1)
#define TIMER_INTR_NMI_EN_1_qei_ctr_dc_nmi_en_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_NMI_EN_1_qei_err_nmi_en_OFS (2)
#define TIMER_INTR_NMI_EN_1_qei_err_nmi_en_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_0_0_ctr_zero_event_en_0_OFS (0)
#define TIMER_EVENT_EN_0_0_ctr_zero_event_en_0_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_0_0_ctr_load_event_en_0_OFS (1)
#define TIMER_EVENT_EN_0_0_ctr_load_event_en_0_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_0_0_ccd_0_event_en_0_OFS (2)
#define TIMER_EVENT_EN_0_0_ccd_0_event_en_0_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_0_0_ccu_0_event_en_0_OFS (3)
#define TIMER_EVENT_EN_0_0_ccu_0_event_en_0_MASK ((uint32_t)0x00000008U)
#define TIMER_EVENT_EN_0_0_ccd_1_event_en_0_OFS (4)
#define TIMER_EVENT_EN_0_0_ccd_1_event_en_0_MASK ((uint32_t)0x00000010U)
#define TIMER_EVENT_EN_0_0_ccu_1_event_en_0_OFS (5)
#define TIMER_EVENT_EN_0_0_ccu_1_event_en_0_MASK ((uint32_t)0x00000020U)
#define TIMER_EVENT_EN_0_0_ccd_2_event_en_0_OFS (6)
#define TIMER_EVENT_EN_0_0_ccd_2_event_en_0_MASK ((uint32_t)0x00000040U)
#define TIMER_EVENT_EN_0_0_ccu_2_event_en_0_OFS (7)
#define TIMER_EVENT_EN_0_0_ccu_2_event_en_0_MASK ((uint32_t)0x00000080U)
#define TIMER_EVENT_EN_0_0_ccd_3_event_en_0_OFS (8)
#define TIMER_EVENT_EN_0_0_ccd_3_event_en_0_MASK ((uint32_t)0x00000100U)
#define TIMER_EVENT_EN_0_0_ccu_3_event_en_0_OFS (9)
#define TIMER_EVENT_EN_0_0_ccu_3_event_en_0_MASK ((uint32_t)0x00000200U)
#define TIMER_EVENT_EN_0_0_ccd_4_event_en_0_OFS (10)
#define TIMER_EVENT_EN_0_0_ccd_4_event_en_0_MASK ((uint32_t)0x00000400U)
#define TIMER_EVENT_EN_0_0_ccu_4_event_en_0_OFS (11)
#define TIMER_EVENT_EN_0_0_ccu_4_event_en_0_MASK ((uint32_t)0x00000800U)
#define TIMER_EVENT_EN_0_0_ccd_5_event_en_0_OFS (12)
#define TIMER_EVENT_EN_0_0_ccd_5_event_en_0_MASK ((uint32_t)0x00001000U)
#define TIMER_EVENT_EN_0_0_ccu_5_event_en_0_OFS (13)
#define TIMER_EVENT_EN_0_0_ccu_5_event_en_0_MASK ((uint32_t)0x00002000U)
#define TIMER_EVENT_EN_0_0_fault_event_en_0_OFS (14)
#define TIMER_EVENT_EN_0_0_fault_event_en_0_MASK ((uint32_t)0x00004000U)
#define TIMER_EVENT_EN_0_0_trig_ov_event_en_0_OFS (15)
#define TIMER_EVENT_EN_0_0_trig_ov_event_en_0_MASK ((uint32_t)0x00008000U)
#define TIMER_EVENT_EN_0_1_rctr_zero_event_en_0_OFS (0)
#define TIMER_EVENT_EN_0_1_rctr_zero_event_en_0_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_0_1_qei_ctr_dc_event_en_0_OFS (1)
#define TIMER_EVENT_EN_0_1_qei_ctr_dc_event_en_0_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_0_1_qei_err_event_en_0_OFS (2)
#define TIMER_EVENT_EN_0_1_qei_err_event_en_0_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_1_0_ctr_zero_event_en_1_OFS (0)
#define TIMER_EVENT_EN_1_0_ctr_zero_event_en_1_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_1_0_ctr_load_event_en_1_OFS (1)
#define TIMER_EVENT_EN_1_0_ctr_load_event_en_1_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_1_0_ccd_0_event_en_1_OFS (2)
#define TIMER_EVENT_EN_1_0_ccd_0_event_en_1_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_1_0_ccu_0_event_en_1_OFS (3)
#define TIMER_EVENT_EN_1_0_ccu_0_event_en_1_MASK ((uint32_t)0x00000008U)
#define TIMER_EVENT_EN_1_0_ccd_1_event_en_1_OFS (4)
#define TIMER_EVENT_EN_1_0_ccd_1_event_en_1_MASK ((uint32_t)0x00000010U)
#define TIMER_EVENT_EN_1_0_ccu_1_event_en_1_OFS (5)
#define TIMER_EVENT_EN_1_0_ccu_1_event_en_1_MASK ((uint32_t)0x00000020U)
#define TIMER_EVENT_EN_1_0_ccd_2_event_en_1_OFS (6)
#define TIMER_EVENT_EN_1_0_ccd_2_event_en_1_MASK ((uint32_t)0x00000040U)
#define TIMER_EVENT_EN_1_0_ccu_2_event_en_1_OFS (7)
#define TIMER_EVENT_EN_1_0_ccu_2_event_en_1_MASK ((uint32_t)0x00000080U)
#define TIMER_EVENT_EN_1_0_ccd_3_event_en_1_OFS (8)
#define TIMER_EVENT_EN_1_0_ccd_3_event_en_1_MASK ((uint32_t)0x00000100U)
#define TIMER_EVENT_EN_1_0_ccu_3_event_en_1_OFS (9)
#define TIMER_EVENT_EN_1_0_ccu_3_event_en_1_MASK ((uint32_t)0x00000200U)
#define TIMER_EVENT_EN_1_0_ccd_4_event_en_1_OFS (10)
#define TIMER_EVENT_EN_1_0_ccd_4_event_en_1_MASK ((uint32_t)0x00000400U)
#define TIMER_EVENT_EN_1_0_ccu_4_event_en_1_OFS (11)
#define TIMER_EVENT_EN_1_0_ccu_4_event_en_1_MASK ((uint32_t)0x00000800U)
#define TIMER_EVENT_EN_1_0_ccd_5_event_en_1_OFS (12)
#define TIMER_EVENT_EN_1_0_ccd_5_event_en_1_MASK ((uint32_t)0x00001000U)
#define TIMER_EVENT_EN_1_0_ccu_5_event_en_1_OFS (13)
#define TIMER_EVENT_EN_1_0_ccu_5_event_en_1_MASK ((uint32_t)0x00002000U)
#define TIMER_EVENT_EN_1_0_fault_event_en_1_OFS (14)
#define TIMER_EVENT_EN_1_0_fault_event_en_1_MASK ((uint32_t)0x00004000U)
#define TIMER_EVENT_EN_1_0_trig_ov_event_en_1_OFS (15)
#define TIMER_EVENT_EN_1_0_trig_ov_event_en_1_MASK ((uint32_t)0x00008000U)
#define TIMER_EVENT_EN_1_1_rctr_zero_event_en_1_OFS (0)
#define TIMER_EVENT_EN_1_1_rctr_zero_event_en_1_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_1_1_qei_ctr_dc_event_en_1_OFS (1)
#define TIMER_EVENT_EN_1_1_qei_ctr_dc_event_en_1_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_1_1_qei_err_event_en_1_OFS (2)
#define TIMER_EVENT_EN_1_1_qei_err_event_en_1_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_SW_SET_ctr_zero_sw_set_OFS (0)
#define TIMER_INTR_SW_SET_ctr_zero_sw_set_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_SW_SET_ctr_load_sw_set_OFS (1)
#define TIMER_INTR_SW_SET_ctr_load_sw_set_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_SW_SET_ccd_0_sw_set_OFS (2)
#define TIMER_INTR_SW_SET_ccd_0_sw_set_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_SW_SET_ccu_0_sw_set_OFS (3)
#define TIMER_INTR_SW_SET_ccu_0_sw_set_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_SW_SET_ccd_1_sw_set_OFS (4)
#define TIMER_INTR_SW_SET_ccd_1_sw_set_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_SW_SET_ccu_1_sw_set_OFS (5)
#define TIMER_INTR_SW_SET_ccu_1_sw_set_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_SW_SET_ccd_2_sw_set_OFS (6)
#define TIMER_INTR_SW_SET_ccd_2_sw_set_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_SW_SET_ccu_2_sw_set_OFS (7)
#define TIMER_INTR_SW_SET_ccu_2_sw_set_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_SW_SET_ccd_3_sw_set_OFS (8)
#define TIMER_INTR_SW_SET_ccd_3_sw_set_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_SW_SET_ccu_3_sw_set_OFS (9)
#define TIMER_INTR_SW_SET_ccu_3_sw_set_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_SW_SET_ccd_4_sw_set_OFS (10)
#define TIMER_INTR_SW_SET_ccd_4_sw_set_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_SW_SET_ccu_4_sw_set_OFS (11)
#define TIMER_INTR_SW_SET_ccu_4_sw_set_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_SW_SET_ccd_5_sw_set_OFS (12)
#define TIMER_INTR_SW_SET_ccd_5_sw_set_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_SW_SET_ccu_5_sw_set_OFS (13)
#define TIMER_INTR_SW_SET_ccu_5_sw_set_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_SW_SET_fault_sw_set_OFS (14)
#define TIMER_INTR_SW_SET_fault_sw_set_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_SW_SET_trig_ov_sw_set_OFS (15)
#define TIMER_INTR_SW_SET_trig_ov_sw_set_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_SW_SET_rctr_zero_sw_set_OFS (16)
#define TIMER_INTR_SW_SET_rctr_zero_sw_set_MASK ((uint32_t)0x00010000U)
#define TIMER_INTR_SW_SET_qei_ctr_dc_sw_set_OFS (17)
#define TIMER_INTR_SW_SET_qei_ctr_dc_sw_set_MASK ((uint32_t)0x00020000U)
#define TIMER_INTR_SW_SET_qei_err_sw_set_OFS (18)
#define TIMER_INTR_SW_SET_qei_err_sw_set_MASK ((uint32_t)0x00040000U)
#define TIMER_EVENT_CTRL_chan_id0_OFS (0)
#define TIMER_EVENT_CTRL_chan_id0_MASK ((uint32_t)0x0000000FU)
#define TIMER_EVENT_CTRL_chan_id1_OFS (4)
#define TIMER_EVENT_CTRL_chan_id1_MASK ((uint32_t)0x000000F0U)
#define TIMER_CLK_CONFIG_clk_sel_OFS (0)
#define TIMER_CLK_CONFIG_clk_sel_MASK ((uint32_t)0x00000003U)
#define TIMER_CLK_CONFIG_clk_div_OFS (2)
#define TIMER_CLK_CONFIG_clk_div_MASK ((uint32_t)0x00001FFCU)
#define TIMER_TRIG_IN_trig_en_OFS (0)
#define TIMER_TRIG_IN_trig_en_MASK ((uint32_t)0x00000001U)
#define TIMER_TRIG_IN_trig_sel_OFS (1)
#define TIMER_TRIG_IN_trig_sel_MASK ((uint32_t)0x0000003EU)
#define TIMER_TRIG_OUT_trig_out_en_OFS (0)
#define TIMER_TRIG_OUT_trig_out_en_MASK ((uint32_t)0x00000001U)
#define TIMER_TRIG_OUT_trig_sw_en_OFS (1)
#define TIMER_TRIG_OUT_trig_sw_en_MASK ((uint32_t)0x00000002U)
#define TIMER_TRIG_OUT_trig_hw_en_OFS (2)
#define TIMER_TRIG_OUT_trig_hw_en_MASK ((uint32_t)0x00000004U)
#define TIMER_TRIG_OUT_trig_hw_sel_OFS (3)
#define TIMER_TRIG_OUT_trig_hw_sel_MASK ((uint32_t)0x00000078U)
#define TIMER_INPUT_FILTER_CC_0_filter_en_0_OFS (0)
#define TIMER_INPUT_FILTER_CC_0_filter_en_0_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_0_is_consecutive_prd_0_OFS (1)
#define TIMER_INPUT_FILTER_CC_0_is_consecutive_prd_0_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_0_filter_period_0_OFS (2)
#define TIMER_INPUT_FILTER_CC_0_filter_period_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_1_filter_en_1_OFS (0)
#define TIMER_INPUT_FILTER_CC_1_filter_en_1_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_1_is_consecutive_prd_1_OFS (1)
#define TIMER_INPUT_FILTER_CC_1_is_consecutive_prd_1_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_1_filter_period_1_OFS (2)
#define TIMER_INPUT_FILTER_CC_1_filter_period_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_2_filter_en_2_OFS (0)
#define TIMER_INPUT_FILTER_CC_2_filter_en_2_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_2_is_consecutive_prd_2_OFS (1)
#define TIMER_INPUT_FILTER_CC_2_is_consecutive_prd_2_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_2_filter_period_2_OFS (2)
#define TIMER_INPUT_FILTER_CC_2_filter_period_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_3_filter_en_3_OFS (0)
#define TIMER_INPUT_FILTER_CC_3_filter_en_3_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_3_is_consecutive_prd_3_OFS (1)
#define TIMER_INPUT_FILTER_CC_3_is_consecutive_prd_3_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_3_filter_period_3_OFS (2)
#define TIMER_INPUT_FILTER_CC_3_filter_period_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_CC_0_input_sel_0_OFS (0)
#define TIMER_INPUT_CC_0_input_sel_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_0_input_inv_0_OFS (4)
#define TIMER_INPUT_CC_0_input_inv_0_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_1_input_sel_1_OFS (0)
#define TIMER_INPUT_CC_1_input_sel_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_1_input_inv_1_OFS (4)
#define TIMER_INPUT_CC_1_input_inv_1_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_2_input_sel_2_OFS (0)
#define TIMER_INPUT_CC_2_input_sel_2_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_2_input_inv_2_OFS (4)
#define TIMER_INPUT_CC_2_input_inv_2_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_3_input_sel_3_OFS (0)
#define TIMER_INPUT_CC_3_input_sel_3_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_3_input_inv_3_OFS (4)
#define TIMER_INPUT_CC_3_input_inv_3_MASK ((uint32_t)0x00000010U)
#define TIMER_CC0_CMN_CTRL_is_capture_0_OFS (0)
#define TIMER_CC0_CMN_CTRL_is_capture_0_MASK ((uint32_t)0x00000001U)
#define TIMER_CC0_CMN_CTRL_cc2d_sel_0_OFS (1)
#define TIMER_CC0_CMN_CTRL_cc2d_sel_0_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC0_CMN_CTRL_cc2u_sel_0_OFS (4)
#define TIMER_CC0_CMN_CTRL_cc2u_sel_0_MASK ((uint32_t)0x00000070U)
#define TIMER_CC0_CMN_CTRL_suppress_coc_event_gen_0_OFS (7)
#define TIMER_CC0_CMN_CTRL_suppress_coc_event_gen_0_MASK ((uint32_t)0x00000080U)
#define TIMER_CC1_CMN_CTRL_is_capture_1_OFS (0)
#define TIMER_CC1_CMN_CTRL_is_capture_1_MASK ((uint32_t)0x00000001U)
#define TIMER_CC1_CMN_CTRL_cc2d_sel_1_OFS (1)
#define TIMER_CC1_CMN_CTRL_cc2d_sel_1_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC1_CMN_CTRL_cc2u_sel_1_OFS (4)
#define TIMER_CC1_CMN_CTRL_cc2u_sel_1_MASK ((uint32_t)0x00000070U)
#define TIMER_CC1_CMN_CTRL_suppress_coc_event_gen_1_OFS (7)
#define TIMER_CC1_CMN_CTRL_suppress_coc_event_gen_1_MASK ((uint32_t)0x00000080U)
#define TIMER_CC0_CAPTURE_CTRL_cap_cond_0_OFS (0)
#define TIMER_CC0_CAPTURE_CTRL_cap_cond_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_CAPTURE_CTRL_load_cond_0_OFS (2)
#define TIMER_CC0_CAPTURE_CTRL_load_cond_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC0_CAPTURE_CTRL_zero_cond_0_OFS (4)
#define TIMER_CC0_CAPTURE_CTRL_zero_cond_0_MASK ((uint32_t)0x00000030U)
#define TIMER_CC0_CAPTURE_CTRL_adv_cond_0_OFS (6)
#define TIMER_CC0_CAPTURE_CTRL_adv_cond_0_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC0_CAPTURE_CTRL_cap_val_0_OFS (9)
#define TIMER_CC0_CAPTURE_CTRL_cap_val_0_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC1_CAPTURE_CTRL_cap_cond_1_OFS (0)
#define TIMER_CC1_CAPTURE_CTRL_cap_cond_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_CAPTURE_CTRL_load_cond_1_OFS (2)
#define TIMER_CC1_CAPTURE_CTRL_load_cond_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_CAPTURE_CTRL_zero_cond_1_OFS (4)
#define TIMER_CC1_CAPTURE_CTRL_zero_cond_1_MASK ((uint32_t)0x00000030U)
#define TIMER_CC1_CAPTURE_CTRL_adv_cond_1_OFS (6)
#define TIMER_CC1_CAPTURE_CTRL_adv_cond_1_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC1_CAPTURE_CTRL_cap_val_1_OFS (9)
#define TIMER_CC1_CAPTURE_CTRL_cap_val_1_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC0_COMPARE_CTRL_comp_val_0_OFS (0)
#define TIMER_CC0_COMPARE_CTRL_comp_val_0_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC0_COMPARE_CTRL_comp_val_update_method_0_OFS (16)
#define TIMER_CC0_COMPARE_CTRL_comp_val_update_method_0_MASK ((uint32_t)0x00070000U)
#define TIMER_CC0_COMPARE_CTRL_ccact_update_method_0_OFS (19)
#define TIMER_CC0_COMPARE_CTRL_ccact_update_method_0_MASK ((uint32_t)0x00380000U)
#define TIMER_CC1_COMPARE_CTRL_comp_val_1_OFS (0)
#define TIMER_CC1_COMPARE_CTRL_comp_val_1_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC1_COMPARE_CTRL_comp_val_update_method_1_OFS (16)
#define TIMER_CC1_COMPARE_CTRL_comp_val_update_method_1_MASK ((uint32_t)0x00070000U)
#define TIMER_CC1_COMPARE_CTRL_ccact_update_method_1_OFS (19)
#define TIMER_CC1_COMPARE_CTRL_ccact_update_method_1_MASK ((uint32_t)0x00380000U)
#define TIMER_CC2_CMN_CTRL_is_capture_2_OFS (0)
#define TIMER_CC2_CMN_CTRL_is_capture_2_MASK ((uint32_t)0x00000001U)
#define TIMER_CC2_CMN_CTRL_cc2d_sel_2_OFS (1)
#define TIMER_CC2_CMN_CTRL_cc2d_sel_2_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC2_CMN_CTRL_cc2u_sel_2_OFS (4)
#define TIMER_CC2_CMN_CTRL_cc2u_sel_2_MASK ((uint32_t)0x00000070U)
#define TIMER_CC2_CMN_CTRL_suppress_coc_event_gen_2_OFS (7)
#define TIMER_CC2_CMN_CTRL_suppress_coc_event_gen_2_MASK ((uint32_t)0x00000080U)
#define TIMER_CC3_CMN_CTRL_is_capture_3_OFS (0)
#define TIMER_CC3_CMN_CTRL_is_capture_3_MASK ((uint32_t)0x00000001U)
#define TIMER_CC3_CMN_CTRL_cc2d_sel_3_OFS (1)
#define TIMER_CC3_CMN_CTRL_cc2d_sel_3_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC3_CMN_CTRL_cc2u_sel_3_OFS (4)
#define TIMER_CC3_CMN_CTRL_cc2u_sel_3_MASK ((uint32_t)0x00000070U)
#define TIMER_CC3_CMN_CTRL_suppress_coc_event_gen_3_OFS (7)
#define TIMER_CC3_CMN_CTRL_suppress_coc_event_gen_3_MASK ((uint32_t)0x00000080U)
#define TIMER_CC2_CAPTURE_CTRL_cap_cond_2_OFS (0)
#define TIMER_CC2_CAPTURE_CTRL_cap_cond_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_CAPTURE_CTRL_load_cond_2_OFS (2)
#define TIMER_CC2_CAPTURE_CTRL_load_cond_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_CAPTURE_CTRL_zero_cond_2_OFS (4)
#define TIMER_CC2_CAPTURE_CTRL_zero_cond_2_MASK ((uint32_t)0x00000030U)
#define TIMER_CC2_CAPTURE_CTRL_adv_cond_2_OFS (6)
#define TIMER_CC2_CAPTURE_CTRL_adv_cond_2_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC2_CAPTURE_CTRL_cap_val_2_OFS (9)
#define TIMER_CC2_CAPTURE_CTRL_cap_val_2_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC3_CAPTURE_CTRL_cap_cond_3_OFS (0)
#define TIMER_CC3_CAPTURE_CTRL_cap_cond_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_CAPTURE_CTRL_load_cond_3_OFS (2)
#define TIMER_CC3_CAPTURE_CTRL_load_cond_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_CAPTURE_CTRL_zero_cond_3_OFS (4)
#define TIMER_CC3_CAPTURE_CTRL_zero_cond_3_MASK ((uint32_t)0x00000030U)
#define TIMER_CC3_CAPTURE_CTRL_adv_cond_3_OFS (6)
#define TIMER_CC3_CAPTURE_CTRL_adv_cond_3_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC3_CAPTURE_CTRL_cap_val_3_OFS (9)
#define TIMER_CC3_CAPTURE_CTRL_cap_val_3_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC2_COMPARE_CTRL_comp_val_2_OFS (0)
#define TIMER_CC2_COMPARE_CTRL_comp_val_2_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC2_COMPARE_CTRL_comp_val_update_method_2_OFS (16)
#define TIMER_CC2_COMPARE_CTRL_comp_val_update_method_2_MASK ((uint32_t)0x00070000U)
#define TIMER_CC2_COMPARE_CTRL_ccact_update_method_2_OFS (19)
#define TIMER_CC2_COMPARE_CTRL_ccact_update_method_2_MASK ((uint32_t)0x00380000U)
#define TIMER_CC3_COMPARE_CTRL_comp_val_3_OFS (0)
#define TIMER_CC3_COMPARE_CTRL_comp_val_3_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC3_COMPARE_CTRL_comp_val_update_method_3_OFS (16)
#define TIMER_CC3_COMPARE_CTRL_comp_val_update_method_3_MASK ((uint32_t)0x00070000U)
#define TIMER_CC3_COMPARE_CTRL_ccact_update_method_3_OFS (19)
#define TIMER_CC3_COMPARE_CTRL_ccact_update_method_3_MASK ((uint32_t)0x00380000U)
#define TIMER_CC4_CMN_CTRL_suppress_coc_event_gen_4_OFS (0)
#define TIMER_CC4_CMN_CTRL_suppress_coc_event_gen_4_MASK ((uint32_t)0x00000001U)
#define TIMER_CC5_CMN_CTRL_suppress_coc_event_gen_5_OFS (0)
#define TIMER_CC5_CMN_CTRL_suppress_coc_event_gen_5_MASK ((uint32_t)0x00000001U)
#define TIMER_CC4_COMPARE_CTRL_comp_val_4_OFS (0)
#define TIMER_CC4_COMPARE_CTRL_comp_val_4_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC4_COMPARE_CTRL_comp_val_update_method_4_OFS (16)
#define TIMER_CC4_COMPARE_CTRL_comp_val_update_method_4_MASK ((uint32_t)0x00070000U)
#define TIMER_CC5_COMPARE_CTRL_comp_val_5_OFS (0)
#define TIMER_CC5_COMPARE_CTRL_comp_val_5_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC5_COMPARE_CTRL_comp_val_update_method_5_OFS (16)
#define TIMER_CC5_COMPARE_CTRL_comp_val_update_method_5_MASK ((uint32_t)0x00070000U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_cc2d_0_OFS (0)
#define TIMER_CC0_CC_PWM_CFG_cc_out_cc2d_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_cc2u_0_OFS (2)
#define TIMER_CC0_CC_PWM_CFG_cc_out_cc2u_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC0_CC_PWM_CFG_cc_out_ccd_0_OFS (4)
#define TIMER_CC0_CC_PWM_CFG_cc_out_ccd_0_MASK ((uint32_t)0x00000030U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_ccu_0_OFS (6)
#define TIMER_CC0_CC_PWM_CFG_cc_out_ccu_0_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_load_0_OFS (8)
#define TIMER_CC0_CC_PWM_CFG_cc_out_load_0_MASK ((uint32_t)0x00000300U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_zero_0_OFS (10)
#define TIMER_CC0_CC_PWM_CFG_cc_out_zero_0_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_fault_entry_0_OFS (12)
#define TIMER_CC0_CC_PWM_CFG_cc_out_fault_entry_0_MASK ((uint32_t)0x00007000U)
#define TIMER_CC0_CC_PWM_CFG_cc_out_fault_exit_0_OFS (15)
#define TIMER_CC0_CC_PWM_CFG_cc_out_fault_exit_0_MASK ((uint32_t)0x00038000U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_cc2d_1_OFS (0)
#define TIMER_CC1_CC_PWM_CFG_cc_out_cc2d_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_cc2u_1_OFS (2)
#define TIMER_CC1_CC_PWM_CFG_cc_out_cc2u_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_CC_PWM_CFG_cc_out_ccd_1_OFS (4)
#define TIMER_CC1_CC_PWM_CFG_cc_out_ccd_1_MASK ((uint32_t)0x00000030U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_ccu_1_OFS (6)
#define TIMER_CC1_CC_PWM_CFG_cc_out_ccu_1_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_load_1_OFS (8)
#define TIMER_CC1_CC_PWM_CFG_cc_out_load_1_MASK ((uint32_t)0x00000300U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_zero_1_OFS (10)
#define TIMER_CC1_CC_PWM_CFG_cc_out_zero_1_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_fault_entry_1_OFS (12)
#define TIMER_CC1_CC_PWM_CFG_cc_out_fault_entry_1_MASK ((uint32_t)0x00007000U)
#define TIMER_CC1_CC_PWM_CFG_cc_out_fault_exit_1_OFS (15)
#define TIMER_CC1_CC_PWM_CFG_cc_out_fault_exit_1_MASK ((uint32_t)0x00038000U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_cc2d_2_OFS (0)
#define TIMER_CC2_CC_PWM_CFG_cc_out_cc2d_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_cc2u_2_OFS (2)
#define TIMER_CC2_CC_PWM_CFG_cc_out_cc2u_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_CC_PWM_CFG_cc_out_ccd_2_OFS (4)
#define TIMER_CC2_CC_PWM_CFG_cc_out_ccd_2_MASK ((uint32_t)0x00000030U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_ccu_2_OFS (6)
#define TIMER_CC2_CC_PWM_CFG_cc_out_ccu_2_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_load_2_OFS (8)
#define TIMER_CC2_CC_PWM_CFG_cc_out_load_2_MASK ((uint32_t)0x00000300U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_zero_2_OFS (10)
#define TIMER_CC2_CC_PWM_CFG_cc_out_zero_2_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_fault_entry_2_OFS (12)
#define TIMER_CC2_CC_PWM_CFG_cc_out_fault_entry_2_MASK ((uint32_t)0x00007000U)
#define TIMER_CC2_CC_PWM_CFG_cc_out_fault_exit_2_OFS (15)
#define TIMER_CC2_CC_PWM_CFG_cc_out_fault_exit_2_MASK ((uint32_t)0x00038000U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_cc2d_3_OFS (0)
#define TIMER_CC3_CC_PWM_CFG_cc_out_cc2d_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_cc2u_3_OFS (2)
#define TIMER_CC3_CC_PWM_CFG_cc_out_cc2u_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_CC_PWM_CFG_cc_out_ccd_3_OFS (4)
#define TIMER_CC3_CC_PWM_CFG_cc_out_ccd_3_MASK ((uint32_t)0x00000030U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_ccu_3_OFS (6)
#define TIMER_CC3_CC_PWM_CFG_cc_out_ccu_3_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_load_3_OFS (8)
#define TIMER_CC3_CC_PWM_CFG_cc_out_load_3_MASK ((uint32_t)0x00000300U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_zero_3_OFS (10)
#define TIMER_CC3_CC_PWM_CFG_cc_out_zero_3_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_fault_entry_3_OFS (12)
#define TIMER_CC3_CC_PWM_CFG_cc_out_fault_entry_3_MASK ((uint32_t)0x00007000U)
#define TIMER_CC3_CC_PWM_CFG_cc_out_fault_exit_3_OFS (15)
#define TIMER_CC3_CC_PWM_CFG_cc_out_fault_exit_3_MASK ((uint32_t)0x00038000U)
#define TIMER_DEADBAND_CFG_db_mode_OFS (0)
#define TIMER_DEADBAND_CFG_db_mode_MASK ((uint32_t)0x00000001U)
#define TIMER_DEADBAND_CFG_db_rise_delay_OFS (1)
#define TIMER_DEADBAND_CFG_db_rise_delay_MASK ((uint32_t)0x00001FFEU)
#define TIMER_DEADBAND_CFG_db_fall_delay_OFS (13)
#define TIMER_DEADBAND_CFG_db_fall_delay_MASK ((uint32_t)0x01FFE000U)
#define TIMER_CC0_OUTPUT_CTL_cc_out_sel_0_OFS (0)
#define TIMER_CC0_OUTPUT_CTL_cc_out_sel_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC0_OUTPUT_CTL_cc_out_inv_0_OFS (4)
#define TIMER_CC0_OUTPUT_CTL_cc_out_inv_0_MASK ((uint32_t)0x00000010U)
#define TIMER_CC0_OUTPUT_CTL_cc_out_val_init_0_OFS (5)
#define TIMER_CC0_OUTPUT_CTL_cc_out_val_init_0_MASK ((uint32_t)0x00000020U)
#define TIMER_CC1_OUTPUT_CTL_cc_out_sel_1_OFS (0)
#define TIMER_CC1_OUTPUT_CTL_cc_out_sel_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC1_OUTPUT_CTL_cc_out_inv_1_OFS (4)
#define TIMER_CC1_OUTPUT_CTL_cc_out_inv_1_MASK ((uint32_t)0x00000010U)
#define TIMER_CC1_OUTPUT_CTL_cc_out_val_init_1_OFS (5)
#define TIMER_CC1_OUTPUT_CTL_cc_out_val_init_1_MASK ((uint32_t)0x00000020U)
#define TIMER_CC0_SW_FORCE_cc_out_sw_force_0_OFS (0)
#define TIMER_CC0_SW_FORCE_cc_out_sw_force_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_SW_FORCE_cc_cmpl_out_sw_force_0_OFS (2)
#define TIMER_CC0_SW_FORCE_cc_cmpl_out_sw_force_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_SW_FORCE_cc_out_sw_force_1_OFS (0)
#define TIMER_CC1_SW_FORCE_cc_out_sw_force_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_SW_FORCE_cc_cmpl_out_sw_force_1_OFS (2)
#define TIMER_CC1_SW_FORCE_cc_cmpl_out_sw_force_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_OUTPUT_CTL_cc_out_sel_2_OFS (0)
#define TIMER_CC2_OUTPUT_CTL_cc_out_sel_2_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC2_OUTPUT_CTL_cc_out_inv_2_OFS (4)
#define TIMER_CC2_OUTPUT_CTL_cc_out_inv_2_MASK ((uint32_t)0x00000010U)
#define TIMER_CC2_OUTPUT_CTL_cc_out_val_init_2_OFS (5)
#define TIMER_CC2_OUTPUT_CTL_cc_out_val_init_2_MASK ((uint32_t)0x00000020U)
#define TIMER_CC3_OUTPUT_CTL_cc_out_sel_3_OFS (0)
#define TIMER_CC3_OUTPUT_CTL_cc_out_sel_3_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC3_OUTPUT_CTL_cc_out_inv_3_OFS (4)
#define TIMER_CC3_OUTPUT_CTL_cc_out_inv_3_MASK ((uint32_t)0x00000010U)
#define TIMER_CC3_OUTPUT_CTL_cc_out_val_init_3_OFS (5)
#define TIMER_CC3_OUTPUT_CTL_cc_out_val_init_3_MASK ((uint32_t)0x00000020U)
#define TIMER_CC2_SW_FORCE_cc_out_sw_force_2_OFS (0)
#define TIMER_CC2_SW_FORCE_cc_out_sw_force_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_SW_FORCE_cc_cmpl_out_sw_force_2_OFS (2)
#define TIMER_CC2_SW_FORCE_cc_cmpl_out_sw_force_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_SW_FORCE_cc_out_sw_force_3_OFS (0)
#define TIMER_CC3_SW_FORCE_cc_out_sw_force_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_SW_FORCE_cc_cmpl_out_sw_force_3_OFS (2)
#define TIMER_CC3_SW_FORCE_cc_cmpl_out_sw_force_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_FAULT_IN_CTL_fault_filter_en_OFS (0)
#define TIMER_FAULT_IN_CTL_fault_filter_en_MASK ((uint32_t)0x00000001U)
#define TIMER_FAULT_IN_CTL_fault_is_consecutive_period_OFS (1)
#define TIMER_FAULT_IN_CTL_fault_is_consecutive_period_MASK ((uint32_t)0x00000002U)
#define TIMER_FAULT_IN_CTL_fault_filter_period_OFS (2)
#define TIMER_FAULT_IN_CTL_fault_filter_period_MASK ((uint32_t)0x0000000CU)
#define TIMER_FAULT_SRC_CTL_fault_ext2_en_OFS (0)
#define TIMER_FAULT_SRC_CTL_fault_ext2_en_MASK ((uint32_t)0x00000001U)
#define TIMER_FAULT_SRC_CTL_fault_ext1_en_OFS (1)
#define TIMER_FAULT_SRC_CTL_fault_ext1_en_MASK ((uint32_t)0x00000002U)
#define TIMER_FAULT_SRC_CTL_fault_ext0_en_OFS (2)
#define TIMER_FAULT_SRC_CTL_fault_ext0_en_MASK ((uint32_t)0x00000004U)
#define TIMER_FAULT_SRC_CTL_fault_comp2_en_OFS (3)
#define TIMER_FAULT_SRC_CTL_fault_comp2_en_MASK ((uint32_t)0x00000008U)
#define TIMER_FAULT_SRC_CTL_fault_comp1_en_OFS (4)
#define TIMER_FAULT_SRC_CTL_fault_comp1_en_MASK ((uint32_t)0x00000010U)
#define TIMER_FAULT_SRC_CTL_fault_comp0_en_OFS (5)
#define TIMER_FAULT_SRC_CTL_fault_comp0_en_MASK ((uint32_t)0x00000020U)
#define TIMER_FAULT_SRC_CTL_fault_sys_clk_en_OFS (6)
#define TIMER_FAULT_SRC_CTL_fault_sys_clk_en_MASK ((uint32_t)0x00000040U)
#define TIMER_FAULT_SRC_CTL_fault_ext2_act_val_OFS (7)
#define TIMER_FAULT_SRC_CTL_fault_ext2_act_val_MASK ((uint32_t)0x00000080U)
#define TIMER_FAULT_SRC_CTL_fault_ext1_act_val_OFS (8)
#define TIMER_FAULT_SRC_CTL_fault_ext1_act_val_MASK ((uint32_t)0x00000100U)
#define TIMER_FAULT_SRC_CTL_fault_ext0_act_val_OFS (9)
#define TIMER_FAULT_SRC_CTL_fault_ext0_act_val_MASK ((uint32_t)0x00000200U)
#define TIMER_FAULT_SRC_CTL_fault_comp2_act_val_OFS (10)
#define TIMER_FAULT_SRC_CTL_fault_comp2_act_val_MASK ((uint32_t)0x00000400U)
#define TIMER_FAULT_SRC_CTL_fault_comp1_act_val_OFS (11)
#define TIMER_FAULT_SRC_CTL_fault_comp1_act_val_MASK ((uint32_t)0x00000800U)
#define TIMER_FAULT_SRC_CTL_fault_comp0_act_val_OFS (12)
#define TIMER_FAULT_SRC_CTL_fault_comp0_act_val_MASK ((uint32_t)0x00001000U)
#define TIMER_FAULT_SRC_CTL_trig_is_fault_OFS (13)
#define TIMER_FAULT_SRC_CTL_trig_is_fault_MASK ((uint32_t)0x00002000U)
#define TIMER_FAULT_SRC_CTL_fault_in_en_OFS (14)
#define TIMER_FAULT_SRC_CTL_fault_in_en_MASK ((uint32_t)0x00004000U)
#define TIMER_FAULT_SRC_CTL_fault_dependent_on_input_OFS (15)
#define TIMER_FAULT_SRC_CTL_fault_dependent_on_input_MASK ((uint32_t)0x00008000U)
#define TIMER_FAULT_SRC_CTL_fault_latch_sel_OFS (16)
#define TIMER_FAULT_SRC_CTL_fault_latch_sel_MASK ((uint32_t)0x00030000U)
#define TIMER_CTR_CTL_ctr_en_OFS (0)
#define TIMER_CTR_CTL_ctr_en_MASK ((uint32_t)0x00000001U)
#define TIMER_CTR_CTL_repeat_mode_OFS (1)
#define TIMER_CTR_CTL_repeat_mode_MASK ((uint32_t)0x00000002U)
#define TIMER_CTR_CTL_count_mode_OFS (2)
#define TIMER_CTR_CTL_count_mode_MASK ((uint32_t)0x0000000CU)
#define TIMER_CTR_CTL_ctr_zero_ctrl_OFS (4)
#define TIMER_CTR_CTL_ctr_zero_ctrl_MASK ((uint32_t)0x00000070U)
#define TIMER_CTR_CTL_ctr_load_ctrl_OFS (7)
#define TIMER_CTR_CTL_ctr_load_ctrl_MASK ((uint32_t)0x00000380U)
#define TIMER_CTR_CTL_ctr_adv_ctrl_OFS (10)
#define TIMER_CTR_CTL_ctr_adv_ctrl_MASK ((uint32_t)0x00001C00U)
#define TIMER_CTR_CTL_suppress_ctr_event_gen_OFS (13)
#define TIMER_CTR_CTL_suppress_ctr_event_gen_MASK ((uint32_t)0x00002000U)
#define TIMER_CTR_CTL_pl_en_OFS (14)
#define TIMER_CTR_CTL_pl_en_MASK ((uint32_t)0x00004000U)
#define TIMER_CTR_CTL_ctr_during_fault_OFS (15)
#define TIMER_CTR_CTL_ctr_during_fault_MASK ((uint32_t)0x00008000U)
#define TIMER_CTR_CTL_ctr_exit_fault_OFS (16)
#define TIMER_CTR_CTL_ctr_exit_fault_MASK ((uint32_t)0x00030000U)
#define TIMER_CTR_CTL_ctr_after_debug_OFS (18)
#define TIMER_CTR_CTL_ctr_after_debug_MASK ((uint32_t)0x000C0000U)
#define TIMER_CTR_VAL_ctr_val_OFS (0)
#define TIMER_CTR_VAL_ctr_val_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CTR_LOAD_VAL_ctr_load_val_OFS (0)
#define TIMER_CTR_LOAD_VAL_ctr_load_val_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CTR_PL_VAL_pl_val_OFS (0)
#define TIMER_CTR_PL_VAL_pl_val_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_DEBUG_CTRL_run_in_halt_mode_OFS (0)
#define TIMER_DEBUG_CTRL_run_in_halt_mode_MASK ((uint32_t)0x00000001U)
#define TIMER_RCTR_VAL_rctr_val_OFS (0)
#define TIMER_RCTR_VAL_rctr_val_MASK ((uint32_t)0x000000FFU)
#define TIMER_RCTR_LOAD_VAL_rctr_load_val_OFS (0)
#define TIMER_RCTR_LOAD_VAL_rctr_load_val_MASK ((uint32_t)0x000000FFU)
#define TIMER_QEI_DIR_qei_dir_OFS (0)
#define TIMER_QEI_DIR_qei_dir_MASK ((uint32_t)0x00000001U)
#endif
