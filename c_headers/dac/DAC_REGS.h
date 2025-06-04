#ifndef DAC_REGISTERS_H
#define DAC_REGISTERS_H

#include <stdint.h>

/** @defgroup DAC
 *  @{
 */
/** @defgroup DAC_REGISTERS 
 *  @{
 */
/** @defgroup DAC_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} DAC_DESC_REG_s;

typedef union {
    /** @ref DAC_DESC_REG_s */
    DAC_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DESC_u;

/** @} end of DAC_DESC_REG */ 

/** @defgroup DAC_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref DAC_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} DAC_PWR_EN_REG_s;

typedef union {
    /** @ref DAC_PWR_EN_REG_s */
    DAC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_PWR_EN_u;

/** @} end of DAC_PWR_EN_REG */ 

/** @defgroup DAC_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref DAC_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} DAC_RST_CTRL_REG_s;

typedef union {
    /** @ref DAC_RST_CTRL_REG_s */
    DAC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_CTRL_u;

/** @} end of DAC_RST_CTRL_REG */ 

/** @defgroup DAC_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} DAC_RST_STS_REG_s;

typedef union {
    /** @ref DAC_RST_STS_REG_s */
    DAC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_RST_STS_u;

/** @} end of DAC_RST_STS_REG */ 

/** @defgroup DAC_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
} DAC_CLK_CTRL_REG_s;

typedef union {
    /** @ref DAC_CLK_CTRL_REG_s */
    DAC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CLK_CTRL_u;

/** @} end of DAC_CLK_CTRL_REG */ 

/** @defgroup DAC_INTR_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int intr_first:8; // 
} DAC_INTR_STS_REG_s;

typedef union {
    /** @ref DAC_INTR_STS_REG_s */
    DAC_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_STS_u;

/** @} end of DAC_INTR_STS_REG */ 

/** @defgroup DAC_INTR_EVENT_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_rdy:1; // 
    unsigned int fifo_full:1; // 
    unsigned int fifo_almost_full:1; // 
    unsigned int fifo_empty:1; // 
    unsigned int fifo_almost_empty:1; // 
    unsigned int fifo_overflow:1; // 
    unsigned int fifo_underflow:1; // 
    unsigned int dma_done:1; // 
} DAC_INTR_EVENT_REG_s;

typedef union {
    /** @ref DAC_INTR_EVENT_REG_s */
    DAC_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_EVENT_u;

/** @} end of DAC_INTR_EVENT_REG */ 

/** @defgroup DAC_INTR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_rdy_en:1; // 
    unsigned int fifo_full_en:1; // 
    unsigned int fifo_almost_full_en:1; // 
    unsigned int fifo_empty_en:1; // 
    unsigned int fifo_almost_empty_en:1; // 
    unsigned int fifo_overflow_en:1; // 
    unsigned int fifo_underflow_en:1; // 
    unsigned int dma_done_en:1; // 
} DAC_INTR_EN_REG_s;

typedef union {
    /** @ref DAC_INTR_EN_REG_s */
    DAC_INTR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_EN_u;

/** @} end of DAC_INTR_EN_REG */ 

/** @defgroup DAC_INTR_NMI_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_rdy_nmi_en:1; // 
    unsigned int fifo_full_nmi_en:1; // 
    unsigned int fifo_almost_full_nmi_en:1; // 
    unsigned int fifo_empty_nmi_en:1; // 
    unsigned int fifo_almost_empty_nmi_en:1; // 
    unsigned int fifo_overflow_nmi_en:1; // 
    unsigned int fifo_underflow_nmi_en:1; // 
    unsigned int dma_done_nmi_en:1; // 
} DAC_INTR_NMI_EN_REG_s;

typedef union {
    /** @ref DAC_INTR_NMI_EN_REG_s */
    DAC_INTR_NMI_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_NMI_EN_u;

/** @} end of DAC_INTR_NMI_EN_REG */ 

/** @defgroup DAC_EVENT_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_rdy_event_en:1; // 
    unsigned int fifo_full_event_en:1; // 
    unsigned int fifo_almost_full_event_en:1; // 
    unsigned int fifo_empty_event_en:1; // 
    unsigned int fifo_almost_empty_event_en:1; // 
    unsigned int fifo_overflow_event_en:1; // 
    unsigned int fifo_underflow_event_en:1; // 
    unsigned int dma_done_event_en:1; // 
} DAC_EVENT_EN_REG_s;

typedef union {
    /** @ref DAC_EVENT_EN_REG_s */
    DAC_EVENT_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_EVENT_EN_u;

/** @} end of DAC_EVENT_EN_REG */ 

