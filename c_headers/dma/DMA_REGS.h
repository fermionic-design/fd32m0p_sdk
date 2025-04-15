#ifndef DMA_REGISTERS_H
#define DMA_REGISTERS_H

#include <stdint.h>

typedef struct DMA_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} DMA_DESC_REG_s;

typedef union DMA_DESC_u {
    DMA_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DESC_u;

typedef struct DMA_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} DMA_PWR_EN_REG_s;

typedef union DMA_PWR_EN_u {
    DMA_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_PWR_EN_u;

typedef struct DMA_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} DMA_RST_CTRL_REG_s;

typedef union DMA_RST_CTRL_u {
    DMA_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_RST_CTRL_u;

typedef struct DMA_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} DMA_RST_STS_REG_s;

typedef union DMA_RST_STS_u {
    DMA_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_RST_STS_u;

typedef struct DMA_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} DMA_CLK_CTRL_REG_s;

typedef union DMA_CLK_CTRL_u {
    DMA_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_CLK_CTRL_u;

typedef struct DMA_DBG_CTRL_REG_s {
    unsigned int halt_mode:1; // 
} DMA_DBG_CTRL_REG_s;

typedef union DMA_DBG_CTRL_u {
    DMA_DBG_CTRL_REG_s DBG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DBG_CTRL_u;

typedef struct DMA_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} DMA_INTR_STS_REG_s;

typedef union DMA_INTR_STS_u {
    DMA_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_STS_u;

typedef struct DMA_INTR_EVENT_REG_s {
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

typedef union DMA_INTR_EVENT_u {
    DMA_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EVENT_u;

typedef struct DMA_INTR_EN_0_REG_s {
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

typedef union DMA_INTR_EN_0_u {
    DMA_INTR_EN_0_REG_s INTR_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EN_0_u;

typedef struct DMA_INTR_EN_1_REG_s {
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

typedef union DMA_INTR_EN_1_u {
    DMA_INTR_EN_1_REG_s INTR_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_EN_1_u;

typedef struct DMA_INTR_NMI_EN_0_REG_s {
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

typedef union DMA_INTR_NMI_EN_0_u {
    DMA_INTR_NMI_EN_0_REG_s INTR_NMI_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_NMI_EN_0_u;

typedef struct DMA_INTR_NMI_EN_1_REG_s {
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

typedef union DMA_INTR_NMI_EN_1_u {
    DMA_INTR_NMI_EN_1_REG_s INTR_NMI_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_NMI_EN_1_u;

typedef struct DMA_EVENT_EN_0_REG_s {
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

typedef union DMA_EVENT_EN_0_u {
    DMA_EVENT_EN_0_REG_s EVENT_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EVENT_EN_0_u;

typedef struct DMA_EVENT_EN_1_REG_s {
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

typedef union DMA_EVENT_EN_1_u {
    DMA_EVENT_EN_1_REG_s EVENT_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_EVENT_EN_1_u;

typedef struct DMA_INTR_SW_SET_REG_s {
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

typedef union DMA_INTR_SW_SET_u {
    DMA_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_INTR_SW_SET_u;

typedef struct DMA_DMA_CFG_0_REG_s {
    unsigned int ctrl_base_ptr:32; // 
} DMA_DMA_CFG_0_REG_s;

typedef union DMA_DMA_CFG_0_u {
    DMA_DMA_CFG_0_REG_s DMA_CFG_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_CFG_0_u;

typedef struct DMA_DMA_CFG_1_REG_s {
    unsigned int alt_ctrl_base_ptr:32; // 
} DMA_DMA_CFG_1_REG_s;

typedef union DMA_DMA_CFG_1_u {
    DMA_DMA_CFG_1_REG_s DMA_CFG_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_CFG_1_u;

typedef struct DMA_DMA_CFG_2_REG_s {
    unsigned int chnls_minus_1:5; // 
    unsigned int master_enable:1; // 
} DMA_DMA_CFG_2_REG_s;

typedef union DMA_DMA_CFG_2_u {
    DMA_DMA_CFG_2_REG_s DMA_CFG_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_CFG_2_u;

typedef struct DMA_DMA_WAITONREQ_REG_s {
    unsigned int waitonreq:16; // 
} DMA_DMA_WAITONREQ_REG_s;

typedef union DMA_DMA_WAITONREQ_u {
    DMA_DMA_WAITONREQ_REG_s DMA_WAITONREQ;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_WAITONREQ_u;

typedef struct DMA_FILL_MODE_REG_s {
    unsigned int fill_mode_en:1; // 
} DMA_FILL_MODE_REG_s;

typedef union DMA_FILL_MODE_u {
    DMA_FILL_MODE_REG_s FILL_MODE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_FILL_MODE_u;

typedef struct DMA_FILL_MODE_CFG_REG_s {
    unsigned int fill_mode_chnl_no:4; // 
    unsigned int fill_mode_incr_val:8; // 
    unsigned int fill_mode_init_val:8; // 
} DMA_FILL_MODE_CFG_REG_s;

typedef union DMA_FILL_MODE_CFG_u {
    DMA_FILL_MODE_CFG_REG_s FILL_MODE_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_FILL_MODE_CFG_u;

typedef struct DMA_STRIDE_MODE_REG_s {
    unsigned int stride_mode_en:1; // 
} DMA_STRIDE_MODE_REG_s;

typedef union DMA_STRIDE_MODE_u {
    DMA_STRIDE_MODE_REG_s STRIDE_MODE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_u;

typedef struct DMA_STRIDE_MODE_CFG_0_REG_s {
    unsigned int stride_mode_chnl_no:4; // 
    unsigned int src_stride_val:4; // 
    unsigned int dst_stride_val:4; // 
    unsigned int src_inc:2; // 
    unsigned int dst_inc:2; // 
} DMA_STRIDE_MODE_CFG_0_REG_s;

typedef union DMA_STRIDE_MODE_CFG_0_u {
    DMA_STRIDE_MODE_CFG_0_REG_s STRIDE_MODE_CFG_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_0_u;

typedef struct DMA_STRIDE_MODE_CFG_1_REG_s {
    unsigned int stride_mode_src_base_addr:32; // 
} DMA_STRIDE_MODE_CFG_1_REG_s;

typedef union DMA_STRIDE_MODE_CFG_1_u {
    DMA_STRIDE_MODE_CFG_1_REG_s STRIDE_MODE_CFG_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_1_u;

typedef struct DMA_STRIDE_MODE_CFG_2_REG_s {
    unsigned int stride_mode_dst_base_addr:32; // 
} DMA_STRIDE_MODE_CFG_2_REG_s;

typedef union DMA_STRIDE_MODE_CFG_2_u {
    DMA_STRIDE_MODE_CFG_2_REG_s STRIDE_MODE_CFG_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_STRIDE_MODE_CFG_2_u;

typedef struct DMA_DMA_EARLY_IRQ_0_REG_s {
    unsigned int rem_transaction_chnl0:10; // 
} DMA_DMA_EARLY_IRQ_0_REG_s;

typedef union DMA_DMA_EARLY_IRQ_0_u {
    DMA_DMA_EARLY_IRQ_0_REG_s DMA_EARLY_IRQ_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_0_u;

typedef struct DMA_DMA_EARLY_IRQ_1_REG_s {
    unsigned int rem_transaction_chnl1:10; // 
} DMA_DMA_EARLY_IRQ_1_REG_s;

typedef union DMA_DMA_EARLY_IRQ_1_u {
    DMA_DMA_EARLY_IRQ_1_REG_s DMA_EARLY_IRQ_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_1_u;

typedef struct DMA_DMA_EARLY_IRQ_2_REG_s {
    unsigned int rem_transaction_chnl2:10; // 
} DMA_DMA_EARLY_IRQ_2_REG_s;

typedef union DMA_DMA_EARLY_IRQ_2_u {
    DMA_DMA_EARLY_IRQ_2_REG_s DMA_EARLY_IRQ_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_2_u;

typedef struct DMA_DMA_EARLY_IRQ_3_REG_s {
    unsigned int rem_transaction_chnl3:10; // 
} DMA_DMA_EARLY_IRQ_3_REG_s;

typedef union DMA_DMA_EARLY_IRQ_3_u {
    DMA_DMA_EARLY_IRQ_3_REG_s DMA_EARLY_IRQ_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_3_u;

typedef struct DMA_DMA_EARLY_IRQ_4_REG_s {
    unsigned int rem_transaction_chnl4:10; // 
} DMA_DMA_EARLY_IRQ_4_REG_s;

typedef union DMA_DMA_EARLY_IRQ_4_u {
    DMA_DMA_EARLY_IRQ_4_REG_s DMA_EARLY_IRQ_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_4_u;

typedef struct DMA_DMA_EARLY_IRQ_5_REG_s {
    unsigned int rem_transaction_chnl5:10; // 
} DMA_DMA_EARLY_IRQ_5_REG_s;

typedef union DMA_DMA_EARLY_IRQ_5_u {
    DMA_DMA_EARLY_IRQ_5_REG_s DMA_EARLY_IRQ_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_5_u;

typedef struct DMA_DMA_EARLY_IRQ_6_REG_s {
    unsigned int rem_transaction_chnl6:10; // 
} DMA_DMA_EARLY_IRQ_6_REG_s;

typedef union DMA_DMA_EARLY_IRQ_6_u {
    DMA_DMA_EARLY_IRQ_6_REG_s DMA_EARLY_IRQ_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_6_u;

typedef struct DMA_DMA_EARLY_IRQ_7_REG_s {
    unsigned int rem_transaction_chnl7:10; // 
} DMA_DMA_EARLY_IRQ_7_REG_s;

typedef union DMA_DMA_EARLY_IRQ_7_u {
    DMA_DMA_EARLY_IRQ_7_REG_s DMA_EARLY_IRQ_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_7_u;

typedef struct DMA_DMA_EARLY_IRQ_8_REG_s {
    unsigned int rem_transaction_chnl8:10; // 
} DMA_DMA_EARLY_IRQ_8_REG_s;

typedef union DMA_DMA_EARLY_IRQ_8_u {
    DMA_DMA_EARLY_IRQ_8_REG_s DMA_EARLY_IRQ_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_8_u;

typedef struct DMA_DMA_EARLY_IRQ_9_REG_s {
    unsigned int rem_transaction_chnl9:10; // 
} DMA_DMA_EARLY_IRQ_9_REG_s;

typedef union DMA_DMA_EARLY_IRQ_9_u {
    DMA_DMA_EARLY_IRQ_9_REG_s DMA_EARLY_IRQ_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_9_u;

typedef struct DMA_DMA_EARLY_IRQ_10_REG_s {
    unsigned int rem_transaction_chnl10:10; // 
} DMA_DMA_EARLY_IRQ_10_REG_s;

typedef union DMA_DMA_EARLY_IRQ_10_u {
    DMA_DMA_EARLY_IRQ_10_REG_s DMA_EARLY_IRQ_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_10_u;

typedef struct DMA_DMA_EARLY_IRQ_11_REG_s {
    unsigned int rem_transaction_chnl11:10; // 
} DMA_DMA_EARLY_IRQ_11_REG_s;

typedef union DMA_DMA_EARLY_IRQ_11_u {
    DMA_DMA_EARLY_IRQ_11_REG_s DMA_EARLY_IRQ_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_11_u;

typedef struct DMA_DMA_EARLY_IRQ_12_REG_s {
    unsigned int rem_transaction_chnl12:10; // 
} DMA_DMA_EARLY_IRQ_12_REG_s;

typedef union DMA_DMA_EARLY_IRQ_12_u {
    DMA_DMA_EARLY_IRQ_12_REG_s DMA_EARLY_IRQ_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_12_u;

typedef struct DMA_DMA_EARLY_IRQ_13_REG_s {
    unsigned int rem_transaction_chnl13:10; // 
} DMA_DMA_EARLY_IRQ_13_REG_s;

typedef union DMA_DMA_EARLY_IRQ_13_u {
    DMA_DMA_EARLY_IRQ_13_REG_s DMA_EARLY_IRQ_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_13_u;

typedef struct DMA_DMA_EARLY_IRQ_14_REG_s {
    unsigned int rem_transaction_chnl14:10; // 
} DMA_DMA_EARLY_IRQ_14_REG_s;

typedef union DMA_DMA_EARLY_IRQ_14_u {
    DMA_DMA_EARLY_IRQ_14_REG_s DMA_EARLY_IRQ_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_14_u;

typedef struct DMA_DMA_EARLY_IRQ_15_REG_s {
    unsigned int rem_transaction_chnl15:10; // 
} DMA_DMA_EARLY_IRQ_15_REG_s;

typedef union DMA_DMA_EARLY_IRQ_15_u {
    DMA_DMA_EARLY_IRQ_15_REG_s DMA_EARLY_IRQ_15;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_15_u;

typedef struct DMA_DMA_EARLY_IRQ_CFG_REG_s {
    unsigned int early_irq_alternate_sel:16; // 
} DMA_DMA_EARLY_IRQ_CFG_REG_s;

typedef union DMA_DMA_EARLY_IRQ_CFG_u {
    DMA_DMA_EARLY_IRQ_CFG_REG_s DMA_EARLY_IRQ_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_EARLY_IRQ_CFG_u;

typedef struct DMA_REPEATED_TRANSFER_EN_REG_s {
    unsigned int rptd_trnsfr_en:16; // 
} DMA_REPEATED_TRANSFER_EN_REG_s;

typedef union DMA_REPEATED_TRANSFER_EN_u {
    DMA_REPEATED_TRANSFER_EN_REG_s REPEATED_TRANSFER_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_EN_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_0_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl0:10; // 
} DMA_REPEATED_TRANSFER_CHNL_0_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_0_u {
    DMA_REPEATED_TRANSFER_CHNL_0_REG_s REPEATED_TRANSFER_CHNL_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_0_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_1_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl1:10; // 
} DMA_REPEATED_TRANSFER_CHNL_1_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_1_u {
    DMA_REPEATED_TRANSFER_CHNL_1_REG_s REPEATED_TRANSFER_CHNL_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_1_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_2_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl2:10; // 
} DMA_REPEATED_TRANSFER_CHNL_2_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_2_u {
    DMA_REPEATED_TRANSFER_CHNL_2_REG_s REPEATED_TRANSFER_CHNL_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_2_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_3_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl3:10; // 
} DMA_REPEATED_TRANSFER_CHNL_3_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_3_u {
    DMA_REPEATED_TRANSFER_CHNL_3_REG_s REPEATED_TRANSFER_CHNL_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_3_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_4_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl4:10; // 
} DMA_REPEATED_TRANSFER_CHNL_4_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_4_u {
    DMA_REPEATED_TRANSFER_CHNL_4_REG_s REPEATED_TRANSFER_CHNL_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_4_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_5_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl5:10; // 
} DMA_REPEATED_TRANSFER_CHNL_5_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_5_u {
    DMA_REPEATED_TRANSFER_CHNL_5_REG_s REPEATED_TRANSFER_CHNL_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_5_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_6_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl6:10; // 
} DMA_REPEATED_TRANSFER_CHNL_6_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_6_u {
    DMA_REPEATED_TRANSFER_CHNL_6_REG_s REPEATED_TRANSFER_CHNL_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_6_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_7_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl7:10; // 
} DMA_REPEATED_TRANSFER_CHNL_7_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_7_u {
    DMA_REPEATED_TRANSFER_CHNL_7_REG_s REPEATED_TRANSFER_CHNL_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_7_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_8_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl8:10; // 
} DMA_REPEATED_TRANSFER_CHNL_8_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_8_u {
    DMA_REPEATED_TRANSFER_CHNL_8_REG_s REPEATED_TRANSFER_CHNL_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_8_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_9_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl9:10; // 
} DMA_REPEATED_TRANSFER_CHNL_9_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_9_u {
    DMA_REPEATED_TRANSFER_CHNL_9_REG_s REPEATED_TRANSFER_CHNL_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_9_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_10_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl10:10; // 
} DMA_REPEATED_TRANSFER_CHNL_10_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_10_u {
    DMA_REPEATED_TRANSFER_CHNL_10_REG_s REPEATED_TRANSFER_CHNL_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_10_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_11_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl11:10; // 
} DMA_REPEATED_TRANSFER_CHNL_11_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_11_u {
    DMA_REPEATED_TRANSFER_CHNL_11_REG_s REPEATED_TRANSFER_CHNL_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_11_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_12_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl12:10; // 
} DMA_REPEATED_TRANSFER_CHNL_12_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_12_u {
    DMA_REPEATED_TRANSFER_CHNL_12_REG_s REPEATED_TRANSFER_CHNL_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_12_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_13_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl13:10; // 
} DMA_REPEATED_TRANSFER_CHNL_13_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_13_u {
    DMA_REPEATED_TRANSFER_CHNL_13_REG_s REPEATED_TRANSFER_CHNL_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_13_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_14_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl14:10; // 
} DMA_REPEATED_TRANSFER_CHNL_14_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_14_u {
    DMA_REPEATED_TRANSFER_CHNL_14_REG_s REPEATED_TRANSFER_CHNL_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_14_u;

typedef struct DMA_REPEATED_TRANSFER_CHNL_15_REG_s {
    unsigned int rptd_trnsfr_total_transaction_chnl15:10; // 
} DMA_REPEATED_TRANSFER_CHNL_15_REG_s;

typedef union DMA_REPEATED_TRANSFER_CHNL_15_u {
    DMA_REPEATED_TRANSFER_CHNL_15_REG_s REPEATED_TRANSFER_CHNL_15;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_CHNL_15_u;

typedef struct DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s {
    unsigned int rptd_trnsfr_alternate_sel:16; // 
} DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s;

typedef union DMA_REPEATED_TRANSFER_ALTERNATE_SEL_u {
    DMA_REPEATED_TRANSFER_ALTERNATE_SEL_REG_s REPEATED_TRANSFER_ALTERNATE_SEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_REPEATED_TRANSFER_ALTERNATE_SEL_u;

typedef struct DMA_DMA_ARBITRATION_REG_s {
    unsigned int dma_rr_en:1; // 
} DMA_DMA_ARBITRATION_REG_s;

typedef union DMA_DMA_ARBITRATION_u {
    DMA_DMA_ARBITRATION_REG_s DMA_ARBITRATION;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_ARBITRATION_u;

typedef struct DMA_DMA_ARBITRATION_MASK_REG_s {
    unsigned int dma_rr_mask:16; // 
} DMA_DMA_ARBITRATION_MASK_REG_s;

typedef union DMA_DMA_ARBITRATION_MASK_u {
    DMA_DMA_ARBITRATION_MASK_REG_s DMA_ARBITRATION_MASK;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} DMA_DMA_ARBITRATION_MASK_u;

typedef struct DMA_REGS_s{
    volatile DMA_DESC_u DESC;
    volatile DMA_PWR_EN_u PWR_EN;
    volatile DMA_RST_CTRL_u RST_CTRL;
    volatile DMA_RST_STS_u RST_STS;
    volatile DMA_CLK_CTRL_u CLK_CTRL;
    volatile DMA_DBG_CTRL_u DBG_CTRL;
    volatile DMA_INTR_STS_u INTR_STS;
    volatile DMA_INTR_EVENT_u INTR_EVENT;
    volatile DMA_INTR_EN_0_u INTR_EN_0;
    volatile DMA_INTR_EN_1_u INTR_EN_1;
    volatile DMA_INTR_NMI_EN_0_u INTR_NMI_EN_0;
    volatile DMA_INTR_NMI_EN_1_u INTR_NMI_EN_1;
    volatile DMA_EVENT_EN_0_u EVENT_EN_0;
    volatile DMA_EVENT_EN_1_u EVENT_EN_1;
    volatile DMA_INTR_SW_SET_u INTR_SW_SET;
    volatile DMA_DMA_CFG_0_u DMA_CFG_0;
    volatile DMA_DMA_CFG_1_u DMA_CFG_1;
    volatile DMA_DMA_CFG_2_u DMA_CFG_2;
    volatile DMA_DMA_WAITONREQ_u DMA_WAITONREQ;
    volatile DMA_FILL_MODE_u FILL_MODE;
    volatile DMA_FILL_MODE_CFG_u FILL_MODE_CFG;
    volatile DMA_STRIDE_MODE_u STRIDE_MODE;
    volatile DMA_STRIDE_MODE_CFG_0_u STRIDE_MODE_CFG_0;
    volatile DMA_STRIDE_MODE_CFG_1_u STRIDE_MODE_CFG_1;
    volatile DMA_STRIDE_MODE_CFG_2_u STRIDE_MODE_CFG_2;
    volatile DMA_DMA_EARLY_IRQ_0_u DMA_EARLY_IRQ_0;
    volatile DMA_DMA_EARLY_IRQ_1_u DMA_EARLY_IRQ_1;
    volatile DMA_DMA_EARLY_IRQ_2_u DMA_EARLY_IRQ_2;
    volatile DMA_DMA_EARLY_IRQ_3_u DMA_EARLY_IRQ_3;
    volatile DMA_DMA_EARLY_IRQ_4_u DMA_EARLY_IRQ_4;
    volatile DMA_DMA_EARLY_IRQ_5_u DMA_EARLY_IRQ_5;
    volatile DMA_DMA_EARLY_IRQ_6_u DMA_EARLY_IRQ_6;
    volatile DMA_DMA_EARLY_IRQ_7_u DMA_EARLY_IRQ_7;
    volatile DMA_DMA_EARLY_IRQ_8_u DMA_EARLY_IRQ_8;
    volatile DMA_DMA_EARLY_IRQ_9_u DMA_EARLY_IRQ_9;
    volatile DMA_DMA_EARLY_IRQ_10_u DMA_EARLY_IRQ_10;
    volatile DMA_DMA_EARLY_IRQ_11_u DMA_EARLY_IRQ_11;
    volatile DMA_DMA_EARLY_IRQ_12_u DMA_EARLY_IRQ_12;
    volatile DMA_DMA_EARLY_IRQ_13_u DMA_EARLY_IRQ_13;
    volatile DMA_DMA_EARLY_IRQ_14_u DMA_EARLY_IRQ_14;
    volatile DMA_DMA_EARLY_IRQ_15_u DMA_EARLY_IRQ_15;
    volatile DMA_DMA_EARLY_IRQ_CFG_u DMA_EARLY_IRQ_CFG;
    volatile DMA_REPEATED_TRANSFER_EN_u REPEATED_TRANSFER_EN;
    volatile DMA_REPEATED_TRANSFER_CHNL_0_u REPEATED_TRANSFER_CHNL_0;
    volatile DMA_REPEATED_TRANSFER_CHNL_1_u REPEATED_TRANSFER_CHNL_1;
    volatile DMA_REPEATED_TRANSFER_CHNL_2_u REPEATED_TRANSFER_CHNL_2;
    volatile DMA_REPEATED_TRANSFER_CHNL_3_u REPEATED_TRANSFER_CHNL_3;
    volatile DMA_REPEATED_TRANSFER_CHNL_4_u REPEATED_TRANSFER_CHNL_4;
    volatile DMA_REPEATED_TRANSFER_CHNL_5_u REPEATED_TRANSFER_CHNL_5;
    volatile DMA_REPEATED_TRANSFER_CHNL_6_u REPEATED_TRANSFER_CHNL_6;
    volatile DMA_REPEATED_TRANSFER_CHNL_7_u REPEATED_TRANSFER_CHNL_7;
    volatile DMA_REPEATED_TRANSFER_CHNL_8_u REPEATED_TRANSFER_CHNL_8;
    volatile DMA_REPEATED_TRANSFER_CHNL_9_u REPEATED_TRANSFER_CHNL_9;
    volatile DMA_REPEATED_TRANSFER_CHNL_10_u REPEATED_TRANSFER_CHNL_10;
    volatile DMA_REPEATED_TRANSFER_CHNL_11_u REPEATED_TRANSFER_CHNL_11;
    volatile DMA_REPEATED_TRANSFER_CHNL_12_u REPEATED_TRANSFER_CHNL_12;
    volatile DMA_REPEATED_TRANSFER_CHNL_13_u REPEATED_TRANSFER_CHNL_13;
    volatile DMA_REPEATED_TRANSFER_CHNL_14_u REPEATED_TRANSFER_CHNL_14;
    volatile DMA_REPEATED_TRANSFER_CHNL_15_u REPEATED_TRANSFER_CHNL_15;
    volatile DMA_REPEATED_TRANSFER_ALTERNATE_SEL_u REPEATED_TRANSFER_ALTERNATE_SEL;
    volatile DMA_DMA_ARBITRATION_u DMA_ARBITRATION;
    volatile DMA_DMA_ARBITRATION_MASK_u DMA_ARBITRATION_MASK;
} DMA_REGS_s;

#define DMA_DESC_module_type_OFS (0)
#define DMA_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define DMA_DESC_modue_subtype_OFS (8)
#define DMA_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define DMA_DESC_major_rev_OFS (16)
#define DMA_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define DMA_DESC_minor_rev_OFS (20)
#define DMA_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define DMA_PWR_EN_pwr_en_OFS (0)
#define DMA_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define DMA_PWR_EN_pwr_en_key_OFS (24)
#define DMA_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define DMA_RST_CTRL_rst_OFS (0)
#define DMA_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define DMA_RST_CTRL_rst_sts_clr_OFS (1)
#define DMA_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define DMA_RST_CTRL_rst_key_OFS (24)
#define DMA_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define DMA_RST_STS_rst_sts_OFS (0)
#define DMA_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define DMA_CLK_CTRL_clk_en_OFS (0)
#define DMA_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define DMA_DBG_CTRL_halt_mode_OFS (0)
#define DMA_DBG_CTRL_halt_mode_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_STS_intr_first_OFS (0)
#define DMA_INTR_STS_intr_first_MASK ((uint32_t)0x0000003FU)
#define DMA_INTR_EVENT_dma_done_0_OFS (0)
#define DMA_INTR_EVENT_dma_done_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EVENT_dma_done_1_OFS (1)
#define DMA_INTR_EVENT_dma_done_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EVENT_dma_done_2_OFS (2)
#define DMA_INTR_EVENT_dma_done_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EVENT_dma_done_3_OFS (3)
#define DMA_INTR_EVENT_dma_done_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EVENT_dma_done_4_OFS (4)
#define DMA_INTR_EVENT_dma_done_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EVENT_dma_done_5_OFS (5)
#define DMA_INTR_EVENT_dma_done_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EVENT_dma_done_6_OFS (6)
#define DMA_INTR_EVENT_dma_done_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EVENT_dma_done_7_OFS (7)
#define DMA_INTR_EVENT_dma_done_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EVENT_dma_done_8_OFS (8)
#define DMA_INTR_EVENT_dma_done_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EVENT_dma_done_9_OFS (9)
#define DMA_INTR_EVENT_dma_done_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EVENT_dma_done_10_OFS (10)
#define DMA_INTR_EVENT_dma_done_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EVENT_dma_done_11_OFS (11)
#define DMA_INTR_EVENT_dma_done_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EVENT_dma_done_12_OFS (12)
#define DMA_INTR_EVENT_dma_done_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EVENT_dma_done_13_OFS (13)
#define DMA_INTR_EVENT_dma_done_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EVENT_dma_done_14_OFS (14)
#define DMA_INTR_EVENT_dma_done_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EVENT_dma_done_15_OFS (15)
#define DMA_INTR_EVENT_dma_done_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_EVENT_early_irq_0_OFS (16)
#define DMA_INTR_EVENT_early_irq_0_MASK ((uint32_t)0x00010000U)
#define DMA_INTR_EVENT_early_irq_1_OFS (17)
#define DMA_INTR_EVENT_early_irq_1_MASK ((uint32_t)0x00020000U)
#define DMA_INTR_EVENT_early_irq_2_OFS (18)
#define DMA_INTR_EVENT_early_irq_2_MASK ((uint32_t)0x00040000U)
#define DMA_INTR_EVENT_early_irq_3_OFS (19)
#define DMA_INTR_EVENT_early_irq_3_MASK ((uint32_t)0x00080000U)
#define DMA_INTR_EVENT_early_irq_4_OFS (20)
#define DMA_INTR_EVENT_early_irq_4_MASK ((uint32_t)0x00100000U)
#define DMA_INTR_EVENT_early_irq_5_OFS (21)
#define DMA_INTR_EVENT_early_irq_5_MASK ((uint32_t)0x00200000U)
#define DMA_INTR_EVENT_early_irq_6_OFS (22)
#define DMA_INTR_EVENT_early_irq_6_MASK ((uint32_t)0x00400000U)
#define DMA_INTR_EVENT_early_irq_7_OFS (23)
#define DMA_INTR_EVENT_early_irq_7_MASK ((uint32_t)0x00800000U)
#define DMA_INTR_EVENT_early_irq_8_OFS (24)
#define DMA_INTR_EVENT_early_irq_8_MASK ((uint32_t)0x01000000U)
#define DMA_INTR_EVENT_early_irq_9_OFS (25)
#define DMA_INTR_EVENT_early_irq_9_MASK ((uint32_t)0x02000000U)
#define DMA_INTR_EVENT_early_irq_10_OFS (26)
#define DMA_INTR_EVENT_early_irq_10_MASK ((uint32_t)0x04000000U)
#define DMA_INTR_EVENT_early_irq_11_OFS (27)
#define DMA_INTR_EVENT_early_irq_11_MASK ((uint32_t)0x08000000U)
#define DMA_INTR_EVENT_early_irq_12_OFS (28)
#define DMA_INTR_EVENT_early_irq_12_MASK ((uint32_t)0x10000000U)
#define DMA_INTR_EVENT_early_irq_13_OFS (29)
#define DMA_INTR_EVENT_early_irq_13_MASK ((uint32_t)0x20000000U)
#define DMA_INTR_EVENT_early_irq_14_OFS (30)
#define DMA_INTR_EVENT_early_irq_14_MASK ((uint32_t)0x40000000U)
#define DMA_INTR_EVENT_early_irq_15_OFS (31)
#define DMA_INTR_EVENT_early_irq_15_MASK ((uint32_t)0x80000000U)
#define DMA_INTR_EN_0_dma_done_en_0_OFS (0)
#define DMA_INTR_EN_0_dma_done_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EN_0_dma_done_en_1_OFS (1)
#define DMA_INTR_EN_0_dma_done_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EN_0_dma_done_en_2_OFS (2)
#define DMA_INTR_EN_0_dma_done_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EN_0_dma_done_en_3_OFS (3)
#define DMA_INTR_EN_0_dma_done_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EN_0_dma_done_en_4_OFS (4)
#define DMA_INTR_EN_0_dma_done_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EN_0_dma_done_en_5_OFS (5)
#define DMA_INTR_EN_0_dma_done_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EN_0_dma_done_en_6_OFS (6)
#define DMA_INTR_EN_0_dma_done_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EN_0_dma_done_en_7_OFS (7)
#define DMA_INTR_EN_0_dma_done_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EN_0_dma_done_en_8_OFS (8)
#define DMA_INTR_EN_0_dma_done_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EN_0_dma_done_en_9_OFS (9)
#define DMA_INTR_EN_0_dma_done_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EN_0_dma_done_en_10_OFS (10)
#define DMA_INTR_EN_0_dma_done_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EN_0_dma_done_en_11_OFS (11)
#define DMA_INTR_EN_0_dma_done_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EN_0_dma_done_en_12_OFS (12)
#define DMA_INTR_EN_0_dma_done_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EN_0_dma_done_en_13_OFS (13)
#define DMA_INTR_EN_0_dma_done_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EN_0_dma_done_en_14_OFS (14)
#define DMA_INTR_EN_0_dma_done_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EN_0_dma_done_en_15_OFS (15)
#define DMA_INTR_EN_0_dma_done_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_EN_1_early_irq_en_0_OFS (0)
#define DMA_INTR_EN_1_early_irq_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_EN_1_early_irq_en_1_OFS (1)
#define DMA_INTR_EN_1_early_irq_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_EN_1_early_irq_en_2_OFS (2)
#define DMA_INTR_EN_1_early_irq_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_EN_1_early_irq_en_3_OFS (3)
#define DMA_INTR_EN_1_early_irq_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_EN_1_early_irq_en_4_OFS (4)
#define DMA_INTR_EN_1_early_irq_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_EN_1_early_irq_en_5_OFS (5)
#define DMA_INTR_EN_1_early_irq_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_EN_1_early_irq_en_6_OFS (6)
#define DMA_INTR_EN_1_early_irq_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_EN_1_early_irq_en_7_OFS (7)
#define DMA_INTR_EN_1_early_irq_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_EN_1_early_irq_en_8_OFS (8)
#define DMA_INTR_EN_1_early_irq_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_EN_1_early_irq_en_9_OFS (9)
#define DMA_INTR_EN_1_early_irq_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_EN_1_early_irq_en_10_OFS (10)
#define DMA_INTR_EN_1_early_irq_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_EN_1_early_irq_en_11_OFS (11)
#define DMA_INTR_EN_1_early_irq_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_EN_1_early_irq_en_12_OFS (12)
#define DMA_INTR_EN_1_early_irq_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_EN_1_early_irq_en_13_OFS (13)
#define DMA_INTR_EN_1_early_irq_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_EN_1_early_irq_en_14_OFS (14)
#define DMA_INTR_EN_1_early_irq_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_EN_1_early_irq_en_15_OFS (15)
#define DMA_INTR_EN_1_early_irq_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_0_OFS (0)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_1_OFS (1)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_2_OFS (2)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_3_OFS (3)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_4_OFS (4)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_5_OFS (5)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_6_OFS (6)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_7_OFS (7)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_8_OFS (8)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_9_OFS (9)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_10_OFS (10)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_11_OFS (11)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_12_OFS (12)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_13_OFS (13)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_14_OFS (14)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_15_OFS (15)
#define DMA_INTR_NMI_EN_0_dma_done_nmi_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_0_OFS (0)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_1_OFS (1)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_2_OFS (2)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_3_OFS (3)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_4_OFS (4)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_5_OFS (5)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_6_OFS (6)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_7_OFS (7)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_8_OFS (8)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_9_OFS (9)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_10_OFS (10)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_11_OFS (11)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_12_OFS (12)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_13_OFS (13)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_14_OFS (14)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_15_OFS (15)
#define DMA_INTR_NMI_EN_1_early_irq_nmi_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_EVENT_EN_0_dma_done_event_en_0_OFS (0)
#define DMA_EVENT_EN_0_dma_done_event_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_EVENT_EN_0_dma_done_event_en_1_OFS (1)
#define DMA_EVENT_EN_0_dma_done_event_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_EVENT_EN_0_dma_done_event_en_2_OFS (2)
#define DMA_EVENT_EN_0_dma_done_event_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_EVENT_EN_0_dma_done_event_en_3_OFS (3)
#define DMA_EVENT_EN_0_dma_done_event_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_EVENT_EN_0_dma_done_event_en_4_OFS (4)
#define DMA_EVENT_EN_0_dma_done_event_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_EVENT_EN_0_dma_done_event_en_5_OFS (5)
#define DMA_EVENT_EN_0_dma_done_event_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_EVENT_EN_0_dma_done_event_en_6_OFS (6)
#define DMA_EVENT_EN_0_dma_done_event_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_EVENT_EN_0_dma_done_event_en_7_OFS (7)
#define DMA_EVENT_EN_0_dma_done_event_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_EVENT_EN_0_dma_done_event_en_8_OFS (8)
#define DMA_EVENT_EN_0_dma_done_event_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_EVENT_EN_0_dma_done_event_en_9_OFS (9)
#define DMA_EVENT_EN_0_dma_done_event_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_EVENT_EN_0_dma_done_event_en_10_OFS (10)
#define DMA_EVENT_EN_0_dma_done_event_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_EVENT_EN_0_dma_done_event_en_11_OFS (11)
#define DMA_EVENT_EN_0_dma_done_event_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_EVENT_EN_0_dma_done_event_en_12_OFS (12)
#define DMA_EVENT_EN_0_dma_done_event_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_EVENT_EN_0_dma_done_event_en_13_OFS (13)
#define DMA_EVENT_EN_0_dma_done_event_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_EVENT_EN_0_dma_done_event_en_14_OFS (14)
#define DMA_EVENT_EN_0_dma_done_event_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_EVENT_EN_0_dma_done_event_en_15_OFS (15)
#define DMA_EVENT_EN_0_dma_done_event_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_EVENT_EN_1_early_irq_event_en_0_OFS (0)
#define DMA_EVENT_EN_1_early_irq_event_en_0_MASK ((uint32_t)0x00000001U)
#define DMA_EVENT_EN_1_early_irq_event_en_1_OFS (1)
#define DMA_EVENT_EN_1_early_irq_event_en_1_MASK ((uint32_t)0x00000002U)
#define DMA_EVENT_EN_1_early_irq_event_en_2_OFS (2)
#define DMA_EVENT_EN_1_early_irq_event_en_2_MASK ((uint32_t)0x00000004U)
#define DMA_EVENT_EN_1_early_irq_event_en_3_OFS (3)
#define DMA_EVENT_EN_1_early_irq_event_en_3_MASK ((uint32_t)0x00000008U)
#define DMA_EVENT_EN_1_early_irq_event_en_4_OFS (4)
#define DMA_EVENT_EN_1_early_irq_event_en_4_MASK ((uint32_t)0x00000010U)
#define DMA_EVENT_EN_1_early_irq_event_en_5_OFS (5)
#define DMA_EVENT_EN_1_early_irq_event_en_5_MASK ((uint32_t)0x00000020U)
#define DMA_EVENT_EN_1_early_irq_event_en_6_OFS (6)
#define DMA_EVENT_EN_1_early_irq_event_en_6_MASK ((uint32_t)0x00000040U)
#define DMA_EVENT_EN_1_early_irq_event_en_7_OFS (7)
#define DMA_EVENT_EN_1_early_irq_event_en_7_MASK ((uint32_t)0x00000080U)
#define DMA_EVENT_EN_1_early_irq_event_en_8_OFS (8)
#define DMA_EVENT_EN_1_early_irq_event_en_8_MASK ((uint32_t)0x00000100U)
#define DMA_EVENT_EN_1_early_irq_event_en_9_OFS (9)
#define DMA_EVENT_EN_1_early_irq_event_en_9_MASK ((uint32_t)0x00000200U)
#define DMA_EVENT_EN_1_early_irq_event_en_10_OFS (10)
#define DMA_EVENT_EN_1_early_irq_event_en_10_MASK ((uint32_t)0x00000400U)
#define DMA_EVENT_EN_1_early_irq_event_en_11_OFS (11)
#define DMA_EVENT_EN_1_early_irq_event_en_11_MASK ((uint32_t)0x00000800U)
#define DMA_EVENT_EN_1_early_irq_event_en_12_OFS (12)
#define DMA_EVENT_EN_1_early_irq_event_en_12_MASK ((uint32_t)0x00001000U)
#define DMA_EVENT_EN_1_early_irq_event_en_13_OFS (13)
#define DMA_EVENT_EN_1_early_irq_event_en_13_MASK ((uint32_t)0x00002000U)
#define DMA_EVENT_EN_1_early_irq_event_en_14_OFS (14)
#define DMA_EVENT_EN_1_early_irq_event_en_14_MASK ((uint32_t)0x00004000U)
#define DMA_EVENT_EN_1_early_irq_event_en_15_OFS (15)
#define DMA_EVENT_EN_1_early_irq_event_en_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_SW_SET_dma_done_sw_set_0_OFS (0)
#define DMA_INTR_SW_SET_dma_done_sw_set_0_MASK ((uint32_t)0x00000001U)
#define DMA_INTR_SW_SET_dma_done_sw_set_1_OFS (1)
#define DMA_INTR_SW_SET_dma_done_sw_set_1_MASK ((uint32_t)0x00000002U)
#define DMA_INTR_SW_SET_dma_done_sw_set_2_OFS (2)
#define DMA_INTR_SW_SET_dma_done_sw_set_2_MASK ((uint32_t)0x00000004U)
#define DMA_INTR_SW_SET_dma_done_sw_set_3_OFS (3)
#define DMA_INTR_SW_SET_dma_done_sw_set_3_MASK ((uint32_t)0x00000008U)
#define DMA_INTR_SW_SET_dma_done_sw_set_4_OFS (4)
#define DMA_INTR_SW_SET_dma_done_sw_set_4_MASK ((uint32_t)0x00000010U)
#define DMA_INTR_SW_SET_dma_done_sw_set_5_OFS (5)
#define DMA_INTR_SW_SET_dma_done_sw_set_5_MASK ((uint32_t)0x00000020U)
#define DMA_INTR_SW_SET_dma_done_sw_set_6_OFS (6)
#define DMA_INTR_SW_SET_dma_done_sw_set_6_MASK ((uint32_t)0x00000040U)
#define DMA_INTR_SW_SET_dma_done_sw_set_7_OFS (7)
#define DMA_INTR_SW_SET_dma_done_sw_set_7_MASK ((uint32_t)0x00000080U)
#define DMA_INTR_SW_SET_dma_done_sw_set_8_OFS (8)
#define DMA_INTR_SW_SET_dma_done_sw_set_8_MASK ((uint32_t)0x00000100U)
#define DMA_INTR_SW_SET_dma_done_sw_set_9_OFS (9)
#define DMA_INTR_SW_SET_dma_done_sw_set_9_MASK ((uint32_t)0x00000200U)
#define DMA_INTR_SW_SET_dma_done_sw_set_10_OFS (10)
#define DMA_INTR_SW_SET_dma_done_sw_set_10_MASK ((uint32_t)0x00000400U)
#define DMA_INTR_SW_SET_dma_done_sw_set_11_OFS (11)
#define DMA_INTR_SW_SET_dma_done_sw_set_11_MASK ((uint32_t)0x00000800U)
#define DMA_INTR_SW_SET_dma_done_sw_set_12_OFS (12)
#define DMA_INTR_SW_SET_dma_done_sw_set_12_MASK ((uint32_t)0x00001000U)
#define DMA_INTR_SW_SET_dma_done_sw_set_13_OFS (13)
#define DMA_INTR_SW_SET_dma_done_sw_set_13_MASK ((uint32_t)0x00002000U)
#define DMA_INTR_SW_SET_dma_done_sw_set_14_OFS (14)
#define DMA_INTR_SW_SET_dma_done_sw_set_14_MASK ((uint32_t)0x00004000U)
#define DMA_INTR_SW_SET_dma_done_sw_set_15_OFS (15)
#define DMA_INTR_SW_SET_dma_done_sw_set_15_MASK ((uint32_t)0x00008000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_0_OFS (16)
#define DMA_INTR_SW_SET_early_irq_sw_set_0_MASK ((uint32_t)0x00010000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_1_OFS (17)
#define DMA_INTR_SW_SET_early_irq_sw_set_1_MASK ((uint32_t)0x00020000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_2_OFS (18)
#define DMA_INTR_SW_SET_early_irq_sw_set_2_MASK ((uint32_t)0x00040000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_3_OFS (19)
#define DMA_INTR_SW_SET_early_irq_sw_set_3_MASK ((uint32_t)0x00080000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_4_OFS (20)
#define DMA_INTR_SW_SET_early_irq_sw_set_4_MASK ((uint32_t)0x00100000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_5_OFS (21)
#define DMA_INTR_SW_SET_early_irq_sw_set_5_MASK ((uint32_t)0x00200000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_6_OFS (22)
#define DMA_INTR_SW_SET_early_irq_sw_set_6_MASK ((uint32_t)0x00400000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_7_OFS (23)
#define DMA_INTR_SW_SET_early_irq_sw_set_7_MASK ((uint32_t)0x00800000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_8_OFS (24)
#define DMA_INTR_SW_SET_early_irq_sw_set_8_MASK ((uint32_t)0x01000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_9_OFS (25)
#define DMA_INTR_SW_SET_early_irq_sw_set_9_MASK ((uint32_t)0x02000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_10_OFS (26)
#define DMA_INTR_SW_SET_early_irq_sw_set_10_MASK ((uint32_t)0x04000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_11_OFS (27)
#define DMA_INTR_SW_SET_early_irq_sw_set_11_MASK ((uint32_t)0x08000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_12_OFS (28)
#define DMA_INTR_SW_SET_early_irq_sw_set_12_MASK ((uint32_t)0x10000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_13_OFS (29)
#define DMA_INTR_SW_SET_early_irq_sw_set_13_MASK ((uint32_t)0x20000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_14_OFS (30)
#define DMA_INTR_SW_SET_early_irq_sw_set_14_MASK ((uint32_t)0x40000000U)
#define DMA_INTR_SW_SET_early_irq_sw_set_15_OFS (31)
#define DMA_INTR_SW_SET_early_irq_sw_set_15_MASK ((uint32_t)0x80000000U)
#define DMA_DMA_CFG_0_ctrl_base_ptr_OFS (0)
#define DMA_DMA_CFG_0_ctrl_base_ptr_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_DMA_CFG_1_alt_ctrl_base_ptr_OFS (0)
#define DMA_DMA_CFG_1_alt_ctrl_base_ptr_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_DMA_CFG_2_chnls_minus_1_OFS (0)
#define DMA_DMA_CFG_2_chnls_minus_1_MASK ((uint32_t)0x0000001FU)
#define DMA_DMA_CFG_2_master_enable_OFS (5)
#define DMA_DMA_CFG_2_master_enable_MASK ((uint32_t)0x00000020U)
#define DMA_DMA_WAITONREQ_waitonreq_OFS (0)
#define DMA_DMA_WAITONREQ_waitonreq_MASK ((uint32_t)0x0000FFFFU)
#define DMA_FILL_MODE_fill_mode_en_OFS (0)
#define DMA_FILL_MODE_fill_mode_en_MASK ((uint32_t)0x00000001U)
#define DMA_FILL_MODE_CFG_fill_mode_chnl_no_OFS (0)
#define DMA_FILL_MODE_CFG_fill_mode_chnl_no_MASK ((uint32_t)0x0000000FU)
#define DMA_FILL_MODE_CFG_fill_mode_incr_val_OFS (4)
#define DMA_FILL_MODE_CFG_fill_mode_incr_val_MASK ((uint32_t)0x00000FF0U)
#define DMA_FILL_MODE_CFG_fill_mode_init_val_OFS (12)
#define DMA_FILL_MODE_CFG_fill_mode_init_val_MASK ((uint32_t)0x000FF000U)
#define DMA_STRIDE_MODE_stride_mode_en_OFS (0)
#define DMA_STRIDE_MODE_stride_mode_en_MASK ((uint32_t)0x00000001U)
#define DMA_STRIDE_MODE_CFG_0_stride_mode_chnl_no_OFS (0)
#define DMA_STRIDE_MODE_CFG_0_stride_mode_chnl_no_MASK ((uint32_t)0x0000000FU)
#define DMA_STRIDE_MODE_CFG_0_src_stride_val_OFS (4)
#define DMA_STRIDE_MODE_CFG_0_src_stride_val_MASK ((uint32_t)0x000000F0U)
#define DMA_STRIDE_MODE_CFG_0_dst_stride_val_OFS (8)
#define DMA_STRIDE_MODE_CFG_0_dst_stride_val_MASK ((uint32_t)0x00000F00U)
#define DMA_STRIDE_MODE_CFG_0_src_inc_OFS (12)
#define DMA_STRIDE_MODE_CFG_0_src_inc_MASK ((uint32_t)0x00003000U)
#define DMA_STRIDE_MODE_CFG_0_dst_inc_OFS (14)
#define DMA_STRIDE_MODE_CFG_0_dst_inc_MASK ((uint32_t)0x0000C000U)
#define DMA_STRIDE_MODE_CFG_1_stride_mode_src_base_addr_OFS (0)
#define DMA_STRIDE_MODE_CFG_1_stride_mode_src_base_addr_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_STRIDE_MODE_CFG_2_stride_mode_dst_base_addr_OFS (0)
#define DMA_STRIDE_MODE_CFG_2_stride_mode_dst_base_addr_MASK ((uint32_t)0xFFFFFFFFU)
#define DMA_DMA_EARLY_IRQ_0_rem_transaction_chnl0_OFS (0)
#define DMA_DMA_EARLY_IRQ_0_rem_transaction_chnl0_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_1_rem_transaction_chnl1_OFS (0)
#define DMA_DMA_EARLY_IRQ_1_rem_transaction_chnl1_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_2_rem_transaction_chnl2_OFS (0)
#define DMA_DMA_EARLY_IRQ_2_rem_transaction_chnl2_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_3_rem_transaction_chnl3_OFS (0)
#define DMA_DMA_EARLY_IRQ_3_rem_transaction_chnl3_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_4_rem_transaction_chnl4_OFS (0)
#define DMA_DMA_EARLY_IRQ_4_rem_transaction_chnl4_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_5_rem_transaction_chnl5_OFS (0)
#define DMA_DMA_EARLY_IRQ_5_rem_transaction_chnl5_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_6_rem_transaction_chnl6_OFS (0)
#define DMA_DMA_EARLY_IRQ_6_rem_transaction_chnl6_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_7_rem_transaction_chnl7_OFS (0)
#define DMA_DMA_EARLY_IRQ_7_rem_transaction_chnl7_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_8_rem_transaction_chnl8_OFS (0)
#define DMA_DMA_EARLY_IRQ_8_rem_transaction_chnl8_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_9_rem_transaction_chnl9_OFS (0)
#define DMA_DMA_EARLY_IRQ_9_rem_transaction_chnl9_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_10_rem_transaction_chnl10_OFS (0)
#define DMA_DMA_EARLY_IRQ_10_rem_transaction_chnl10_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_11_rem_transaction_chnl11_OFS (0)
#define DMA_DMA_EARLY_IRQ_11_rem_transaction_chnl11_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_12_rem_transaction_chnl12_OFS (0)
#define DMA_DMA_EARLY_IRQ_12_rem_transaction_chnl12_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_13_rem_transaction_chnl13_OFS (0)
#define DMA_DMA_EARLY_IRQ_13_rem_transaction_chnl13_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_14_rem_transaction_chnl14_OFS (0)
#define DMA_DMA_EARLY_IRQ_14_rem_transaction_chnl14_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_15_rem_transaction_chnl15_OFS (0)
#define DMA_DMA_EARLY_IRQ_15_rem_transaction_chnl15_MASK ((uint32_t)0x000003FFU)
#define DMA_DMA_EARLY_IRQ_CFG_early_irq_alternate_sel_OFS (0)
#define DMA_DMA_EARLY_IRQ_CFG_early_irq_alternate_sel_MASK ((uint32_t)0x0000FFFFU)
#define DMA_REPEATED_TRANSFER_EN_rptd_trnsfr_en_OFS (0)
#define DMA_REPEATED_TRANSFER_EN_rptd_trnsfr_en_MASK ((uint32_t)0x0000FFFFU)
#define DMA_REPEATED_TRANSFER_CHNL_0_rptd_trnsfr_total_transaction_chnl0_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_0_rptd_trnsfr_total_transaction_chnl0_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_1_rptd_trnsfr_total_transaction_chnl1_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_1_rptd_trnsfr_total_transaction_chnl1_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_2_rptd_trnsfr_total_transaction_chnl2_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_2_rptd_trnsfr_total_transaction_chnl2_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_3_rptd_trnsfr_total_transaction_chnl3_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_3_rptd_trnsfr_total_transaction_chnl3_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_4_rptd_trnsfr_total_transaction_chnl4_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_4_rptd_trnsfr_total_transaction_chnl4_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_5_rptd_trnsfr_total_transaction_chnl5_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_5_rptd_trnsfr_total_transaction_chnl5_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_6_rptd_trnsfr_total_transaction_chnl6_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_6_rptd_trnsfr_total_transaction_chnl6_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_7_rptd_trnsfr_total_transaction_chnl7_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_7_rptd_trnsfr_total_transaction_chnl7_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_8_rptd_trnsfr_total_transaction_chnl8_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_8_rptd_trnsfr_total_transaction_chnl8_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_9_rptd_trnsfr_total_transaction_chnl9_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_9_rptd_trnsfr_total_transaction_chnl9_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_10_rptd_trnsfr_total_transaction_chnl10_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_10_rptd_trnsfr_total_transaction_chnl10_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_11_rptd_trnsfr_total_transaction_chnl11_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_11_rptd_trnsfr_total_transaction_chnl11_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_12_rptd_trnsfr_total_transaction_chnl12_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_12_rptd_trnsfr_total_transaction_chnl12_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_13_rptd_trnsfr_total_transaction_chnl13_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_13_rptd_trnsfr_total_transaction_chnl13_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_14_rptd_trnsfr_total_transaction_chnl14_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_14_rptd_trnsfr_total_transaction_chnl14_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_CHNL_15_rptd_trnsfr_total_transaction_chnl15_OFS (0)
#define DMA_REPEATED_TRANSFER_CHNL_15_rptd_trnsfr_total_transaction_chnl15_MASK ((uint32_t)0x000003FFU)
#define DMA_REPEATED_TRANSFER_ALTERNATE_SEL_rptd_trnsfr_alternate_sel_OFS (0)
#define DMA_REPEATED_TRANSFER_ALTERNATE_SEL_rptd_trnsfr_alternate_sel_MASK ((uint32_t)0x0000FFFFU)
#define DMA_DMA_ARBITRATION_dma_rr_en_OFS (0)
#define DMA_DMA_ARBITRATION_dma_rr_en_MASK ((uint32_t)0x00000001U)
#define DMA_DMA_ARBITRATION_MASK_dma_rr_mask_OFS (0)
#define DMA_DMA_ARBITRATION_MASK_dma_rr_mask_MASK ((uint32_t)0x0000FFFFU)
#endif
