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

typedef struct EVENT_FABRIC_GEN_PUB_0_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_0_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_0_u {
    EVENT_FABRIC_GEN_PUB_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_0_u;

typedef struct EVENT_FABRIC_GEN_PUB_1_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_1_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_1_u {
    EVENT_FABRIC_GEN_PUB_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_1_u;

typedef struct EVENT_FABRIC_GEN_PUB_2_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_2_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_2_u {
    EVENT_FABRIC_GEN_PUB_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_2_u;

typedef struct EVENT_FABRIC_GEN_PUB_3_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_3_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_3_u {
    EVENT_FABRIC_GEN_PUB_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_3_u;

typedef struct EVENT_FABRIC_GEN_PUB_4_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_4_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_4_u {
    EVENT_FABRIC_GEN_PUB_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_4_u;

typedef struct EVENT_FABRIC_GEN_PUB_5_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_5_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_5_u {
    EVENT_FABRIC_GEN_PUB_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_5_u;

typedef struct EVENT_FABRIC_GEN_PUB_6_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_6_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_6_u {
    EVENT_FABRIC_GEN_PUB_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_6_u;

typedef struct EVENT_FABRIC_GEN_PUB_7_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_7_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_7_u {
    EVENT_FABRIC_GEN_PUB_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_7_u;

typedef struct EVENT_FABRIC_GEN_PUB_8_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_8_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_8_u {
    EVENT_FABRIC_GEN_PUB_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_8_u;

typedef struct EVENT_FABRIC_GEN_PUB_9_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_9_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_9_u {
    EVENT_FABRIC_GEN_PUB_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_9_u;

typedef struct EVENT_FABRIC_GEN_PUB_10_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_10_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_10_u {
    EVENT_FABRIC_GEN_PUB_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_10_u;

typedef struct EVENT_FABRIC_GEN_PUB_11_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_11_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_11_u {
    EVENT_FABRIC_GEN_PUB_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_11_u;

typedef struct EVENT_FABRIC_GEN_PUB_12_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_12_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_12_u {
    EVENT_FABRIC_GEN_PUB_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_12_u;

typedef struct EVENT_FABRIC_GEN_PUB_13_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_13_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_13_u {
    EVENT_FABRIC_GEN_PUB_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_13_u;

typedef struct EVENT_FABRIC_GEN_PUB_14_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_14_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_14_u {
    EVENT_FABRIC_GEN_PUB_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_14_u;

typedef struct EVENT_FABRIC_GEN_PUB_15_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_15_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_15_u {
    EVENT_FABRIC_GEN_PUB_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_15_u;

typedef struct EVENT_FABRIC_GEN_PUB_16_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_16_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_16_u {
    EVENT_FABRIC_GEN_PUB_16_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_16_u;

typedef struct EVENT_FABRIC_GEN_PUB_17_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_17_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_17_u {
    EVENT_FABRIC_GEN_PUB_17_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_17_u;

typedef struct EVENT_FABRIC_GEN_PUB_18_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_18_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_18_u {
    EVENT_FABRIC_GEN_PUB_18_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_18_u;

typedef struct EVENT_FABRIC_GEN_PUB_19_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_19_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_19_u {
    EVENT_FABRIC_GEN_PUB_19_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_19_u;

typedef struct EVENT_FABRIC_GEN_PUB_20_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_20_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_20_u {
    EVENT_FABRIC_GEN_PUB_20_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_20_u;

typedef struct EVENT_FABRIC_GEN_PUB_21_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_21_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_21_u {
    EVENT_FABRIC_GEN_PUB_21_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_21_u;

typedef struct EVENT_FABRIC_GEN_PUB_22_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_22_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_22_u {
    EVENT_FABRIC_GEN_PUB_22_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_22_u;

typedef struct EVENT_FABRIC_GEN_PUB_23_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_23_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_23_u {
    EVENT_FABRIC_GEN_PUB_23_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_23_u;

typedef struct EVENT_FABRIC_GEN_PUB_24_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_24_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_24_u {
    EVENT_FABRIC_GEN_PUB_24_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_24_u;

typedef struct EVENT_FABRIC_GEN_SUB_0_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_0_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_0_u {
    EVENT_FABRIC_GEN_SUB_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_0_u;

typedef struct EVENT_FABRIC_GEN_SUB_1_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_1_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_1_u {
    EVENT_FABRIC_GEN_SUB_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_1_u;

typedef struct EVENT_FABRIC_GEN_SUB_2_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_2_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_2_u {
    EVENT_FABRIC_GEN_SUB_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_2_u;

typedef struct EVENT_FABRIC_GEN_SUB_3_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_3_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_3_u {
    EVENT_FABRIC_GEN_SUB_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_3_u;

typedef struct EVENT_FABRIC_GEN_SUB_4_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_4_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_4_u {
    EVENT_FABRIC_GEN_SUB_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_4_u;

typedef struct EVENT_FABRIC_GEN_SUB_5_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_5_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_5_u {
    EVENT_FABRIC_GEN_SUB_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_5_u;

typedef struct EVENT_FABRIC_GEN_SUB_6_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_6_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_6_u {
    EVENT_FABRIC_GEN_SUB_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_6_u;

typedef struct EVENT_FABRIC_GEN_SUB_7_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_7_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_7_u {
    EVENT_FABRIC_GEN_SUB_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_7_u;

typedef struct EVENT_FABRIC_GEN_SUB_8_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_8_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_8_u {
    EVENT_FABRIC_GEN_SUB_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_8_u;

typedef struct EVENT_FABRIC_GEN_SUB_9_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_9_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_9_u {
    EVENT_FABRIC_GEN_SUB_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_9_u;

typedef struct EVENT_FABRIC_GEN_SUB_10_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_10_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_10_u {
    EVENT_FABRIC_GEN_SUB_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_10_u;

typedef struct EVENT_FABRIC_GEN_SUB_11_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_11_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_11_u {
    EVENT_FABRIC_GEN_SUB_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_11_u;

typedef struct EVENT_FABRIC_GEN_SUB_12_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_12_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_12_u {
    EVENT_FABRIC_GEN_SUB_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_12_u;

typedef struct EVENT_FABRIC_GEN_SUB_13_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_13_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_13_u {
    EVENT_FABRIC_GEN_SUB_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_13_u;

typedef struct EVENT_FABRIC_GEN_SUB_14_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_14_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_14_u {
    EVENT_FABRIC_GEN_SUB_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_14_u;

typedef struct EVENT_FABRIC_GEN_SUB_15_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_15_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_15_u {
    EVENT_FABRIC_GEN_SUB_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_15_u;

typedef struct EVENT_FABRIC_GEN_SUB_16_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_16_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_16_u {
    EVENT_FABRIC_GEN_SUB_16_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_16_u;

typedef struct EVENT_FABRIC_GEN_SUB_17_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_17_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_17_u {
    EVENT_FABRIC_GEN_SUB_17_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_17_u;

typedef struct EVENT_FABRIC_GEN_SUB_18_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_18_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_18_u {
    EVENT_FABRIC_GEN_SUB_18_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_18_u;

typedef struct EVENT_FABRIC_GEN_SUB_19_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_19_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_19_u {
    EVENT_FABRIC_GEN_SUB_19_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_19_u;

typedef struct EVENT_FABRIC_GEN_SUB_20_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_20_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_20_u {
    EVENT_FABRIC_GEN_SUB_20_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_20_u;

typedef struct EVENT_FABRIC_GEN_SUB_21_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_21_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_21_u {
    EVENT_FABRIC_GEN_SUB_21_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_21_u;

typedef struct EVENT_FABRIC_GEN_SUB_22_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_22_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_22_u {
    EVENT_FABRIC_GEN_SUB_22_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_22_u;

typedef struct EVENT_FABRIC_GEN_SUB_23_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_23_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_23_u {
    EVENT_FABRIC_GEN_SUB_23_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_23_u;

typedef struct EVENT_FABRIC_GEN_SUB_24_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_24_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_24_u {
    EVENT_FABRIC_GEN_SUB_24_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_24_u;

typedef struct EVENT_FABRIC_DMA_PUB_0_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_0_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_0_u {
    EVENT_FABRIC_DMA_PUB_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_0_u;

typedef struct EVENT_FABRIC_DMA_PUB_1_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_1_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_1_u {
    EVENT_FABRIC_DMA_PUB_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_1_u;

typedef struct EVENT_FABRIC_DMA_PUB_2_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_2_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_2_u {
    EVENT_FABRIC_DMA_PUB_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_2_u;

typedef struct EVENT_FABRIC_DMA_PUB_3_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_3_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_3_u {
    EVENT_FABRIC_DMA_PUB_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_3_u;

typedef struct EVENT_FABRIC_DMA_PUB_4_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_4_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_4_u {
    EVENT_FABRIC_DMA_PUB_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_4_u;

typedef struct EVENT_FABRIC_DMA_PUB_5_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_5_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_5_u {
    EVENT_FABRIC_DMA_PUB_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_5_u;

typedef struct EVENT_FABRIC_DMA_PUB_6_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_6_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_6_u {
    EVENT_FABRIC_DMA_PUB_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_6_u;

typedef struct EVENT_FABRIC_DMA_PUB_7_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_7_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_7_u {
    EVENT_FABRIC_DMA_PUB_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_7_u;

typedef struct EVENT_FABRIC_DMA_PUB_8_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_8_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_8_u {
    EVENT_FABRIC_DMA_PUB_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_8_u;

typedef struct EVENT_FABRIC_DMA_PUB_9_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_9_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_9_u {
    EVENT_FABRIC_DMA_PUB_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_9_u;

typedef struct EVENT_FABRIC_DMA_PUB_10_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_10_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_10_u {
    EVENT_FABRIC_DMA_PUB_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_10_u;

typedef struct EVENT_FABRIC_DMA_PUB_11_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_11_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_11_u {
    EVENT_FABRIC_DMA_PUB_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_11_u;

typedef struct EVENT_FABRIC_DMA_PUB_12_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_12_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_12_u {
    EVENT_FABRIC_DMA_PUB_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_12_u;

typedef struct EVENT_FABRIC_DMA_PUB_13_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_13_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_13_u {
    EVENT_FABRIC_DMA_PUB_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_13_u;

typedef struct EVENT_FABRIC_DMA_PUB_14_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_14_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_14_u {
    EVENT_FABRIC_DMA_PUB_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_14_u;

typedef struct EVENT_FABRIC_DMA_PUB_15_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_15_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_15_u {
    EVENT_FABRIC_DMA_PUB_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_15_u;

typedef struct EVENT_FABRIC_REGS_s{
    volatile EVENT_FABRIC_DESC_u DESC;
    volatile EVENT_FABRIC_PWR_EN_u PWR_EN;
    volatile EVENT_FABRIC_RST_CTRL_u RST_CTRL;
    volatile EVENT_FABRIC_RST_STS_u RST_STS;
    volatile EVENT_FABRIC_CLK_CTRL_u CLK_CTRL;
    volatile EVENT_FABRIC_GEN_PUB_0_u GEN_PUB_0;
    volatile EVENT_FABRIC_GEN_PUB_1_u GEN_PUB_1;
    volatile EVENT_FABRIC_GEN_PUB_2_u GEN_PUB_2;
    volatile EVENT_FABRIC_GEN_PUB_3_u GEN_PUB_3;
    volatile EVENT_FABRIC_GEN_PUB_4_u GEN_PUB_4;
    volatile EVENT_FABRIC_GEN_PUB_5_u GEN_PUB_5;
    volatile EVENT_FABRIC_GEN_PUB_6_u GEN_PUB_6;
    volatile EVENT_FABRIC_GEN_PUB_7_u GEN_PUB_7;
    volatile EVENT_FABRIC_GEN_PUB_8_u GEN_PUB_8;
    volatile EVENT_FABRIC_GEN_PUB_9_u GEN_PUB_9;
    volatile EVENT_FABRIC_GEN_PUB_10_u GEN_PUB_10;
    volatile EVENT_FABRIC_GEN_PUB_11_u GEN_PUB_11;
    volatile EVENT_FABRIC_GEN_PUB_12_u GEN_PUB_12;
    volatile EVENT_FABRIC_GEN_PUB_13_u GEN_PUB_13;
    volatile EVENT_FABRIC_GEN_PUB_14_u GEN_PUB_14;
    volatile EVENT_FABRIC_GEN_PUB_15_u GEN_PUB_15;
    volatile EVENT_FABRIC_GEN_PUB_16_u GEN_PUB_16;
    volatile EVENT_FABRIC_GEN_PUB_17_u GEN_PUB_17;
    volatile EVENT_FABRIC_GEN_PUB_18_u GEN_PUB_18;
    volatile EVENT_FABRIC_GEN_PUB_19_u GEN_PUB_19;
    volatile EVENT_FABRIC_GEN_PUB_20_u GEN_PUB_20;
    volatile EVENT_FABRIC_GEN_PUB_21_u GEN_PUB_21;
    volatile EVENT_FABRIC_GEN_PUB_22_u GEN_PUB_22;
    volatile EVENT_FABRIC_GEN_PUB_23_u GEN_PUB_23;
    volatile EVENT_FABRIC_GEN_PUB_24_u GEN_PUB_24;
    volatile EVENT_FABRIC_GEN_SUB_0_u GEN_SUB_0;
    volatile EVENT_FABRIC_GEN_SUB_1_u GEN_SUB_1;
    volatile EVENT_FABRIC_GEN_SUB_2_u GEN_SUB_2;
    volatile EVENT_FABRIC_GEN_SUB_3_u GEN_SUB_3;
    volatile EVENT_FABRIC_GEN_SUB_4_u GEN_SUB_4;
    volatile EVENT_FABRIC_GEN_SUB_5_u GEN_SUB_5;
    volatile EVENT_FABRIC_GEN_SUB_6_u GEN_SUB_6;
    volatile EVENT_FABRIC_GEN_SUB_7_u GEN_SUB_7;
    volatile EVENT_FABRIC_GEN_SUB_8_u GEN_SUB_8;
    volatile EVENT_FABRIC_GEN_SUB_9_u GEN_SUB_9;
    volatile EVENT_FABRIC_GEN_SUB_10_u GEN_SUB_10;
    volatile EVENT_FABRIC_GEN_SUB_11_u GEN_SUB_11;
    volatile EVENT_FABRIC_GEN_SUB_12_u GEN_SUB_12;
    volatile EVENT_FABRIC_GEN_SUB_13_u GEN_SUB_13;
    volatile EVENT_FABRIC_GEN_SUB_14_u GEN_SUB_14;
    volatile EVENT_FABRIC_GEN_SUB_15_u GEN_SUB_15;
    volatile EVENT_FABRIC_GEN_SUB_16_u GEN_SUB_16;
    volatile EVENT_FABRIC_GEN_SUB_17_u GEN_SUB_17;
    volatile EVENT_FABRIC_GEN_SUB_18_u GEN_SUB_18;
    volatile EVENT_FABRIC_GEN_SUB_19_u GEN_SUB_19;
    volatile EVENT_FABRIC_GEN_SUB_20_u GEN_SUB_20;
    volatile EVENT_FABRIC_GEN_SUB_21_u GEN_SUB_21;
    volatile EVENT_FABRIC_GEN_SUB_22_u GEN_SUB_22;
    volatile EVENT_FABRIC_GEN_SUB_23_u GEN_SUB_23;
    volatile EVENT_FABRIC_GEN_SUB_24_u GEN_SUB_24;
    volatile EVENT_FABRIC_DMA_PUB_0_u DMA_PUB_0;
    volatile EVENT_FABRIC_DMA_PUB_1_u DMA_PUB_1;
    volatile EVENT_FABRIC_DMA_PUB_2_u DMA_PUB_2;
    volatile EVENT_FABRIC_DMA_PUB_3_u DMA_PUB_3;
    volatile EVENT_FABRIC_DMA_PUB_4_u DMA_PUB_4;
    volatile EVENT_FABRIC_DMA_PUB_5_u DMA_PUB_5;
    volatile EVENT_FABRIC_DMA_PUB_6_u DMA_PUB_6;
    volatile EVENT_FABRIC_DMA_PUB_7_u DMA_PUB_7;
    volatile EVENT_FABRIC_DMA_PUB_8_u DMA_PUB_8;
    volatile EVENT_FABRIC_DMA_PUB_9_u DMA_PUB_9;
    volatile EVENT_FABRIC_DMA_PUB_10_u DMA_PUB_10;
    volatile EVENT_FABRIC_DMA_PUB_11_u DMA_PUB_11;
    volatile EVENT_FABRIC_DMA_PUB_12_u DMA_PUB_12;
    volatile EVENT_FABRIC_DMA_PUB_13_u DMA_PUB_13;
    volatile EVENT_FABRIC_DMA_PUB_14_u DMA_PUB_14;
    volatile EVENT_FABRIC_DMA_PUB_15_u DMA_PUB_15;
} EVENT_FABRIC_REGS_s;

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
#define EVENT_FABRIC_GEN_PUB_0_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_0_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_1_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_1_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_2_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_2_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_3_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_3_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_4_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_4_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_5_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_5_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_6_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_6_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_7_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_7_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_8_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_8_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_9_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_9_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_10_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_10_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_11_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_11_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_12_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_12_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_13_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_13_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_14_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_14_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_15_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_15_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_16_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_16_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_17_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_17_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_18_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_18_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_19_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_19_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_20_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_20_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_21_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_21_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_22_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_22_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_23_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_23_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_24_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_24_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_0_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_0_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_1_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_1_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_2_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_2_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_3_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_3_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_4_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_4_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_5_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_5_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_6_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_6_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_7_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_7_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_8_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_8_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_9_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_9_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_10_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_10_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_11_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_11_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_12_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_12_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_13_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_13_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_14_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_14_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_15_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_15_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_16_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_16_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_17_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_17_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_18_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_18_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_19_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_19_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_20_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_20_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_21_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_21_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_22_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_22_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_23_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_23_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_24_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_24_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_DMA_PUB_0_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_0_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_1_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_1_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_2_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_2_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_3_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_3_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_4_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_4_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_5_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_5_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_6_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_6_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_7_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_7_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_8_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_8_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_9_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_9_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_10_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_10_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_11_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_11_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_12_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_12_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_13_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_13_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_14_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_14_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_15_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_15_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
#endif
