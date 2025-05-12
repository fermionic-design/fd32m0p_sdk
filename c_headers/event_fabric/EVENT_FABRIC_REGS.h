#ifndef EVENT_FABRIC_REGISTERS_H
#define EVENT_FABRIC_REGISTERS_H

#include <stdint.h>

typedef struct EVENT_FABRIC_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} EVENT_FABRIC_DESC_REG_s;

typedef union EVENT_FABRIC_DESC_u {
    EVENT_FABRIC_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DESC_u;

typedef struct EVENT_FABRIC_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} EVENT_FABRIC_PWR_EN_REG_s;

typedef union EVENT_FABRIC_PWR_EN_u {
    EVENT_FABRIC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_PWR_EN_u;

typedef struct EVENT_FABRIC_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} EVENT_FABRIC_RST_CTRL_REG_s;

typedef union EVENT_FABRIC_RST_CTRL_u {
    EVENT_FABRIC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_CTRL_u;

typedef struct EVENT_FABRIC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} EVENT_FABRIC_RST_STS_REG_s;

typedef union EVENT_FABRIC_RST_STS_u {
    EVENT_FABRIC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_STS_u;

typedef struct EVENT_FABRIC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} EVENT_FABRIC_CLK_CTRL_REG_s;

typedef union EVENT_FABRIC_CLK_CTRL_u {
    EVENT_FABRIC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_CLK_CTRL_u;

typedef struct EVENT_FABRIC_GEN_PUB_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_u {
    EVENT_FABRIC_GEN_PUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_u;

typedef struct EVENT_FABRIC_GEN_SUB_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_u {
    EVENT_FABRIC_GEN_SUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_u;

typedef struct EVENT_FABRIC_DMA_PUB_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_u {
    EVENT_FABRIC_DMA_PUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_u;

typedef struct EVENT_FABRIC_REGS_s{
    volatile EVENT_FABRIC_DESC_u DESC;
    volatile EVENT_FABRIC_PWR_EN_u PWR_EN;
    volatile EVENT_FABRIC_RST_CTRL_u RST_CTRL;
    volatile EVENT_FABRIC_RST_STS_u RST_STS;
    volatile EVENT_FABRIC_CLK_CTRL_u CLK_CTRL;
    volatile EVENT_FABRIC_GEN_PUB_u GEN_PUB[25];
    volatile EVENT_FABRIC_GEN_SUB_u GEN_SUB[25];
    volatile EVENT_FABRIC_DMA_PUB_u DMA_PUB[16];
} EVENT_FABRIC_REGS_s;

#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY ((uint32_t)0x00000069U)
#define EVENT_FABRIC_RST_CTRL_RST_KEY ((uint32_t)0x00000069U)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x00000069U)


#define EVENT_FABRIC_DESC_MODULE_TYPE_OFS (0)
#define EVENT_FABRIC_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define EVENT_FABRIC_DESC_MODUE_SUBTYPE_OFS (8)
#define EVENT_FABRIC_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define EVENT_FABRIC_DESC_MAJOR_REV_OFS (16)
#define EVENT_FABRIC_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define EVENT_FABRIC_DESC_MINOR_REV_OFS (20)
#define EVENT_FABRIC_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define EVENT_FABRIC_PWR_EN_PWR_EN_OFS (0)
#define EVENT_FABRIC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY_OFS (24)
#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_CTRL_RST_OFS (0)
#define EVENT_FABRIC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_OFS (1)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define EVENT_FABRIC_RST_CTRL_RST_KEY_OFS (24)
#define EVENT_FABRIC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_STS_RST_STS_OFS (0)
#define EVENT_FABRIC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_CLK_CTRL_CLK_EN_OFS (0)
#define EVENT_FABRIC_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)

#endif
