#ifndef TIMER_TIMG_NUM_INPUT2_REGISTERS_H
#define TIMER_TIMG_NUM_INPUT2_REGISTERS_H

#include <stdint.h>

/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
 *  @{
 */
/** @defgroup TIMER_TIMG_NUM_INPUT2
 *  @{
 */
/** @defgroup TIMER_TIMG_NUM_INPUT2_REGISTERS 
 *  @{
 */
/** @defgroup TIMER_TIMG_NUM_INPUT2_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} TIMER_TIMG_NUM_INPUT2_DESC_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_DESC_REG_s */
    TIMER_TIMG_NUM_INPUT2_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_DESC_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_DESC_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} TIMER_TIMG_NUM_INPUT2_PWR_EN_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_PWR_EN_REG_s */
    TIMER_TIMG_NUM_INPUT2_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_PWR_EN_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_PWR_EN_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} TIMER_TIMG_NUM_INPUT2_RST_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_RST_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_RST_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_RST_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} TIMER_TIMG_NUM_INPUT2_RST_STS_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_RST_STS_REG_s */
    TIMER_TIMG_NUM_INPUT2_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_RST_STS_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_RST_STS_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
} TIMER_TIMG_NUM_INPUT2_CLK_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CLK_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CLK_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CLK_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int intr_first:6; // 
} TIMER_TIMG_NUM_INPUT2_INTR_STS_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_STS_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_STS_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_STS_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_EVENT_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_INTR_EVENT_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_EVENT_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_EVENT_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_EVENT_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_EN_0_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_INTR_EN_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_EN_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_EN_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_EN_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rctr_zero_en:1; // 
    unsigned int qei_ctr_dc_en:1; // 
    unsigned int qei_err_en:1; // 
} TIMER_TIMG_NUM_INPUT2_INTR_EN_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_EN_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_EN_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_EN_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rctr_zero_nmi_en:1; // 
    unsigned int qei_ctr_dc_nmi_en:1; // 
    unsigned int qei_err_nmi_en:1; // 
} TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rctr_zero_event_en_0:1; // 
    unsigned int qei_ctr_dc_event_en_0:1; // 
    unsigned int qei_err_event_en_0:1; // 
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rctr_zero_event_en_1:1; // 
    unsigned int qei_ctr_dc_event_en_1:1; // 
    unsigned int qei_err_event_en_1:1; // 
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_REG 
 *  @{
 */
typedef struct {
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
} TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_REG_s */
    TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_sel:2; // 
    unsigned int clk_div:11; // 
} TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_REG_s */
    TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_TRIG_IN_REG 
 *  @{
 */
typedef struct {
    unsigned int trig_en:1; // 
    unsigned int trig_sel:5; // 
} TIMER_TIMG_NUM_INPUT2_TRIG_IN_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_TRIG_IN_REG_s */
    TIMER_TIMG_NUM_INPUT2_TRIG_IN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_TRIG_IN_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_TRIG_IN_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_TRIG_OUT_REG 
 *  @{
 */
typedef struct {
    unsigned int trig_out_en:1; // 
    unsigned int trig_sw_en:1; // 
    unsigned int trig_hw_en:1; // 
    unsigned int trig_hw_sel:4; // 
} TIMER_TIMG_NUM_INPUT2_TRIG_OUT_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_TRIG_OUT_REG_s */
    TIMER_TIMG_NUM_INPUT2_TRIG_OUT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_TRIG_OUT_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_TRIG_OUT_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_REG 
 *  @{
 */
typedef struct {
    unsigned int filter_en_0:1; // 
    unsigned int is_consecutive_prd_0:1; // 
    unsigned int filter_period_0:2; // 
} TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_REG 
 *  @{
 */
typedef struct {
    unsigned int filter_en_1:1; // 
    unsigned int is_consecutive_prd_1:1; // 
    unsigned int filter_period_1:2; // 
} TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_REG 
 *  @{
 */
typedef struct {
    unsigned int input_sel_0:4; // 
    unsigned int input_inv_0:1; // 
} TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_REG_s */
    TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_REG 
 *  @{
 */
typedef struct {
    unsigned int input_sel_1:4; // 
    unsigned int input_inv_1:1; // 
} TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_REG_s */
    TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int is_capture_0:1; // 
    unsigned int cc2d_sel_0:3; // 
    unsigned int cc2u_sel_0:3; // 
    unsigned int suppress_coc_event_gen_0:1; // 
} TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int is_capture_1:1; // 
    unsigned int cc2d_sel_1:3; // 
    unsigned int cc2u_sel_1:3; // 
    unsigned int suppress_coc_event_gen_1:1; // 
} TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int cap_cond_0:2; // 
    unsigned int load_cond_0:2; // 
    unsigned int zero_cond_0:2; // 
    unsigned int adv_cond_0:3; // 
    unsigned int cap_val_0:16; // 
} TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int cap_cond_1:2; // 
    unsigned int load_cond_1:2; // 
    unsigned int zero_cond_1:2; // 
    unsigned int adv_cond_1:3; // 
    unsigned int cap_val_1:16; // 
} TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_val_0:16; // 
    unsigned int comp_val_update_method_0:3; // 
    unsigned int ccact_update_method_0:3; // 
} TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_val_1:16; // 
    unsigned int comp_val_update_method_1:3; // 
    unsigned int ccact_update_method_1:3; // 
} TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_cc2d_0:2; // 
    unsigned int cc_out_cc2u_0:2; // 
    unsigned int cc_out_ccd_0:2; // 
    unsigned int cc_out_ccu_0:2; // 
    unsigned int cc_out_load_0:2; // 
    unsigned int cc_out_zero_0:2; // 
} TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_cc2d_1:2; // 
    unsigned int cc_out_cc2u_1:2; // 
    unsigned int cc_out_ccd_1:2; // 
    unsigned int cc_out_ccu_1:2; // 
    unsigned int cc_out_load_1:2; // 
    unsigned int cc_out_zero_1:2; // 
} TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_sel_0:4; // 
    unsigned int cc_out_inv_0:1; // 
    unsigned int cc_out_val_init_0:1; // 
} TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_sel_1:4; // 
    unsigned int cc_out_inv_1:1; // 
    unsigned int cc_out_val_init_1:1; // 
} TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_sw_force_0:2; // 
} TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_REG 
 *  @{
 */
typedef struct {
    unsigned int cc_out_sw_force_1:2; // 
} TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_REG_s */
    TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CTR_CTL_REG 
 *  @{
 */
typedef struct {
    unsigned int ctr_en:1; // 
    unsigned int repeat_mode:1; // 
    unsigned int count_mode:2; // 
    unsigned int ctr_zero_ctrl:3; // 
    unsigned int ctr_load_ctrl:3; // 
    unsigned int ctr_adv_ctrl:3; // 
    unsigned int suppress_ctr_event_gen:1; // 
} TIMER_TIMG_NUM_INPUT2_CTR_CTL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CTR_CTL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CTR_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CTR_CTL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CTR_CTL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CTR_VAL_REG 
 *  @{
 */
typedef struct {
    unsigned int ctr_val:16; // 
} TIMER_TIMG_NUM_INPUT2_CTR_VAL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CTR_VAL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CTR_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CTR_VAL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CTR_VAL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_REG 
 *  @{
 */
typedef struct {
    unsigned int ctr_load_val:16; // 
} TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_REG_s */
    TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int run_in_halt_mode:1; // 
} TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_REG_s */
    TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_REG */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_QEI_DIR_REG 
 *  @{
 */
typedef struct {
    unsigned int qei_dir:1; // 
} TIMER_TIMG_NUM_INPUT2_QEI_DIR_REG_s;

typedef union {
    /** @ref TIMER_TIMG_NUM_INPUT2_QEI_DIR_REG_s */
    TIMER_TIMG_NUM_INPUT2_QEI_DIR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} TIMER_TIMG_NUM_INPUT2_QEI_DIR_u;

/** @} end of TIMER_TIMG_NUM_INPUT2_QEI_DIR_REG */ 

/** @} end of TIMER_TIMG_NUM_INPUT2_REGISTERS */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  TIMER_TIMG_NUM_INPUT2_DESC_u DESC; ///< 0x00000000
    volatile  TIMER_TIMG_NUM_INPUT2_PWR_EN_u PWR_EN; ///< 0x00000004
    volatile  TIMER_TIMG_NUM_INPUT2_RST_CTRL_u RST_CTRL; ///< 0x00000008
    volatile  TIMER_TIMG_NUM_INPUT2_RST_STS_u RST_STS; ///< 0x0000000C
    volatile  TIMER_TIMG_NUM_INPUT2_CLK_CTRL_u CLK_CTRL; ///< 0x00000010
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_STS_u INTR_STS; ///< 0x00000014
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_EVENT_u INTR_EVENT; ///< 0x00000018
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_EN_0_u INTR_EN_0; ///< 0x0000001C
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_EN_1_u INTR_EN_1; ///< 0x00000020
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_u INTR_NMI_EN_0; ///< 0x00000024
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_u INTR_NMI_EN_1; ///< 0x00000028
    volatile  TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_u EVENT_EN_0_0; ///< 0x0000002C
    volatile  TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_u EVENT_EN_0_1; ///< 0x00000030
    volatile  TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_u EVENT_EN_1_0; ///< 0x00000034
    volatile  TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_u EVENT_EN_1_1; ///< 0x00000038
    volatile  TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_u INTR_SW_SET; ///< 0x0000003C
    volatile  TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_u CLK_CONFIG; ///< 0x00000040
    volatile  TIMER_TIMG_NUM_INPUT2_TRIG_IN_u TRIG_IN; ///< 0x00000044
    volatile  TIMER_TIMG_NUM_INPUT2_TRIG_OUT_u TRIG_OUT; ///< 0x00000048
    volatile  TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_u INPUT_FILTER_CC_0; ///< 0x0000004C
    volatile  TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_u INPUT_FILTER_CC_1; ///< 0x00000050
    volatile  TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_u INPUT_CC_0; ///< 0x00000054
    volatile  TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_u INPUT_CC_1; ///< 0x00000058
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_u CC0_CMN_CTRL; ///< 0x0000005C
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_u CC1_CMN_CTRL; ///< 0x00000060
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_u CC0_CAPTURE_CTRL; ///< 0x00000064
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_u CC1_CAPTURE_CTRL; ///< 0x00000068
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_u CC0_COMPARE_CTRL; ///< 0x0000006C
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_u CC1_COMPARE_CTRL; ///< 0x00000070
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_u CC0_CC_PWM_CFG; ///< 0x00000074
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_u CC1_CC_PWM_CFG; ///< 0x00000078
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_u CC0_OUTPUT_CTL; ///< 0x0000007C
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_u CC1_OUTPUT_CTL; ///< 0x00000080
    volatile  TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_u CC0_SW_FORCE; ///< 0x00000084
    volatile  TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_u CC1_SW_FORCE; ///< 0x00000088
    volatile  TIMER_TIMG_NUM_INPUT2_CTR_CTL_u CTR_CTL; ///< 0x0000008C
    volatile  TIMER_TIMG_NUM_INPUT2_CTR_VAL_u CTR_VAL; ///< 0x00000090
    volatile  TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_u CTR_LOAD_VAL; ///< 0x00000094
    volatile  TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_u DEBUG_CTRL; ///< 0x00000098
    volatile  TIMER_TIMG_NUM_INPUT2_QEI_DIR_u QEI_DIR; ///< 0x0000009C
} TIMER_TIMG_NUM_INPUT2_REGS_s;

/** @} end of TIMER_TIMG_NUM_INPUT2_MEMORY_MAP */ 

/** @defgroup TIMER_TIMG_NUM_INPUT2_KEY 
 *  @{
 */
#define TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY ((uint32_t)0x00000099U)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_KEY ((uint32_t)0x00000099U)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x00000099U)
/** @} end of TIMER_TIMG_NUM_INPUT2_KEY*/ 


/** @defgroup TIMER_TIMG_NUM_INPUT2_INTERRUPTS 
 *  @{
 */
typedef enum {
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_ZERO_IDX = 0, ///<0x0
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_LOAD_IDX = 1, ///<0x1
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_0_IDX = 2, ///<0x2
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_0_IDX = 3, ///<0x3
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_1_IDX = 4, ///<0x4
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_1_IDX = 5, ///<0x5
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_2_IDX = 6, ///<0x6
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_2_IDX = 7, ///<0x7
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_3_IDX = 8, ///<0x8
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_3_IDX = 9, ///<0x9
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_4_IDX = 10, ///<0xa
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_4_IDX = 11, ///<0xb
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_5_IDX = 12, ///<0xc
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_5_IDX = 13, ///<0xd
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_FAULT_IDX = 14, ///<0xe
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_TRIG_OV_IDX = 15, ///<0xf
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_RCTR_ZERO_IDX = 16, ///<0x10
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_CTR_DC_IDX = 17, ///<0x11
	TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_ERR_IDX = 18, ///<0x12
} TIMER_TIMG_NUM_INPUT2_INTR_EVENT_E;
/** @} end of TIMER_TIMG_NUM_INPUT2_INTERRUPTS */ 


/** @defgroup TIMER_TIMG_NUM_INPUT2_REGISTER_FLAGS 
 *  @{
 */
#define TIMER_TIMG_NUM_INPUT2_DESC_MODULE_TYPE_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define TIMER_TIMG_NUM_INPUT2_DESC_MODUE_SUBTYPE_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define TIMER_TIMG_NUM_INPUT2_DESC_MAJOR_REV_OFS (16)
#define TIMER_TIMG_NUM_INPUT2_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define TIMER_TIMG_NUM_INPUT2_DESC_MINOR_REV_OFS (20)
#define TIMER_TIMG_NUM_INPUT2_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY_OFS (24)
#define TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_KEY_OFS (24)
#define TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define TIMER_TIMG_NUM_INPUT2_RST_STS_RST_STS_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_CLK_CTRL_CLK_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_STS_INTR_FIRST_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000003FU)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_ZERO_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_ZERO_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_LOAD_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CTR_LOAD_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_0_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_0_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_0_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_1_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_1_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_1_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_2_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_2_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_2_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_2_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_3_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_3_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_3_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_3_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_4_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_4_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_4_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_4_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_5_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCD_5_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_5_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CCU_5_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_FAULT_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_FAULT_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_TRIG_OV_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_TRIG_OV_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_RCTR_ZERO_OFS (16)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_RCTR_ZERO_MASK ((uint32_t)0x00010000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_CTR_DC_OFS (17)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_CTR_DC_MASK ((uint32_t)0x00020000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_ERR_OFS (18)
#define TIMER_TIMG_NUM_INPUT2_INTR_EVENT_QEI_ERR_MASK ((uint32_t)0x00040000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CTR_ZERO_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CTR_ZERO_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CTR_LOAD_EN_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CTR_LOAD_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_0_EN_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_0_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_0_EN_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_0_EN_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_1_EN_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_1_EN_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_1_EN_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_1_EN_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_2_EN_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_2_EN_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_2_EN_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_2_EN_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_3_EN_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_3_EN_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_3_EN_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_3_EN_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_4_EN_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_4_EN_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_4_EN_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_4_EN_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_5_EN_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCD_5_EN_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_5_EN_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_CCU_5_EN_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_FAULT_EN_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_FAULT_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_TRIG_OV_EN_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_0_TRIG_OV_EN_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_RCTR_ZERO_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_RCTR_ZERO_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_QEI_CTR_DC_EN_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_QEI_CTR_DC_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_QEI_ERR_EN_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_EN_1_QEI_ERR_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CTR_ZERO_NMI_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CTR_ZERO_NMI_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CTR_LOAD_NMI_EN_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CTR_LOAD_NMI_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_0_NMI_EN_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_0_NMI_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_0_NMI_EN_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_0_NMI_EN_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_1_NMI_EN_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_1_NMI_EN_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_1_NMI_EN_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_1_NMI_EN_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_2_NMI_EN_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_2_NMI_EN_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_2_NMI_EN_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_2_NMI_EN_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_3_NMI_EN_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_3_NMI_EN_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_3_NMI_EN_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_3_NMI_EN_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_4_NMI_EN_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_4_NMI_EN_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_4_NMI_EN_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_4_NMI_EN_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_5_NMI_EN_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCD_5_NMI_EN_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_5_NMI_EN_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_CCU_5_NMI_EN_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_FAULT_NMI_EN_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_FAULT_NMI_EN_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_TRIG_OV_NMI_EN_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_0_TRIG_OV_NMI_EN_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_RCTR_ZERO_NMI_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_RCTR_ZERO_NMI_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_QEI_CTR_DC_NMI_EN_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_QEI_CTR_DC_NMI_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_QEI_ERR_NMI_EN_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_NMI_EN_1_QEI_ERR_NMI_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CTR_ZERO_EVENT_EN_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CTR_ZERO_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CTR_LOAD_EVENT_EN_0_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CTR_LOAD_EVENT_EN_0_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_0_EVENT_EN_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_0_EVENT_EN_0_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_0_EVENT_EN_0_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_0_EVENT_EN_0_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_1_EVENT_EN_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_1_EVENT_EN_0_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_1_EVENT_EN_0_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_1_EVENT_EN_0_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_2_EVENT_EN_0_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_2_EVENT_EN_0_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_2_EVENT_EN_0_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_2_EVENT_EN_0_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_3_EVENT_EN_0_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_3_EVENT_EN_0_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_3_EVENT_EN_0_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_3_EVENT_EN_0_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_4_EVENT_EN_0_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_4_EVENT_EN_0_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_4_EVENT_EN_0_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_4_EVENT_EN_0_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_5_EVENT_EN_0_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCD_5_EVENT_EN_0_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_5_EVENT_EN_0_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_CCU_5_EVENT_EN_0_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_FAULT_EVENT_EN_0_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_FAULT_EVENT_EN_0_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_TRIG_OV_EVENT_EN_0_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_0_TRIG_OV_EVENT_EN_0_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_RCTR_ZERO_EVENT_EN_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_RCTR_ZERO_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_QEI_CTR_DC_EVENT_EN_0_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_QEI_CTR_DC_EVENT_EN_0_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_QEI_ERR_EVENT_EN_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_0_1_QEI_ERR_EVENT_EN_0_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CTR_ZERO_EVENT_EN_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CTR_ZERO_EVENT_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CTR_LOAD_EVENT_EN_1_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CTR_LOAD_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_0_EVENT_EN_1_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_0_EVENT_EN_1_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_0_EVENT_EN_1_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_0_EVENT_EN_1_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_1_EVENT_EN_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_1_EVENT_EN_1_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_1_EVENT_EN_1_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_1_EVENT_EN_1_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_2_EVENT_EN_1_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_2_EVENT_EN_1_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_2_EVENT_EN_1_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_2_EVENT_EN_1_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_3_EVENT_EN_1_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_3_EVENT_EN_1_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_3_EVENT_EN_1_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_3_EVENT_EN_1_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_4_EVENT_EN_1_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_4_EVENT_EN_1_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_4_EVENT_EN_1_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_4_EVENT_EN_1_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_5_EVENT_EN_1_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCD_5_EVENT_EN_1_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_5_EVENT_EN_1_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_CCU_5_EVENT_EN_1_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_FAULT_EVENT_EN_1_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_FAULT_EVENT_EN_1_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_TRIG_OV_EVENT_EN_1_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_0_TRIG_OV_EVENT_EN_1_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_RCTR_ZERO_EVENT_EN_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_RCTR_ZERO_EVENT_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_QEI_CTR_DC_EVENT_EN_1_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_QEI_CTR_DC_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_QEI_ERR_EVENT_EN_1_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_EVENT_EN_1_1_QEI_ERR_EVENT_EN_1_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CTR_ZERO_SW_SET_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CTR_ZERO_SW_SET_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CTR_LOAD_SW_SET_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CTR_LOAD_SW_SET_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_0_SW_SET_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_0_SW_SET_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_0_SW_SET_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_0_SW_SET_MASK ((uint32_t)0x00000008U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_1_SW_SET_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_1_SW_SET_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_1_SW_SET_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_1_SW_SET_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_2_SW_SET_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_2_SW_SET_MASK ((uint32_t)0x00000040U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_2_SW_SET_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_2_SW_SET_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_3_SW_SET_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_3_SW_SET_MASK ((uint32_t)0x00000100U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_3_SW_SET_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_3_SW_SET_MASK ((uint32_t)0x00000200U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_4_SW_SET_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_4_SW_SET_MASK ((uint32_t)0x00000400U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_4_SW_SET_OFS (11)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_4_SW_SET_MASK ((uint32_t)0x00000800U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_5_SW_SET_OFS (12)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCD_5_SW_SET_MASK ((uint32_t)0x00001000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_5_SW_SET_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_CCU_5_SW_SET_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_FAULT_SW_SET_OFS (14)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_FAULT_SW_SET_MASK ((uint32_t)0x00004000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_TRIG_OV_SW_SET_OFS (15)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_TRIG_OV_SW_SET_MASK ((uint32_t)0x00008000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_RCTR_ZERO_SW_SET_OFS (16)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_RCTR_ZERO_SW_SET_MASK ((uint32_t)0x00010000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_QEI_CTR_DC_SW_SET_OFS (17)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_QEI_CTR_DC_SW_SET_MASK ((uint32_t)0x00020000U)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_QEI_ERR_SW_SET_OFS (18)
#define TIMER_TIMG_NUM_INPUT2_INTR_SW_SET_QEI_ERR_SW_SET_MASK ((uint32_t)0x00040000U)
#define TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_SEL_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_DIV_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_DIV_MASK ((uint32_t)0x00001FFCU)
#define TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_SEL_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_SEL_MASK ((uint32_t)0x0000003EU)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_OUT_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_OUT_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_SW_EN_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_SW_EN_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_EN_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_EN_MASK ((uint32_t)0x00000004U)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_SEL_OFS (3)
#define TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_SEL_MASK ((uint32_t)0x00000078U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_EN_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_EN_0_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_PERIOD_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_PERIOD_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_EN_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_EN_1_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_PERIOD_1_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_PERIOD_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_SEL_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_SEL_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_INV_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_INV_0_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_SEL_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_SEL_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_INV_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_INV_1_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_IS_CAPTURE_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_IS_CAPTURE_0_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2D_SEL_0_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2D_SEL_0_MASK ((uint32_t)0x0000000EU)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2U_SEL_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2U_SEL_0_MASK ((uint32_t)0x00000070U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_IS_CAPTURE_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_IS_CAPTURE_1_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2D_SEL_1_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2D_SEL_1_MASK ((uint32_t)0x0000000EU)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2U_SEL_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2U_SEL_1_MASK ((uint32_t)0x00000070U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_MASK ((uint32_t)0x00000080U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_CAP_COND_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_CAP_COND_0_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_LOAD_COND_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_LOAD_COND_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_ZERO_COND_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_ZERO_COND_0_MASK ((uint32_t)0x00000030U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_ADV_COND_0_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_ADV_COND_0_MASK ((uint32_t)0x000001C0U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_CAP_VAL_0_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_CC0_CAPTURE_CTRL_CAP_VAL_0_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_CAP_COND_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_CAP_COND_1_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_LOAD_COND_1_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_LOAD_COND_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_ZERO_COND_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_ZERO_COND_1_MASK ((uint32_t)0x00000030U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_ADV_COND_1_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_ADV_COND_1_MASK ((uint32_t)0x000001C0U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_CAP_VAL_1_OFS (9)
#define TIMER_TIMG_NUM_INPUT2_CC1_CAPTURE_CTRL_CAP_VAL_1_MASK ((uint32_t)0x01FFFE00U)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_0_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_OFS (16)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_MASK ((uint32_t)0x00070000U)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_OFS (19)
#define TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_MASK ((uint32_t)0x00380000U)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_1_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_OFS (16)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_MASK ((uint32_t)0x00070000U)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_OFS (19)
#define TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_MASK ((uint32_t)0x00380000U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCD_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCD_0_MASK ((uint32_t)0x00000030U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCU_0_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCU_0_MASK ((uint32_t)0x000000C0U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_MASK ((uint32_t)0x00000300U)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_MASK ((uint32_t)0x00000C00U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCD_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCD_1_MASK ((uint32_t)0x00000030U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCU_1_OFS (6)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCU_1_MASK ((uint32_t)0x000000C0U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_OFS (8)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_MASK ((uint32_t)0x00000300U)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_MASK ((uint32_t)0x00000C00U)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_SEL_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_SEL_0_MASK ((uint32_t)0x0000000FU)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_INV_0_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_INV_0_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_SEL_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_SEL_1_MASK ((uint32_t)0x0000000FU)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_INV_1_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_INV_1_MASK ((uint32_t)0x00000010U)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_OFS (5)
#define TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_MASK ((uint32_t)0x00000020U)
#define TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_MASK ((uint32_t)0x00000003U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_EN_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_EN_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_REPEAT_MODE_OFS (1)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_REPEAT_MODE_MASK ((uint32_t)0x00000002U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_COUNT_MODE_OFS (2)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_COUNT_MODE_MASK ((uint32_t)0x0000000CU)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ZERO_CTRL_OFS (4)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ZERO_CTRL_MASK ((uint32_t)0x00000070U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_LOAD_CTRL_OFS (7)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_LOAD_CTRL_MASK ((uint32_t)0x00000380U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ADV_CTRL_OFS (10)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ADV_CTRL_MASK ((uint32_t)0x00001C00U)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_OFS (13)
#define TIMER_TIMG_NUM_INPUT2_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_MASK ((uint32_t)0x00002000U)
#define TIMER_TIMG_NUM_INPUT2_CTR_VAL_CTR_VAL_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CTR_VAL_CTR_VAL_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_CTR_LOAD_VAL_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_CTR_LOAD_VAL_MASK ((uint32_t)0x0000FFFFU)
#define TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_RUN_IN_HALT_MODE_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_RUN_IN_HALT_MODE_MASK ((uint32_t)0x00000001U)
#define TIMER_TIMG_NUM_INPUT2_QEI_DIR_QEI_DIR_OFS (0)
#define TIMER_TIMG_NUM_INPUT2_QEI_DIR_QEI_DIR_MASK ((uint32_t)0x00000001U)
/** @} end of TIMER_TIMG_NUM_INPUT2_REGISTER_FLAGS */ 

/** @} end of TIMER_TIMG_NUM_INPUT2 */

/** @} end of group FD32M0P_Peripherals */
#endif
