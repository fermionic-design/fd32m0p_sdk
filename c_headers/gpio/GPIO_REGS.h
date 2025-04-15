#ifndef GPIO_REGISTERS_H
#define GPIO_REGISTERS_H

#include <stdint.h>

typedef struct GPIO_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} GPIO_DESC_REG_s;

typedef union GPIO_DESC_u {
    GPIO_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DESC_u;

typedef struct GPIO_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} GPIO_PWR_EN_REG_s;

typedef union GPIO_PWR_EN_u {
    GPIO_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_PWR_EN_u;

typedef struct GPIO_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} GPIO_RST_CTRL_REG_s;

typedef union GPIO_RST_CTRL_u {
    GPIO_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_RST_CTRL_u;

typedef struct GPIO_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} GPIO_RST_STS_REG_s;

typedef union GPIO_RST_STS_u {
    GPIO_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_RST_STS_u;

typedef struct GPIO_CLK_CTRL_REG_s {
    unsigned int en_async_clk_req:1; // 
} GPIO_CLK_CTRL_REG_s;

typedef union GPIO_CLK_CTRL_u {
    GPIO_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_CLK_CTRL_u;

typedef struct GPIO_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} GPIO_INTR_STS_REG_s;

typedef union GPIO_INTR_STS_u {
    GPIO_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_STS_u;

typedef struct GPIO_INTR_EVENT_REG_s {
    unsigned int intr0:1; // 
    unsigned int intr1:1; // 
    unsigned int intr2:1; // 
    unsigned int intr3:1; // 
    unsigned int intr4:1; // 
    unsigned int intr5:1; // 
    unsigned int intr6:1; // 
    unsigned int intr7:1; // 
    unsigned int intr8:1; // 
    unsigned int intr9:1; // 
    unsigned int intr10:1; // 
    unsigned int intr11:1; // 
    unsigned int intr12:1; // 
    unsigned int intr13:1; // 
    unsigned int intr14:1; // 
    unsigned int intr15:1; // 
    unsigned int intr16:1; // 
    unsigned int intr17:1; // 
    unsigned int intr18:1; // 
    unsigned int intr19:1; // 
    unsigned int intr20:1; // 
    unsigned int intr21:1; // 
    unsigned int intr22:1; // 
    unsigned int intr23:1; // 
    unsigned int intr24:1; // 
    unsigned int intr25:1; // 
    unsigned int intr26:1; // 
    unsigned int intr27:1; // 
    unsigned int intr28:1; // 
    unsigned int intr29:1; // 
    unsigned int intr30:1; // 
    unsigned int intr31:1; // 
} GPIO_INTR_EVENT_REG_s;

typedef union GPIO_INTR_EVENT_u {
    GPIO_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_EVENT_u;

typedef struct GPIO_INTR_EN0_REG_s {
    unsigned int intr0_en:1; // 
    unsigned int intr1_en:1; // 
    unsigned int intr2_en:1; // 
    unsigned int intr3_en:1; // 
    unsigned int intr4_en:1; // 
    unsigned int intr5_en:1; // 
    unsigned int intr6_en:1; // 
    unsigned int intr7_en:1; // 
    unsigned int intr8_en:1; // 
    unsigned int intr9_en:1; // 
    unsigned int intr10_en:1; // 
    unsigned int intr11_en:1; // 
    unsigned int intr12_en:1; // 
    unsigned int intr13_en:1; // 
    unsigned int intr14_en:1; // 
    unsigned int intr15_en:1; // 
} GPIO_INTR_EN0_REG_s;

typedef union GPIO_INTR_EN0_u {
    GPIO_INTR_EN0_REG_s INTR_EN0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_EN0_u;

typedef struct GPIO_INTR_EN1_REG_s {
    unsigned int intr16_en:1; // 
    unsigned int intr17_en:1; // 
    unsigned int intr18_en:1; // 
    unsigned int intr19_en:1; // 
    unsigned int intr20_en:1; // 
    unsigned int intr21_en:1; // 
    unsigned int intr22_en:1; // 
    unsigned int intr23_en:1; // 
    unsigned int intr24_en:1; // 
    unsigned int intr25_en:1; // 
    unsigned int intr26_en:1; // 
    unsigned int intr27_en:1; // 
    unsigned int intr28_en:1; // 
    unsigned int intr29_en:1; // 
    unsigned int intr30_en:1; // 
    unsigned int intr31_en:1; // 
} GPIO_INTR_EN1_REG_s;

typedef union GPIO_INTR_EN1_u {
    GPIO_INTR_EN1_REG_s INTR_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_EN1_u;

typedef struct GPIO_INTR_NMI_EN0_REG_s {
    unsigned int intr0_nmi_en:1; // 
    unsigned int intr1_nmi_en:1; // 
    unsigned int intr2_nmi_en:1; // 
    unsigned int intr3_nmi_en:1; // 
    unsigned int intr4_nmi_en:1; // 
    unsigned int intr5_nmi_en:1; // 
    unsigned int intr6_nmi_en:1; // 
    unsigned int intr7_nmi_en:1; // 
    unsigned int intr8_nmi_en:1; // 
    unsigned int intr9_nmi_en:1; // 
    unsigned int intr10_nmi_en:1; // 
    unsigned int intr11_nmi_en:1; // 
    unsigned int intr12_nmi_en:1; // 
    unsigned int intr13_nmi_en:1; // 
    unsigned int intr14_nmi_en:1; // 
    unsigned int intr15_nmi_en:1; // 
} GPIO_INTR_NMI_EN0_REG_s;

typedef union GPIO_INTR_NMI_EN0_u {
    GPIO_INTR_NMI_EN0_REG_s INTR_NMI_EN0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_NMI_EN0_u;

typedef struct GPIO_INTR_NMI_EN1_REG_s {
    unsigned int intr16_nmi_en:1; // 
    unsigned int intr17_nmi_en:1; // 
    unsigned int intr18_nmi_en:1; // 
    unsigned int intr19_nmi_en:1; // 
    unsigned int intr20_nmi_en:1; // 
    unsigned int intr21_nmi_en:1; // 
    unsigned int intr22_nmi_en:1; // 
    unsigned int intr23_nmi_en:1; // 
    unsigned int intr24_nmi_en:1; // 
    unsigned int intr25_nmi_en:1; // 
    unsigned int intr26_nmi_en:1; // 
    unsigned int intr27_nmi_en:1; // 
    unsigned int intr28_nmi_en:1; // 
    unsigned int intr29_nmi_en:1; // 
    unsigned int intr30_nmi_en:1; // 
    unsigned int intr31_nmi_en:1; // 
} GPIO_INTR_NMI_EN1_REG_s;

typedef union GPIO_INTR_NMI_EN1_u {
    GPIO_INTR_NMI_EN1_REG_s INTR_NMI_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_NMI_EN1_u;

typedef struct GPIO_EVENT_EN0_REG_s {
    unsigned int intr0_event_en:1; // 
    unsigned int intr1_event_en:1; // 
    unsigned int intr2_event_en:1; // 
    unsigned int intr3_event_en:1; // 
    unsigned int intr4_event_en:1; // 
    unsigned int intr5_event_en:1; // 
    unsigned int intr6_event_en:1; // 
    unsigned int intr7_event_en:1; // 
    unsigned int intr8_event_en:1; // 
    unsigned int intr9_event_en:1; // 
    unsigned int intr10_event_en:1; // 
    unsigned int intr11_event_en:1; // 
    unsigned int intr12_event_en:1; // 
    unsigned int intr13_event_en:1; // 
    unsigned int intr14_event_en:1; // 
    unsigned int intr15_event_en:1; // 
} GPIO_EVENT_EN0_REG_s;

typedef union GPIO_EVENT_EN0_u {
    GPIO_EVENT_EN0_REG_s EVENT_EN0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_EVENT_EN0_u;

typedef struct GPIO_EVENT_EN1_REG_s {
    unsigned int intr16_event_en:1; // 
    unsigned int intr17_event_en:1; // 
    unsigned int intr18_event_en:1; // 
    unsigned int intr19_event_en:1; // 
    unsigned int intr20_event_en:1; // 
    unsigned int intr21_event_en:1; // 
    unsigned int intr22_event_en:1; // 
    unsigned int intr23_event_en:1; // 
    unsigned int intr24_event_en:1; // 
    unsigned int intr25_event_en:1; // 
    unsigned int intr26_event_en:1; // 
    unsigned int intr27_event_en:1; // 
    unsigned int intr28_event_en:1; // 
    unsigned int intr29_event_en:1; // 
    unsigned int intr30_event_en:1; // 
    unsigned int intr31_event_en:1; // 
} GPIO_EVENT_EN1_REG_s;

typedef union GPIO_EVENT_EN1_u {
    GPIO_EVENT_EN1_REG_s EVENT_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_EVENT_EN1_u;

typedef struct GPIO_INTR_SW_SET_REG_s {
    unsigned int intr0_sw_set:1; // 
    unsigned int intr1_sw_set:1; // 
    unsigned int intr2_sw_set:1; // 
    unsigned int intr3_sw_set:1; // 
    unsigned int intr4_sw_set:1; // 
    unsigned int intr5_sw_set:1; // 
    unsigned int intr6_sw_set:1; // 
    unsigned int intr7_sw_set:1; // 
    unsigned int intr8_sw_set:1; // 
    unsigned int intr9_sw_set:1; // 
    unsigned int intr10_sw_set:1; // 
    unsigned int intr11_sw_set:1; // 
    unsigned int intr12_sw_set:1; // 
    unsigned int intr13_sw_set:1; // 
    unsigned int intr14_sw_set:1; // 
    unsigned int intr15_sw_set:1; // 
    unsigned int intr16_sw_set:1; // 
    unsigned int intr17_sw_set:1; // 
    unsigned int intr18_sw_set:1; // 
    unsigned int intr19_sw_set:1; // 
    unsigned int intr20_sw_set:1; // 
    unsigned int intr21_sw_set:1; // 
    unsigned int intr22_sw_set:1; // 
    unsigned int intr23_sw_set:1; // 
    unsigned int intr24_sw_set:1; // 
    unsigned int intr25_sw_set:1; // 
    unsigned int intr26_sw_set:1; // 
    unsigned int intr27_sw_set:1; // 
    unsigned int intr28_sw_set:1; // 
    unsigned int intr29_sw_set:1; // 
    unsigned int intr30_sw_set:1; // 
    unsigned int intr31_sw_set:1; // 
} GPIO_INTR_SW_SET_REG_s;

typedef union GPIO_INTR_SW_SET_u {
    GPIO_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_SW_SET_u;

typedef struct GPIO_DOUT_3_0_REG_s {
    unsigned int dout_0:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_1:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_2:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_3:1; // 
} GPIO_DOUT_3_0_REG_s;

typedef union GPIO_DOUT_3_0_u {
    GPIO_DOUT_3_0_REG_s DOUT_3_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_3_0_u;

typedef struct GPIO_DOUT_7_4_REG_s {
    unsigned int dout_4:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_5:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_6:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_7:1; // 
} GPIO_DOUT_7_4_REG_s;

typedef union GPIO_DOUT_7_4_u {
    GPIO_DOUT_7_4_REG_s DOUT_7_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_7_4_u;

typedef struct GPIO_DOUT_11_8_REG_s {
    unsigned int dout_8:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_9:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_10:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_11:1; // 
} GPIO_DOUT_11_8_REG_s;

typedef union GPIO_DOUT_11_8_u {
    GPIO_DOUT_11_8_REG_s DOUT_11_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_11_8_u;

typedef struct GPIO_DOUT_15_12_REG_s {
    unsigned int dout_12:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_13:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_14:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_15:1; // 
} GPIO_DOUT_15_12_REG_s;

typedef union GPIO_DOUT_15_12_u {
    GPIO_DOUT_15_12_REG_s DOUT_15_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_15_12_u;

typedef struct GPIO_DOUT_19_16_REG_s {
    unsigned int dout_16:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_17:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_18:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_19:1; // 
} GPIO_DOUT_19_16_REG_s;

typedef union GPIO_DOUT_19_16_u {
    GPIO_DOUT_19_16_REG_s DOUT_19_16;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_19_16_u;

typedef struct GPIO_DOUT_23_20_REG_s {
    unsigned int dout_20:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_21:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_22:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_23:1; // 
} GPIO_DOUT_23_20_REG_s;

typedef union GPIO_DOUT_23_20_u {
    GPIO_DOUT_23_20_REG_s DOUT_23_20;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_23_20_u;

typedef struct GPIO_DOUT_27_24_REG_s {
    unsigned int dout_24:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_25:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_26:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_27:1; // 
} GPIO_DOUT_27_24_REG_s;

typedef union GPIO_DOUT_27_24_u {
    GPIO_DOUT_27_24_REG_s DOUT_27_24;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_27_24_u;

typedef struct GPIO_DOUT_31_28_REG_s {
    unsigned int dout_28:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int dout_29:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int dout_30:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int dout_31:1; // 
} GPIO_DOUT_31_28_REG_s;

typedef union GPIO_DOUT_31_28_u {
    GPIO_DOUT_31_28_REG_s DOUT_31_28;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_31_28_u;

typedef struct GPIO_DOUT_REG_s {
    unsigned int dout:32; // 
} GPIO_DOUT_REG_s;

typedef union GPIO_DOUT_u {
    GPIO_DOUT_REG_s DOUT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_u;

typedef struct GPIO_DOUT_SET_REG_s {
    unsigned int dout_set:32; // 
} GPIO_DOUT_SET_REG_s;

typedef union GPIO_DOUT_SET_u {
    GPIO_DOUT_SET_REG_s DOUT_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_SET_u;

typedef struct GPIO_DOUT_CLR_REG_s {
    unsigned int dout_clr:32; // 
} GPIO_DOUT_CLR_REG_s;

typedef union GPIO_DOUT_CLR_u {
    GPIO_DOUT_CLR_REG_s DOUT_CLR;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_CLR_u;

typedef struct GPIO_DOUT_TGL_REG_s {
    unsigned int dout_tgl:32; // 
} GPIO_DOUT_TGL_REG_s;

typedef union GPIO_DOUT_TGL_u {
    GPIO_DOUT_TGL_REG_s DOUT_TGL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_TGL_u;

typedef struct GPIO_DOUT_EN_REG_s {
    unsigned int dout_en:32; // 
} GPIO_DOUT_EN_REG_s;

typedef union GPIO_DOUT_EN_u {
    GPIO_DOUT_EN_REG_s DOUT_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_EN_u;

typedef struct GPIO_DOUT_EN_SET_REG_s {
    unsigned int dout_en_set:32; // 
} GPIO_DOUT_EN_SET_REG_s;

typedef union GPIO_DOUT_EN_SET_u {
    GPIO_DOUT_EN_SET_REG_s DOUT_EN_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_EN_SET_u;

typedef struct GPIO_DOUT_EN_CLR_REG_s {
    unsigned int dout_en_clr:32; // 
} GPIO_DOUT_EN_CLR_REG_s;

typedef union GPIO_DOUT_EN_CLR_u {
    GPIO_DOUT_EN_CLR_REG_s DOUT_EN_CLR;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_EN_CLR_u;

typedef struct GPIO_DIN_3_0_REG_s {
    unsigned int din_0:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_1:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_2:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_3:1; // 
} GPIO_DIN_3_0_REG_s;

typedef union GPIO_DIN_3_0_u {
    GPIO_DIN_3_0_REG_s DIN_3_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_3_0_u;

typedef struct GPIO_DIN_7_4_REG_s {
    unsigned int din_4:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_5:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_6:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_7:1; // 
} GPIO_DIN_7_4_REG_s;

typedef union GPIO_DIN_7_4_u {
    GPIO_DIN_7_4_REG_s DIN_7_4;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_7_4_u;

typedef struct GPIO_DIN_11_8_REG_s {
    unsigned int din_8:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_9:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_10:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_11:1; // 
} GPIO_DIN_11_8_REG_s;

typedef union GPIO_DIN_11_8_u {
    GPIO_DIN_11_8_REG_s DIN_11_8;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_11_8_u;

typedef struct GPIO_DIN_15_12_REG_s {
    unsigned int din_12:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_13:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_14:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_15:1; // 
} GPIO_DIN_15_12_REG_s;

typedef union GPIO_DIN_15_12_u {
    GPIO_DIN_15_12_REG_s DIN_15_12;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_15_12_u;

typedef struct GPIO_DIN_19_16_REG_s {
    unsigned int din_16:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_17:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_18:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_19:1; // 
} GPIO_DIN_19_16_REG_s;

typedef union GPIO_DIN_19_16_u {
    GPIO_DIN_19_16_REG_s DIN_19_16;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_19_16_u;

typedef struct GPIO_DIN_23_20_REG_s {
    unsigned int din_20:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_21:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_22:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_23:1; // 
} GPIO_DIN_23_20_REG_s;

typedef union GPIO_DIN_23_20_u {
    GPIO_DIN_23_20_REG_s DIN_23_20;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_23_20_u;

typedef struct GPIO_DIN_27_24_REG_s {
    unsigned int din_24:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_25:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_26:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_27:1; // 
} GPIO_DIN_27_24_REG_s;

typedef union GPIO_DIN_27_24_u {
    GPIO_DIN_27_24_REG_s DIN_27_24;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_27_24_u;

typedef struct GPIO_DIN_31_28_REG_s {
    unsigned int din_28:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int din_29:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int din_30:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int din_31:1; // 
} GPIO_DIN_31_28_REG_s;

typedef union GPIO_DIN_31_28_u {
    GPIO_DIN_31_28_REG_s DIN_31_28;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_31_28_u;

typedef struct GPIO_DIN_REG_s {
    unsigned int din:32; // 
} GPIO_DIN_REG_s;

typedef union GPIO_DIN_u {
    GPIO_DIN_REG_s DIN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_u;

typedef struct GPIO_FILT_EN_0_REG_s {
    unsigned int filt_en_0:2; // 
    unsigned int filt_en_1:2; // 
    unsigned int filt_en_2:2; // 
    unsigned int filt_en_3:2; // 
    unsigned int filt_en_4:2; // 
    unsigned int filt_en_5:2; // 
    unsigned int filt_en_6:2; // 
    unsigned int filt_en_7:2; // 
    unsigned int filt_en_8:2; // 
    unsigned int filt_en_9:2; // 
    unsigned int filt_en_10:2; // 
    unsigned int filt_en_11:2; // 
    unsigned int filt_en_12:2; // 
    unsigned int filt_en_13:2; // 
    unsigned int filt_en_14:2; // 
    unsigned int filt_en_15:2; // 
} GPIO_FILT_EN_0_REG_s;

typedef union GPIO_FILT_EN_0_u {
    GPIO_FILT_EN_0_REG_s FILT_EN_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_FILT_EN_0_u;

typedef struct GPIO_FILT_EN_1_REG_s {
    unsigned int filt_en_16:2; // 
    unsigned int filt_en_17:2; // 
    unsigned int filt_en_18:2; // 
    unsigned int filt_en_19:2; // 
    unsigned int filt_en_20:2; // 
    unsigned int filt_en_21:2; // 
    unsigned int filt_en_22:2; // 
    unsigned int filt_en_23:2; // 
    unsigned int filt_en_24:2; // 
    unsigned int filt_en_25:2; // 
    unsigned int filt_en_26:2; // 
    unsigned int filt_en_27:2; // 
    unsigned int filt_en_28:2; // 
    unsigned int filt_en_29:2; // 
    unsigned int filt_en_30:2; // 
    unsigned int filt_en_31:2; // 
} GPIO_FILT_EN_1_REG_s;

typedef union GPIO_FILT_EN_1_u {
    GPIO_FILT_EN_1_REG_s FILT_EN_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_FILT_EN_1_u;

typedef struct GPIO_INTR_POL_0_REG_s {
    unsigned int intr_pol_0:2; // 
    unsigned int intr_pol_1:2; // 
    unsigned int intr_pol_2:2; // 
    unsigned int intr_pol_3:2; // 
    unsigned int intr_pol_4:2; // 
    unsigned int intr_pol_5:2; // 
    unsigned int intr_pol_6:2; // 
    unsigned int intr_pol_7:2; // 
    unsigned int intr_pol_8:2; // 
    unsigned int intr_pol_9:2; // 
    unsigned int intr_pol_10:2; // 
    unsigned int intr_pol_11:2; // 
    unsigned int intr_pol_12:2; // 
    unsigned int intr_pol_13:2; // 
    unsigned int intr_pol_14:2; // 
    unsigned int intr_pol_15:2; // 
} GPIO_INTR_POL_0_REG_s;

typedef union GPIO_INTR_POL_0_u {
    GPIO_INTR_POL_0_REG_s INTR_POL_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_POL_0_u;

typedef struct GPIO_INTR_POL_1_REG_s {
    unsigned int intr_pol_16:2; // 
    unsigned int intr_pol_17:2; // 
    unsigned int intr_pol_18:2; // 
    unsigned int intr_pol_19:2; // 
    unsigned int intr_pol_20:2; // 
    unsigned int intr_pol_21:2; // 
    unsigned int intr_pol_22:2; // 
    unsigned int intr_pol_23:2; // 
    unsigned int intr_pol_24:2; // 
    unsigned int intr_pol_25:2; // 
    unsigned int intr_pol_26:2; // 
    unsigned int intr_pol_27:2; // 
    unsigned int intr_pol_28:2; // 
    unsigned int intr_pol_29:2; // 
    unsigned int intr_pol_30:2; // 
    unsigned int intr_pol_31:2; // 
} GPIO_INTR_POL_1_REG_s;

typedef union GPIO_INTR_POL_1_u {
    GPIO_INTR_POL_1_REG_s INTR_POL_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_POL_1_u;

typedef struct GPIO_SUB_CFG_0_REG_s {
    unsigned int sub_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int action:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int bit_num:5; // 
} GPIO_SUB_CFG_0_REG_s;

typedef union GPIO_SUB_CFG_0_u {
    GPIO_SUB_CFG_0_REG_s SUB_CFG_0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_SUB_CFG_0_u;

typedef struct GPIO_SUB_CFG_1_REG_s {
    unsigned int sub_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int action:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int bit_num:5; // 
} GPIO_SUB_CFG_1_REG_s;

typedef union GPIO_SUB_CFG_1_u {
    GPIO_SUB_CFG_1_REG_s SUB_CFG_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_SUB_CFG_1_u;

typedef struct GPIO_DMA_WR_MASK_REG_s {
    unsigned int dma_wr_mask:32; // 
} GPIO_DMA_WR_MASK_REG_s;

typedef union GPIO_DMA_WR_MASK_u {
    GPIO_DMA_WR_MASK_REG_s DMA_WR_MASK;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DMA_WR_MASK_u;

typedef struct GPIO_REGS_s{
    volatile GPIO_DESC_u DESC;
    volatile GPIO_PWR_EN_u PWR_EN;
    volatile GPIO_RST_CTRL_u RST_CTRL;
    volatile GPIO_RST_STS_u RST_STS;
    volatile GPIO_CLK_CTRL_u CLK_CTRL;
    volatile GPIO_INTR_STS_u INTR_STS;
    volatile GPIO_INTR_EVENT_u INTR_EVENT;
    volatile GPIO_INTR_EN0_u INTR_EN0;
    volatile GPIO_INTR_EN1_u INTR_EN1;
    volatile GPIO_INTR_NMI_EN0_u INTR_NMI_EN0;
    volatile GPIO_INTR_NMI_EN1_u INTR_NMI_EN1;
    volatile GPIO_EVENT_EN0_u EVENT_EN0;
    volatile GPIO_EVENT_EN1_u EVENT_EN1;
    volatile GPIO_INTR_SW_SET_u INTR_SW_SET;
    volatile GPIO_DOUT_3_0_u DOUT_3_0;
    volatile GPIO_DOUT_7_4_u DOUT_7_4;
    volatile GPIO_DOUT_11_8_u DOUT_11_8;
    volatile GPIO_DOUT_15_12_u DOUT_15_12;
    volatile GPIO_DOUT_19_16_u DOUT_19_16;
    volatile GPIO_DOUT_23_20_u DOUT_23_20;
    volatile GPIO_DOUT_27_24_u DOUT_27_24;
    volatile GPIO_DOUT_31_28_u DOUT_31_28;
    volatile GPIO_DOUT_u DOUT;
    volatile GPIO_DOUT_SET_u DOUT_SET;
    volatile GPIO_DOUT_CLR_u DOUT_CLR;
    volatile GPIO_DOUT_TGL_u DOUT_TGL;
    volatile GPIO_DOUT_EN_u DOUT_EN;
    volatile GPIO_DOUT_EN_SET_u DOUT_EN_SET;
    volatile GPIO_DOUT_EN_CLR_u DOUT_EN_CLR;
    volatile GPIO_DIN_3_0_u DIN_3_0;
    volatile GPIO_DIN_7_4_u DIN_7_4;
    volatile GPIO_DIN_11_8_u DIN_11_8;
    volatile GPIO_DIN_15_12_u DIN_15_12;
    volatile GPIO_DIN_19_16_u DIN_19_16;
    volatile GPIO_DIN_23_20_u DIN_23_20;
    volatile GPIO_DIN_27_24_u DIN_27_24;
    volatile GPIO_DIN_31_28_u DIN_31_28;
    volatile GPIO_DIN_u DIN;
    volatile GPIO_FILT_EN_0_u FILT_EN_0;
    volatile GPIO_FILT_EN_1_u FILT_EN_1;
    volatile GPIO_INTR_POL_0_u INTR_POL_0;
    volatile GPIO_INTR_POL_1_u INTR_POL_1;
    volatile GPIO_SUB_CFG_0_u SUB_CFG_0;
    volatile GPIO_SUB_CFG_1_u SUB_CFG_1;
    volatile GPIO_DMA_WR_MASK_u DMA_WR_MASK;
} GPIO_REGS_s;

#define GPIO_DESC_module_type_OFS (0)
#define GPIO_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define GPIO_DESC_modue_subtype_OFS (8)
#define GPIO_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define GPIO_DESC_major_rev_OFS (16)
#define GPIO_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define GPIO_DESC_minor_rev_OFS (20)
#define GPIO_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define GPIO_PWR_EN_pwr_en_OFS (0)
#define GPIO_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define GPIO_PWR_EN_pwr_en_key_OFS (24)
#define GPIO_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define GPIO_RST_CTRL_rst_OFS (0)
#define GPIO_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define GPIO_RST_CTRL_rst_sts_clr_OFS (1)
#define GPIO_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define GPIO_RST_CTRL_rst_key_OFS (24)
#define GPIO_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define GPIO_RST_STS_rst_sts_OFS (0)
#define GPIO_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define GPIO_CLK_CTRL_en_async_clk_req_OFS (0)
#define GPIO_CLK_CTRL_en_async_clk_req_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_STS_intr_first_OFS (0)
#define GPIO_INTR_STS_intr_first_MASK ((uint32_t)0x000000FFU)
#define GPIO_INTR_EVENT_intr0_OFS (0)
#define GPIO_INTR_EVENT_intr0_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EVENT_intr1_OFS (1)
#define GPIO_INTR_EVENT_intr1_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EVENT_intr2_OFS (2)
#define GPIO_INTR_EVENT_intr2_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EVENT_intr3_OFS (3)
#define GPIO_INTR_EVENT_intr3_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EVENT_intr4_OFS (4)
#define GPIO_INTR_EVENT_intr4_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EVENT_intr5_OFS (5)
#define GPIO_INTR_EVENT_intr5_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EVENT_intr6_OFS (6)
#define GPIO_INTR_EVENT_intr6_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EVENT_intr7_OFS (7)
#define GPIO_INTR_EVENT_intr7_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EVENT_intr8_OFS (8)
#define GPIO_INTR_EVENT_intr8_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EVENT_intr9_OFS (9)
#define GPIO_INTR_EVENT_intr9_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EVENT_intr10_OFS (10)
#define GPIO_INTR_EVENT_intr10_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EVENT_intr11_OFS (11)
#define GPIO_INTR_EVENT_intr11_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EVENT_intr12_OFS (12)
#define GPIO_INTR_EVENT_intr12_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EVENT_intr13_OFS (13)
#define GPIO_INTR_EVENT_intr13_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EVENT_intr14_OFS (14)
#define GPIO_INTR_EVENT_intr14_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EVENT_intr15_OFS (15)
#define GPIO_INTR_EVENT_intr15_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_EVENT_intr16_OFS (16)
#define GPIO_INTR_EVENT_intr16_MASK ((uint32_t)0x00010000U)
#define GPIO_INTR_EVENT_intr17_OFS (17)
#define GPIO_INTR_EVENT_intr17_MASK ((uint32_t)0x00020000U)
#define GPIO_INTR_EVENT_intr18_OFS (18)
#define GPIO_INTR_EVENT_intr18_MASK ((uint32_t)0x00040000U)
#define GPIO_INTR_EVENT_intr19_OFS (19)
#define GPIO_INTR_EVENT_intr19_MASK ((uint32_t)0x00080000U)
#define GPIO_INTR_EVENT_intr20_OFS (20)
#define GPIO_INTR_EVENT_intr20_MASK ((uint32_t)0x00100000U)
#define GPIO_INTR_EVENT_intr21_OFS (21)
#define GPIO_INTR_EVENT_intr21_MASK ((uint32_t)0x00200000U)
#define GPIO_INTR_EVENT_intr22_OFS (22)
#define GPIO_INTR_EVENT_intr22_MASK ((uint32_t)0x00400000U)
#define GPIO_INTR_EVENT_intr23_OFS (23)
#define GPIO_INTR_EVENT_intr23_MASK ((uint32_t)0x00800000U)
#define GPIO_INTR_EVENT_intr24_OFS (24)
#define GPIO_INTR_EVENT_intr24_MASK ((uint32_t)0x01000000U)
#define GPIO_INTR_EVENT_intr25_OFS (25)
#define GPIO_INTR_EVENT_intr25_MASK ((uint32_t)0x02000000U)
#define GPIO_INTR_EVENT_intr26_OFS (26)
#define GPIO_INTR_EVENT_intr26_MASK ((uint32_t)0x04000000U)
#define GPIO_INTR_EVENT_intr27_OFS (27)
#define GPIO_INTR_EVENT_intr27_MASK ((uint32_t)0x08000000U)
#define GPIO_INTR_EVENT_intr28_OFS (28)
#define GPIO_INTR_EVENT_intr28_MASK ((uint32_t)0x10000000U)
#define GPIO_INTR_EVENT_intr29_OFS (29)
#define GPIO_INTR_EVENT_intr29_MASK ((uint32_t)0x20000000U)
#define GPIO_INTR_EVENT_intr30_OFS (30)
#define GPIO_INTR_EVENT_intr30_MASK ((uint32_t)0x40000000U)
#define GPIO_INTR_EVENT_intr31_OFS (31)
#define GPIO_INTR_EVENT_intr31_MASK ((uint32_t)0x80000000U)
#define GPIO_INTR_EN0_intr0_en_OFS (0)
#define GPIO_INTR_EN0_intr0_en_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EN0_intr1_en_OFS (1)
#define GPIO_INTR_EN0_intr1_en_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EN0_intr2_en_OFS (2)
#define GPIO_INTR_EN0_intr2_en_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EN0_intr3_en_OFS (3)
#define GPIO_INTR_EN0_intr3_en_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EN0_intr4_en_OFS (4)
#define GPIO_INTR_EN0_intr4_en_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EN0_intr5_en_OFS (5)
#define GPIO_INTR_EN0_intr5_en_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EN0_intr6_en_OFS (6)
#define GPIO_INTR_EN0_intr6_en_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EN0_intr7_en_OFS (7)
#define GPIO_INTR_EN0_intr7_en_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EN0_intr8_en_OFS (8)
#define GPIO_INTR_EN0_intr8_en_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EN0_intr9_en_OFS (9)
#define GPIO_INTR_EN0_intr9_en_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EN0_intr10_en_OFS (10)
#define GPIO_INTR_EN0_intr10_en_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EN0_intr11_en_OFS (11)
#define GPIO_INTR_EN0_intr11_en_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EN0_intr12_en_OFS (12)
#define GPIO_INTR_EN0_intr12_en_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EN0_intr13_en_OFS (13)
#define GPIO_INTR_EN0_intr13_en_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EN0_intr14_en_OFS (14)
#define GPIO_INTR_EN0_intr14_en_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EN0_intr15_en_OFS (15)
#define GPIO_INTR_EN0_intr15_en_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_EN1_intr16_en_OFS (0)
#define GPIO_INTR_EN1_intr16_en_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EN1_intr17_en_OFS (1)
#define GPIO_INTR_EN1_intr17_en_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EN1_intr18_en_OFS (2)
#define GPIO_INTR_EN1_intr18_en_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EN1_intr19_en_OFS (3)
#define GPIO_INTR_EN1_intr19_en_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EN1_intr20_en_OFS (4)
#define GPIO_INTR_EN1_intr20_en_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EN1_intr21_en_OFS (5)
#define GPIO_INTR_EN1_intr21_en_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EN1_intr22_en_OFS (6)
#define GPIO_INTR_EN1_intr22_en_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EN1_intr23_en_OFS (7)
#define GPIO_INTR_EN1_intr23_en_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EN1_intr24_en_OFS (8)
#define GPIO_INTR_EN1_intr24_en_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EN1_intr25_en_OFS (9)
#define GPIO_INTR_EN1_intr25_en_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EN1_intr26_en_OFS (10)
#define GPIO_INTR_EN1_intr26_en_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EN1_intr27_en_OFS (11)
#define GPIO_INTR_EN1_intr27_en_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EN1_intr28_en_OFS (12)
#define GPIO_INTR_EN1_intr28_en_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EN1_intr29_en_OFS (13)
#define GPIO_INTR_EN1_intr29_en_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EN1_intr30_en_OFS (14)
#define GPIO_INTR_EN1_intr30_en_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EN1_intr31_en_OFS (15)
#define GPIO_INTR_EN1_intr31_en_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_NMI_EN0_intr0_nmi_en_OFS (0)
#define GPIO_INTR_NMI_EN0_intr0_nmi_en_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_NMI_EN0_intr1_nmi_en_OFS (1)
#define GPIO_INTR_NMI_EN0_intr1_nmi_en_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_NMI_EN0_intr2_nmi_en_OFS (2)
#define GPIO_INTR_NMI_EN0_intr2_nmi_en_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_NMI_EN0_intr3_nmi_en_OFS (3)
#define GPIO_INTR_NMI_EN0_intr3_nmi_en_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_NMI_EN0_intr4_nmi_en_OFS (4)
#define GPIO_INTR_NMI_EN0_intr4_nmi_en_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_NMI_EN0_intr5_nmi_en_OFS (5)
#define GPIO_INTR_NMI_EN0_intr5_nmi_en_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_NMI_EN0_intr6_nmi_en_OFS (6)
#define GPIO_INTR_NMI_EN0_intr6_nmi_en_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_NMI_EN0_intr7_nmi_en_OFS (7)
#define GPIO_INTR_NMI_EN0_intr7_nmi_en_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_NMI_EN0_intr8_nmi_en_OFS (8)
#define GPIO_INTR_NMI_EN0_intr8_nmi_en_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_NMI_EN0_intr9_nmi_en_OFS (9)
#define GPIO_INTR_NMI_EN0_intr9_nmi_en_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_NMI_EN0_intr10_nmi_en_OFS (10)
#define GPIO_INTR_NMI_EN0_intr10_nmi_en_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_NMI_EN0_intr11_nmi_en_OFS (11)
#define GPIO_INTR_NMI_EN0_intr11_nmi_en_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_NMI_EN0_intr12_nmi_en_OFS (12)
#define GPIO_INTR_NMI_EN0_intr12_nmi_en_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_NMI_EN0_intr13_nmi_en_OFS (13)
#define GPIO_INTR_NMI_EN0_intr13_nmi_en_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_NMI_EN0_intr14_nmi_en_OFS (14)
#define GPIO_INTR_NMI_EN0_intr14_nmi_en_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_NMI_EN0_intr15_nmi_en_OFS (15)
#define GPIO_INTR_NMI_EN0_intr15_nmi_en_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_NMI_EN1_intr16_nmi_en_OFS (0)
#define GPIO_INTR_NMI_EN1_intr16_nmi_en_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_NMI_EN1_intr17_nmi_en_OFS (1)
#define GPIO_INTR_NMI_EN1_intr17_nmi_en_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_NMI_EN1_intr18_nmi_en_OFS (2)
#define GPIO_INTR_NMI_EN1_intr18_nmi_en_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_NMI_EN1_intr19_nmi_en_OFS (3)
#define GPIO_INTR_NMI_EN1_intr19_nmi_en_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_NMI_EN1_intr20_nmi_en_OFS (4)
#define GPIO_INTR_NMI_EN1_intr20_nmi_en_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_NMI_EN1_intr21_nmi_en_OFS (5)
#define GPIO_INTR_NMI_EN1_intr21_nmi_en_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_NMI_EN1_intr22_nmi_en_OFS (6)
#define GPIO_INTR_NMI_EN1_intr22_nmi_en_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_NMI_EN1_intr23_nmi_en_OFS (7)
#define GPIO_INTR_NMI_EN1_intr23_nmi_en_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_NMI_EN1_intr24_nmi_en_OFS (8)
#define GPIO_INTR_NMI_EN1_intr24_nmi_en_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_NMI_EN1_intr25_nmi_en_OFS (9)
#define GPIO_INTR_NMI_EN1_intr25_nmi_en_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_NMI_EN1_intr26_nmi_en_OFS (10)
#define GPIO_INTR_NMI_EN1_intr26_nmi_en_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_NMI_EN1_intr27_nmi_en_OFS (11)
#define GPIO_INTR_NMI_EN1_intr27_nmi_en_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_NMI_EN1_intr28_nmi_en_OFS (12)
#define GPIO_INTR_NMI_EN1_intr28_nmi_en_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_NMI_EN1_intr29_nmi_en_OFS (13)
#define GPIO_INTR_NMI_EN1_intr29_nmi_en_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_NMI_EN1_intr30_nmi_en_OFS (14)
#define GPIO_INTR_NMI_EN1_intr30_nmi_en_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_NMI_EN1_intr31_nmi_en_OFS (15)
#define GPIO_INTR_NMI_EN1_intr31_nmi_en_MASK ((uint32_t)0x00008000U)
#define GPIO_EVENT_EN0_intr0_event_en_OFS (0)
#define GPIO_EVENT_EN0_intr0_event_en_MASK ((uint32_t)0x00000001U)
#define GPIO_EVENT_EN0_intr1_event_en_OFS (1)
#define GPIO_EVENT_EN0_intr1_event_en_MASK ((uint32_t)0x00000002U)
#define GPIO_EVENT_EN0_intr2_event_en_OFS (2)
#define GPIO_EVENT_EN0_intr2_event_en_MASK ((uint32_t)0x00000004U)
#define GPIO_EVENT_EN0_intr3_event_en_OFS (3)
#define GPIO_EVENT_EN0_intr3_event_en_MASK ((uint32_t)0x00000008U)
#define GPIO_EVENT_EN0_intr4_event_en_OFS (4)
#define GPIO_EVENT_EN0_intr4_event_en_MASK ((uint32_t)0x00000010U)
#define GPIO_EVENT_EN0_intr5_event_en_OFS (5)
#define GPIO_EVENT_EN0_intr5_event_en_MASK ((uint32_t)0x00000020U)
#define GPIO_EVENT_EN0_intr6_event_en_OFS (6)
#define GPIO_EVENT_EN0_intr6_event_en_MASK ((uint32_t)0x00000040U)
#define GPIO_EVENT_EN0_intr7_event_en_OFS (7)
#define GPIO_EVENT_EN0_intr7_event_en_MASK ((uint32_t)0x00000080U)
#define GPIO_EVENT_EN0_intr8_event_en_OFS (8)
#define GPIO_EVENT_EN0_intr8_event_en_MASK ((uint32_t)0x00000100U)
#define GPIO_EVENT_EN0_intr9_event_en_OFS (9)
#define GPIO_EVENT_EN0_intr9_event_en_MASK ((uint32_t)0x00000200U)
#define GPIO_EVENT_EN0_intr10_event_en_OFS (10)
#define GPIO_EVENT_EN0_intr10_event_en_MASK ((uint32_t)0x00000400U)
#define GPIO_EVENT_EN0_intr11_event_en_OFS (11)
#define GPIO_EVENT_EN0_intr11_event_en_MASK ((uint32_t)0x00000800U)
#define GPIO_EVENT_EN0_intr12_event_en_OFS (12)
#define GPIO_EVENT_EN0_intr12_event_en_MASK ((uint32_t)0x00001000U)
#define GPIO_EVENT_EN0_intr13_event_en_OFS (13)
#define GPIO_EVENT_EN0_intr13_event_en_MASK ((uint32_t)0x00002000U)
#define GPIO_EVENT_EN0_intr14_event_en_OFS (14)
#define GPIO_EVENT_EN0_intr14_event_en_MASK ((uint32_t)0x00004000U)
#define GPIO_EVENT_EN0_intr15_event_en_OFS (15)
#define GPIO_EVENT_EN0_intr15_event_en_MASK ((uint32_t)0x00008000U)
#define GPIO_EVENT_EN1_intr16_event_en_OFS (0)
#define GPIO_EVENT_EN1_intr16_event_en_MASK ((uint32_t)0x00000001U)
#define GPIO_EVENT_EN1_intr17_event_en_OFS (1)
#define GPIO_EVENT_EN1_intr17_event_en_MASK ((uint32_t)0x00000002U)
#define GPIO_EVENT_EN1_intr18_event_en_OFS (2)
#define GPIO_EVENT_EN1_intr18_event_en_MASK ((uint32_t)0x00000004U)
#define GPIO_EVENT_EN1_intr19_event_en_OFS (3)
#define GPIO_EVENT_EN1_intr19_event_en_MASK ((uint32_t)0x00000008U)
#define GPIO_EVENT_EN1_intr20_event_en_OFS (4)
#define GPIO_EVENT_EN1_intr20_event_en_MASK ((uint32_t)0x00000010U)
#define GPIO_EVENT_EN1_intr21_event_en_OFS (5)
#define GPIO_EVENT_EN1_intr21_event_en_MASK ((uint32_t)0x00000020U)
#define GPIO_EVENT_EN1_intr22_event_en_OFS (6)
#define GPIO_EVENT_EN1_intr22_event_en_MASK ((uint32_t)0x00000040U)
#define GPIO_EVENT_EN1_intr23_event_en_OFS (7)
#define GPIO_EVENT_EN1_intr23_event_en_MASK ((uint32_t)0x00000080U)
#define GPIO_EVENT_EN1_intr24_event_en_OFS (8)
#define GPIO_EVENT_EN1_intr24_event_en_MASK ((uint32_t)0x00000100U)
#define GPIO_EVENT_EN1_intr25_event_en_OFS (9)
#define GPIO_EVENT_EN1_intr25_event_en_MASK ((uint32_t)0x00000200U)
#define GPIO_EVENT_EN1_intr26_event_en_OFS (10)
#define GPIO_EVENT_EN1_intr26_event_en_MASK ((uint32_t)0x00000400U)
#define GPIO_EVENT_EN1_intr27_event_en_OFS (11)
#define GPIO_EVENT_EN1_intr27_event_en_MASK ((uint32_t)0x00000800U)
#define GPIO_EVENT_EN1_intr28_event_en_OFS (12)
#define GPIO_EVENT_EN1_intr28_event_en_MASK ((uint32_t)0x00001000U)
#define GPIO_EVENT_EN1_intr29_event_en_OFS (13)
#define GPIO_EVENT_EN1_intr29_event_en_MASK ((uint32_t)0x00002000U)
#define GPIO_EVENT_EN1_intr30_event_en_OFS (14)
#define GPIO_EVENT_EN1_intr30_event_en_MASK ((uint32_t)0x00004000U)
#define GPIO_EVENT_EN1_intr31_event_en_OFS (15)
#define GPIO_EVENT_EN1_intr31_event_en_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_SW_SET_intr0_sw_set_OFS (0)
#define GPIO_INTR_SW_SET_intr0_sw_set_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_SW_SET_intr1_sw_set_OFS (1)
#define GPIO_INTR_SW_SET_intr1_sw_set_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_SW_SET_intr2_sw_set_OFS (2)
#define GPIO_INTR_SW_SET_intr2_sw_set_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_SW_SET_intr3_sw_set_OFS (3)
#define GPIO_INTR_SW_SET_intr3_sw_set_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_SW_SET_intr4_sw_set_OFS (4)
#define GPIO_INTR_SW_SET_intr4_sw_set_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_SW_SET_intr5_sw_set_OFS (5)
#define GPIO_INTR_SW_SET_intr5_sw_set_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_SW_SET_intr6_sw_set_OFS (6)
#define GPIO_INTR_SW_SET_intr6_sw_set_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_SW_SET_intr7_sw_set_OFS (7)
#define GPIO_INTR_SW_SET_intr7_sw_set_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_SW_SET_intr8_sw_set_OFS (8)
#define GPIO_INTR_SW_SET_intr8_sw_set_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_SW_SET_intr9_sw_set_OFS (9)
#define GPIO_INTR_SW_SET_intr9_sw_set_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_SW_SET_intr10_sw_set_OFS (10)
#define GPIO_INTR_SW_SET_intr10_sw_set_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_SW_SET_intr11_sw_set_OFS (11)
#define GPIO_INTR_SW_SET_intr11_sw_set_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_SW_SET_intr12_sw_set_OFS (12)
#define GPIO_INTR_SW_SET_intr12_sw_set_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_SW_SET_intr13_sw_set_OFS (13)
#define GPIO_INTR_SW_SET_intr13_sw_set_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_SW_SET_intr14_sw_set_OFS (14)
#define GPIO_INTR_SW_SET_intr14_sw_set_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_SW_SET_intr15_sw_set_OFS (15)
#define GPIO_INTR_SW_SET_intr15_sw_set_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_SW_SET_intr16_sw_set_OFS (16)
#define GPIO_INTR_SW_SET_intr16_sw_set_MASK ((uint32_t)0x00010000U)
#define GPIO_INTR_SW_SET_intr17_sw_set_OFS (17)
#define GPIO_INTR_SW_SET_intr17_sw_set_MASK ((uint32_t)0x00020000U)
#define GPIO_INTR_SW_SET_intr18_sw_set_OFS (18)
#define GPIO_INTR_SW_SET_intr18_sw_set_MASK ((uint32_t)0x00040000U)
#define GPIO_INTR_SW_SET_intr19_sw_set_OFS (19)
#define GPIO_INTR_SW_SET_intr19_sw_set_MASK ((uint32_t)0x00080000U)
#define GPIO_INTR_SW_SET_intr20_sw_set_OFS (20)
#define GPIO_INTR_SW_SET_intr20_sw_set_MASK ((uint32_t)0x00100000U)
#define GPIO_INTR_SW_SET_intr21_sw_set_OFS (21)
#define GPIO_INTR_SW_SET_intr21_sw_set_MASK ((uint32_t)0x00200000U)
#define GPIO_INTR_SW_SET_intr22_sw_set_OFS (22)
#define GPIO_INTR_SW_SET_intr22_sw_set_MASK ((uint32_t)0x00400000U)
#define GPIO_INTR_SW_SET_intr23_sw_set_OFS (23)
#define GPIO_INTR_SW_SET_intr23_sw_set_MASK ((uint32_t)0x00800000U)
#define GPIO_INTR_SW_SET_intr24_sw_set_OFS (24)
#define GPIO_INTR_SW_SET_intr24_sw_set_MASK ((uint32_t)0x01000000U)
#define GPIO_INTR_SW_SET_intr25_sw_set_OFS (25)
#define GPIO_INTR_SW_SET_intr25_sw_set_MASK ((uint32_t)0x02000000U)
#define GPIO_INTR_SW_SET_intr26_sw_set_OFS (26)
#define GPIO_INTR_SW_SET_intr26_sw_set_MASK ((uint32_t)0x04000000U)
#define GPIO_INTR_SW_SET_intr27_sw_set_OFS (27)
#define GPIO_INTR_SW_SET_intr27_sw_set_MASK ((uint32_t)0x08000000U)
#define GPIO_INTR_SW_SET_intr28_sw_set_OFS (28)
#define GPIO_INTR_SW_SET_intr28_sw_set_MASK ((uint32_t)0x10000000U)
#define GPIO_INTR_SW_SET_intr29_sw_set_OFS (29)
#define GPIO_INTR_SW_SET_intr29_sw_set_MASK ((uint32_t)0x20000000U)
#define GPIO_INTR_SW_SET_intr30_sw_set_OFS (30)
#define GPIO_INTR_SW_SET_intr30_sw_set_MASK ((uint32_t)0x40000000U)
#define GPIO_INTR_SW_SET_intr31_sw_set_OFS (31)
#define GPIO_INTR_SW_SET_intr31_sw_set_MASK ((uint32_t)0x80000000U)
#define GPIO_DOUT_3_0_dout_0_OFS (0)
#define GPIO_DOUT_3_0_dout_0_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_3_0_dout_1_OFS (8)
#define GPIO_DOUT_3_0_dout_1_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_3_0_dout_2_OFS (16)
#define GPIO_DOUT_3_0_dout_2_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_3_0_dout_3_OFS (24)
#define GPIO_DOUT_3_0_dout_3_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_7_4_dout_4_OFS (0)
#define GPIO_DOUT_7_4_dout_4_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_7_4_dout_5_OFS (8)
#define GPIO_DOUT_7_4_dout_5_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_7_4_dout_6_OFS (16)
#define GPIO_DOUT_7_4_dout_6_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_7_4_dout_7_OFS (24)
#define GPIO_DOUT_7_4_dout_7_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_11_8_dout_8_OFS (0)
#define GPIO_DOUT_11_8_dout_8_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_11_8_dout_9_OFS (8)
#define GPIO_DOUT_11_8_dout_9_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_11_8_dout_10_OFS (16)
#define GPIO_DOUT_11_8_dout_10_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_11_8_dout_11_OFS (24)
#define GPIO_DOUT_11_8_dout_11_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_15_12_dout_12_OFS (0)
#define GPIO_DOUT_15_12_dout_12_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_15_12_dout_13_OFS (8)
#define GPIO_DOUT_15_12_dout_13_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_15_12_dout_14_OFS (16)
#define GPIO_DOUT_15_12_dout_14_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_15_12_dout_15_OFS (24)
#define GPIO_DOUT_15_12_dout_15_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_19_16_dout_16_OFS (0)
#define GPIO_DOUT_19_16_dout_16_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_19_16_dout_17_OFS (8)
#define GPIO_DOUT_19_16_dout_17_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_19_16_dout_18_OFS (16)
#define GPIO_DOUT_19_16_dout_18_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_19_16_dout_19_OFS (24)
#define GPIO_DOUT_19_16_dout_19_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_23_20_dout_20_OFS (0)
#define GPIO_DOUT_23_20_dout_20_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_23_20_dout_21_OFS (8)
#define GPIO_DOUT_23_20_dout_21_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_23_20_dout_22_OFS (16)
#define GPIO_DOUT_23_20_dout_22_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_23_20_dout_23_OFS (24)
#define GPIO_DOUT_23_20_dout_23_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_27_24_dout_24_OFS (0)
#define GPIO_DOUT_27_24_dout_24_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_27_24_dout_25_OFS (8)
#define GPIO_DOUT_27_24_dout_25_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_27_24_dout_26_OFS (16)
#define GPIO_DOUT_27_24_dout_26_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_27_24_dout_27_OFS (24)
#define GPIO_DOUT_27_24_dout_27_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_31_28_dout_28_OFS (0)
#define GPIO_DOUT_31_28_dout_28_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_31_28_dout_29_OFS (8)
#define GPIO_DOUT_31_28_dout_29_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_31_28_dout_30_OFS (16)
#define GPIO_DOUT_31_28_dout_30_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_31_28_dout_31_OFS (24)
#define GPIO_DOUT_31_28_dout_31_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_dout_OFS (0)
#define GPIO_DOUT_dout_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_SET_dout_set_OFS (0)
#define GPIO_DOUT_SET_dout_set_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_CLR_dout_clr_OFS (0)
#define GPIO_DOUT_CLR_dout_clr_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_TGL_dout_tgl_OFS (0)
#define GPIO_DOUT_TGL_dout_tgl_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_dout_en_OFS (0)
#define GPIO_DOUT_EN_dout_en_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_SET_dout_en_set_OFS (0)
#define GPIO_DOUT_EN_SET_dout_en_set_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_CLR_dout_en_clr_OFS (0)
#define GPIO_DOUT_EN_CLR_dout_en_clr_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DIN_3_0_din_0_OFS (0)
#define GPIO_DIN_3_0_din_0_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_3_0_din_1_OFS (8)
#define GPIO_DIN_3_0_din_1_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_3_0_din_2_OFS (16)
#define GPIO_DIN_3_0_din_2_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_3_0_din_3_OFS (24)
#define GPIO_DIN_3_0_din_3_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_7_4_din_4_OFS (0)
#define GPIO_DIN_7_4_din_4_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_7_4_din_5_OFS (8)
#define GPIO_DIN_7_4_din_5_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_7_4_din_6_OFS (16)
#define GPIO_DIN_7_4_din_6_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_7_4_din_7_OFS (24)
#define GPIO_DIN_7_4_din_7_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_11_8_din_8_OFS (0)
#define GPIO_DIN_11_8_din_8_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_11_8_din_9_OFS (8)
#define GPIO_DIN_11_8_din_9_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_11_8_din_10_OFS (16)
#define GPIO_DIN_11_8_din_10_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_11_8_din_11_OFS (24)
#define GPIO_DIN_11_8_din_11_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_15_12_din_12_OFS (0)
#define GPIO_DIN_15_12_din_12_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_15_12_din_13_OFS (8)
#define GPIO_DIN_15_12_din_13_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_15_12_din_14_OFS (16)
#define GPIO_DIN_15_12_din_14_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_15_12_din_15_OFS (24)
#define GPIO_DIN_15_12_din_15_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_19_16_din_16_OFS (0)
#define GPIO_DIN_19_16_din_16_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_19_16_din_17_OFS (8)
#define GPIO_DIN_19_16_din_17_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_19_16_din_18_OFS (16)
#define GPIO_DIN_19_16_din_18_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_19_16_din_19_OFS (24)
#define GPIO_DIN_19_16_din_19_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_23_20_din_20_OFS (0)
#define GPIO_DIN_23_20_din_20_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_23_20_din_21_OFS (8)
#define GPIO_DIN_23_20_din_21_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_23_20_din_22_OFS (16)
#define GPIO_DIN_23_20_din_22_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_23_20_din_23_OFS (24)
#define GPIO_DIN_23_20_din_23_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_27_24_din_24_OFS (0)
#define GPIO_DIN_27_24_din_24_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_27_24_din_25_OFS (8)
#define GPIO_DIN_27_24_din_25_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_27_24_din_26_OFS (16)
#define GPIO_DIN_27_24_din_26_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_27_24_din_27_OFS (24)
#define GPIO_DIN_27_24_din_27_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_31_28_din_28_OFS (0)
#define GPIO_DIN_31_28_din_28_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_31_28_din_29_OFS (8)
#define GPIO_DIN_31_28_din_29_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_31_28_din_30_OFS (16)
#define GPIO_DIN_31_28_din_30_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_31_28_din_31_OFS (24)
#define GPIO_DIN_31_28_din_31_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_din_OFS (0)
#define GPIO_DIN_din_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_FILT_EN_0_filt_en_0_OFS (0)
#define GPIO_FILT_EN_0_filt_en_0_MASK ((uint32_t)0x00000003U)
#define GPIO_FILT_EN_0_filt_en_1_OFS (2)
#define GPIO_FILT_EN_0_filt_en_1_MASK ((uint32_t)0x0000000CU)
#define GPIO_FILT_EN_0_filt_en_2_OFS (4)
#define GPIO_FILT_EN_0_filt_en_2_MASK ((uint32_t)0x00000030U)
#define GPIO_FILT_EN_0_filt_en_3_OFS (6)
#define GPIO_FILT_EN_0_filt_en_3_MASK ((uint32_t)0x000000C0U)
#define GPIO_FILT_EN_0_filt_en_4_OFS (8)
#define GPIO_FILT_EN_0_filt_en_4_MASK ((uint32_t)0x00000300U)
#define GPIO_FILT_EN_0_filt_en_5_OFS (10)
#define GPIO_FILT_EN_0_filt_en_5_MASK ((uint32_t)0x00000C00U)
#define GPIO_FILT_EN_0_filt_en_6_OFS (12)
#define GPIO_FILT_EN_0_filt_en_6_MASK ((uint32_t)0x00003000U)
#define GPIO_FILT_EN_0_filt_en_7_OFS (14)
#define GPIO_FILT_EN_0_filt_en_7_MASK ((uint32_t)0x0000C000U)
#define GPIO_FILT_EN_0_filt_en_8_OFS (16)
#define GPIO_FILT_EN_0_filt_en_8_MASK ((uint32_t)0x00030000U)
#define GPIO_FILT_EN_0_filt_en_9_OFS (18)
#define GPIO_FILT_EN_0_filt_en_9_MASK ((uint32_t)0x000C0000U)
#define GPIO_FILT_EN_0_filt_en_10_OFS (20)
#define GPIO_FILT_EN_0_filt_en_10_MASK ((uint32_t)0x00300000U)
#define GPIO_FILT_EN_0_filt_en_11_OFS (22)
#define GPIO_FILT_EN_0_filt_en_11_MASK ((uint32_t)0x00C00000U)
#define GPIO_FILT_EN_0_filt_en_12_OFS (24)
#define GPIO_FILT_EN_0_filt_en_12_MASK ((uint32_t)0x03000000U)
#define GPIO_FILT_EN_0_filt_en_13_OFS (26)
#define GPIO_FILT_EN_0_filt_en_13_MASK ((uint32_t)0x0C000000U)
#define GPIO_FILT_EN_0_filt_en_14_OFS (28)
#define GPIO_FILT_EN_0_filt_en_14_MASK ((uint32_t)0x30000000U)
#define GPIO_FILT_EN_0_filt_en_15_OFS (30)
#define GPIO_FILT_EN_0_filt_en_15_MASK ((uint32_t)0xC0000000U)
#define GPIO_FILT_EN_1_filt_en_16_OFS (0)
#define GPIO_FILT_EN_1_filt_en_16_MASK ((uint32_t)0x00000003U)
#define GPIO_FILT_EN_1_filt_en_17_OFS (2)
#define GPIO_FILT_EN_1_filt_en_17_MASK ((uint32_t)0x0000000CU)
#define GPIO_FILT_EN_1_filt_en_18_OFS (4)
#define GPIO_FILT_EN_1_filt_en_18_MASK ((uint32_t)0x00000030U)
#define GPIO_FILT_EN_1_filt_en_19_OFS (6)
#define GPIO_FILT_EN_1_filt_en_19_MASK ((uint32_t)0x000000C0U)
#define GPIO_FILT_EN_1_filt_en_20_OFS (8)
#define GPIO_FILT_EN_1_filt_en_20_MASK ((uint32_t)0x00000300U)
#define GPIO_FILT_EN_1_filt_en_21_OFS (10)
#define GPIO_FILT_EN_1_filt_en_21_MASK ((uint32_t)0x00000C00U)
#define GPIO_FILT_EN_1_filt_en_22_OFS (12)
#define GPIO_FILT_EN_1_filt_en_22_MASK ((uint32_t)0x00003000U)
#define GPIO_FILT_EN_1_filt_en_23_OFS (14)
#define GPIO_FILT_EN_1_filt_en_23_MASK ((uint32_t)0x0000C000U)
#define GPIO_FILT_EN_1_filt_en_24_OFS (16)
#define GPIO_FILT_EN_1_filt_en_24_MASK ((uint32_t)0x00030000U)
#define GPIO_FILT_EN_1_filt_en_25_OFS (18)
#define GPIO_FILT_EN_1_filt_en_25_MASK ((uint32_t)0x000C0000U)
#define GPIO_FILT_EN_1_filt_en_26_OFS (20)
#define GPIO_FILT_EN_1_filt_en_26_MASK ((uint32_t)0x00300000U)
#define GPIO_FILT_EN_1_filt_en_27_OFS (22)
#define GPIO_FILT_EN_1_filt_en_27_MASK ((uint32_t)0x00C00000U)
#define GPIO_FILT_EN_1_filt_en_28_OFS (24)
#define GPIO_FILT_EN_1_filt_en_28_MASK ((uint32_t)0x03000000U)
#define GPIO_FILT_EN_1_filt_en_29_OFS (26)
#define GPIO_FILT_EN_1_filt_en_29_MASK ((uint32_t)0x0C000000U)
#define GPIO_FILT_EN_1_filt_en_30_OFS (28)
#define GPIO_FILT_EN_1_filt_en_30_MASK ((uint32_t)0x30000000U)
#define GPIO_FILT_EN_1_filt_en_31_OFS (30)
#define GPIO_FILT_EN_1_filt_en_31_MASK ((uint32_t)0xC0000000U)
#define GPIO_INTR_POL_0_intr_pol_0_OFS (0)
#define GPIO_INTR_POL_0_intr_pol_0_MASK ((uint32_t)0x00000003U)
#define GPIO_INTR_POL_0_intr_pol_1_OFS (2)
#define GPIO_INTR_POL_0_intr_pol_1_MASK ((uint32_t)0x0000000CU)
#define GPIO_INTR_POL_0_intr_pol_2_OFS (4)
#define GPIO_INTR_POL_0_intr_pol_2_MASK ((uint32_t)0x00000030U)
#define GPIO_INTR_POL_0_intr_pol_3_OFS (6)
#define GPIO_INTR_POL_0_intr_pol_3_MASK ((uint32_t)0x000000C0U)
#define GPIO_INTR_POL_0_intr_pol_4_OFS (8)
#define GPIO_INTR_POL_0_intr_pol_4_MASK ((uint32_t)0x00000300U)
#define GPIO_INTR_POL_0_intr_pol_5_OFS (10)
#define GPIO_INTR_POL_0_intr_pol_5_MASK ((uint32_t)0x00000C00U)
#define GPIO_INTR_POL_0_intr_pol_6_OFS (12)
#define GPIO_INTR_POL_0_intr_pol_6_MASK ((uint32_t)0x00003000U)
#define GPIO_INTR_POL_0_intr_pol_7_OFS (14)
#define GPIO_INTR_POL_0_intr_pol_7_MASK ((uint32_t)0x0000C000U)
#define GPIO_INTR_POL_0_intr_pol_8_OFS (16)
#define GPIO_INTR_POL_0_intr_pol_8_MASK ((uint32_t)0x00030000U)
#define GPIO_INTR_POL_0_intr_pol_9_OFS (18)
#define GPIO_INTR_POL_0_intr_pol_9_MASK ((uint32_t)0x000C0000U)
#define GPIO_INTR_POL_0_intr_pol_10_OFS (20)
#define GPIO_INTR_POL_0_intr_pol_10_MASK ((uint32_t)0x00300000U)
#define GPIO_INTR_POL_0_intr_pol_11_OFS (22)
#define GPIO_INTR_POL_0_intr_pol_11_MASK ((uint32_t)0x00C00000U)
#define GPIO_INTR_POL_0_intr_pol_12_OFS (24)
#define GPIO_INTR_POL_0_intr_pol_12_MASK ((uint32_t)0x03000000U)
#define GPIO_INTR_POL_0_intr_pol_13_OFS (26)
#define GPIO_INTR_POL_0_intr_pol_13_MASK ((uint32_t)0x0C000000U)
#define GPIO_INTR_POL_0_intr_pol_14_OFS (28)
#define GPIO_INTR_POL_0_intr_pol_14_MASK ((uint32_t)0x30000000U)
#define GPIO_INTR_POL_0_intr_pol_15_OFS (30)
#define GPIO_INTR_POL_0_intr_pol_15_MASK ((uint32_t)0xC0000000U)
#define GPIO_INTR_POL_1_intr_pol_16_OFS (0)
#define GPIO_INTR_POL_1_intr_pol_16_MASK ((uint32_t)0x00000003U)
#define GPIO_INTR_POL_1_intr_pol_17_OFS (2)
#define GPIO_INTR_POL_1_intr_pol_17_MASK ((uint32_t)0x0000000CU)
#define GPIO_INTR_POL_1_intr_pol_18_OFS (4)
#define GPIO_INTR_POL_1_intr_pol_18_MASK ((uint32_t)0x00000030U)
#define GPIO_INTR_POL_1_intr_pol_19_OFS (6)
#define GPIO_INTR_POL_1_intr_pol_19_MASK ((uint32_t)0x000000C0U)
#define GPIO_INTR_POL_1_intr_pol_20_OFS (8)
#define GPIO_INTR_POL_1_intr_pol_20_MASK ((uint32_t)0x00000300U)
#define GPIO_INTR_POL_1_intr_pol_21_OFS (10)
#define GPIO_INTR_POL_1_intr_pol_21_MASK ((uint32_t)0x00000C00U)
#define GPIO_INTR_POL_1_intr_pol_22_OFS (12)
#define GPIO_INTR_POL_1_intr_pol_22_MASK ((uint32_t)0x00003000U)
#define GPIO_INTR_POL_1_intr_pol_23_OFS (14)
#define GPIO_INTR_POL_1_intr_pol_23_MASK ((uint32_t)0x0000C000U)
#define GPIO_INTR_POL_1_intr_pol_24_OFS (16)
#define GPIO_INTR_POL_1_intr_pol_24_MASK ((uint32_t)0x00030000U)
#define GPIO_INTR_POL_1_intr_pol_25_OFS (18)
#define GPIO_INTR_POL_1_intr_pol_25_MASK ((uint32_t)0x000C0000U)
#define GPIO_INTR_POL_1_intr_pol_26_OFS (20)
#define GPIO_INTR_POL_1_intr_pol_26_MASK ((uint32_t)0x00300000U)
#define GPIO_INTR_POL_1_intr_pol_27_OFS (22)
#define GPIO_INTR_POL_1_intr_pol_27_MASK ((uint32_t)0x00C00000U)
#define GPIO_INTR_POL_1_intr_pol_28_OFS (24)
#define GPIO_INTR_POL_1_intr_pol_28_MASK ((uint32_t)0x03000000U)
#define GPIO_INTR_POL_1_intr_pol_29_OFS (26)
#define GPIO_INTR_POL_1_intr_pol_29_MASK ((uint32_t)0x0C000000U)
#define GPIO_INTR_POL_1_intr_pol_30_OFS (28)
#define GPIO_INTR_POL_1_intr_pol_30_MASK ((uint32_t)0x30000000U)
#define GPIO_INTR_POL_1_intr_pol_31_OFS (30)
#define GPIO_INTR_POL_1_intr_pol_31_MASK ((uint32_t)0xC0000000U)
#define GPIO_SUB_CFG_0_sub_en_OFS (0)
#define GPIO_SUB_CFG_0_sub_en_MASK ((uint32_t)0x00000001U)
#define GPIO_SUB_CFG_0_action_OFS (8)
#define GPIO_SUB_CFG_0_action_MASK ((uint32_t)0x00000300U)
#define GPIO_SUB_CFG_0_bit_num_OFS (16)
#define GPIO_SUB_CFG_0_bit_num_MASK ((uint32_t)0x001F0000U)
#define GPIO_SUB_CFG_1_sub_en_OFS (0)
#define GPIO_SUB_CFG_1_sub_en_MASK ((uint32_t)0x00000001U)
#define GPIO_SUB_CFG_1_action_OFS (8)
#define GPIO_SUB_CFG_1_action_MASK ((uint32_t)0x00000300U)
#define GPIO_SUB_CFG_1_bit_num_OFS (16)
#define GPIO_SUB_CFG_1_bit_num_MASK ((uint32_t)0x001F0000U)
#define GPIO_DMA_WR_MASK_dma_wr_mask_OFS (0)
#define GPIO_DMA_WR_MASK_dma_wr_mask_MASK ((uint32_t)0xFFFFFFFFU)
#endif
