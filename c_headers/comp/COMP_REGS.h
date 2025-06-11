#ifndef COMP_REGISTERS_H
#define COMP_REGISTERS_H

#include <stdint.h>

/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
 *  @{
 */
/** @defgroup COMP
 *  @{
 */
/** @defgroup COMP_REGISTERS 
 *  @{
 */
/** @defgroup COMP_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} COMP_DESC_REG_s;

typedef union {
    /** @ref COMP_DESC_REG_s */
    COMP_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_DESC_u;

/** @} end of COMP_DESC_REG */ 

/** @defgroup COMP_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref COMP_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} COMP_PWR_EN_REG_s;

typedef union {
    /** @ref COMP_PWR_EN_REG_s */
    COMP_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_PWR_EN_u;

/** @} end of COMP_PWR_EN_REG */ 

/** @defgroup COMP_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref COMP_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} COMP_RST_CTRL_REG_s;

typedef union {
    /** @ref COMP_RST_CTRL_REG_s */
    COMP_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_CTRL_u;

/** @} end of COMP_RST_CTRL_REG */ 

/** @defgroup COMP_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} COMP_RST_STS_REG_s;

typedef union {
    /** @ref COMP_RST_STS_REG_s */
    COMP_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_RST_STS_u;

/** @} end of COMP_RST_STS_REG */ 

/** @defgroup COMP_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int en_async_clk_req:1; // 
} COMP_CLK_CTRL_REG_s;

typedef union {
    /** @ref COMP_CLK_CTRL_REG_s */
    COMP_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_CLK_CTRL_u;

/** @} end of COMP_CLK_CTRL_REG */ 

/** @defgroup COMP_INTR_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int intr_first:8; // 
} COMP_INTR_STS_REG_s;

typedef union {
    /** @ref COMP_INTR_STS_REG_s */
    COMP_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_STS_u;

/** @} end of COMP_INTR_STS_REG */ 

/** @defgroup COMP_INTR_EVENT_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_edge0:1; // 
    unsigned int comp_out_edge1:1; // 
    unsigned int comp_out:1; // 
} COMP_INTR_EVENT_REG_s;

typedef union {
    /** @ref COMP_INTR_EVENT_REG_s */
    COMP_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_EVENT_u;

/** @} end of COMP_INTR_EVENT_REG */ 

/** @defgroup COMP_INTR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_edge0_en:1; // 
    unsigned int comp_out_edge1_en:1; // 
    unsigned int comp_out_en:1; // 
} COMP_INTR_EN_REG_s;

typedef union {
    /** @ref COMP_INTR_EN_REG_s */
    COMP_INTR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_EN_u;

/** @} end of COMP_INTR_EN_REG */ 

/** @defgroup COMP_INTR_NMI_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_edge0_nmi_en:1; // 
    unsigned int comp_out_edge1_nmi_en:1; // 
    unsigned int comp_out_nmi_en:1; // 
} COMP_INTR_NMI_EN_REG_s;

typedef union {
    /** @ref COMP_INTR_NMI_EN_REG_s */
    COMP_INTR_NMI_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_NMI_EN_u;

/** @} end of COMP_INTR_NMI_EN_REG */ 

/** @defgroup COMP_EVENT_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_edge0_event_en:1; // 
    unsigned int comp_out_edge1_event_en:1; // 
    unsigned int comp_out_event_en:1; // 
} COMP_EVENT_EN_REG_s;

typedef union {
    /** @ref COMP_EVENT_EN_REG_s */
    COMP_EVENT_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_EVENT_EN_u;

/** @} end of COMP_EVENT_EN_REG */ 

/** @defgroup COMP_INTR_SW_SET_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_edge0_sw_set:1; // 
    unsigned int comp_out_edge1_sw_set:1; // 
    unsigned int comp_out_sw_set:1; // 
} COMP_INTR_SW_SET_REG_s;

typedef union {
    /** @ref COMP_INTR_SW_SET_REG_s */
    COMP_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INTR_SW_SET_u;

/** @} end of COMP_INTR_SW_SET_REG */ 

/** @defgroup COMP_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int comp_out_sts:1; // 
} COMP_STS_REG_s;

typedef union {
    /** @ref COMP_STS_REG_s */
    COMP_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_STS_u;

/** @} end of COMP_STS_REG */ 

/** @defgroup COMP_CTRL0_REG 
 *  @{
 */
typedef struct {
    unsigned int enable:1; // 
    /** @ref COMP_CTRL0_SPEED_E */
    unsigned int rsvd_0:7; // 
    unsigned int speed:1; // 
    /** @ref COMP_CTRL0_HYST_E */
    unsigned int rsvd_1:7; // 
    unsigned int hyst:2; // 
    /** @ref COMP_CTRL0_INTR_EDGE_SEL_E */
    unsigned int rsvd_2:6; // 
    unsigned int intr_edge_sel:1; // 
} COMP_CTRL0_REG_s;

typedef union {
    /** @ref COMP_CTRL0_REG_s */
    COMP_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_CTRL0_u;

/** @} end of COMP_CTRL0_REG */ 

/** @defgroup COMP_INPUT_CTRL0_REG 
 *  @{
 */
typedef struct {
    unsigned int in_p_en:1; // 
    /** @ref COMP_INPUT_CTRL0_IN_P_SEL_E */
    unsigned int rsvd_0:7; // 
    unsigned int in_p_sel:3; // 
    unsigned int rsvd_1:5; // 
    unsigned int in_m_en:1; // 
    /** @ref COMP_INPUT_CTRL0_IN_M_SEL_E */
    unsigned int rsvd_2:7; // 
    unsigned int in_m_sel:3; // 
} COMP_INPUT_CTRL0_REG_s;

typedef union {
    /** @ref COMP_INPUT_CTRL0_REG_s */
    COMP_INPUT_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INPUT_CTRL0_u;

/** @} end of COMP_INPUT_CTRL0_REG */ 

/** @defgroup COMP_INPUT_CTRL1_REG 
 *  @{
 */
typedef struct {
    unsigned int in_short:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int in_swap:1; // 
} COMP_INPUT_CTRL1_REG_s;

typedef union {
    /** @ref COMP_INPUT_CTRL1_REG_s */
    COMP_INPUT_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_INPUT_CTRL1_u;

/** @} end of COMP_INPUT_CTRL1_REG */ 

/** @defgroup COMP_OUT_CTRL0_REG 
 *  @{
 */
typedef struct {
    /** @ref COMP_OUT_CTRL0_OUT_POL_E */
    unsigned int out_pol:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int samp_en:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int filt_en:1; // 
    /** @ref COMP_OUT_CTRL0_FILT_DELAY_E */
    unsigned int rsvd_2:7; // 
    unsigned int filt_delay:2; // 
} COMP_OUT_CTRL0_REG_s;

typedef union {
    /** @ref COMP_OUT_CTRL0_REG_s */
    COMP_OUT_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_OUT_CTRL0_u;

/** @} end of COMP_OUT_CTRL0_REG */ 

/** @defgroup COMP_OUT_CTRL1_REG 
 *  @{
 */
typedef struct {
    unsigned int win_comp_en:1; // 
    /** @ref COMP_OUT_CTRL1_WIN_COMP_SEL_E */
    unsigned int rsvd_0:7; // 
    unsigned int win_comp_sel:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int blank_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int blank_src:3; // 
} COMP_OUT_CTRL1_REG_s;

typedef union {
    /** @ref COMP_OUT_CTRL1_REG_s */
    COMP_OUT_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_OUT_CTRL1_u;

/** @} end of COMP_OUT_CTRL1_REG */ 

/** @defgroup COMP_REF_CTRL0_REG 
 *  @{
 */
typedef struct {
    /** @ref COMP_REF_CTRL0_REF_SEL_E */
    unsigned int ref_sel:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int ref_src:1; // 
    /** @ref COMP_REF_CTRL0_REF_MODE_E */
    unsigned int rsvd_1:7; // 
    unsigned int ref_mode:1; // 
} COMP_REF_CTRL0_REG_s;

typedef union {
    /** @ref COMP_REF_CTRL0_REG_s */
    COMP_REF_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_REF_CTRL0_u;

/** @} end of COMP_REF_CTRL0_REG */ 

/** @defgroup COMP_REF_CTRL1_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_code0:8; // 
    unsigned int dac_code1:8; // 
    /** @ref COMP_REF_CTRL1_DAC_MODE_E */
    unsigned int dac_mode:1; // 
    /** @ref COMP_REF_CTRL1_DAC_CODE_SEL_E */
    unsigned int rsvd_0:7; // 
    unsigned int dac_code_sel:1; // 
} COMP_REF_CTRL1_REG_s;

typedef union {
    /** @ref COMP_REF_CTRL1_REG_s */
    COMP_REF_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_REF_CTRL1_u;

/** @} end of COMP_REF_CTRL1_REG */ 

/** @defgroup COMP_SPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} COMP_SPARE_CTRL_REG_s;

typedef union {
    /** @ref COMP_SPARE_CTRL_REG_s */
    COMP_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_SPARE_CTRL_u;

/** @} end of COMP_SPARE_CTRL_REG */ 

/** @defgroup COMP_SPARE_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} COMP_SPARE_STS_REG_s;

typedef union {
    /** @ref COMP_SPARE_STS_REG_s */
    COMP_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} COMP_SPARE_STS_u;

/** @} end of COMP_SPARE_STS_REG */ 

/** @} end of COMP_REGISTERS */ 

/** @defgroup COMP_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  COMP_DESC_u DESC; ///< 0x00000000
    volatile  COMP_PWR_EN_u PWR_EN; ///< 0x00000004
    volatile  COMP_RST_CTRL_u RST_CTRL; ///< 0x00000008
    volatile  COMP_RST_STS_u RST_STS; ///< 0x0000000C
    volatile  COMP_CLK_CTRL_u CLK_CTRL; ///< 0x00000010
    volatile  COMP_INTR_STS_u INTR_STS; ///< 0x00000014
    volatile  COMP_INTR_EVENT_u INTR_EVENT; ///< 0x00000018
    volatile  COMP_INTR_EN_u INTR_EN; ///< 0x0000001C
    volatile  COMP_INTR_NMI_EN_u INTR_NMI_EN; ///< 0x00000020
    volatile  COMP_EVENT_EN_u EVENT_EN; ///< 0x00000024
    volatile  COMP_INTR_SW_SET_u INTR_SW_SET; ///< 0x00000028
    volatile  COMP_STS_u STS; ///< 0x0000002C
    volatile  COMP_CTRL0_u CTRL0; ///< 0x00000030
    volatile  COMP_INPUT_CTRL0_u INPUT_CTRL0; ///< 0x00000034
    volatile  COMP_INPUT_CTRL1_u INPUT_CTRL1; ///< 0x00000038
    volatile  COMP_OUT_CTRL0_u OUT_CTRL0; ///< 0x0000003C
    volatile  COMP_OUT_CTRL1_u OUT_CTRL1; ///< 0x00000040
    volatile  COMP_REF_CTRL0_u REF_CTRL0; ///< 0x00000044
    volatile  COMP_REF_CTRL1_u REF_CTRL1; ///< 0x00000048
    volatile  COMP_SPARE_CTRL_u SPARE_CTRL; ///< 0x0000004C
    volatile  COMP_SPARE_STS_u SPARE_STS; ///< 0x00000050
} COMP_REGS_s;

/** @} end of COMP_MEMORY_MAP */ 

/** @defgroup COMP_KEY 
 *  @{
 */
#define COMP_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define COMP_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define COMP_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)
/** @} end of COMP_KEY*/ 


/** @defgroup COMP_INTERRUPTS 
 *  @{
 */
typedef enum {
	COMP_INTR_EVENT_COMP_OUT_EDGE0_IDX = 0, ///<0x0
	COMP_INTR_EVENT_COMP_OUT_EDGE1_IDX = 1, ///<0x1
	COMP_INTR_EVENT_COMP_OUT_IDX = 2, ///<0x2
} COMP_INTR_EVENT_E;
/** @} end of COMP_INTERRUPTS */ 

/** @addtogroup COMP_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_CTRL0_SPEED_LOW = 0, ///< 0x0
	COMP_CTRL0_SPEED_HIGH = 1, ///< 0x1
} COMP_CTRL0_SPEED_E;
/** @} */
/** @addtogroup COMP_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_CTRL0_HYST_DISABLED = 0, ///< 0x0
	COMP_CTRL0_HYST_LOW = 1, ///< 0x1
	COMP_CTRL0_HYST_MEDIUM = 2, ///< 0x2
	COMP_CTRL0_HYST_HIGH = 3, ///< 0x3
} COMP_CTRL0_HYST_E;
/** @} */
/** @addtogroup COMP_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_CTRL0_INTR_EDGE_SEL_E0_POS_E1_NEG = 0, ///< 0x0
	COMP_CTRL0_INTR_EDGE_SEL_E0_NEG_E1_POS = 1, ///< 0x1
} COMP_CTRL0_INTR_EDGE_SEL_E;
/** @} */
/** @addtogroup COMP_INPUT_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_0 = 0, ///< 0x0
	COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_1 = 1, ///< 0x1
	COMP_INPUT_CTRL0_IN_P_SEL_COMP0_NON_INV_2 = 2, ///< 0x2
	COMP_INPUT_CTRL0_IN_P_SEL_COMP1_NON_INV_2 = 2, ///< 0x2
	COMP_INPUT_CTRL0_IN_P_SEL_COMP0_DAC_CONN = 3, ///< 0x3
	COMP_INPUT_CTRL0_IN_P_SEL_COMP1_DAC_CONN = 3, ///< 0x3
	COMP_INPUT_CTRL0_IN_P_SEL_COMP0_OPA1_CONN = 4, ///< 0x4
	COMP_INPUT_CTRL0_IN_P_SEL_COMP1_GND = 4, ///< 0x4
	COMP_INPUT_CTRL0_IN_P_SEL_COMP0_PSEL_CONN = 5, ///< 0x5
	COMP_INPUT_CTRL0_IN_P_SEL_COMP1_PSEL_CONN = 5, ///< 0x5
} COMP_INPUT_CTRL0_IN_P_SEL_E;
/** @} */
/** @addtogroup COMP_INPUT_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_INPUT_CTRL0_IN_M_SEL_INV_0 = 0, ///< 0x0
	COMP_INPUT_CTRL0_IN_M_SEL_INV_1 = 1, ///< 0x1
	COMP_INPUT_CTRL0_IN_M_SEL_COMP0_INV_2 = 2, ///< 0x2
	COMP_INPUT_CTRL0_IN_M_SEL_COMP1_INV_2 = 2, ///< 0x2
	COMP_INPUT_CTRL0_IN_M_SEL_COMP0_OPA0_CONN = 3, ///< 0x3
} COMP_INPUT_CTRL0_IN_M_SEL_E;
/** @} */
/** @addtogroup COMP_OUT_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_OUT_CTRL0_OUT_POL_NON_INV = 0, ///< 0x0
	COMP_OUT_CTRL0_OUT_POL_INV = 1, ///< 0x1
} COMP_OUT_CTRL0_OUT_POL_E;
/** @} */
/** @addtogroup COMP_OUT_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_OUT_CTRL0_FILT_DELAY_70NS = 0, ///< 0x0
	COMP_OUT_CTRL0_FILT_DELAY_500NS = 1, ///< 0x1
	COMP_OUT_CTRL0_FILT_DELAY_1200NS = 2, ///< 0x2
	COMP_OUT_CTRL0_FILT_DELAY_2700NS = 3, ///< 0x3
} COMP_OUT_CTRL0_FILT_DELAY_E;
/** @} */
/** @addtogroup COMP_OUT_CTRL1_REG  
 *  @{
 */
typedef enum {
	COMP_OUT_CTRL1_WIN_COMP_SEL_0 = 0, ///< 0x0
	COMP_OUT_CTRL1_WIN_COMP_SEL_1 = 1, ///< 0x1
	COMP_OUT_CTRL1_WIN_COMP_SEL_2 = 2, ///< 0x2
} COMP_OUT_CTRL1_WIN_COMP_SEL_E;
/** @} */
/** @addtogroup COMP_REF_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_REF_CTRL0_REF_SEL_NON_INV_IN = 0, ///< 0x0
	COMP_REF_CTRL0_REF_SEL_INV_IN = 1, ///< 0x1
} COMP_REF_CTRL0_REF_SEL_E;
/** @} */
/** @addtogroup COMP_REF_CTRL0_REG  
 *  @{
 */
typedef enum {
	COMP_REF_CTRL0_REF_MODE_STATIC = 0, ///< 0x0
	COMP_REF_CTRL0_REF_MODE_SAMPLED = 1, ///< 0x1
} COMP_REF_CTRL0_REF_MODE_E;
/** @} */
/** @addtogroup COMP_REF_CTRL1_REG  
 *  @{
 */
typedef enum {
	COMP_REF_CTRL1_DAC_MODE_SW_HYST = 0, ///< 0x0
	COMP_REF_CTRL1_DAC_MODE_HW_HYST = 1, ///< 0x1
} COMP_REF_CTRL1_DAC_MODE_E;
/** @} */
/** @addtogroup COMP_REF_CTRL1_REG  
 *  @{
 */
typedef enum {
	COMP_REF_CTRL1_DAC_CODE_SEL_0 = 0, ///< 0x0
	COMP_REF_CTRL1_DAC_CODE_SEL_1 = 1, ///< 0x1
} COMP_REF_CTRL1_DAC_CODE_SEL_E;
/** @} */

/** @defgroup COMP_REGISTER_FLAGS 
 *  @{
 */
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
/** @} end of COMP_REGISTER_FLAGS */ 

/** @} end of COMP */

/** @} end of group FD32M0P_Peripherals */
#endif
