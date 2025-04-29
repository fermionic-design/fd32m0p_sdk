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
    TIMER_DESC_REG_s;
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
    TIMER_PWR_EN_REG_s;
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
    TIMER_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RST_CTRL_u;

typedef struct TIMER_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} TIMER_RST_STS_REG_s;

typedef union TIMER_RST_STS_u {
    TIMER_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RST_STS_u;

typedef struct TIMER_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} TIMER_CLK_CTRL_REG_s;

typedef union TIMER_CLK_CTRL_u {
    TIMER_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CLK_CTRL_u;

typedef struct TIMER_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} TIMER_INTR_STS_REG_s;

typedef union TIMER_INTR_STS_u {
    TIMER_INTR_STS_REG_s;
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
    TIMER_INTR_EVENT_REG_s;
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
    TIMER_INTR_EN_0_REG_s;
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
    TIMER_INTR_EN_1_REG_s;
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
    TIMER_INTR_NMI_EN_0_REG_s;
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
    TIMER_INTR_NMI_EN_1_REG_s;
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
    TIMER_EVENT_EN_0_0_REG_s;
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
    TIMER_EVENT_EN_0_1_REG_s;
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
    TIMER_EVENT_EN_1_0_REG_s;
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
    TIMER_EVENT_EN_1_1_REG_s;
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
    TIMER_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INTR_SW_SET_u;

typedef struct TIMER_EVENT_CTRL_REG_s {
    unsigned int chan_id0:4; // 
    unsigned int chan_id1:4; // 
} TIMER_EVENT_CTRL_REG_s;

typedef union TIMER_EVENT_CTRL_u {
    TIMER_EVENT_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_EVENT_CTRL_u;

typedef struct TIMER_CLK_CONFIG_REG_s {
    unsigned int clk_sel:2; // 
    unsigned int clk_div:11; // 
} TIMER_CLK_CONFIG_REG_s;

typedef union TIMER_CLK_CONFIG_u {
    TIMER_CLK_CONFIG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CLK_CONFIG_u;

typedef struct TIMER_TRIG_IN_REG_s {
    unsigned int trig_en:1; // 
    unsigned int trig_sel:5; // 
} TIMER_TRIG_IN_REG_s;

typedef union TIMER_TRIG_IN_u {
    TIMER_TRIG_IN_REG_s;
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
    TIMER_TRIG_OUT_REG_s;
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
    TIMER_INPUT_FILTER_CC_0_REG_s;
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
    TIMER_INPUT_FILTER_CC_1_REG_s;
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
    TIMER_INPUT_FILTER_CC_2_REG_s;
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
    TIMER_INPUT_FILTER_CC_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_FILTER_CC_3_u;

typedef struct TIMER_INPUT_CC_0_REG_s {
    unsigned int input_sel_0:4; // 
    unsigned int input_inv_0:1; // 
} TIMER_INPUT_CC_0_REG_s;

typedef union TIMER_INPUT_CC_0_u {
    TIMER_INPUT_CC_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_0_u;

typedef struct TIMER_INPUT_CC_1_REG_s {
    unsigned int input_sel_1:4; // 
    unsigned int input_inv_1:1; // 
} TIMER_INPUT_CC_1_REG_s;

typedef union TIMER_INPUT_CC_1_u {
    TIMER_INPUT_CC_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_1_u;

typedef struct TIMER_INPUT_CC_2_REG_s {
    unsigned int input_sel_2:4; // 
    unsigned int input_inv_2:1; // 
} TIMER_INPUT_CC_2_REG_s;

typedef union TIMER_INPUT_CC_2_u {
    TIMER_INPUT_CC_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_INPUT_CC_2_u;

typedef struct TIMER_INPUT_CC_3_REG_s {
    unsigned int input_sel_3:4; // 
    unsigned int input_inv_3:1; // 
} TIMER_INPUT_CC_3_REG_s;

typedef union TIMER_INPUT_CC_3_u {
    TIMER_INPUT_CC_3_REG_s;
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
    TIMER_CC0_CMN_CTRL_REG_s;
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
    TIMER_CC1_CMN_CTRL_REG_s;
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
    TIMER_CC0_CAPTURE_CTRL_REG_s;
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
    TIMER_CC1_CAPTURE_CTRL_REG_s;
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
    TIMER_CC0_COMPARE_CTRL_REG_s;
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
    TIMER_CC1_COMPARE_CTRL_REG_s;
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
    TIMER_CC2_CMN_CTRL_REG_s;
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
    TIMER_CC3_CMN_CTRL_REG_s;
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
    TIMER_CC2_CAPTURE_CTRL_REG_s;
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
    TIMER_CC3_CAPTURE_CTRL_REG_s;
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
    TIMER_CC2_COMPARE_CTRL_REG_s;
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
    TIMER_CC3_COMPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_COMPARE_CTRL_u;

typedef struct TIMER_CC4_CMN_CTRL_REG_s {
    unsigned int suppress_coc_event_gen_4:1; // 
} TIMER_CC4_CMN_CTRL_REG_s;

typedef union TIMER_CC4_CMN_CTRL_u {
    TIMER_CC4_CMN_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC4_CMN_CTRL_u;

typedef struct TIMER_CC5_CMN_CTRL_REG_s {
    unsigned int suppress_coc_event_gen_5:1; // 
} TIMER_CC5_CMN_CTRL_REG_s;

typedef union TIMER_CC5_CMN_CTRL_u {
    TIMER_CC5_CMN_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC5_CMN_CTRL_u;

typedef struct TIMER_CC4_COMPARE_CTRL_REG_s {
    unsigned int comp_val_4:16; // 
    unsigned int comp_val_update_method_4:3; // 
} TIMER_CC4_COMPARE_CTRL_REG_s;

typedef union TIMER_CC4_COMPARE_CTRL_u {
    TIMER_CC4_COMPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC4_COMPARE_CTRL_u;

typedef struct TIMER_CC5_COMPARE_CTRL_REG_s {
    unsigned int comp_val_5:16; // 
    unsigned int comp_val_update_method_5:3; // 
} TIMER_CC5_COMPARE_CTRL_REG_s;

typedef union TIMER_CC5_COMPARE_CTRL_u {
    TIMER_CC5_COMPARE_CTRL_REG_s;
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
    TIMER_CC0_CC_PWM_CFG_REG_s;
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
    TIMER_CC1_CC_PWM_CFG_REG_s;
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
    TIMER_CC2_CC_PWM_CFG_REG_s;
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
    TIMER_CC3_CC_PWM_CFG_REG_s;
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
    TIMER_DEADBAND_CFG_REG_s;
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
    TIMER_CC0_OUTPUT_CTL_REG_s;
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
    TIMER_CC1_OUTPUT_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC1_OUTPUT_CTL_u;

typedef struct TIMER_CC0_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_0:2; // 
    unsigned int cc_cmpl_out_sw_force_0:2; // 
} TIMER_CC0_SW_FORCE_REG_s;

typedef union TIMER_CC0_SW_FORCE_u {
    TIMER_CC0_SW_FORCE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC0_SW_FORCE_u;

typedef struct TIMER_CC1_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_1:2; // 
    unsigned int cc_cmpl_out_sw_force_1:2; // 
} TIMER_CC1_SW_FORCE_REG_s;

typedef union TIMER_CC1_SW_FORCE_u {
    TIMER_CC1_SW_FORCE_REG_s;
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
    TIMER_CC2_OUTPUT_CTL_REG_s;
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
    TIMER_CC3_OUTPUT_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC3_OUTPUT_CTL_u;

typedef struct TIMER_CC2_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_2:2; // 
    unsigned int cc_cmpl_out_sw_force_2:2; // 
} TIMER_CC2_SW_FORCE_REG_s;

typedef union TIMER_CC2_SW_FORCE_u {
    TIMER_CC2_SW_FORCE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CC2_SW_FORCE_u;

typedef struct TIMER_CC3_SW_FORCE_REG_s {
    unsigned int cc_out_sw_force_3:2; // 
    unsigned int cc_cmpl_out_sw_force_3:2; // 
} TIMER_CC3_SW_FORCE_REG_s;

typedef union TIMER_CC3_SW_FORCE_u {
    TIMER_CC3_SW_FORCE_REG_s;
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
    TIMER_FAULT_IN_CTL_REG_s;
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
    TIMER_FAULT_SRC_CTL_REG_s;
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
    TIMER_CTR_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_CTL_u;

typedef struct TIMER_CTR_VAL_REG_s {
    unsigned int ctr_val:16; // 
} TIMER_CTR_VAL_REG_s;

typedef union TIMER_CTR_VAL_u {
    TIMER_CTR_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_VAL_u;

typedef struct TIMER_CTR_LOAD_VAL_REG_s {
    unsigned int ctr_load_val:16; // 
} TIMER_CTR_LOAD_VAL_REG_s;

typedef union TIMER_CTR_LOAD_VAL_u {
    TIMER_CTR_LOAD_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_LOAD_VAL_u;

typedef struct TIMER_CTR_PL_VAL_REG_s {
    unsigned int pl_val:16; // 
} TIMER_CTR_PL_VAL_REG_s;

typedef union TIMER_CTR_PL_VAL_u {
    TIMER_CTR_PL_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_CTR_PL_VAL_u;

typedef struct TIMER_DEBUG_CTRL_REG_s {
    unsigned int run_in_halt_mode:1; // 
} TIMER_DEBUG_CTRL_REG_s;

typedef union TIMER_DEBUG_CTRL_u {
    TIMER_DEBUG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_DEBUG_CTRL_u;

typedef struct TIMER_RCTR_VAL_REG_s {
    unsigned int rctr_val:8; // 
} TIMER_RCTR_VAL_REG_s;

typedef union TIMER_RCTR_VAL_u {
    TIMER_RCTR_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RCTR_VAL_u;

typedef struct TIMER_RCTR_LOAD_VAL_REG_s {
    unsigned int rctr_load_val:8; // 
} TIMER_RCTR_LOAD_VAL_REG_s;

typedef union TIMER_RCTR_LOAD_VAL_u {
    TIMER_RCTR_LOAD_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_RCTR_LOAD_VAL_u;

typedef struct TIMER_QEI_DIR_REG_s {
    unsigned int qei_dir:1; // 
} TIMER_QEI_DIR_REG_s;

typedef union TIMER_QEI_DIR_u {
    TIMER_QEI_DIR_REG_s;
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

#define TIMER_DESC_MODULE_TYPE_OFS (0)
#define TIMER_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define TIMER_DESC_MODUE_SUBTYPE_OFS (8)
#define TIMER_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define TIMER_DESC_MAJOR_REV_OFS (16)
#define TIMER_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define TIMER_DESC_MINOR_REV_OFS (20)
#define TIMER_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define TIMER_PWR_EN_PWR_EN_OFS (0)
#define TIMER_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_PWR_EN_PWR_EN_KEY_OFS (24)
#define TIMER_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define TIMER_RST_CTRL_RST_OFS (0)
#define TIMER_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define TIMER_RST_CTRL_RST_STS_CLR_OFS (1)
#define TIMER_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define TIMER_RST_CTRL_RST_KEY_OFS (24)
#define TIMER_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define TIMER_RST_STS_RST_STS_OFS (0)
#define TIMER_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define TIMER_CLK_CTRL_CLK_EN_OFS (0)
#define TIMER_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_STS_INTR_FIRST_OFS (0)
#define TIMER_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000003FU)
#define TIMER_INTR_EVENT_CTR_ZERO_OFS (0)
#define TIMER_INTR_EVENT_CTR_ZERO_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EVENT_CTR_LOAD_OFS (1)
#define TIMER_INTR_EVENT_CTR_LOAD_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EVENT_CCD_0_OFS (2)
#define TIMER_INTR_EVENT_CCD_0_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_EVENT_CCU_0_OFS (3)
#define TIMER_INTR_EVENT_CCU_0_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_EVENT_CCD_1_OFS (4)
#define TIMER_INTR_EVENT_CCD_1_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_EVENT_CCU_1_OFS (5)
#define TIMER_INTR_EVENT_CCU_1_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_EVENT_CCD_2_OFS (6)
#define TIMER_INTR_EVENT_CCD_2_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_EVENT_CCU_2_OFS (7)
#define TIMER_INTR_EVENT_CCU_2_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_EVENT_CCD_3_OFS (8)
#define TIMER_INTR_EVENT_CCD_3_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_EVENT_CCU_3_OFS (9)
#define TIMER_INTR_EVENT_CCU_3_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_EVENT_CCD_4_OFS (10)
#define TIMER_INTR_EVENT_CCD_4_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_EVENT_CCU_4_OFS (11)
#define TIMER_INTR_EVENT_CCU_4_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_EVENT_CCD_5_OFS (12)
#define TIMER_INTR_EVENT_CCD_5_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_EVENT_CCU_5_OFS (13)
#define TIMER_INTR_EVENT_CCU_5_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_EVENT_FAULT_OFS (14)
#define TIMER_INTR_EVENT_FAULT_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_EVENT_TRIG_OV_OFS (15)
#define TIMER_INTR_EVENT_TRIG_OV_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_EVENT_RCTR_ZERO_OFS (16)
#define TIMER_INTR_EVENT_RCTR_ZERO_MASK ((uint32_t)0x00010000U)
#define TIMER_INTR_EVENT_QEI_CTR_DC_OFS (17)
#define TIMER_INTR_EVENT_QEI_CTR_DC_MASK ((uint32_t)0x00020000U)
#define TIMER_INTR_EVENT_QEI_ERR_OFS (18)
#define TIMER_INTR_EVENT_QEI_ERR_MASK ((uint32_t)0x00040000U)
#define TIMER_INTR_EN_0_CTR_ZERO_EN_OFS (0)
#define TIMER_INTR_EN_0_CTR_ZERO_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EN_0_CTR_LOAD_EN_OFS (1)
#define TIMER_INTR_EN_0_CTR_LOAD_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EN_0_CCD_0_EN_OFS (2)
#define TIMER_INTR_EN_0_CCD_0_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_EN_0_CCU_0_EN_OFS (3)
#define TIMER_INTR_EN_0_CCU_0_EN_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_EN_0_CCD_1_EN_OFS (4)
#define TIMER_INTR_EN_0_CCD_1_EN_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_EN_0_CCU_1_EN_OFS (5)
#define TIMER_INTR_EN_0_CCU_1_EN_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_EN_0_CCD_2_EN_OFS (6)
#define TIMER_INTR_EN_0_CCD_2_EN_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_EN_0_CCU_2_EN_OFS (7)
#define TIMER_INTR_EN_0_CCU_2_EN_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_EN_0_CCD_3_EN_OFS (8)
#define TIMER_INTR_EN_0_CCD_3_EN_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_EN_0_CCU_3_EN_OFS (9)
#define TIMER_INTR_EN_0_CCU_3_EN_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_EN_0_CCD_4_EN_OFS (10)
#define TIMER_INTR_EN_0_CCD_4_EN_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_EN_0_CCU_4_EN_OFS (11)
#define TIMER_INTR_EN_0_CCU_4_EN_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_EN_0_CCD_5_EN_OFS (12)
#define TIMER_INTR_EN_0_CCD_5_EN_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_EN_0_CCU_5_EN_OFS (13)
#define TIMER_INTR_EN_0_CCU_5_EN_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_EN_0_FAULT_EN_OFS (14)
#define TIMER_INTR_EN_0_FAULT_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_EN_0_TRIG_OV_EN_OFS (15)
#define TIMER_INTR_EN_0_TRIG_OV_EN_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_EN_1_RCTR_ZERO_EN_OFS (0)
#define TIMER_INTR_EN_1_RCTR_ZERO_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_EN_1_QEI_CTR_DC_EN_OFS (1)
#define TIMER_INTR_EN_1_QEI_CTR_DC_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_EN_1_QEI_ERR_EN_OFS (2)
#define TIMER_INTR_EN_1_QEI_ERR_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_NMI_EN_0_CTR_ZERO_NMI_EN_OFS (0)
#define TIMER_INTR_NMI_EN_0_CTR_ZERO_NMI_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_NMI_EN_0_CTR_LOAD_NMI_EN_OFS (1)
#define TIMER_INTR_NMI_EN_0_CTR_LOAD_NMI_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_NMI_EN_0_CCD_0_NMI_EN_OFS (2)
#define TIMER_INTR_NMI_EN_0_CCD_0_NMI_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_NMI_EN_0_CCU_0_NMI_EN_OFS (3)
#define TIMER_INTR_NMI_EN_0_CCU_0_NMI_EN_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_NMI_EN_0_CCD_1_NMI_EN_OFS (4)
#define TIMER_INTR_NMI_EN_0_CCD_1_NMI_EN_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_NMI_EN_0_CCU_1_NMI_EN_OFS (5)
#define TIMER_INTR_NMI_EN_0_CCU_1_NMI_EN_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_NMI_EN_0_CCD_2_NMI_EN_OFS (6)
#define TIMER_INTR_NMI_EN_0_CCD_2_NMI_EN_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_NMI_EN_0_CCU_2_NMI_EN_OFS (7)
#define TIMER_INTR_NMI_EN_0_CCU_2_NMI_EN_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_NMI_EN_0_CCD_3_NMI_EN_OFS (8)
#define TIMER_INTR_NMI_EN_0_CCD_3_NMI_EN_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_NMI_EN_0_CCU_3_NMI_EN_OFS (9)
#define TIMER_INTR_NMI_EN_0_CCU_3_NMI_EN_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_NMI_EN_0_CCD_4_NMI_EN_OFS (10)
#define TIMER_INTR_NMI_EN_0_CCD_4_NMI_EN_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_NMI_EN_0_CCU_4_NMI_EN_OFS (11)
#define TIMER_INTR_NMI_EN_0_CCU_4_NMI_EN_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_NMI_EN_0_CCD_5_NMI_EN_OFS (12)
#define TIMER_INTR_NMI_EN_0_CCD_5_NMI_EN_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_NMI_EN_0_CCU_5_NMI_EN_OFS (13)
#define TIMER_INTR_NMI_EN_0_CCU_5_NMI_EN_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_NMI_EN_0_FAULT_NMI_EN_OFS (14)
#define TIMER_INTR_NMI_EN_0_FAULT_NMI_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_NMI_EN_0_TRIG_OV_NMI_EN_OFS (15)
#define TIMER_INTR_NMI_EN_0_TRIG_OV_NMI_EN_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_NMI_EN_1_RCTR_ZERO_NMI_EN_OFS (0)
#define TIMER_INTR_NMI_EN_1_RCTR_ZERO_NMI_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_NMI_EN_1_QEI_CTR_DC_NMI_EN_OFS (1)
#define TIMER_INTR_NMI_EN_1_QEI_CTR_DC_NMI_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_NMI_EN_1_QEI_ERR_NMI_EN_OFS (2)
#define TIMER_INTR_NMI_EN_1_QEI_ERR_NMI_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_0_0_CTR_ZERO_EVENT_EN_0_OFS (0)
#define TIMER_EVENT_EN_0_0_CTR_ZERO_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_0_0_CTR_LOAD_EVENT_EN_0_OFS (1)
#define TIMER_EVENT_EN_0_0_CTR_LOAD_EVENT_EN_0_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_0_0_CCD_0_EVENT_EN_0_OFS (2)
#define TIMER_EVENT_EN_0_0_CCD_0_EVENT_EN_0_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_0_0_CCU_0_EVENT_EN_0_OFS (3)
#define TIMER_EVENT_EN_0_0_CCU_0_EVENT_EN_0_MASK ((uint32_t)0x00000008U)
#define TIMER_EVENT_EN_0_0_CCD_1_EVENT_EN_0_OFS (4)
#define TIMER_EVENT_EN_0_0_CCD_1_EVENT_EN_0_MASK ((uint32_t)0x00000010U)
#define TIMER_EVENT_EN_0_0_CCU_1_EVENT_EN_0_OFS (5)
#define TIMER_EVENT_EN_0_0_CCU_1_EVENT_EN_0_MASK ((uint32_t)0x00000020U)
#define TIMER_EVENT_EN_0_0_CCD_2_EVENT_EN_0_OFS (6)
#define TIMER_EVENT_EN_0_0_CCD_2_EVENT_EN_0_MASK ((uint32_t)0x00000040U)
#define TIMER_EVENT_EN_0_0_CCU_2_EVENT_EN_0_OFS (7)
#define TIMER_EVENT_EN_0_0_CCU_2_EVENT_EN_0_MASK ((uint32_t)0x00000080U)
#define TIMER_EVENT_EN_0_0_CCD_3_EVENT_EN_0_OFS (8)
#define TIMER_EVENT_EN_0_0_CCD_3_EVENT_EN_0_MASK ((uint32_t)0x00000100U)
#define TIMER_EVENT_EN_0_0_CCU_3_EVENT_EN_0_OFS (9)
#define TIMER_EVENT_EN_0_0_CCU_3_EVENT_EN_0_MASK ((uint32_t)0x00000200U)
#define TIMER_EVENT_EN_0_0_CCD_4_EVENT_EN_0_OFS (10)
#define TIMER_EVENT_EN_0_0_CCD_4_EVENT_EN_0_MASK ((uint32_t)0x00000400U)
#define TIMER_EVENT_EN_0_0_CCU_4_EVENT_EN_0_OFS (11)
#define TIMER_EVENT_EN_0_0_CCU_4_EVENT_EN_0_MASK ((uint32_t)0x00000800U)
#define TIMER_EVENT_EN_0_0_CCD_5_EVENT_EN_0_OFS (12)
#define TIMER_EVENT_EN_0_0_CCD_5_EVENT_EN_0_MASK ((uint32_t)0x00001000U)
#define TIMER_EVENT_EN_0_0_CCU_5_EVENT_EN_0_OFS (13)
#define TIMER_EVENT_EN_0_0_CCU_5_EVENT_EN_0_MASK ((uint32_t)0x00002000U)
#define TIMER_EVENT_EN_0_0_FAULT_EVENT_EN_0_OFS (14)
#define TIMER_EVENT_EN_0_0_FAULT_EVENT_EN_0_MASK ((uint32_t)0x00004000U)
#define TIMER_EVENT_EN_0_0_TRIG_OV_EVENT_EN_0_OFS (15)
#define TIMER_EVENT_EN_0_0_TRIG_OV_EVENT_EN_0_MASK ((uint32_t)0x00008000U)
#define TIMER_EVENT_EN_0_1_RCTR_ZERO_EVENT_EN_0_OFS (0)
#define TIMER_EVENT_EN_0_1_RCTR_ZERO_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_0_1_QEI_CTR_DC_EVENT_EN_0_OFS (1)
#define TIMER_EVENT_EN_0_1_QEI_CTR_DC_EVENT_EN_0_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_0_1_QEI_ERR_EVENT_EN_0_OFS (2)
#define TIMER_EVENT_EN_0_1_QEI_ERR_EVENT_EN_0_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_1_0_CTR_ZERO_EVENT_EN_1_OFS (0)
#define TIMER_EVENT_EN_1_0_CTR_ZERO_EVENT_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_1_0_CTR_LOAD_EVENT_EN_1_OFS (1)
#define TIMER_EVENT_EN_1_0_CTR_LOAD_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_1_0_CCD_0_EVENT_EN_1_OFS (2)
#define TIMER_EVENT_EN_1_0_CCD_0_EVENT_EN_1_MASK ((uint32_t)0x00000004U)
#define TIMER_EVENT_EN_1_0_CCU_0_EVENT_EN_1_OFS (3)
#define TIMER_EVENT_EN_1_0_CCU_0_EVENT_EN_1_MASK ((uint32_t)0x00000008U)
#define TIMER_EVENT_EN_1_0_CCD_1_EVENT_EN_1_OFS (4)
#define TIMER_EVENT_EN_1_0_CCD_1_EVENT_EN_1_MASK ((uint32_t)0x00000010U)
#define TIMER_EVENT_EN_1_0_CCU_1_EVENT_EN_1_OFS (5)
#define TIMER_EVENT_EN_1_0_CCU_1_EVENT_EN_1_MASK ((uint32_t)0x00000020U)
#define TIMER_EVENT_EN_1_0_CCD_2_EVENT_EN_1_OFS (6)
#define TIMER_EVENT_EN_1_0_CCD_2_EVENT_EN_1_MASK ((uint32_t)0x00000040U)
#define TIMER_EVENT_EN_1_0_CCU_2_EVENT_EN_1_OFS (7)
#define TIMER_EVENT_EN_1_0_CCU_2_EVENT_EN_1_MASK ((uint32_t)0x00000080U)
#define TIMER_EVENT_EN_1_0_CCD_3_EVENT_EN_1_OFS (8)
#define TIMER_EVENT_EN_1_0_CCD_3_EVENT_EN_1_MASK ((uint32_t)0x00000100U)
#define TIMER_EVENT_EN_1_0_CCU_3_EVENT_EN_1_OFS (9)
#define TIMER_EVENT_EN_1_0_CCU_3_EVENT_EN_1_MASK ((uint32_t)0x00000200U)
#define TIMER_EVENT_EN_1_0_CCD_4_EVENT_EN_1_OFS (10)
#define TIMER_EVENT_EN_1_0_CCD_4_EVENT_EN_1_MASK ((uint32_t)0x00000400U)
#define TIMER_EVENT_EN_1_0_CCU_4_EVENT_EN_1_OFS (11)
#define TIMER_EVENT_EN_1_0_CCU_4_EVENT_EN_1_MASK ((uint32_t)0x00000800U)
#define TIMER_EVENT_EN_1_0_CCD_5_EVENT_EN_1_OFS (12)
#define TIMER_EVENT_EN_1_0_CCD_5_EVENT_EN_1_MASK ((uint32_t)0x00001000U)
#define TIMER_EVENT_EN_1_0_CCU_5_EVENT_EN_1_OFS (13)
#define TIMER_EVENT_EN_1_0_CCU_5_EVENT_EN_1_MASK ((uint32_t)0x00002000U)
#define TIMER_EVENT_EN_1_0_FAULT_EVENT_EN_1_OFS (14)
#define TIMER_EVENT_EN_1_0_FAULT_EVENT_EN_1_MASK ((uint32_t)0x00004000U)
#define TIMER_EVENT_EN_1_0_TRIG_OV_EVENT_EN_1_OFS (15)
#define TIMER_EVENT_EN_1_0_TRIG_OV_EVENT_EN_1_MASK ((uint32_t)0x00008000U)
#define TIMER_EVENT_EN_1_1_RCTR_ZERO_EVENT_EN_1_OFS (0)
#define TIMER_EVENT_EN_1_1_RCTR_ZERO_EVENT_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_EVENT_EN_1_1_QEI_CTR_DC_EVENT_EN_1_OFS (1)
#define TIMER_EVENT_EN_1_1_QEI_CTR_DC_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define TIMER_EVENT_EN_1_1_QEI_ERR_EVENT_EN_1_OFS (2)
#define TIMER_EVENT_EN_1_1_QEI_ERR_EVENT_EN_1_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_SW_SET_CTR_ZERO_SW_SET_OFS (0)
#define TIMER_INTR_SW_SET_CTR_ZERO_SW_SET_MASK ((uint32_t)0x00000001U)
#define TIMER_INTR_SW_SET_CTR_LOAD_SW_SET_OFS (1)
#define TIMER_INTR_SW_SET_CTR_LOAD_SW_SET_MASK ((uint32_t)0x00000002U)
#define TIMER_INTR_SW_SET_CCD_0_SW_SET_OFS (2)
#define TIMER_INTR_SW_SET_CCD_0_SW_SET_MASK ((uint32_t)0x00000004U)
#define TIMER_INTR_SW_SET_CCU_0_SW_SET_OFS (3)
#define TIMER_INTR_SW_SET_CCU_0_SW_SET_MASK ((uint32_t)0x00000008U)
#define TIMER_INTR_SW_SET_CCD_1_SW_SET_OFS (4)
#define TIMER_INTR_SW_SET_CCD_1_SW_SET_MASK ((uint32_t)0x00000010U)
#define TIMER_INTR_SW_SET_CCU_1_SW_SET_OFS (5)
#define TIMER_INTR_SW_SET_CCU_1_SW_SET_MASK ((uint32_t)0x00000020U)
#define TIMER_INTR_SW_SET_CCD_2_SW_SET_OFS (6)
#define TIMER_INTR_SW_SET_CCD_2_SW_SET_MASK ((uint32_t)0x00000040U)
#define TIMER_INTR_SW_SET_CCU_2_SW_SET_OFS (7)
#define TIMER_INTR_SW_SET_CCU_2_SW_SET_MASK ((uint32_t)0x00000080U)
#define TIMER_INTR_SW_SET_CCD_3_SW_SET_OFS (8)
#define TIMER_INTR_SW_SET_CCD_3_SW_SET_MASK ((uint32_t)0x00000100U)
#define TIMER_INTR_SW_SET_CCU_3_SW_SET_OFS (9)
#define TIMER_INTR_SW_SET_CCU_3_SW_SET_MASK ((uint32_t)0x00000200U)
#define TIMER_INTR_SW_SET_CCD_4_SW_SET_OFS (10)
#define TIMER_INTR_SW_SET_CCD_4_SW_SET_MASK ((uint32_t)0x00000400U)
#define TIMER_INTR_SW_SET_CCU_4_SW_SET_OFS (11)
#define TIMER_INTR_SW_SET_CCU_4_SW_SET_MASK ((uint32_t)0x00000800U)
#define TIMER_INTR_SW_SET_CCD_5_SW_SET_OFS (12)
#define TIMER_INTR_SW_SET_CCD_5_SW_SET_MASK ((uint32_t)0x00001000U)
#define TIMER_INTR_SW_SET_CCU_5_SW_SET_OFS (13)
#define TIMER_INTR_SW_SET_CCU_5_SW_SET_MASK ((uint32_t)0x00002000U)
#define TIMER_INTR_SW_SET_FAULT_SW_SET_OFS (14)
#define TIMER_INTR_SW_SET_FAULT_SW_SET_MASK ((uint32_t)0x00004000U)
#define TIMER_INTR_SW_SET_TRIG_OV_SW_SET_OFS (15)
#define TIMER_INTR_SW_SET_TRIG_OV_SW_SET_MASK ((uint32_t)0x00008000U)
#define TIMER_INTR_SW_SET_RCTR_ZERO_SW_SET_OFS (16)
#define TIMER_INTR_SW_SET_RCTR_ZERO_SW_SET_MASK ((uint32_t)0x00010000U)
#define TIMER_INTR_SW_SET_QEI_CTR_DC_SW_SET_OFS (17)
#define TIMER_INTR_SW_SET_QEI_CTR_DC_SW_SET_MASK ((uint32_t)0x00020000U)
#define TIMER_INTR_SW_SET_QEI_ERR_SW_SET_OFS (18)
#define TIMER_INTR_SW_SET_QEI_ERR_SW_SET_MASK ((uint32_t)0x00040000U)
#define TIMER_EVENT_CTRL_CHAN_ID0_OFS (0)
#define TIMER_EVENT_CTRL_CHAN_ID0_MASK ((uint32_t)0x0000000FU)
#define TIMER_EVENT_CTRL_CHAN_ID1_OFS (4)
#define TIMER_EVENT_CTRL_CHAN_ID1_MASK ((uint32_t)0x000000F0U)
#define TIMER_CLK_CONFIG_CLK_SEL_OFS (0)
#define TIMER_CLK_CONFIG_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define TIMER_CLK_CONFIG_CLK_DIV_OFS (2)
#define TIMER_CLK_CONFIG_CLK_DIV_MASK ((uint32_t)0x00001FFCU)
#define TIMER_TRIG_IN_TRIG_EN_OFS (0)
#define TIMER_TRIG_IN_TRIG_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TRIG_IN_TRIG_SEL_OFS (1)
#define TIMER_TRIG_IN_TRIG_SEL_MASK ((uint32_t)0x0000003EU)
#define TIMER_TRIG_OUT_TRIG_OUT_EN_OFS (0)
#define TIMER_TRIG_OUT_TRIG_OUT_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TRIG_OUT_TRIG_SW_EN_OFS (1)
#define TIMER_TRIG_OUT_TRIG_SW_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TRIG_OUT_TRIG_HW_EN_OFS (2)
#define TIMER_TRIG_OUT_TRIG_HW_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TRIG_OUT_TRIG_HW_SEL_OFS (3)
#define TIMER_TRIG_OUT_TRIG_HW_SEL_MASK ((uint32_t)0x00000078U)
#define TIMER_INPUT_FILTER_CC_0_FILTER_EN_0_OFS (0)
#define TIMER_INPUT_FILTER_CC_0_FILTER_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_OFS (1)
#define TIMER_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_OFS (2)
#define TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_1_FILTER_EN_1_OFS (0)
#define TIMER_INPUT_FILTER_CC_1_FILTER_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_OFS (1)
#define TIMER_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_1_FILTER_PERIOD_1_OFS (2)
#define TIMER_INPUT_FILTER_CC_1_FILTER_PERIOD_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_2_FILTER_EN_2_OFS (0)
#define TIMER_INPUT_FILTER_CC_2_FILTER_EN_2_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_2_IS_CONSECUTIVE_PRD_2_OFS (1)
#define TIMER_INPUT_FILTER_CC_2_IS_CONSECUTIVE_PRD_2_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_2_FILTER_PERIOD_2_OFS (2)
#define TIMER_INPUT_FILTER_CC_2_FILTER_PERIOD_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_FILTER_CC_3_FILTER_EN_3_OFS (0)
#define TIMER_INPUT_FILTER_CC_3_FILTER_EN_3_MASK ((uint32_t)0x00000001U)
#define TIMER_INPUT_FILTER_CC_3_IS_CONSECUTIVE_PRD_3_OFS (1)
#define TIMER_INPUT_FILTER_CC_3_IS_CONSECUTIVE_PRD_3_MASK ((uint32_t)0x00000002U)
#define TIMER_INPUT_FILTER_CC_3_FILTER_PERIOD_3_OFS (2)
#define TIMER_INPUT_FILTER_CC_3_FILTER_PERIOD_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_INPUT_CC_0_INPUT_SEL_0_OFS (0)
#define TIMER_INPUT_CC_0_INPUT_SEL_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_0_INPUT_INV_0_OFS (4)
#define TIMER_INPUT_CC_0_INPUT_INV_0_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_1_INPUT_SEL_1_OFS (0)
#define TIMER_INPUT_CC_1_INPUT_SEL_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_1_INPUT_INV_1_OFS (4)
#define TIMER_INPUT_CC_1_INPUT_INV_1_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_2_INPUT_SEL_2_OFS (0)
#define TIMER_INPUT_CC_2_INPUT_SEL_2_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_2_INPUT_INV_2_OFS (4)
#define TIMER_INPUT_CC_2_INPUT_INV_2_MASK ((uint32_t)0x00000010U)
#define TIMER_INPUT_CC_3_INPUT_SEL_3_OFS (0)
#define TIMER_INPUT_CC_3_INPUT_SEL_3_MASK ((uint32_t)0x0000000FU)
#define TIMER_INPUT_CC_3_INPUT_INV_3_OFS (4)
#define TIMER_INPUT_CC_3_INPUT_INV_3_MASK ((uint32_t)0x00000010U)
#define TIMER_CC0_CMN_CTRL_IS_CAPTURE_0_OFS (0)
#define TIMER_CC0_CMN_CTRL_IS_CAPTURE_0_MASK ((uint32_t)0x00000001U)
#define TIMER_CC0_CMN_CTRL_CC2D_SEL_0_OFS (1)
#define TIMER_CC0_CMN_CTRL_CC2D_SEL_0_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC0_CMN_CTRL_CC2U_SEL_0_OFS (4)
#define TIMER_CC0_CMN_CTRL_CC2U_SEL_0_MASK ((uint32_t)0x00000070U)
#define TIMER_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_OFS (7)
#define TIMER_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_MASK ((uint32_t)0x00000080U)
#define TIMER_CC1_CMN_CTRL_IS_CAPTURE_1_OFS (0)
#define TIMER_CC1_CMN_CTRL_IS_CAPTURE_1_MASK ((uint32_t)0x00000001U)
#define TIMER_CC1_CMN_CTRL_CC2D_SEL_1_OFS (1)
#define TIMER_CC1_CMN_CTRL_CC2D_SEL_1_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC1_CMN_CTRL_CC2U_SEL_1_OFS (4)
#define TIMER_CC1_CMN_CTRL_CC2U_SEL_1_MASK ((uint32_t)0x00000070U)
#define TIMER_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_OFS (7)
#define TIMER_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_MASK ((uint32_t)0x00000080U)
#define TIMER_CC0_CAPTURE_CTRL_CAP_COND_0_OFS (0)
#define TIMER_CC0_CAPTURE_CTRL_CAP_COND_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_CAPTURE_CTRL_LOAD_COND_0_OFS (2)
#define TIMER_CC0_CAPTURE_CTRL_LOAD_COND_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC0_CAPTURE_CTRL_ZERO_COND_0_OFS (4)
#define TIMER_CC0_CAPTURE_CTRL_ZERO_COND_0_MASK ((uint32_t)0x00000030U)
#define TIMER_CC0_CAPTURE_CTRL_ADV_COND_0_OFS (6)
#define TIMER_CC0_CAPTURE_CTRL_ADV_COND_0_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC0_CAPTURE_CTRL_CAP_VAL_0_OFS (9)
#define TIMER_CC0_CAPTURE_CTRL_CAP_VAL_0_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC1_CAPTURE_CTRL_CAP_COND_1_OFS (0)
#define TIMER_CC1_CAPTURE_CTRL_CAP_COND_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_CAPTURE_CTRL_LOAD_COND_1_OFS (2)
#define TIMER_CC1_CAPTURE_CTRL_LOAD_COND_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_CAPTURE_CTRL_ZERO_COND_1_OFS (4)
#define TIMER_CC1_CAPTURE_CTRL_ZERO_COND_1_MASK ((uint32_t)0x00000030U)
#define TIMER_CC1_CAPTURE_CTRL_ADV_COND_1_OFS (6)
#define TIMER_CC1_CAPTURE_CTRL_ADV_COND_1_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC1_CAPTURE_CTRL_CAP_VAL_1_OFS (9)
#define TIMER_CC1_CAPTURE_CTRL_CAP_VAL_1_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC0_COMPARE_CTRL_COMP_VAL_0_OFS (0)
#define TIMER_CC0_COMPARE_CTRL_COMP_VAL_0_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_OFS (16)
#define TIMER_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_MASK ((uint32_t)0x00070000U)
#define TIMER_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_OFS (19)
#define TIMER_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_MASK ((uint32_t)0x00380000U)
#define TIMER_CC1_COMPARE_CTRL_COMP_VAL_1_OFS (0)
#define TIMER_CC1_COMPARE_CTRL_COMP_VAL_1_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_OFS (16)
#define TIMER_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_MASK ((uint32_t)0x00070000U)
#define TIMER_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_OFS (19)
#define TIMER_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_MASK ((uint32_t)0x00380000U)
#define TIMER_CC2_CMN_CTRL_IS_CAPTURE_2_OFS (0)
#define TIMER_CC2_CMN_CTRL_IS_CAPTURE_2_MASK ((uint32_t)0x00000001U)
#define TIMER_CC2_CMN_CTRL_CC2D_SEL_2_OFS (1)
#define TIMER_CC2_CMN_CTRL_CC2D_SEL_2_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC2_CMN_CTRL_CC2U_SEL_2_OFS (4)
#define TIMER_CC2_CMN_CTRL_CC2U_SEL_2_MASK ((uint32_t)0x00000070U)
#define TIMER_CC2_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_2_OFS (7)
#define TIMER_CC2_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_2_MASK ((uint32_t)0x00000080U)
#define TIMER_CC3_CMN_CTRL_IS_CAPTURE_3_OFS (0)
#define TIMER_CC3_CMN_CTRL_IS_CAPTURE_3_MASK ((uint32_t)0x00000001U)
#define TIMER_CC3_CMN_CTRL_CC2D_SEL_3_OFS (1)
#define TIMER_CC3_CMN_CTRL_CC2D_SEL_3_MASK ((uint32_t)0x0000000EU)
#define TIMER_CC3_CMN_CTRL_CC2U_SEL_3_OFS (4)
#define TIMER_CC3_CMN_CTRL_CC2U_SEL_3_MASK ((uint32_t)0x00000070U)
#define TIMER_CC3_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_3_OFS (7)
#define TIMER_CC3_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_3_MASK ((uint32_t)0x00000080U)
#define TIMER_CC2_CAPTURE_CTRL_CAP_COND_2_OFS (0)
#define TIMER_CC2_CAPTURE_CTRL_CAP_COND_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_CAPTURE_CTRL_LOAD_COND_2_OFS (2)
#define TIMER_CC2_CAPTURE_CTRL_LOAD_COND_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_CAPTURE_CTRL_ZERO_COND_2_OFS (4)
#define TIMER_CC2_CAPTURE_CTRL_ZERO_COND_2_MASK ((uint32_t)0x00000030U)
#define TIMER_CC2_CAPTURE_CTRL_ADV_COND_2_OFS (6)
#define TIMER_CC2_CAPTURE_CTRL_ADV_COND_2_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC2_CAPTURE_CTRL_CAP_VAL_2_OFS (9)
#define TIMER_CC2_CAPTURE_CTRL_CAP_VAL_2_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC3_CAPTURE_CTRL_CAP_COND_3_OFS (0)
#define TIMER_CC3_CAPTURE_CTRL_CAP_COND_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_CAPTURE_CTRL_LOAD_COND_3_OFS (2)
#define TIMER_CC3_CAPTURE_CTRL_LOAD_COND_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_CAPTURE_CTRL_ZERO_COND_3_OFS (4)
#define TIMER_CC3_CAPTURE_CTRL_ZERO_COND_3_MASK ((uint32_t)0x00000030U)
#define TIMER_CC3_CAPTURE_CTRL_ADV_COND_3_OFS (6)
#define TIMER_CC3_CAPTURE_CTRL_ADV_COND_3_MASK ((uint32_t)0x000001C0U)
#define TIMER_CC3_CAPTURE_CTRL_CAP_VAL_3_OFS (9)
#define TIMER_CC3_CAPTURE_CTRL_CAP_VAL_3_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_CC2_COMPARE_CTRL_COMP_VAL_2_OFS (0)
#define TIMER_CC2_COMPARE_CTRL_COMP_VAL_2_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC2_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_2_OFS (16)
#define TIMER_CC2_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_2_MASK ((uint32_t)0x00070000U)
#define TIMER_CC2_COMPARE_CTRL_CCACT_UPDATE_METHOD_2_OFS (19)
#define TIMER_CC2_COMPARE_CTRL_CCACT_UPDATE_METHOD_2_MASK ((uint32_t)0x00380000U)
#define TIMER_CC3_COMPARE_CTRL_COMP_VAL_3_OFS (0)
#define TIMER_CC3_COMPARE_CTRL_COMP_VAL_3_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC3_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_3_OFS (16)
#define TIMER_CC3_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_3_MASK ((uint32_t)0x00070000U)
#define TIMER_CC3_COMPARE_CTRL_CCACT_UPDATE_METHOD_3_OFS (19)
#define TIMER_CC3_COMPARE_CTRL_CCACT_UPDATE_METHOD_3_MASK ((uint32_t)0x00380000U)
#define TIMER_CC4_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_4_OFS (0)
#define TIMER_CC4_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_4_MASK ((uint32_t)0x00000001U)
#define TIMER_CC5_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_5_OFS (0)
#define TIMER_CC5_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_5_MASK ((uint32_t)0x00000001U)
#define TIMER_CC4_COMPARE_CTRL_COMP_VAL_4_OFS (0)
#define TIMER_CC4_COMPARE_CTRL_COMP_VAL_4_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC4_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_4_OFS (16)
#define TIMER_CC4_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_4_MASK ((uint32_t)0x00070000U)
#define TIMER_CC5_COMPARE_CTRL_COMP_VAL_5_OFS (0)
#define TIMER_CC5_COMPARE_CTRL_COMP_VAL_5_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CC5_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_5_OFS (16)
#define TIMER_CC5_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_5_MASK ((uint32_t)0x00070000U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_OFS (0)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_OFS (2)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_OFS (4)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_MASK ((uint32_t)0x00000030U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_OFS (6)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_OFS (8)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_MASK ((uint32_t)0x00000300U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_OFS (10)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_0_OFS (12)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_0_MASK ((uint32_t)0x00007000U)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_EXIT_0_OFS (15)
#define TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_EXIT_0_MASK ((uint32_t)0x00038000U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_OFS (0)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_OFS (2)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CCD_1_OFS (4)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CCD_1_MASK ((uint32_t)0x00000030U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CCU_1_OFS (6)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_CCU_1_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_OFS (8)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_MASK ((uint32_t)0x00000300U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_OFS (10)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_1_OFS (12)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_1_MASK ((uint32_t)0x00007000U)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_EXIT_1_OFS (15)
#define TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_EXIT_1_MASK ((uint32_t)0x00038000U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2D_2_OFS (0)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2D_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2U_2_OFS (2)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2U_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CCD_2_OFS (4)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CCD_2_MASK ((uint32_t)0x00000030U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CCU_2_OFS (6)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_CCU_2_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_LOAD_2_OFS (8)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_LOAD_2_MASK ((uint32_t)0x00000300U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_ZERO_2_OFS (10)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_ZERO_2_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_2_OFS (12)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_2_MASK ((uint32_t)0x00007000U)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_EXIT_2_OFS (15)
#define TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_EXIT_2_MASK ((uint32_t)0x00038000U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2D_3_OFS (0)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2D_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2U_3_OFS (2)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2U_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CCD_3_OFS (4)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CCD_3_MASK ((uint32_t)0x00000030U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CCU_3_OFS (6)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_CCU_3_MASK ((uint32_t)0x000000C0U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_LOAD_3_OFS (8)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_LOAD_3_MASK ((uint32_t)0x00000300U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_ZERO_3_OFS (10)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_ZERO_3_MASK ((uint32_t)0x00000C00U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_3_OFS (12)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_3_MASK ((uint32_t)0x00007000U)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_EXIT_3_OFS (15)
#define TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_EXIT_3_MASK ((uint32_t)0x00038000U)
#define TIMER_DEADBAND_CFG_DB_MODE_OFS (0)
#define TIMER_DEADBAND_CFG_DB_MODE_MASK ((uint32_t)0x00000001U)
#define TIMER_DEADBAND_CFG_DB_RISE_DELAY_OFS (1)
#define TIMER_DEADBAND_CFG_DB_RISE_DELAY_MASK ((uint32_t)0x00001FFEU)
#define TIMER_DEADBAND_CFG_DB_FALL_DELAY_OFS (13)
#define TIMER_DEADBAND_CFG_DB_FALL_DELAY_MASK ((uint32_t)0x01FFE000U)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_OFS (0)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_INV_0_OFS (4)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_INV_0_MASK ((uint32_t)0x00000010U)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_OFS (5)
#define TIMER_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_MASK ((uint32_t)0x00000020U)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_SEL_1_OFS (0)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_SEL_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_INV_1_OFS (4)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_INV_1_MASK ((uint32_t)0x00000010U)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_OFS (5)
#define TIMER_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_MASK ((uint32_t)0x00000020U)
#define TIMER_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_OFS (0)
#define TIMER_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_MASK ((uint32_t)0x00000003U)
#define TIMER_CC0_SW_FORCE_CC_CMPL_OUT_SW_FORCE_0_OFS (2)
#define TIMER_CC0_SW_FORCE_CC_CMPL_OUT_SW_FORCE_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_OFS (0)
#define TIMER_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_MASK ((uint32_t)0x00000003U)
#define TIMER_CC1_SW_FORCE_CC_CMPL_OUT_SW_FORCE_1_OFS (2)
#define TIMER_CC1_SW_FORCE_CC_CMPL_OUT_SW_FORCE_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_SEL_2_OFS (0)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_SEL_2_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_INV_2_OFS (4)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_INV_2_MASK ((uint32_t)0x00000010U)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_VAL_INIT_2_OFS (5)
#define TIMER_CC2_OUTPUT_CTL_CC_OUT_VAL_INIT_2_MASK ((uint32_t)0x00000020U)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_SEL_3_OFS (0)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_SEL_3_MASK ((uint32_t)0x0000000FU)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_INV_3_OFS (4)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_INV_3_MASK ((uint32_t)0x00000010U)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_VAL_INIT_3_OFS (5)
#define TIMER_CC3_OUTPUT_CTL_CC_OUT_VAL_INIT_3_MASK ((uint32_t)0x00000020U)
#define TIMER_CC2_SW_FORCE_CC_OUT_SW_FORCE_2_OFS (0)
#define TIMER_CC2_SW_FORCE_CC_OUT_SW_FORCE_2_MASK ((uint32_t)0x00000003U)
#define TIMER_CC2_SW_FORCE_CC_CMPL_OUT_SW_FORCE_2_OFS (2)
#define TIMER_CC2_SW_FORCE_CC_CMPL_OUT_SW_FORCE_2_MASK ((uint32_t)0x0000000CU)
#define TIMER_CC3_SW_FORCE_CC_OUT_SW_FORCE_3_OFS (0)
#define TIMER_CC3_SW_FORCE_CC_OUT_SW_FORCE_3_MASK ((uint32_t)0x00000003U)
#define TIMER_CC3_SW_FORCE_CC_CMPL_OUT_SW_FORCE_3_OFS (2)
#define TIMER_CC3_SW_FORCE_CC_CMPL_OUT_SW_FORCE_3_MASK ((uint32_t)0x0000000CU)
#define TIMER_FAULT_IN_CTL_FAULT_FILTER_EN_OFS (0)
#define TIMER_FAULT_IN_CTL_FAULT_FILTER_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_FAULT_IN_CTL_FAULT_IS_CONSECUTIVE_PERIOD_OFS (1)
#define TIMER_FAULT_IN_CTL_FAULT_IS_CONSECUTIVE_PERIOD_MASK ((uint32_t)0x00000002U)
#define TIMER_FAULT_IN_CTL_FAULT_FILTER_PERIOD_OFS (2)
#define TIMER_FAULT_IN_CTL_FAULT_FILTER_PERIOD_MASK ((uint32_t)0x0000000CU)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT2_EN_OFS (0)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT2_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT1_EN_OFS (1)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT1_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT0_EN_OFS (2)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT0_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP2_EN_OFS (3)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP2_EN_MASK ((uint32_t)0x00000008U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP1_EN_OFS (4)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP1_EN_MASK ((uint32_t)0x00000010U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP0_EN_OFS (5)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP0_EN_MASK ((uint32_t)0x00000020U)
#define TIMER_FAULT_SRC_CTL_FAULT_SYS_CLK_EN_OFS (6)
#define TIMER_FAULT_SRC_CTL_FAULT_SYS_CLK_EN_MASK ((uint32_t)0x00000040U)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT2_ACT_VAL_OFS (7)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT2_ACT_VAL_MASK ((uint32_t)0x00000080U)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT1_ACT_VAL_OFS (8)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT1_ACT_VAL_MASK ((uint32_t)0x00000100U)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT0_ACT_VAL_OFS (9)
#define TIMER_FAULT_SRC_CTL_FAULT_EXT0_ACT_VAL_MASK ((uint32_t)0x00000200U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP2_ACT_VAL_OFS (10)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP2_ACT_VAL_MASK ((uint32_t)0x00000400U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP1_ACT_VAL_OFS (11)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP1_ACT_VAL_MASK ((uint32_t)0x00000800U)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP0_ACT_VAL_OFS (12)
#define TIMER_FAULT_SRC_CTL_FAULT_COMP0_ACT_VAL_MASK ((uint32_t)0x00001000U)
#define TIMER_FAULT_SRC_CTL_TRIG_IS_FAULT_OFS (13)
#define TIMER_FAULT_SRC_CTL_TRIG_IS_FAULT_MASK ((uint32_t)0x00002000U)
#define TIMER_FAULT_SRC_CTL_FAULT_IN_EN_OFS (14)
#define TIMER_FAULT_SRC_CTL_FAULT_IN_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_FAULT_SRC_CTL_FAULT_DEPENDENT_ON_INPUT_OFS (15)
#define TIMER_FAULT_SRC_CTL_FAULT_DEPENDENT_ON_INPUT_MASK ((uint32_t)0x00008000U)
#define TIMER_FAULT_SRC_CTL_FAULT_LATCH_SEL_OFS (16)
#define TIMER_FAULT_SRC_CTL_FAULT_LATCH_SEL_MASK ((uint32_t)0x00030000U)
#define TIMER_CTR_CTL_CTR_EN_OFS (0)
#define TIMER_CTR_CTL_CTR_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_CTR_CTL_REPEAT_MODE_OFS (1)
#define TIMER_CTR_CTL_REPEAT_MODE_MASK ((uint32_t)0x00000002U)
#define TIMER_CTR_CTL_COUNT_MODE_OFS (2)
#define TIMER_CTR_CTL_COUNT_MODE_MASK ((uint32_t)0x0000000CU)
#define TIMER_CTR_CTL_CTR_ZERO_CTRL_OFS (4)
#define TIMER_CTR_CTL_CTR_ZERO_CTRL_MASK ((uint32_t)0x00000070U)
#define TIMER_CTR_CTL_CTR_LOAD_CTRL_OFS (7)
#define TIMER_CTR_CTL_CTR_LOAD_CTRL_MASK ((uint32_t)0x00000380U)
#define TIMER_CTR_CTL_CTR_ADV_CTRL_OFS (10)
#define TIMER_CTR_CTL_CTR_ADV_CTRL_MASK ((uint32_t)0x00001C00U)
#define TIMER_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_OFS (13)
#define TIMER_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_MASK ((uint32_t)0x00002000U)
#define TIMER_CTR_CTL_PL_EN_OFS (14)
#define TIMER_CTR_CTL_PL_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_CTR_CTL_CTR_DURING_FAULT_OFS (15)
#define TIMER_CTR_CTL_CTR_DURING_FAULT_MASK ((uint32_t)0x00008000U)
#define TIMER_CTR_CTL_CTR_EXIT_FAULT_OFS (16)
#define TIMER_CTR_CTL_CTR_EXIT_FAULT_MASK ((uint32_t)0x00030000U)
#define TIMER_CTR_CTL_CTR_AFTER_DEBUG_OFS (18)
#define TIMER_CTR_CTL_CTR_AFTER_DEBUG_MASK ((uint32_t)0x000C0000U)
#define TIMER_CTR_VAL_CTR_VAL_OFS (0)
#define TIMER_CTR_VAL_CTR_VAL_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CTR_LOAD_VAL_CTR_LOAD_VAL_OFS (0)
#define TIMER_CTR_LOAD_VAL_CTR_LOAD_VAL_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_CTR_PL_VAL_PL_VAL_OFS (0)
#define TIMER_CTR_PL_VAL_PL_VAL_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_DEBUG_CTRL_RUN_IN_HALT_MODE_OFS (0)
#define TIMER_DEBUG_CTRL_RUN_IN_HALT_MODE_MASK ((uint32_t)0x00000001U)
#define TIMER_RCTR_VAL_RCTR_VAL_OFS (0)
#define TIMER_RCTR_VAL_RCTR_VAL_MASK ((uint32_t)0x000000FFU)
#define TIMER_RCTR_LOAD_VAL_RCTR_LOAD_VAL_OFS (0)
#define TIMER_RCTR_LOAD_VAL_RCTR_LOAD_VAL_MASK ((uint32_t)0x000000FFU)
#define TIMER_QEI_DIR_QEI_DIR_OFS (0)
#define TIMER_QEI_DIR_QEI_DIR_MASK ((uint32_t)0x00000001U)
#endif
