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
    EVENT_FABRIC_DESC_REG_s DESC;
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
    EVENT_FABRIC_PWR_EN_REG_s PWR_EN;
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
    EVENT_FABRIC_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_CTRL_u;

typedef struct EVENT_FABRIC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} EVENT_FABRIC_RST_STS_REG_s;

typedef union EVENT_FABRIC_RST_STS_u {
    EVENT_FABRIC_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_STS_u;

typedef struct EVENT_FABRIC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} EVENT_FABRIC_CLK_CTRL_REG_s;

typedef union EVENT_FABRIC_CLK_CTRL_u {
    EVENT_FABRIC_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_CLK_CTRL_u;

typedef struct EVENT_FABRIC_GEN_PUB_0_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_0_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_0_u {
    EVENT_FABRIC_GEN_PUB_0_REG_s GEN_PUB_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_0_u;

typedef struct EVENT_FABRIC_GEN_PUB_1_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_1_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_1_u {
    EVENT_FABRIC_GEN_PUB_1_REG_s GEN_PUB_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_1_u;

typedef struct EVENT_FABRIC_GEN_PUB_2_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_2_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_2_u {
    EVENT_FABRIC_GEN_PUB_2_REG_s GEN_PUB_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_2_u;

typedef struct EVENT_FABRIC_GEN_PUB_3_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_3_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_3_u {
    EVENT_FABRIC_GEN_PUB_3_REG_s GEN_PUB_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_3_u;

typedef struct EVENT_FABRIC_GEN_PUB_4_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_4_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_4_u {
    EVENT_FABRIC_GEN_PUB_4_REG_s GEN_PUB_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_4_u;

typedef struct EVENT_FABRIC_GEN_PUB_5_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_5_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_5_u {
    EVENT_FABRIC_GEN_PUB_5_REG_s GEN_PUB_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_5_u;

typedef struct EVENT_FABRIC_GEN_PUB_6_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_6_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_6_u {
    EVENT_FABRIC_GEN_PUB_6_REG_s GEN_PUB_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_6_u;

typedef struct EVENT_FABRIC_GEN_PUB_7_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_7_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_7_u {
    EVENT_FABRIC_GEN_PUB_7_REG_s GEN_PUB_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_7_u;

typedef struct EVENT_FABRIC_GEN_PUB_8_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_8_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_8_u {
    EVENT_FABRIC_GEN_PUB_8_REG_s GEN_PUB_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_8_u;

typedef struct EVENT_FABRIC_GEN_PUB_9_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_9_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_9_u {
    EVENT_FABRIC_GEN_PUB_9_REG_s GEN_PUB_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_9_u;

typedef struct EVENT_FABRIC_GEN_PUB_10_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_10_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_10_u {
    EVENT_FABRIC_GEN_PUB_10_REG_s GEN_PUB_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_10_u;

typedef struct EVENT_FABRIC_GEN_PUB_11_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_11_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_11_u {
    EVENT_FABRIC_GEN_PUB_11_REG_s GEN_PUB_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_11_u;

typedef struct EVENT_FABRIC_GEN_PUB_12_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_12_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_12_u {
    EVENT_FABRIC_GEN_PUB_12_REG_s GEN_PUB_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_12_u;

typedef struct EVENT_FABRIC_GEN_PUB_13_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_13_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_13_u {
    EVENT_FABRIC_GEN_PUB_13_REG_s GEN_PUB_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_13_u;

typedef struct EVENT_FABRIC_GEN_PUB_14_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_14_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_14_u {
    EVENT_FABRIC_GEN_PUB_14_REG_s GEN_PUB_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_14_u;

typedef struct EVENT_FABRIC_GEN_PUB_15_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_15_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_15_u {
    EVENT_FABRIC_GEN_PUB_15_REG_s GEN_PUB_15;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_15_u;

typedef struct EVENT_FABRIC_GEN_PUB_16_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_16_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_16_u {
    EVENT_FABRIC_GEN_PUB_16_REG_s GEN_PUB_16;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_16_u;

typedef struct EVENT_FABRIC_GEN_PUB_17_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_17_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_17_u {
    EVENT_FABRIC_GEN_PUB_17_REG_s GEN_PUB_17;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_17_u;

typedef struct EVENT_FABRIC_GEN_PUB_18_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_18_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_18_u {
    EVENT_FABRIC_GEN_PUB_18_REG_s GEN_PUB_18;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_18_u;

typedef struct EVENT_FABRIC_GEN_PUB_19_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_19_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_19_u {
    EVENT_FABRIC_GEN_PUB_19_REG_s GEN_PUB_19;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_19_u;

typedef struct EVENT_FABRIC_GEN_PUB_20_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_20_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_20_u {
    EVENT_FABRIC_GEN_PUB_20_REG_s GEN_PUB_20;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_20_u;

typedef struct EVENT_FABRIC_GEN_PUB_21_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_21_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_21_u {
    EVENT_FABRIC_GEN_PUB_21_REG_s GEN_PUB_21;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_21_u;

typedef struct EVENT_FABRIC_GEN_PUB_22_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_22_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_22_u {
    EVENT_FABRIC_GEN_PUB_22_REG_s GEN_PUB_22;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_22_u;

typedef struct EVENT_FABRIC_GEN_PUB_23_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_23_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_23_u {
    EVENT_FABRIC_GEN_PUB_23_REG_s GEN_PUB_23;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_23_u;

typedef struct EVENT_FABRIC_GEN_PUB_24_REG_s {
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_24_REG_s;

typedef union EVENT_FABRIC_GEN_PUB_24_u {
    EVENT_FABRIC_GEN_PUB_24_REG_s GEN_PUB_24;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_24_u;

typedef struct EVENT_FABRIC_GEN_SUB_0_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_0_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_0_u {
    EVENT_FABRIC_GEN_SUB_0_REG_s GEN_SUB_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_0_u;

typedef struct EVENT_FABRIC_GEN_SUB_1_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_1_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_1_u {
    EVENT_FABRIC_GEN_SUB_1_REG_s GEN_SUB_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_1_u;

typedef struct EVENT_FABRIC_GEN_SUB_2_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_2_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_2_u {
    EVENT_FABRIC_GEN_SUB_2_REG_s GEN_SUB_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_2_u;

typedef struct EVENT_FABRIC_GEN_SUB_3_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_3_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_3_u {
    EVENT_FABRIC_GEN_SUB_3_REG_s GEN_SUB_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_3_u;

typedef struct EVENT_FABRIC_GEN_SUB_4_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_4_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_4_u {
    EVENT_FABRIC_GEN_SUB_4_REG_s GEN_SUB_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_4_u;

typedef struct EVENT_FABRIC_GEN_SUB_5_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_5_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_5_u {
    EVENT_FABRIC_GEN_SUB_5_REG_s GEN_SUB_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_5_u;

typedef struct EVENT_FABRIC_GEN_SUB_6_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_6_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_6_u {
    EVENT_FABRIC_GEN_SUB_6_REG_s GEN_SUB_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_6_u;

typedef struct EVENT_FABRIC_GEN_SUB_7_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_7_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_7_u {
    EVENT_FABRIC_GEN_SUB_7_REG_s GEN_SUB_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_7_u;

typedef struct EVENT_FABRIC_GEN_SUB_8_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_8_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_8_u {
    EVENT_FABRIC_GEN_SUB_8_REG_s GEN_SUB_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_8_u;

typedef struct EVENT_FABRIC_GEN_SUB_9_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_9_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_9_u {
    EVENT_FABRIC_GEN_SUB_9_REG_s GEN_SUB_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_9_u;

typedef struct EVENT_FABRIC_GEN_SUB_10_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_10_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_10_u {
    EVENT_FABRIC_GEN_SUB_10_REG_s GEN_SUB_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_10_u;

typedef struct EVENT_FABRIC_GEN_SUB_11_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_11_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_11_u {
    EVENT_FABRIC_GEN_SUB_11_REG_s GEN_SUB_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_11_u;

typedef struct EVENT_FABRIC_GEN_SUB_12_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_12_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_12_u {
    EVENT_FABRIC_GEN_SUB_12_REG_s GEN_SUB_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_12_u;

typedef struct EVENT_FABRIC_GEN_SUB_13_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_13_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_13_u {
    EVENT_FABRIC_GEN_SUB_13_REG_s GEN_SUB_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_13_u;

typedef struct EVENT_FABRIC_GEN_SUB_14_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_14_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_14_u {
    EVENT_FABRIC_GEN_SUB_14_REG_s GEN_SUB_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_14_u;

typedef struct EVENT_FABRIC_GEN_SUB_15_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_15_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_15_u {
    EVENT_FABRIC_GEN_SUB_15_REG_s GEN_SUB_15;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_15_u;

typedef struct EVENT_FABRIC_GEN_SUB_16_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_16_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_16_u {
    EVENT_FABRIC_GEN_SUB_16_REG_s GEN_SUB_16;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_16_u;

typedef struct EVENT_FABRIC_GEN_SUB_17_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_17_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_17_u {
    EVENT_FABRIC_GEN_SUB_17_REG_s GEN_SUB_17;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_17_u;

typedef struct EVENT_FABRIC_GEN_SUB_18_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_18_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_18_u {
    EVENT_FABRIC_GEN_SUB_18_REG_s GEN_SUB_18;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_18_u;

typedef struct EVENT_FABRIC_GEN_SUB_19_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_19_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_19_u {
    EVENT_FABRIC_GEN_SUB_19_REG_s GEN_SUB_19;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_19_u;

typedef struct EVENT_FABRIC_GEN_SUB_20_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_20_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_20_u {
    EVENT_FABRIC_GEN_SUB_20_REG_s GEN_SUB_20;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_20_u;

typedef struct EVENT_FABRIC_GEN_SUB_21_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_21_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_21_u {
    EVENT_FABRIC_GEN_SUB_21_REG_s GEN_SUB_21;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_21_u;

typedef struct EVENT_FABRIC_GEN_SUB_22_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_22_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_22_u {
    EVENT_FABRIC_GEN_SUB_22_REG_s GEN_SUB_22;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_22_u;

typedef struct EVENT_FABRIC_GEN_SUB_23_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_23_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_23_u {
    EVENT_FABRIC_GEN_SUB_23_REG_s GEN_SUB_23;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_23_u;

typedef struct EVENT_FABRIC_GEN_SUB_24_REG_s {
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_24_REG_s;

typedef union EVENT_FABRIC_GEN_SUB_24_u {
    EVENT_FABRIC_GEN_SUB_24_REG_s GEN_SUB_24;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_24_u;

typedef struct EVENT_FABRIC_DMA_PUB_0_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_0_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_0_u {
    EVENT_FABRIC_DMA_PUB_0_REG_s DMA_PUB_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_0_u;

typedef struct EVENT_FABRIC_DMA_PUB_1_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_1_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_1_u {
    EVENT_FABRIC_DMA_PUB_1_REG_s DMA_PUB_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_1_u;

typedef struct EVENT_FABRIC_DMA_PUB_2_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_2_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_2_u {
    EVENT_FABRIC_DMA_PUB_2_REG_s DMA_PUB_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_2_u;

typedef struct EVENT_FABRIC_DMA_PUB_3_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_3_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_3_u {
    EVENT_FABRIC_DMA_PUB_3_REG_s DMA_PUB_3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_3_u;

typedef struct EVENT_FABRIC_DMA_PUB_4_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_4_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_4_u {
    EVENT_FABRIC_DMA_PUB_4_REG_s DMA_PUB_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_4_u;

typedef struct EVENT_FABRIC_DMA_PUB_5_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_5_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_5_u {
    EVENT_FABRIC_DMA_PUB_5_REG_s DMA_PUB_5;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_5_u;

typedef struct EVENT_FABRIC_DMA_PUB_6_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_6_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_6_u {
    EVENT_FABRIC_DMA_PUB_6_REG_s DMA_PUB_6;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_6_u;

typedef struct EVENT_FABRIC_DMA_PUB_7_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_7_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_7_u {
    EVENT_FABRIC_DMA_PUB_7_REG_s DMA_PUB_7;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_7_u;

typedef struct EVENT_FABRIC_DMA_PUB_8_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_8_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_8_u {
    EVENT_FABRIC_DMA_PUB_8_REG_s DMA_PUB_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_8_u;

typedef struct EVENT_FABRIC_DMA_PUB_9_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_9_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_9_u {
    EVENT_FABRIC_DMA_PUB_9_REG_s DMA_PUB_9;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_9_u;

typedef struct EVENT_FABRIC_DMA_PUB_10_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_10_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_10_u {
    EVENT_FABRIC_DMA_PUB_10_REG_s DMA_PUB_10;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_10_u;

typedef struct EVENT_FABRIC_DMA_PUB_11_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_11_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_11_u {
    EVENT_FABRIC_DMA_PUB_11_REG_s DMA_PUB_11;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_11_u;

typedef struct EVENT_FABRIC_DMA_PUB_12_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_12_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_12_u {
    EVENT_FABRIC_DMA_PUB_12_REG_s DMA_PUB_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_12_u;

typedef struct EVENT_FABRIC_DMA_PUB_13_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_13_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_13_u {
    EVENT_FABRIC_DMA_PUB_13_REG_s DMA_PUB_13;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_13_u;

typedef struct EVENT_FABRIC_DMA_PUB_14_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_14_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_14_u {
    EVENT_FABRIC_DMA_PUB_14_REG_s DMA_PUB_14;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_14_u;

typedef struct EVENT_FABRIC_DMA_PUB_15_REG_s {
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_15_REG_s;

typedef union EVENT_FABRIC_DMA_PUB_15_u {
    EVENT_FABRIC_DMA_PUB_15_REG_s DMA_PUB_15;
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

#define EVENT_FABRIC_DESC_module_type_OFS (0)
#define EVENT_FABRIC_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define EVENT_FABRIC_DESC_modue_subtype_OFS (8)
#define EVENT_FABRIC_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define EVENT_FABRIC_DESC_major_rev_OFS (16)
#define EVENT_FABRIC_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define EVENT_FABRIC_DESC_minor_rev_OFS (20)
#define EVENT_FABRIC_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define EVENT_FABRIC_PWR_EN_pwr_en_OFS (0)
#define EVENT_FABRIC_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_PWR_EN_pwr_en_key_OFS (24)
#define EVENT_FABRIC_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_CTRL_rst_OFS (0)
#define EVENT_FABRIC_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_RST_CTRL_rst_sts_clr_OFS (1)
#define EVENT_FABRIC_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define EVENT_FABRIC_RST_CTRL_rst_key_OFS (24)
#define EVENT_FABRIC_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_STS_rst_sts_OFS (0)
#define EVENT_FABRIC_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_CLK_CTRL_clk_en_OFS (0)
#define EVENT_FABRIC_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_GEN_PUB_0_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_0_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_1_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_1_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_2_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_2_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_3_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_3_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_4_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_4_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_5_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_5_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_6_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_6_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_7_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_7_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_8_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_8_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_9_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_9_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_10_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_10_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_11_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_11_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_12_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_12_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_13_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_13_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_14_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_14_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_15_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_15_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_16_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_16_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_17_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_17_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_18_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_18_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_19_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_19_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_20_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_20_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_21_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_21_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_22_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_22_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_23_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_23_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_PUB_24_gen_pub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_PUB_24_gen_pub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_0_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_0_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_1_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_1_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_2_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_2_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_3_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_3_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_4_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_4_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_5_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_5_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_6_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_6_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_7_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_7_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_8_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_8_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_9_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_9_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_10_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_10_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_11_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_11_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_12_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_12_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_13_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_13_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_14_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_14_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_15_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_15_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_16_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_16_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_17_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_17_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_18_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_18_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_19_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_19_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_20_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_20_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_21_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_21_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_22_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_22_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_23_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_23_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_24_gen_sub_chan_id_OFS (0)
#define EVENT_FABRIC_GEN_SUB_24_gen_sub_chan_id_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_DMA_PUB_0_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_0_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_1_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_1_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_2_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_2_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_3_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_3_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_4_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_4_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_5_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_5_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_6_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_6_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_7_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_7_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_8_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_8_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_9_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_9_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_10_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_10_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_11_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_11_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_12_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_12_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_13_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_13_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_14_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_14_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#define EVENT_FABRIC_DMA_PUB_15_dma_pub_event_id_OFS (0)
#define EVENT_FABRIC_DMA_PUB_15_dma_pub_event_id_MASK ((uint32_t)0x0000003FU)
#endif
