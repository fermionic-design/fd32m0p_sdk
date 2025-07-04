#ifndef DMA_REGISTERS_H
#define DMA_REGISTERS_H

#include <stdint.h>

/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
 *  @{
 */
/** @defgroup DMA
 *  @{
 */
/** @defgroup DMA_REGISTERS 
 *  @{
 */
/** @defgroup DMA_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} DMA_DESC_REG_s;

typedef union {
    /** @ref DMA_DESC_REG_s */
    DMA_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DESC_u;

/** @} end of DMA_DESC_REG */ 

/** @defgroup DMA_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref DMA_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} DMA_PWR_EN_REG_s;

typedef union {
    /** @ref DMA_PWR_EN_REG_s */
    DMA_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_PWR_EN_u;

/** @} end of DMA_PWR_EN_REG */ 

/** @defgroup DMA_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref DMA_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} DMA_RST_CTRL_REG_s;

typedef union {
    /** @ref DMA_RST_CTRL_REG_s */
    DMA_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_RST_CTRL_u;

/** @} end of DMA_RST_CTRL_REG */ 

/** @defgroup DMA_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} DMA_RST_STS_REG_s;

typedef union {
    /** @ref DMA_RST_STS_REG_s */
    DMA_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_RST_STS_u;

/** @} end of DMA_RST_STS_REG */ 

/** @defgroup DMA_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
} DMA_CLK_CTRL_REG_s;

typedef union {
    /** @ref DMA_CLK_CTRL_REG_s */
    DMA_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_CLK_CTRL_u;

/** @} end of DMA_CLK_CTRL_REG */ 

/** @defgroup DMA_DBG_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int halt_mode:1; // 
} DMA_DBG_CTRL_REG_s;

typedef union {
    /** @ref DMA_DBG_CTRL_REG_s */
    DMA_DBG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DBG_CTRL_u;

/** @} end of DMA_DBG_CTRL_REG */ 

/** @defgroup DMA_INTR_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int intr_first:6; // 
} DMA_INTR_STS_REG_s;

typedef union {
    /** @ref DMA_INTR_STS_REG_s */
    DMA_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_STS_u;

/** @} end of DMA_INTR_STS_REG */ 

/** @defgroup DMA_INTR_EVENT_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_done_0:1; // 
    unsigned int dma_done_1:1; // 
    unsigned int dma_done_2:1; // 
    unsigned int dma_done_3:1; // 
    unsigned int dma_done_4:1; // 
    unsigned int dma_done_5:1; // 
    unsigned int dma_done_6:1; // 
    unsigned int dma_done_7:1; // 
    unsigned int dma_done_8:1; // 
    unsigned int dma_done_9:1; // 
    unsigned int dma_done_10:1; // 
    unsigned int dma_done_11:1; // 
    unsigned int dma_done_12:1; // 
    unsigned int dma_done_13:1; // 
    unsigned int dma_done_14:1; // 
    unsigned int dma_done_15:1; // 
    unsigned int early_irq_0:1; // 
    unsigned int early_irq_1:1; // 
    unsigned int early_irq_2:1; // 
    unsigned int early_irq_3:1; // 
    unsigned int early_irq_4:1; // 
    unsigned int early_irq_5:1; // 
    unsigned int early_irq_6:1; // 
    unsigned int early_irq_7:1; // 
    unsigned int early_irq_8:1; // 
    unsigned int early_irq_9:1; // 
    unsigned int early_irq_10:1; // 
    unsigned int early_irq_11:1; // 
    unsigned int early_irq_12:1; // 
    unsigned int early_irq_13:1; // 
    unsigned int early_irq_14:1; // 
    unsigned int early_irq_15:1; // 
} DMA_INTR_EVENT_REG_s;

typedef union {
    /** @ref DMA_INTR_EVENT_REG_s */
    DMA_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EVENT_u;

/** @} end of DMA_INTR_EVENT_REG */ 

/** @defgroup DMA_INTR_EN_0_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_done_en_0:1; // 
    unsigned int dma_done_en_1:1; // 
    unsigned int dma_done_en_2:1; // 
    unsigned int dma_done_en_3:1; // 
    unsigned int dma_done_en_4:1; // 
    unsigned int dma_done_en_5:1; // 
    unsigned int dma_done_en_6:1; // 
    unsigned int dma_done_en_7:1; // 
    unsigned int dma_done_en_8:1; // 
    unsigned int dma_done_en_9:1; // 
    unsigned int dma_done_en_10:1; // 
    unsigned int dma_done_en_11:1; // 
    unsigned int dma_done_en_12:1; // 
    unsigned int dma_done_en_13:1; // 
    unsigned int dma_done_en_14:1; // 
    unsigned int dma_done_en_15:1; // 
} DMA_INTR_EN_0_REG_s;

typedef union {
    /** @ref DMA_INTR_EN_0_REG_s */
    DMA_INTR_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EN_0_u;

/** @} end of DMA_INTR_EN_0_REG */ 

/** @defgroup DMA_INTR_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int early_irq_en_0:1; // 
    unsigned int early_irq_en_1:1; // 
    unsigned int early_irq_en_2:1; // 
    unsigned int early_irq_en_3:1; // 
    unsigned int early_irq_en_4:1; // 
    unsigned int early_irq_en_5:1; // 
    unsigned int early_irq_en_6:1; // 
    unsigned int early_irq_en_7:1; // 
    unsigned int early_irq_en_8:1; // 
    unsigned int early_irq_en_9:1; // 
    unsigned int early_irq_en_10:1; // 
    unsigned int early_irq_en_11:1; // 
    unsigned int early_irq_en_12:1; // 
    unsigned int early_irq_en_13:1; // 
    unsigned int early_irq_en_14:1; // 
    unsigned int early_irq_en_15:1; // 
} DMA_INTR_EN_1_REG_s;

typedef union {
    /** @ref DMA_INTR_EN_1_REG_s */
    DMA_INTR_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EN_1_u;

/** @} end of DMA_INTR_EN_1_REG */ 

/** @defgroup DMA_INTR_NMI_EN_0_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_done_nmi_en_0:1; // 
    unsigned int dma_done_nmi_en_1:1; // 
    unsigned int dma_done_nmi_en_2:1; // 
    unsigned int dma_done_nmi_en_3:1; // 
    unsigned int dma_done_nmi_en_4:1; // 
    unsigned int dma_done_nmi_en_5:1; // 
    unsigned int dma_done_nmi_en_6:1; // 
    unsigned int dma_done_nmi_en_7:1; // 
    unsigned int dma_done_nmi_en_8:1; // 
    unsigned int dma_done_nmi_en_9:1; // 
    unsigned int dma_done_nmi_en_10:1; // 
    unsigned int dma_done_nmi_en_11:1; // 
    unsigned int dma_done_nmi_en_12:1; // 
    unsigned int dma_done_nmi_en_13:1; // 
    unsigned int dma_done_nmi_en_14:1; // 
    unsigned int dma_done_nmi_en_15:1; // 
} DMA_INTR_NMI_EN_0_REG_s;

typedef union {
    /** @ref DMA_INTR_NMI_EN_0_REG_s */
    DMA_INTR_NMI_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_NMI_EN_0_u;

/** @} end of DMA_INTR_NMI_EN_0_REG */ 

/** @defgroup DMA_INTR_NMI_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int early_irq_nmi_en_0:1; // 
    unsigned int early_irq_nmi_en_1:1; // 
    unsigned int early_irq_nmi_en_2:1; // 
    unsigned int early_irq_nmi_en_3:1; // 
    unsigned int early_irq_nmi_en_4:1; // 
    unsigned int early_irq_nmi_en_5:1; // 
    unsigned int early_irq_nmi_en_6:1; // 
    unsigned int early_irq_nmi_en_7:1; // 
    unsigned int early_irq_nmi_en_8:1; // 
    unsigned int early_irq_nmi_en_9:1; // 
    unsigned int early_irq_nmi_en_10:1; // 
    unsigned int early_irq_nmi_en_11:1; // 
    unsigned int early_irq_nmi_en_12:1; // 
    unsigned int early_irq_nmi_en_13:1; // 
    unsigned int early_irq_nmi_en_14:1; // 
    unsigned int early_irq_nmi_en_15:1; // 
} DMA_INTR_NMI_EN_1_REG_s;

typedef union {
    /** @ref DMA_INTR_NMI_EN_1_REG_s */
    DMA_INTR_NMI_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_NMI_EN_1_u;

/** @} end of DMA_INTR_NMI_EN_1_REG */ 

/** @defgroup DMA_EVENT_EN_0_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_done_event_en_0:1; // 
    unsigned int dma_done_event_en_1:1; // 
    unsigned int dma_done_event_en_2:1; // 
    unsigned int dma_done_event_en_3:1; // 
    unsigned int dma_done_event_en_4:1; // 
    unsigned int dma_done_event_en_5:1; // 
    unsigned int dma_done_event_en_6:1; // 
    unsigned int dma_done_event_en_7:1; // 
    unsigned int dma_done_event_en_8:1; // 
    unsigned int dma_done_event_en_9:1; // 
    unsigned int dma_done_event_en_10:1; // 
    unsigned int dma_done_event_en_11:1; // 
    unsigned int dma_done_event_en_12:1; // 
    unsigned int dma_done_event_en_13:1; // 
    unsigned int dma_done_event_en_14:1; // 
    unsigned int dma_done_event_en_15:1; // 
} DMA_EVENT_EN_0_REG_s;

typedef union {
    /** @ref DMA_EVENT_EN_0_REG_s */
    DMA_EVENT_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EVENT_EN_0_u;

/** @} end of DMA_EVENT_EN_0_REG */ 

/** @defgroup DMA_EVENT_EN_1_REG 
 *  @{
 */
typedef struct {
    unsigned int early_irq_event_en_0:1; // 
    unsigned int early_irq_event_en_1:1; // 
    unsigned int early_irq_event_en_2:1; // 
    unsigned int early_irq_event_en_3:1; // 
    unsigned int early_irq_event_en_4:1; // 
    unsigned int early_irq_event_en_5:1; // 
    unsigned int early_irq_event_en_6:1; // 
    unsigned int early_irq_event_en_7:1; // 
    unsigned int early_irq_event_en_8:1; // 
    unsigned int early_irq_event_en_9:1; // 
    unsigned int early_irq_event_en_10:1; // 
    unsigned int early_irq_event_en_11:1; // 
    unsigned int early_irq_event_en_12:1; // 
    unsigned int early_irq_event_en_13:1; // 
    unsigned int early_irq_event_en_14:1; // 
    unsigned int early_irq_event_en_15:1; // 
} DMA_EVENT_EN_1_REG_s;

typedef union {
    /** @ref DMA_EVENT_EN_1_REG_s */
    DMA_EVENT_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EVENT_EN_1_u;

/** @} end of DMA_EVENT_EN_1_REG */ 

/** @defgroup DMA_INTR_SW_SET_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_done_sw_set_0:1; // 
    unsigned int dma_done_sw_set_1:1; // 
    unsigned int dma_done_sw_set_2:1; // 
    unsigned int dma_done_sw_set_3:1; // 
    unsigned int dma_done_sw_set_4:1; // 
    unsigned int dma_done_sw_set_5:1; // 
    unsigned int dma_done_sw_set_6:1; // 
    unsigned int dma_done_sw_set_7:1; // 
    unsigned int dma_done_sw_set_8:1; // 
    unsigned int dma_done_sw_set_9:1; // 
    unsigned int dma_done_sw_set_10:1; // 
    unsigned int dma_done_sw_set_11:1; // 
    unsigned int dma_done_sw_set_12:1; // 
    unsigned int dma_done_sw_set_13:1; // 
    unsigned int dma_done_sw_set_14:1; // 
    unsigned int dma_done_sw_set_15:1; // 
    unsigned int early_irq_sw_set_0:1; // 
    unsigned int early_irq_sw_set_1:1; // 
    unsigned int early_irq_sw_set_2:1; // 
    unsigned int early_irq_sw_set_3:1; // 
    unsigned int early_irq_sw_set_4:1; // 
    unsigned int early_irq_sw_set_5:1; // 
    unsigned int early_irq_sw_set_6:1; // 
    unsigned int early_irq_sw_set_7:1; // 
    unsigned int early_irq_sw_set_8:1; // 
    unsigned int early_irq_sw_set_9:1; // 
    unsigned int early_irq_sw_set_10:1; // 
    unsigned int early_irq_sw_set_11:1; // 
    unsigned int early_irq_sw_set_12:1; // 
    unsigned int early_irq_sw_set_13:1; // 
    unsigned int early_irq_sw_set_14:1; // 
    unsigned int early_irq_sw_set_15:1; // 
} DMA_INTR_SW_SET_REG_s;

typedef union {
    /** @ref DMA_INTR_SW_SET_REG_s */
    DMA_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_SW_SET_u;

/** @} end of DMA_INTR_SW_SET_REG */ 

/** @defgroup DMA_CFG_0_REG 
 *  @{
 */
typedef struct {
    unsigned int ctrl_base_ptr:32; // 
} DMA_CFG_0_REG_s;

typedef union {
    /** @ref DMA_CFG_0_REG_s */
    DMA_CFG_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_CFG_0_u;

/** @} end of DMA_CFG_0_REG */ 

/** @defgroup DMA_CFG_1_REG 
 *  @{
 */
typedef struct {
    unsigned int alt_ctrl_base_ptr:32; // 
} DMA_CFG_1_REG_s;

typedef union {
    /** @ref DMA_CFG_1_REG_s */
    DMA_CFG_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_CFG_1_u;

/** @} end of DMA_CFG_1_REG */ 

/** @defgroup DMA_CFG_2_REG 
 *  @{
 */
typedef struct {
    unsigned int chnls_minus_1:5; // 
    unsigned int master_enable:1; // 
} DMA_CFG_2_REG_s;

typedef union {
    /** @ref DMA_CFG_2_REG_s */
    DMA_CFG_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_CFG_2_u;

/** @} end of DMA_CFG_2_REG */ 

/** @defgroup DMA_WAITONREQ_REG 
 *  @{
 */
typedef struct {
    unsigned int waitonreq:16; // 
} DMA_WAITONREQ_REG_s;

typedef union {
    /** @ref DMA_WAITONREQ_REG_s */
    DMA_WAITONREQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_WAITONREQ_u;

/** @} end of DMA_WAITONREQ_REG */ 

/** @defgroup DMA_FILL_MODE_REG 
 *  @{
 */
typedef struct {
    unsigned int fill_mode_en:1; // 
} DMA_FILL_MODE_REG_s;

typedef union {
    /** @ref DMA_FILL_MODE_REG_s */
    DMA_FILL_MODE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_FILL_MODE_u;

/** @} end of DMA_FILL_MODE_REG */ 

/** @defgroup DMA_FILL_MODE_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int fill_mode_chnl_no:4; // 
    unsigned int fill_mode_incr_val:8; // 
    unsigned int fill_mode_init_val:8; // 
} DMA_FILL_MODE_CFG_REG_s;

typedef union {
    /** @ref DMA_FILL_MODE_CFG_REG_s */
    DMA_FILL_MODE_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_FILL_MODE_CFG_u;

/** @} end of DMA_FILL_MODE_CFG_REG */ 

/** @defgroup DMA_STRIDE_MODE_REG 
 *  @{
 */
typedef struct {
    unsigned int stride_mode_en:1; // 
} DMA_STRIDE_MODE_REG_s;

typedef union {
    /** @ref DMA_STRIDE_MODE_REG_s */
    DMA_STRIDE_MODE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_u;

/** @} end of DMA_STRIDE_MODE_REG */ 

/** @defgroup DMA_STRIDE_MODE_CFG_0_REG 
 *  @{
 */
typedef struct {
    unsigned int stride_mode_chnl_no:4; // 
    unsigned int src_stride_val:4; // 
    unsigned int dst_stride_val:4; // 
    /** @ref DMA_STRIDE_MODE_CFG_0_SRC_INC_E */
    unsigned int src_inc:2; // 
    /** @ref DMA_STRIDE_MODE_CFG_0_DST_INC_E */
    unsigned int dst_inc:2; // 
} DMA_STRIDE_MODE_CFG_0_REG_s;

typedef union {
    /** @ref DMA_STRIDE_MODE_CFG_0_REG_s */
    DMA_STRIDE_MODE_CFG_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_0_u;

/** @} end of DMA_STRIDE_MODE_CFG_0_REG */ 

/** @defgroup DMA_STRIDE_MODE_CFG_1_REG 
 *  @{
 */
typedef struct {
    unsigned int stride_mode_src_base_addr:32; // 
} DMA_STRIDE_MODE_CFG_1_REG_s;

typedef union {
    /** @ref DMA_STRIDE_MODE_CFG_1_REG_s */
    DMA_STRIDE_MODE_CFG_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_1_u;

/** @} end of DMA_STRIDE_MODE_CFG_1_REG */ 

/** @defgroup DMA_STRIDE_MODE_CFG_2_REG 
 *  @{
 */
typedef struct {
    unsigned int stride_mode_dst_base_addr:32; // 
} DMA_STRIDE_MODE_CFG_2_REG_s;

typedef union {
    /** @ref DMA_STRIDE_MODE_CFG_2_REG_s */
    DMA_STRIDE_MODE_CFG_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_2_u;

/** @} end of DMA_STRIDE_MODE_CFG_2_REG */ 

/** @defgroup DMA_EARLY_IRQ_0_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl0:10; // 
} DMA_EARLY_IRQ_0_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_0_REG_s */
    DMA_EARLY_IRQ_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_0_u;

/** @} end of DMA_EARLY_IRQ_0_REG */ 

/** @defgroup DMA_EARLY_IRQ_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl1:10; // 
} DMA_EARLY_IRQ_1_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_1_REG_s */
    DMA_EARLY_IRQ_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_1_u;

/** @} end of DMA_EARLY_IRQ_1_REG */ 

/** @defgroup DMA_EARLY_IRQ_2_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl2:10; // 
} DMA_EARLY_IRQ_2_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_2_REG_s */
    DMA_EARLY_IRQ_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_2_u;

/** @} end of DMA_EARLY_IRQ_2_REG */ 

/** @defgroup DMA_EARLY_IRQ_3_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl3:10; // 
} DMA_EARLY_IRQ_3_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_3_REG_s */
    DMA_EARLY_IRQ_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_3_u;

/** @} end of DMA_EARLY_IRQ_3_REG */ 

/** @defgroup DMA_EARLY_IRQ_4_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl4:10; // 
} DMA_EARLY_IRQ_4_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_4_REG_s */
    DMA_EARLY_IRQ_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_4_u;

/** @} end of DMA_EARLY_IRQ_4_REG */ 

/** @defgroup DMA_EARLY_IRQ_5_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl5:10; // 
} DMA_EARLY_IRQ_5_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_5_REG_s */
    DMA_EARLY_IRQ_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_5_u;

/** @} end of DMA_EARLY_IRQ_5_REG */ 

/** @defgroup DMA_EARLY_IRQ_6_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl6:10; // 
} DMA_EARLY_IRQ_6_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_6_REG_s */
    DMA_EARLY_IRQ_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_6_u;

/** @} end of DMA_EARLY_IRQ_6_REG */ 

/** @defgroup DMA_EARLY_IRQ_7_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl7:10; // 
} DMA_EARLY_IRQ_7_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_7_REG_s */
    DMA_EARLY_IRQ_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_7_u;

/** @} end of DMA_EARLY_IRQ_7_REG */ 

/** @defgroup DMA_EARLY_IRQ_8_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl8:10; // 
} DMA_EARLY_IRQ_8_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_8_REG_s */
    DMA_EARLY_IRQ_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_8_u;

/** @} end of DMA_EARLY_IRQ_8_REG */ 

/** @defgroup DMA_EARLY_IRQ_9_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl9:10; // 
} DMA_EARLY_IRQ_9_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_9_REG_s */
    DMA_EARLY_IRQ_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_9_u;

/** @} end of DMA_EARLY_IRQ_9_REG */ 

/** @defgroup DMA_EARLY_IRQ_10_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl10:10; // 
} DMA_EARLY_IRQ_10_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_10_REG_s */
    DMA_EARLY_IRQ_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_10_u;

/** @} end of DMA_EARLY_IRQ_10_REG */ 

/** @defgroup DMA_EARLY_IRQ_11_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl11:10; // 
} DMA_EARLY_IRQ_11_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_11_REG_s */
    DMA_EARLY_IRQ_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_11_u;

/** @} end of DMA_EARLY_IRQ_11_REG */ 

/** @defgroup DMA_EARLY_IRQ_12_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl12:10; // 
} DMA_EARLY_IRQ_12_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_12_REG_s */
    DMA_EARLY_IRQ_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_12_u;

/** @} end of DMA_EARLY_IRQ_12_REG */ 

/** @defgroup DMA_EARLY_IRQ_13_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl13:10; // 
} DMA_EARLY_IRQ_13_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_13_REG_s */
    DMA_EARLY_IRQ_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_13_u;

/** @} end of DMA_EARLY_IRQ_13_REG */ 

/** @defgroup DMA_EARLY_IRQ_14_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl14:10; // 
} DMA_EARLY_IRQ_14_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_14_REG_s */
    DMA_EARLY_IRQ_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_14_u;

/** @} end of DMA_EARLY_IRQ_14_REG */ 

/** @defgroup DMA_EARLY_IRQ_15_REG 
 *  @{
 */
typedef struct {
    unsigned int rem_transaction_chnl15:10; // 
} DMA_EARLY_IRQ_15_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_15_REG_s */
    DMA_EARLY_IRQ_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_15_u;

/** @} end of DMA_EARLY_IRQ_15_REG */ 

/** @defgroup DMA_EARLY_IRQ_CFG_REG 
 *  @{
 */
typedef struct {
    unsigned int early_irq_alternate_sel:16; // 
} DMA_EARLY_IRQ_CFG_REG_s;

typedef union {
    /** @ref DMA_EARLY_IRQ_CFG_REG_s */
    DMA_EARLY_IRQ_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EARLY_IRQ_CFG_u;

/** @} end of DMA_EARLY_IRQ_CFG_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_en:16; // 
} DMA_REPEATED_TRANSFER_EN_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_EN_REG_s */
    DMA_REPEATED_TRANSFER_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_EN_u;

/** @} end of DMA_REPEATED_TRANSFER_EN_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_0_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl0:10; // 
} DMA_REPEATED_TRANSFER_CHNL_0_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_0_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_0_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_0_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_1_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl1:10; // 
} DMA_REPEATED_TRANSFER_CHNL_1_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_1_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_1_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_1_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_2_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl2:10; // 
} DMA_REPEATED_TRANSFER_CHNL_2_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_2_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_2_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_2_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_3_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl3:10; // 
} DMA_REPEATED_TRANSFER_CHNL_3_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_3_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_3_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_3_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_4_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl4:10; // 
} DMA_REPEATED_TRANSFER_CHNL_4_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_4_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_4_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_4_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_5_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl5:10; // 
} DMA_REPEATED_TRANSFER_CHNL_5_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_5_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_5_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_5_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_6_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl6:10; // 
} DMA_REPEATED_TRANSFER_CHNL_6_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_6_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_6_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_6_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_7_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl7:10; // 
} DMA_REPEATED_TRANSFER_CHNL_7_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_7_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_7_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_7_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_8_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl8:10; // 
} DMA_REPEATED_TRANSFER_CHNL_8_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_8_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_8_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_8_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_9_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl9:10; // 
} DMA_REPEATED_TRANSFER_CHNL_9_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_9_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_9_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_9_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_10_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl10:10; // 
} DMA_REPEATED_TRANSFER_CHNL_10_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_10_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_10_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_10_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_11_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl11:10; // 
} DMA_REPEATED_TRANSFER_CHNL_11_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_11_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_11_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_11_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_12_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl12:10; // 
} DMA_REPEATED_TRANSFER_CHNL_12_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_12_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_12_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_12_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_13_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl13:10; // 
} DMA_REPEATED_TRANSFER_CHNL_13_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_13_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_13_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_13_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_14_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl14:10; // 
} DMA_REPEATED_TRANSFER_CHNL_14_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_14_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_14_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_14_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_CHNL_15_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_total_transaction_chnl15:10; // 
} DMA_REPEATED_TRANSFER_CHNL_15_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_CHNL_15_REG_s */
    DMA_REPEATED_TRANSFER_CHNL_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_15_u;

/** @} end of DMA_REPEATED_TRANSFER_CHNL_15_REG */ 

/** @defgroup DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG 
 *  @{
 */
typedef struct {
    unsigned int rptd_trnsfr_alternate_sel:16; // 
} DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s;

typedef union {
    /** @ref DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s */
    DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_ALTERNATE_SEL_u;

/** @} end of DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG */ 

/** @defgroup DMA_ARBITRATION_REG 
 *  @{
 */
typedef struct {
    /** @ref DMA_ARBITRATION_DMA_RR_EN_E */
    unsigned int dma_rr_en:1; // 
} DMA_ARBITRATION_REG_s;

typedef union {
    /** @ref DMA_ARBITRATION_REG_s */
    DMA_ARBITRATION_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_ARBITRATION_u;

/** @} end of DMA_ARBITRATION_REG */ 

/** @defgroup DMA_ARBITRATION_MASK_REG 
 *  @{
 */
typedef struct {
    unsigned int dma_rr_mask:16; // 
} DMA_ARBITRATION_MASK_REG_s;

typedef union {
    /** @ref DMA_ARBITRATION_MASK_REG_s */
    DMA_ARBITRATION_MASK_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_ARBITRATION_MASK_u;

/** @} end of DMA_ARBITRATION_MASK_REG */ 

/** @} end of DMA_REGISTERS */ 

/** @defgroup DMA_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  DMA_DESC_u DESC; ///< 0x00000000
    volatile  DMA_PWR_EN_u PWR_EN; ///< 0x00000004
    volatile  DMA_RST_CTRL_u RST_CTRL; ///< 0x00000008
    volatile  DMA_RST_STS_u RST_STS; ///< 0x0000000C
    volatile  DMA_CLK_CTRL_u CLK_CTRL; ///< 0x00000010
    volatile  DMA_DBG_CTRL_u DBG_CTRL; ///< 0x00000014
    volatile  DMA_INTR_STS_u INTR_STS; ///< 0x00000018
    volatile  DMA_INTR_EVENT_u INTR_EVENT; ///< 0x0000001C
    volatile  DMA_INTR_EN_0_u INTR_EN_0; ///< 0x00000020
    volatile  DMA_INTR_EN_1_u INTR_EN_1; ///< 0x00000024
    volatile  DMA_INTR_NMI_EN_0_u INTR_NMI_EN_0; ///< 0x00000028
    volatile  DMA_INTR_NMI_EN_1_u INTR_NMI_EN_1; ///< 0x0000002C
    volatile  DMA_EVENT_EN_0_u EVENT_EN_0; ///< 0x00000030
    volatile  DMA_EVENT_EN_1_u EVENT_EN_1; ///< 0x00000034
    volatile  DMA_INTR_SW_SET_u INTR_SW_SET; ///< 0x00000038
    volatile  DMA_CFG_0_u CFG_0; ///< 0x0000003C
    volatile  DMA_CFG_1_u CFG_1; ///< 0x00000040
    volatile  DMA_CFG_2_u CFG_2; ///< 0x00000044
    volatile  DMA_WAITONREQ_u WAITONREQ; ///< 0x00000048
    volatile  DMA_FILL_MODE_u FILL_MODE; ///< 0x0000004C
    volatile  DMA_FILL_MODE_CFG_u FILL_MODE_CFG; ///< 0x00000050
    volatile  DMA_STRIDE_MODE_u STRIDE_MODE; ///< 0x00000054
    volatile  DMA_STRIDE_MODE_CFG_0_u STRIDE_MODE_CFG_0; ///< 0x00000058
    volatile  DMA_STRIDE_MODE_CFG_1_u STRIDE_MODE_CFG_1; ///< 0x0000005C
    volatile  DMA_STRIDE_MODE_CFG_2_u STRIDE_MODE_CFG_2; ///< 0x00000060
    volatile  DMA_EARLY_IRQ_0_u EARLY_IRQ_0; ///< 0x00000064
    volatile  DMA_EARLY_IRQ_1_u EARLY_IRQ_1; ///< 0x00000068
    volatile  DMA_EARLY_IRQ_2_u EARLY_IRQ_2; ///< 0x0000006C
    volatile  DMA_EARLY_IRQ_3_u EARLY_IRQ_3; ///< 0x00000070
    volatile  DMA_EARLY_IRQ_4_u EARLY_IRQ_4; ///< 0x00000074
    volatile  DMA_EARLY_IRQ_5_u EARLY_IRQ_5; ///< 0x00000078
    volatile  DMA_EARLY_IRQ_6_u EARLY_IRQ_6; ///< 0x0000007C
    volatile  DMA_EARLY_IRQ_7_u EARLY_IRQ_7; ///< 0x00000080
    volatile  DMA_EARLY_IRQ_8_u EARLY_IRQ_8; ///< 0x00000084
    volatile  DMA_EARLY_IRQ_9_u EARLY_IRQ_9; ///< 0x00000088
    volatile  DMA_EARLY_IRQ_10_u EARLY_IRQ_10; ///< 0x0000008C
    volatile  DMA_EARLY_IRQ_11_u EARLY_IRQ_11; ///< 0x00000090
    volatile  DMA_EARLY_IRQ_12_u EARLY_IRQ_12; ///< 0x00000094
    volatile  DMA_EARLY_IRQ_13_u EARLY_IRQ_13; ///< 0x00000098
    volatile  DMA_EARLY_IRQ_14_u EARLY_IRQ_14; ///< 0x0000009C
    volatile  DMA_EARLY_IRQ_15_u EARLY_IRQ_15; ///< 0x000000A0
    volatile  DMA_EARLY_IRQ_CFG_u EARLY_IRQ_CFG; ///< 0x000000A4
    volatile  DMA_REPEATED_TRANSFER_EN_u REPEATED_TRANSFER_EN; ///< 0x000000A8
    volatile  DMA_REPEATED_TRANSFER_CHNL_0_u REPEATED_TRANSFER_CHNL_0; ///< 0x000000AC
    volatile  DMA_REPEATED_TRANSFER_CHNL_1_u REPEATED_TRANSFER_CHNL_1; ///< 0x000000B0
    volatile  DMA_REPEATED_TRANSFER_CHNL_2_u REPEATED_TRANSFER_CHNL_2; ///< 0x000000B4
    volatile  DMA_REPEATED_TRANSFER_CHNL_3_u REPEATED_TRANSFER_CHNL_3; ///< 0x000000B8
    volatile  DMA_REPEATED_TRANSFER_CHNL_4_u REPEATED_TRANSFER_CHNL_4; ///< 0x000000BC
    volatile  DMA_REPEATED_TRANSFER_CHNL_5_u REPEATED_TRANSFER_CHNL_5; ///< 0x000000C0
    volatile  DMA_REPEATED_TRANSFER_CHNL_6_u REPEATED_TRANSFER_CHNL_6; ///< 0x000000C4
    volatile  DMA_REPEATED_TRANSFER_CHNL_7_u REPEATED_TRANSFER_CHNL_7; ///< 0x000000C8
    volatile  DMA_REPEATED_TRANSFER_CHNL_8_u REPEATED_TRANSFER_CHNL_8; ///< 0x000000CC
    volatile  DMA_REPEATED_TRANSFER_CHNL_9_u REPEATED_TRANSFER_CHNL_9; ///< 0x000000D0
    volatile  DMA_REPEATED_TRANSFER_CHNL_10_u REPEATED_TRANSFER_CHNL_10; ///< 0x000000D4
    volatile  DMA_REPEATED_TRANSFER_CHNL_11_u REPEATED_TRANSFER_CHNL_11; ///< 0x000000D8
    volatile  DMA_REPEATED_TRANSFER_CHNL_12_u REPEATED_TRANSFER_CHNL_12; ///< 0x000000DC
    volatile  DMA_REPEATED_TRANSFER_CHNL_13_u REPEATED_TRANSFER_CHNL_13; ///< 0x000000E0
    volatile  DMA_REPEATED_TRANSFER_CHNL_14_u REPEATED_TRANSFER_CHNL_14; ///< 0x000000E4
    volatile  DMA_REPEATED_TRANSFER_CHNL_15_u REPEATED_TRANSFER_CHNL_15; ///< 0x000000E8
    volatile  DMA_REPEATED_TRANSFER_ALTERNATE_SEL_u REPEATED_TRANSFER_ALTERNATE_SEL; ///< 0x000000EC
    volatile  DMA_ARBITRATION_u ARBITRATION; ///< 0x000000F0
    volatile  DMA_ARBITRATION_MASK_u ARBITRATION_MASK; ///< 0x000000F4
} DMA_REGS_s;

/** @} end of DMA_MEMORY_MAP */ 

/** @defgroup DMA_KEY 
 *  @{
 */
#define DMA_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000BCU)
#define DMA_RST_CTRL_RST_KEY ((uint32_t)0x000000BCU)
#define DMA_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000BCU)
/** @} end of DMA_KEY*/ 


/** @defgroup DMA_INTERRUPTS 
 *  @{
 */
typedef enum {
	DMA_INTR_EVENT_DMA_DONE_0_IDX = 0, ///<0x0
	DMA_INTR_EVENT_DMA_DONE_1_IDX = 1, ///<0x1
	DMA_INTR_EVENT_DMA_DONE_2_IDX = 2, ///<0x2
	DMA_INTR_EVENT_DMA_DONE_3_IDX = 3, ///<0x3
	DMA_INTR_EVENT_DMA_DONE_4_IDX = 4, ///<0x4
	DMA_INTR_EVENT_DMA_DONE_5_IDX = 5, ///<0x5
	DMA_INTR_EVENT_DMA_DONE_6_IDX = 6, ///<0x6
	DMA_INTR_EVENT_DMA_DONE_7_IDX = 7, ///<0x7
	DMA_INTR_EVENT_DMA_DONE_8_IDX = 8, ///<0x8
	DMA_INTR_EVENT_DMA_DONE_9_IDX = 9, ///<0x9
	DMA_INTR_EVENT_DMA_DONE_10_IDX = 10, ///<0xa
	DMA_INTR_EVENT_DMA_DONE_11_IDX = 11, ///<0xb
	DMA_INTR_EVENT_DMA_DONE_12_IDX = 12, ///<0xc
	DMA_INTR_EVENT_DMA_DONE_13_IDX = 13, ///<0xd
	DMA_INTR_EVENT_DMA_DONE_14_IDX = 14, ///<0xe
	DMA_INTR_EVENT_DMA_DONE_15_IDX = 15, ///<0xf
	DMA_INTR_EVENT_EARLY_IRQ_0_IDX = 16, ///<0x10
	DMA_INTR_EVENT_EARLY_IRQ_1_IDX = 17, ///<0x11
	DMA_INTR_EVENT_EARLY_IRQ_2_IDX = 18, ///<0x12
	DMA_INTR_EVENT_EARLY_IRQ_3_IDX = 19, ///<0x13
	DMA_INTR_EVENT_EARLY_IRQ_4_IDX = 20, ///<0x14
	DMA_INTR_EVENT_EARLY_IRQ_5_IDX = 21, ///<0x15
	DMA_INTR_EVENT_EARLY_IRQ_6_IDX = 22, ///<0x16
	DMA_INTR_EVENT_EARLY_IRQ_7_IDX = 23, ///<0x17
	DMA_INTR_EVENT_EARLY_IRQ_8_IDX = 24, ///<0x18
	DMA_INTR_EVENT_EARLY_IRQ_9_IDX = 25, ///<0x19
	DMA_INTR_EVENT_EARLY_IRQ_10_IDX = 26, ///<0x1a
	DMA_INTR_EVENT_EARLY_IRQ_11_IDX = 27, ///<0x1b
	DMA_INTR_EVENT_EARLY_IRQ_12_IDX = 28, ///<0x1c
	DMA_INTR_EVENT_EARLY_IRQ_13_IDX = 29, ///<0x1d
	DMA_INTR_EVENT_EARLY_IRQ_14_IDX = 30, ///<0x1e
	DMA_INTR_EVENT_EARLY_IRQ_15_IDX = 31, ///<0x1f
} DMA_INTR_EVENT_E;
/** @} end of DMA_INTERRUPTS */ 

/** @addtogroup DMA_STRIDE_MODE_CFG_0_REG  
 *  @{
 */
typedef enum {
	DMA_STRIDE_MODE_CFG_0_SRC_INC_BYTE = 0, ///< 0x0
	DMA_STRIDE_MODE_CFG_0_SRC_INC_HALF_WORD = 1, ///< 0x1
	DMA_STRIDE_MODE_CFG_0_SRC_INC_WORD = 2, ///< 0x2
} DMA_STRIDE_MODE_CFG_0_SRC_INC_E;
/** @} */
/** @addtogroup DMA_STRIDE_MODE_CFG_0_REG  
 *  @{
 */
typedef enum {
	DMA_STRIDE_MODE_CFG_0_DST_INC_BYTE = 0, ///< 0x0
	DMA_STRIDE_MODE_CFG_0_DST_INC_HALF_WORD = 1, ///< 0x1
	DMA_STRIDE_MODE_CFG_0_DST_INC_WORD = 2, ///< 0x2
} DMA_STRIDE_MODE_CFG_0_DST_INC_E;
/** @} */
/** @addtogroup DMA_ARBITRATION_REG  
 *  @{
 */
typedef enum {
	DMA_ARBITRATION_DMA_RR_EN_CLR = 0, ///< 0x0
	DMA_ARBITRATION_DMA_RR_EN_SET = 1, ///< 0x1
} DMA_ARBITRATION_DMA_RR_EN_E;
/** @} */

/** @defgroup DMA_REGISTER_FLAGS 
 *  @{
 */
#define DMA_DESC_MODULE_TYPE_OFS (0)
#define DMA_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define DMA_DESC_MODUE_SUBTYPE_OFS (8)
#define DMA_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define DMA_DESC_MAJOR_REV_OFS (16)
#define DMA_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define DMA_DESC_MINOR_REV_OFS (20)
#define DMA_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define DMA_PWR_EN_PWR_EN_OFS (0)
#define DMA_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define DMA_PWR_EN_PWR_EN_KEY_OFS (24)
#define DMA_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define DMA_RST_CTRL_RST_OFS (0)
#define DMA_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define DMA_RST_CTRL_RST_STS_CLR_OFS (1)
#define DMA_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define DMA_RST_CTRL_RST_KEY_OFS (24)
#define DMA_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define DMA_RST_STS_RST_STS_OFS (0)
#define DMA_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define DMA_CLK_CTRL_CLK_EN_OFS (0)
#define DMA_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define DMA_DBG_CTRL_HALT_MODE_OFS (0)
#define DMA_DBG_CTRL_HALT_MODE_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_STS_INTR_FIRST_OFS (0)
#define DMA_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000003FU)
#define DMA_INTR_EVENT_DMA_DONE_0_OFS (0)
#define DMA_INTR_EVENT_DMA_DONE_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EVENT_DMA_DONE_1_OFS (1)
#define DMA_INTR_EVENT_DMA_DONE_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EVENT_DMA_DONE_2_OFS (2)
#define DMA_INTR_EVENT_DMA_DONE_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EVENT_DMA_DONE_3_OFS (3)
#define DMA_INTR_EVENT_DMA_DONE_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EVENT_DMA_DONE_4_OFS (4)
#define DMA_INTR_EVENT_DMA_DONE_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EVENT_DMA_DONE_5_OFS (5)
#define DMA_INTR_EVENT_DMA_DONE_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EVENT_DMA_DONE_6_OFS (6)
#define DMA_INTR_EVENT_DMA_DONE_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EVENT_DMA_DONE_7_OFS (7)
#define DMA_INTR_EVENT_DMA_DONE_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EVENT_DMA_DONE_8_OFS (8)
#define DMA_INTR_EVENT_DMA_DONE_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EVENT_DMA_DONE_9_OFS (9)
#define DMA_INTR_EVENT_DMA_DONE_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EVENT_DMA_DONE_10_OFS (10)
#define DMA_INTR_EVENT_DMA_DONE_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EVENT_DMA_DONE_11_OFS (11)
#define DMA_INTR_EVENT_DMA_DONE_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EVENT_DMA_DONE_12_OFS (12)
#define DMA_INTR_EVENT_DMA_DONE_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EVENT_DMA_DONE_13_OFS (13)
#define DMA_INTR_EVENT_DMA_DONE_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EVENT_DMA_DONE_14_OFS (14)
#define DMA_INTR_EVENT_DMA_DONE_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EVENT_DMA_DONE_15_OFS (15)
#define DMA_INTR_EVENT_DMA_DONE_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_EVENT_EARLY_IRQ_0_OFS (16)
#define DMA_INTR_EVENT_EARLY_IRQ_0_MASK ((uint32_t)0x00010000U)
#define DMA_INTR_EVENT_EARLY_IRQ_1_OFS (17)
#define DMA_INTR_EVENT_EARLY_IRQ_1_MASK ((uint32_t)0x00020000U)
#define DMA_INTR_EVENT_EARLY_IRQ_2_OFS (18)
#define DMA_INTR_EVENT_EARLY_IRQ_2_MASK ((uint32_t)0x00040000U)
#define DMA_INTR_EVENT_EARLY_IRQ_3_OFS (19)
#define DMA_INTR_EVENT_EARLY_IRQ_3_MASK ((uint32_t)0x00080000U)
#define DMA_INTR_EVENT_EARLY_IRQ_4_OFS (20)
#define DMA_INTR_EVENT_EARLY_IRQ_4_MASK ((uint32_t)0x00100000U)
#define DMA_INTR_EVENT_EARLY_IRQ_5_OFS (21)
#define DMA_INTR_EVENT_EARLY_IRQ_5_MASK ((uint32_t)0x00200000U)
#define DMA_INTR_EVENT_EARLY_IRQ_6_OFS (22)
#define DMA_INTR_EVENT_EARLY_IRQ_6_MASK ((uint32_t)0x00400000U)
#define DMA_INTR_EVENT_EARLY_IRQ_7_OFS (23)
#define DMA_INTR_EVENT_EARLY_IRQ_7_MASK ((uint32_t)0x00800000U)
#define DMA_INTR_EVENT_EARLY_IRQ_8_OFS (24)
#define DMA_INTR_EVENT_EARLY_IRQ_8_MASK ((uint32_t)0x01000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_9_OFS (25)
#define DMA_INTR_EVENT_EARLY_IRQ_9_MASK ((uint32_t)0x02000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_10_OFS (26)
#define DMA_INTR_EVENT_EARLY_IRQ_10_MASK ((uint32_t)0x04000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_11_OFS (27)
#define DMA_INTR_EVENT_EARLY_IRQ_11_MASK ((uint32_t)0x08000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_12_OFS (28)
#define DMA_INTR_EVENT_EARLY_IRQ_12_MASK ((uint32_t)0x10000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_13_OFS (29)
#define DMA_INTR_EVENT_EARLY_IRQ_13_MASK ((uint32_t)0x20000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_14_OFS (30)
#define DMA_INTR_EVENT_EARLY_IRQ_14_MASK ((uint32_t)0x40000000U)
#define DMA_INTR_EVENT_EARLY_IRQ_15_OFS (31)
#define DMA_INTR_EVENT_EARLY_IRQ_15_MASK ((uint32_t)0x80000000U)
#define DMA_INTR_EN_0_DMA_DONE_EN_0_OFS (0)
#define DMA_INTR_EN_0_DMA_DONE_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EN_0_DMA_DONE_EN_1_OFS (1)
#define DMA_INTR_EN_0_DMA_DONE_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EN_0_DMA_DONE_EN_2_OFS (2)
#define DMA_INTR_EN_0_DMA_DONE_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EN_0_DMA_DONE_EN_3_OFS (3)
#define DMA_INTR_EN_0_DMA_DONE_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EN_0_DMA_DONE_EN_4_OFS (4)
#define DMA_INTR_EN_0_DMA_DONE_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EN_0_DMA_DONE_EN_5_OFS (5)
#define DMA_INTR_EN_0_DMA_DONE_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EN_0_DMA_DONE_EN_6_OFS (6)
#define DMA_INTR_EN_0_DMA_DONE_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EN_0_DMA_DONE_EN_7_OFS (7)
#define DMA_INTR_EN_0_DMA_DONE_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EN_0_DMA_DONE_EN_8_OFS (8)
#define DMA_INTR_EN_0_DMA_DONE_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EN_0_DMA_DONE_EN_9_OFS (9)
#define DMA_INTR_EN_0_DMA_DONE_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EN_0_DMA_DONE_EN_10_OFS (10)
#define DMA_INTR_EN_0_DMA_DONE_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EN_0_DMA_DONE_EN_11_OFS (11)
#define DMA_INTR_EN_0_DMA_DONE_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EN_0_DMA_DONE_EN_12_OFS (12)
#define DMA_INTR_EN_0_DMA_DONE_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EN_0_DMA_DONE_EN_13_OFS (13)
#define DMA_INTR_EN_0_DMA_DONE_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EN_0_DMA_DONE_EN_14_OFS (14)
#define DMA_INTR_EN_0_DMA_DONE_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EN_0_DMA_DONE_EN_15_OFS (15)
#define DMA_INTR_EN_0_DMA_DONE_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_0_OFS (0)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_1_OFS (1)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_2_OFS (2)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_3_OFS (3)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_4_OFS (4)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_5_OFS (5)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_6_OFS (6)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_7_OFS (7)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_8_OFS (8)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_9_OFS (9)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_10_OFS (10)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_11_OFS (11)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_12_OFS (12)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_13_OFS (13)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_14_OFS (14)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_15_OFS (15)
#define DMA_INTR_EN_1_EARLY_IRQ_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_0_OFS (0)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_1_OFS (1)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_2_OFS (2)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_3_OFS (3)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_4_OFS (4)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_5_OFS (5)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_6_OFS (6)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_7_OFS (7)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_8_OFS (8)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_9_OFS (9)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_10_OFS (10)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_11_OFS (11)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_12_OFS (12)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_13_OFS (13)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_14_OFS (14)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_15_OFS (15)
#define DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_0_OFS (0)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_1_OFS (1)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_2_OFS (2)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_3_OFS (3)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_4_OFS (4)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_5_OFS (5)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_6_OFS (6)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_7_OFS (7)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_8_OFS (8)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_9_OFS (9)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_10_OFS (10)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_11_OFS (11)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_12_OFS (12)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_13_OFS (13)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_14_OFS (14)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_15_OFS (15)
#define DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_0_OFS (0)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_1_OFS (1)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_2_OFS (2)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_3_OFS (3)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_4_OFS (4)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_5_OFS (5)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_6_OFS (6)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_7_OFS (7)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_8_OFS (8)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_9_OFS (9)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_10_OFS (10)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_11_OFS (11)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_12_OFS (12)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_13_OFS (13)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_14_OFS (14)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_15_OFS (15)
#define DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_0_OFS (0)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_0_MASK ((uint32_t)0x00000001U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_1_OFS (1)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_1_MASK ((uint32_t)0x00000002U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_2_OFS (2)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_2_MASK ((uint32_t)0x00000004U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_3_OFS (3)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_3_MASK ((uint32_t)0x00000008U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_4_OFS (4)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_4_MASK ((uint32_t)0x00000010U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_5_OFS (5)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_5_MASK ((uint32_t)0x00000020U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_6_OFS (6)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_6_MASK ((uint32_t)0x00000040U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_7_OFS (7)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_7_MASK ((uint32_t)0x00000080U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_8_OFS (8)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_8_MASK ((uint32_t)0x00000100U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_9_OFS (9)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_9_MASK ((uint32_t)0x00000200U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_10_OFS (10)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_10_MASK ((uint32_t)0x00000400U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_11_OFS (11)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_11_MASK ((uint32_t)0x00000800U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_12_OFS (12)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_12_MASK ((uint32_t)0x00001000U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_13_OFS (13)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_13_MASK ((uint32_t)0x00002000U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_14_OFS (14)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_14_MASK ((uint32_t)0x00004000U)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_15_OFS (15)
#define DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_0_OFS (0)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_1_OFS (1)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_2_OFS (2)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_3_OFS (3)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_4_OFS (4)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_5_OFS (5)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_6_OFS (6)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_7_OFS (7)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_8_OFS (8)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_9_OFS (9)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_10_OFS (10)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_11_OFS (11)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_12_OFS (12)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_13_OFS (13)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_14_OFS (14)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_15_OFS (15)
#define DMA_INTR_SW_SET_DMA_DONE_SW_SET_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_0_OFS (16)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_0_MASK ((uint32_t)0x00010000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_1_OFS (17)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_1_MASK ((uint32_t)0x00020000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_2_OFS (18)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_2_MASK ((uint32_t)0x00040000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_3_OFS (19)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_3_MASK ((uint32_t)0x00080000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_4_OFS (20)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_4_MASK ((uint32_t)0x00100000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_5_OFS (21)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_5_MASK ((uint32_t)0x00200000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_6_OFS (22)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_6_MASK ((uint32_t)0x00400000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_7_OFS (23)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_7_MASK ((uint32_t)0x00800000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_8_OFS (24)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_8_MASK ((uint32_t)0x01000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_9_OFS (25)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_9_MASK ((uint32_t)0x02000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_10_OFS (26)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_10_MASK ((uint32_t)0x04000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_11_OFS (27)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_11_MASK ((uint32_t)0x08000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_12_OFS (28)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_12_MASK ((uint32_t)0x10000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_13_OFS (29)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_13_MASK ((uint32_t)0x20000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_14_OFS (30)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_14_MASK ((uint32_t)0x40000000U)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_15_OFS (31)
#define DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_15_MASK ((uint32_t)0x80000000U)
#define DMA_CFG_0_CTRL_BASE_PTR_OFS (0)
#define DMA_CFG_0_CTRL_BASE_PTR_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_CFG_1_ALT_CTRL_BASE_PTR_OFS (0)
#define DMA_CFG_1_ALT_CTRL_BASE_PTR_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_CFG_2_CHNLS_MINUS_1_OFS (0)
#define DMA_CFG_2_CHNLS_MINUS_1_MASK ((uint32_t)0x0000001FU)
#define DMA_CFG_2_MASTER_ENABLE_OFS (5)
#define DMA_CFG_2_MASTER_ENABLE_MASK ((uint32_t)0x00000020U)
#define DMA_WAITONREQ_WAITONREQ_OFS (0)
#define DMA_WAITONREQ_WAITONREQ_MASK ((uint32_t)0x0000FFFFU)
#define DMA_FILL_MODE_FILL_MODE_EN_OFS (0)
#define DMA_FILL_MODE_FILL_MODE_EN_MASK ((uint32_t)0x00000001U)
#define DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_OFS (0)
#define DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_MASK ((uint32_t)0x0000000FU)
#define DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_OFS (4)
#define DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_MASK ((uint32_t)0x00000FF0U)
#define DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_OFS (12)
#define DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_MASK ((uint32_t)0x000FF000U)
#define DMA_STRIDE_MODE_STRIDE_MODE_EN_OFS (0)
#define DMA_STRIDE_MODE_STRIDE_MODE_EN_MASK ((uint32_t)0x00000001U)
#define DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_OFS (0)
#define DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_MASK ((uint32_t)0x0000000FU)
#define DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_OFS (4)
#define DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_MASK ((uint32_t)0x000000F0U)
#define DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_OFS (8)
#define DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_MASK ((uint32_t)0x00000F00U)
#define DMA_STRIDE_MODE_CFG_0_SRC_INC_OFS (12)
#define DMA_STRIDE_MODE_CFG_0_SRC_INC_MASK ((uint32_t)0x00003000U)
#define DMA_STRIDE_MODE_CFG_0_DST_INC_OFS (14)
#define DMA_STRIDE_MODE_CFG_0_DST_INC_MASK ((uint32_t)0x0000C000U)
#define DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_OFS (0)
#define DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_OFS (0)
#define DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_OFS (0)
#define DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_OFS (0)
#define DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_OFS (0)
#define DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_OFS (0)
#define DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_OFS (0)
#define DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_OFS (0)
#define DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_OFS (0)
#define DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_OFS (0)
#define DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_OFS (0)
#define DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_OFS (0)
#define DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_OFS (0)
#define DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_OFS (0)
#define DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_OFS (0)
#define DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_OFS (0)
#define DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_OFS (0)
#define DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_OFS (0)
#define DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_MASK ((uint32_t)0x000003FFU)
#define DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_OFS (0)
#define DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_MASK ((uint32_t)0x0000FFFFU)
#define DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_OFS (0)
#define DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_MASK ((uint32_t)0x0000FFFFU)
#define DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_OFS (0)
#define DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_MASK ((uint32_t)0x0000FFFFU)
#define DMA_ARBITRATION_DMA_RR_EN_OFS (0)
#define DMA_ARBITRATION_DMA_RR_EN_MASK ((uint32_t)0x00000001U)
#define DMA_ARBITRATION_MASK_DMA_RR_MASK_OFS (0)
#define DMA_ARBITRATION_MASK_DMA_RR_MASK_MASK ((uint32_t)0x0000FFFFU)
/** @} end of DMA_REGISTER_FLAGS */ 

/** @} end of DMA */

/** @} end of group FD32M0P_Peripherals */
#endif