/** @defgroup DAC_INTR_SW_SET_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_rdy_sw_set:1; // 
    unsigned int fifo_full_sw_set:1; // 
    unsigned int fifo_almost_full_sw_set:1; // 
    unsigned int fifo_empty_sw_set:1; // 
    unsigned int fifo_almost_empty_sw_set:1; // 
    unsigned int fifo_overflow_sw_set:1; // 
    unsigned int fifo_underflow_sw_set:1; // 
    unsigned int dma_done_sw_set:1; // 
} DAC_INTR_SW_SET_REG_s;

typedef union {
    /** @ref DAC_INTR_SW_SET_REG_s */
    DAC_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_INTR_SW_SET_u;

/** @} end of DAC_INTR_SW_SET_REG */ 

/** @defgroup DAC_EVENT_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int chan_id0:4; // 
} DAC_EVENT_CTRL_REG_s;

typedef union {
    /** @ref DAC_EVENT_CTRL_REG_s */
    DAC_EVENT_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_EVENT_CTRL_u;

/** @} end of DAC_EVENT_CTRL_REG */ 

/** @defgroup DAC_CTRL0_REG 
 *  @{
 */
typedef struct {
    unsigned int enable:1; // 
    /** @ref DAC_CTRL0_RES_E */
    unsigned int rsvd_0:7; // 
    unsigned int res:1; // 
    /** @ref DAC_CTRL0_DATA_FMT_E */
    unsigned int rsvd_1:7; // 
    unsigned int data_fmt:1; // 
} DAC_CTRL0_REG_s;

