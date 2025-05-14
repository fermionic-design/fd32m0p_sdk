#ifndef PL230_REGISTERS_H
#define PL230_REGISTERS_H

#include <stdint.h>

typedef struct PL230_DMA_STATUS_REG_s {
    unsigned int master_enable:1; // 
    unsigned int rsvd_0:3; // 
    unsigned int state:4; // 
    unsigned int rsvd_1:8; // 
    unsigned int chnls_minus1:5; // 
    unsigned int rsvd_2:7; // 
    unsigned int test_status:4; // 
} PL230_DMA_STATUS_REG_s;

typedef union PL230_DMA_STATUS_u {
    PL230_DMA_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_DMA_STATUS_u;

typedef struct PL230_DMA_CFG_REG_s {
    unsigned int master_enable:1; // 
    unsigned int rsvd_0:4; // 
    unsigned int chnl_prot_ctrl:3; // 
} PL230_DMA_CFG_REG_s;

typedef union PL230_DMA_CFG_u {
    PL230_DMA_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_DMA_CFG_u;

typedef struct PL230_CTRL_BASE_PTR_REG_s {
    unsigned int control_base_ptr:32; // 
} PL230_CTRL_BASE_PTR_REG_s;

typedef union PL230_CTRL_BASE_PTR_u {
    PL230_CTRL_BASE_PTR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CTRL_BASE_PTR_u;

typedef struct PL230_ALT_CTRL_BASE_PTR_REG_s {
    unsigned int alternate_control_base_ptr:32; // 
} PL230_ALT_CTRL_BASE_PTR_REG_s;

typedef union PL230_ALT_CTRL_BASE_PTR_u {
    PL230_ALT_CTRL_BASE_PTR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_ALT_CTRL_BASE_PTR_u;

typedef struct PL230_DMA_WAITONREQ_STATUS_REG_s {
    unsigned int dma_waitonreg_status:32; // 
} PL230_DMA_WAITONREQ_STATUS_REG_s;

typedef union PL230_DMA_WAITONREQ_STATUS_u {
    PL230_DMA_WAITONREQ_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_DMA_WAITONREQ_STATUS_u;

typedef struct PL230_CHNL_SW_REQUEST_REG_s {
    unsigned int chnl_sw_request:32; // 
} PL230_CHNL_SW_REQUEST_REG_s;

typedef union PL230_CHNL_SW_REQUEST_u {
    PL230_CHNL_SW_REQUEST_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_SW_REQUEST_u;

typedef struct PL230_CHNL_USEBURST_SET_REG_s {
    unsigned int chnl_useburst_set:32; // 
} PL230_CHNL_USEBURST_SET_REG_s;

typedef union PL230_CHNL_USEBURST_SET_u {
    PL230_CHNL_USEBURST_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_USEBURST_SET_u;

typedef struct PL230_CHNL_USEBURST_CLR_REG_s {
    unsigned int chnl_useburst_clr:32; // 
} PL230_CHNL_USEBURST_CLR_REG_s;

typedef union PL230_CHNL_USEBURST_CLR_u {
    PL230_CHNL_USEBURST_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_USEBURST_CLR_u;

typedef struct PL230_CHNL_REQ_MASK_SET_REG_s {
    unsigned int chnl_req_mask_set:32; // 
} PL230_CHNL_REQ_MASK_SET_REG_s;

typedef union PL230_CHNL_REQ_MASK_SET_u {
    PL230_CHNL_REQ_MASK_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_REQ_MASK_SET_u;

typedef struct PL230_CHNL_REQ_MASK_CLR_REG_s {
    unsigned int chnl_req_mask_clr:32; // 
} PL230_CHNL_REQ_MASK_CLR_REG_s;

typedef union PL230_CHNL_REQ_MASK_CLR_u {
    PL230_CHNL_REQ_MASK_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_REQ_MASK_CLR_u;

typedef struct PL230_CHNL_ENABLE_SET_REG_s {
    unsigned int chnl_enable_set:32; // 
} PL230_CHNL_ENABLE_SET_REG_s;

typedef union PL230_CHNL_ENABLE_SET_u {
    PL230_CHNL_ENABLE_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_ENABLE_SET_u;

typedef struct PL230_CHNL_ENABLE_CLR_REG_s {
    unsigned int chnl_enable_clr:32; // 
} PL230_CHNL_ENABLE_CLR_REG_s;

typedef union PL230_CHNL_ENABLE_CLR_u {
    PL230_CHNL_ENABLE_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_ENABLE_CLR_u;

typedef struct PL230_CHNL_PRI_ALT_SET_REG_s {
    unsigned int chnl_pri_alt_set:32; // 
} PL230_CHNL_PRI_ALT_SET_REG_s;

typedef union PL230_CHNL_PRI_ALT_SET_u {
    PL230_CHNL_PRI_ALT_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_PRI_ALT_SET_u;

typedef struct PL230_CHNL_PRI_ALT_CLR_REG_s {
    unsigned int chnl_pri_alt_clr:32; // 
} PL230_CHNL_PRI_ALT_CLR_REG_s;

typedef union PL230_CHNL_PRI_ALT_CLR_u {
    PL230_CHNL_PRI_ALT_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_PRI_ALT_CLR_u;

typedef struct PL230_CHNL_PRIORITY_SET_REG_s {
    unsigned int chnl_priority_set:32; // 
} PL230_CHNL_PRIORITY_SET_REG_s;

typedef union PL230_CHNL_PRIORITY_SET_u {
    PL230_CHNL_PRIORITY_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_PRIORITY_SET_u;

typedef struct PL230_CHNL_PRIORITY_CLR_REG_s {
    unsigned int chnl_priority_clr:32; // 
} PL230_CHNL_PRIORITY_CLR_REG_s;

typedef union PL230_CHNL_PRIORITY_CLR_u {
    PL230_CHNL_PRIORITY_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_CHNL_PRIORITY_CLR_u;

typedef struct PL230_ERR_CLR_REG_s {
    unsigned int err_clr:1; // 
} PL230_ERR_CLR_REG_s;

typedef union PL230_ERR_CLR_u {
    PL230_ERR_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} PL230_ERR_CLR_u;

typedef struct PL230_REGS_s{
    volatile PL230_DMA_STATUS_u DMA_STATUS;
    volatile PL230_DMA_CFG_u DMA_CFG;
    volatile PL230_CTRL_BASE_PTR_u CTRL_BASE_PTR;
    volatile PL230_ALT_CTRL_BASE_PTR_u ALT_CTRL_BASE_PTR;
    volatile PL230_DMA_WAITONREQ_STATUS_u DMA_WAITONREQ_STATUS;
    volatile PL230_CHNL_SW_REQUEST_u CHNL_SW_REQUEST;
    volatile PL230_CHNL_USEBURST_SET_u CHNL_USEBURST_SET;
    volatile PL230_CHNL_USEBURST_CLR_u CHNL_USEBURST_CLR;
    volatile PL230_CHNL_REQ_MASK_SET_u CHNL_REQ_MASK_SET;
    volatile PL230_CHNL_REQ_MASK_CLR_u CHNL_REQ_MASK_CLR;
    volatile PL230_CHNL_ENABLE_SET_u CHNL_ENABLE_SET;
    volatile PL230_CHNL_ENABLE_CLR_u CHNL_ENABLE_CLR;
    volatile PL230_CHNL_PRI_ALT_SET_u CHNL_PRI_ALT_SET;
    volatile PL230_CHNL_PRI_ALT_CLR_u CHNL_PRI_ALT_CLR;
    volatile PL230_CHNL_PRIORITY_SET_u CHNL_PRIORITY_SET;
    volatile PL230_CHNL_PRIORITY_CLR_u CHNL_PRIORITY_CLR;
    volatile uint32_t Reserved[3];
    volatile PL230_ERR_CLR_u ERR_CLR;
} PL230_REGS_s;



typedef enum {
	PL230_DMA_STATUS_STATE_IDLE = 0,
	PL230_DMA_STATUS_STATE_RD_CHANNEL_CFG = 1,
	PL230_DMA_STATUS_STATE_RD_RSP = 2,
	PL230_DMA_STATUS_STATE_RD_RDP = 3,
	PL230_DMA_STATUS_STATE_RD_SOURCE_DATA = 4,
	PL230_DMA_STATUS_STATE_WR_DEST_DATA = 5,
	PL230_DMA_STATUS_STATE_WAIT_DMA_REQ = 6,
	PL230_DMA_STATUS_STATE_WR_CHANNEL_CFG = 7,
	PL230_DMA_STATUS_STATE_STALLED = 8,
	PL230_DMA_STATUS_STATE_DONE = 9,
	PL230_DMA_STATUS_STATE_PERIPHERAL_SCATTER_TRANS = 10,
} PL230_DMA_STATUS_STATE;

typedef enum {
	PL230_DMA_CFG_CHNL_PROT_CTRL_PRIVILEGE_ACCESS = 0,
	PL230_DMA_CFG_CHNL_PROT_CTRL_BUFFERABLE_ACCESS = 1,
	PL230_DMA_CFG_CHNL_PROT_CTRL_CACHEABLE_ACCESS = 2,
} PL230_DMA_CFG_CHNL_PROT_CTRL;

typedef enum {
	PL230_ERR_CLR_CMD = 1,
} PL230_ERR_CLR;

#define PL230_DMA_STATUS_MASTER_ENABLE_OFS (0)
#define PL230_DMA_STATUS_MASTER_ENABLE_MASK ((uint32_t)0x00000001U)
#define PL230_DMA_STATUS_STATE_OFS (4)
#define PL230_DMA_STATUS_STATE_MASK ((uint32_t)0x000000F0U)
#define PL230_DMA_STATUS_CHNLS_MINUS1_OFS (16)
#define PL230_DMA_STATUS_CHNLS_MINUS1_MASK ((uint32_t)0x001F0000U)
#define PL230_DMA_STATUS_TEST_STATUS_OFS (28)
#define PL230_DMA_STATUS_TEST_STATUS_MASK ((uint32_t)0xF0000000U)
#define PL230_DMA_CFG_MASTER_ENABLE_OFS (0)
#define PL230_DMA_CFG_MASTER_ENABLE_MASK ((uint32_t)0x00000001U)
#define PL230_DMA_CFG_CHNL_PROT_CTRL_OFS (5)
#define PL230_DMA_CFG_CHNL_PROT_CTRL_MASK ((uint32_t)0x000000E0U)
#define PL230_CTRL_BASE_PTR_CONTROL_BASE_PTR_OFS (0)
#define PL230_CTRL_BASE_PTR_CONTROL_BASE_PTR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_ALT_CTRL_BASE_PTR_ALTERNATE_CONTROL_BASE_PTR_OFS (0)
#define PL230_ALT_CTRL_BASE_PTR_ALTERNATE_CONTROL_BASE_PTR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_DMA_WAITONREQ_STATUS_DMA_WAITONREG_STATUS_OFS (0)
#define PL230_DMA_WAITONREQ_STATUS_DMA_WAITONREG_STATUS_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_SW_REQUEST_CHNL_SW_REQUEST_OFS (0)
#define PL230_CHNL_SW_REQUEST_CHNL_SW_REQUEST_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_USEBURST_SET_CHNL_USEBURST_SET_OFS (0)
#define PL230_CHNL_USEBURST_SET_CHNL_USEBURST_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_OFS (0)
#define PL230_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_OFS (0)
#define PL230_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_OFS (0)
#define PL230_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_ENABLE_SET_CHNL_ENABLE_SET_OFS (0)
#define PL230_CHNL_ENABLE_SET_CHNL_ENABLE_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_OFS (0)
#define PL230_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_OFS (0)
#define PL230_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_OFS (0)
#define PL230_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_OFS (0)
#define PL230_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_OFS (0)
#define PL230_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define PL230_ERR_CLR_ERR_CLR_OFS (0)
#define PL230_ERR_CLR_ERR_CLR_MASK ((uint32_t)0x00000001U)

#endif