typedef union {
    /** @ref DAC_CTRL0_REG_s */
    DAC_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL0_u;

/** @} end of DAC_CTRL0_REG */ 

/** @defgroup DAC_CTRL1_REG 
 *  @{
 */
typedef struct {
    unsigned int amp_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int amp_hiz:1; // 
    /** @ref DAC_CTRL1_VREFP_SEL_E */
    unsigned int rsvd_1:7; // 
    unsigned int vrefp_sel:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int out_en:1; // 
} DAC_CTRL1_REG_s;

typedef union {
    /** @ref DAC_CTRL1_REG_s */
    DAC_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL1_u;

/** @} end of DAC_CTRL1_REG */ 

/** @defgroup DAC_CTRL2_REG 
 *  @{
 */
typedef struct {
    unsigned int fifo_en:1; // 
    /** @ref DAC_CTRL2_FIFO_TH_E */
    unsigned int rsvd_0:7; // 
    unsigned int fifo_th:2; // 
    /** @ref DAC_CTRL2_FIFO_TRIG_SEL_E */
    unsigned int rsvd_1:6; // 
    unsigned int fifo_trig_sel:2; // 
    unsigned int rsvd_2:6; // 
    unsigned int dma_trig_en:1; // 
} DAC_CTRL2_REG_s;

typedef union {
    /** @ref DAC_CTRL2_REG_s */
    DAC_CTRL2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL2_u;

/** @} end of DAC_CTRL2_REG */ 

/** @defgroup DAC_CTRL3_REG 
 *  @{
 */
typedef struct {
    unsigned int samp_tim_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int samp_tim_rate:4; // 
} DAC_CTRL3_REG_s;

typedef union {
    /** @ref DAC_CTRL3_REG_s */
    DAC_CTRL3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CTRL3_u;

/** @} end of DAC_CTRL3_REG */ 

/** @defgroup DAC_DATA_REG 
 *  @{
 */
typedef struct {
    unsigned int dac_code:13; // 
} DAC_DATA_REG_s;

typedef union {
    /** @ref DAC_DATA_REG_s */
    DAC_DATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_DATA_u;

/** @} end of DAC_DATA_REG */ 

/** @defgroup DAC_CAL_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int cal_en:1; // 
    unsigned int cal_sel:1; // 
} DAC_CAL_CTRL_REG_s;

typedef union {
    /** @ref DAC_CAL_CTRL_REG_s */
    DAC_CAL_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CAL_CTRL_u;

/** @} end of DAC_CAL_CTRL_REG */ 

/** @defgroup DAC_CAL_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int cal_done:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int cal_data:7; // 
} DAC_CAL_STS_REG_s;

typedef union {
    /** @ref DAC_CAL_STS_REG_s */
    DAC_CAL_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_CAL_STS_u;

/** @} end of DAC_CAL_STS_REG */ 

/** @defgroup DAC_SPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} DAC_SPARE_CTRL_REG_s;

typedef union {
    /** @ref DAC_SPARE_CTRL_REG_s */
    DAC_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_SPARE_CTRL_u;

/** @} end of DAC_SPARE_CTRL_REG */ 

/** @defgroup DAC_SPARE_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} DAC_SPARE_STS_REG_s;

typedef union {
    /** @ref DAC_SPARE_STS_REG_s */
    DAC_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DAC_SPARE_STS_u;

/** @} end of DAC_SPARE_STS_REG */ 

/** @} end of DAC_REGISTERS */ 

/** @defgroup DAC_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  DAC_DESC_u DESC; ///< 0x00000000
    volatile  DAC_PWR_EN_u PWR_EN; ///< 0x00000004
    volatile  DAC_RST_CTRL_u RST_CTRL; ///< 0x00000008
    volatile  DAC_RST_STS_u RST_STS; ///< 0x0000000C
    volatile  DAC_CLK_CTRL_u CLK_CTRL; ///< 0x00000010
    volatile  DAC_INTR_STS_u INTR_STS; ///< 0x00000014
    volatile  DAC_INTR_EVENT_u INTR_EVENT; ///< 0x00000018
    volatile  DAC_INTR_EN_u INTR_EN; ///< 0x0000001C
    volatile  DAC_INTR_NMI_EN_u INTR_NMI_EN; ///< 0x00000020
    volatile  DAC_EVENT_EN_u EVENT_EN; ///< 0x00000024
    volatile  DAC_INTR_SW_SET_u INTR_SW_SET; ///< 0x00000028
    volatile  DAC_EVENT_CTRL_u EVENT_CTRL; ///< 0x0000002C
    volatile  DAC_CTRL0_u CTRL0; ///< 0x00000030
    volatile  DAC_CTRL1_u CTRL1; ///< 0x00000034
    volatile  DAC_CTRL2_u CTRL2; ///< 0x00000038
    volatile  DAC_CTRL3_u CTRL3; ///< 0x0000003C
    volatile  DAC_DATA_u DATA; ///< 0x00000040
    volatile  DAC_CAL_CTRL_u CAL_CTRL; ///< 0x00000044
    volatile  DAC_CAL_STS_u CAL_STS; ///< 0x00000048
    volatile  DAC_SPARE_CTRL_u SPARE_CTRL; ///< 0x0000004C
    volatile  DAC_SPARE_STS_u SPARE_STS; ///< 0x00000050
} DAC_REGS_s;

/** @} end of DAC_MEMORY_MAP */ 

/** @defgroup DAC_KEY 
 *  @{
 */
#define DAC_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define DAC_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define DAC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)
/** @} end of DAC_KEY*/ 


/** @defgroup DAC_INTERRUPTS 
 *  @{
 */
#define DAC_INTR_EVENT_DAC_RDY_IDX (0)
#define DAC_INTR_EVENT_FIFO_FULL_IDX (1)
#define DAC_INTR_EVENT_FIFO_ALMOST_FULL_IDX (2)
#define DAC_INTR_EVENT_FIFO_EMPTY_IDX (3)
#define DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_IDX (4)
#define DAC_INTR_EVENT_FIFO_OVERFLOW_IDX (5)
#define DAC_INTR_EVENT_FIFO_UNDERFLOW_IDX (6)
#define DAC_INTR_EVENT_DMA_DONE_IDX (7)
/** @} end of DAC_INTERRUPTS */ 

/** @addtogroup DAC_CTRL0_REG  
 *  @{
 */
typedef enum {
	DAC_CTRL0_RES_8BIT = 0, ///< 0x0
	DAC_CTRL0_RES_13BIT = 1, ///< 0x1
} DAC_CTRL0_RES_E;
/** @} */
/** @addtogroup DAC_CTRL0_REG  
 *  @{
 */
typedef enum {
	DAC_CTRL0_DATA_FMT_BINARY = 0, ///< 0x0
	DAC_CTRL0_DATA_FMT_TWOS_COMPLEMENT = 1, ///< 0x1
} DAC_CTRL0_DATA_FMT_E;
/** @} */
/** @addtogroup DAC_CTRL1_REG  
 *  @{
 */
typedef enum {
	DAC_CTRL1_VREFP_SEL_EXT = 0, ///< 0x0
	DAC_CTRL1_VREFP_SEL_INT = 1, ///< 0x1
} DAC_CTRL1_VREFP_SEL_E;
/** @} */
/** @addtogroup DAC_CTRL2_REG  
 *  @{
 */
typedef enum {
	DAC_CTRL2_FIFO_TH_EMPTY = 0, ///< 0x0
	DAC_CTRL2_FIFO_TH_ALMOST_EMPTY = 1, ///< 0x1
} DAC_CTRL2_FIFO_TH_E;
/** @} */
/** @addtogroup DAC_CTRL2_REG  
 *  @{
 */
typedef enum {
	DAC_CTRL2_FIFO_TRIG_SEL_HW_TRIGGER = 0, ///< 0x0
	DAC_CTRL2_FIFO_TRIG_SEL_FIFO_EMPTY = 1, ///< 0x1
} DAC_CTRL2_FIFO_TRIG_SEL_E;
/** @} */

/** @defgroup DAC_REGISTER_FLAGS 
 *  @{
 */
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
/** @} end of DAC_REGISTER_FLAGS */ 

/** @} end of DAC */


#endif
