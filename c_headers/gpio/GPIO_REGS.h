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
    GPIO_DESC_REG_s;
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
    GPIO_PWR_EN_REG_s;
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
    GPIO_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_RST_CTRL_u;

typedef struct GPIO_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} GPIO_RST_STS_REG_s;

typedef union GPIO_RST_STS_u {
    GPIO_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_RST_STS_u;

typedef struct GPIO_CLK_CTRL_REG_s {
    unsigned int en_async_clk_req:1; // 
} GPIO_CLK_CTRL_REG_s;

typedef union GPIO_CLK_CTRL_u {
    GPIO_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_CLK_CTRL_u;

typedef struct GPIO_INTR_STS_REG_s {
    unsigned int intr_first:8; // 
} GPIO_INTR_STS_REG_s;

typedef union GPIO_INTR_STS_u {
    GPIO_INTR_STS_REG_s;
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
    GPIO_INTR_EVENT_REG_s;
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
    GPIO_INTR_EN0_REG_s;
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
    GPIO_INTR_EN1_REG_s;
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
    GPIO_INTR_NMI_EN0_REG_s;
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
    GPIO_INTR_NMI_EN1_REG_s;
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
    GPIO_EVENT_EN0_REG_s;
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
    GPIO_EVENT_EN1_REG_s;
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
    GPIO_INTR_SW_SET_REG_s;
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
    GPIO_DOUT_3_0_REG_s;
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
    GPIO_DOUT_7_4_REG_s;
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
    GPIO_DOUT_11_8_REG_s;
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
    GPIO_DOUT_15_12_REG_s;
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
    GPIO_DOUT_19_16_REG_s;
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
    GPIO_DOUT_23_20_REG_s;
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
    GPIO_DOUT_27_24_REG_s;
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
    GPIO_DOUT_31_28_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_31_28_u;

typedef struct GPIO_DOUT_REG_s {
    unsigned int dout:32; // 
} GPIO_DOUT_REG_s;

typedef union GPIO_DOUT_u {
    GPIO_DOUT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_u;

typedef struct GPIO_DOUT_SET_REG_s {
    unsigned int dout_set:32; // 
} GPIO_DOUT_SET_REG_s;

typedef union GPIO_DOUT_SET_u {
    GPIO_DOUT_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_SET_u;

typedef struct GPIO_DOUT_CLR_REG_s {
    unsigned int dout_clr:32; // 
} GPIO_DOUT_CLR_REG_s;

typedef union GPIO_DOUT_CLR_u {
    GPIO_DOUT_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_CLR_u;

typedef struct GPIO_DOUT_TGL_REG_s {
    unsigned int dout_tgl:32; // 
} GPIO_DOUT_TGL_REG_s;

typedef union GPIO_DOUT_TGL_u {
    GPIO_DOUT_TGL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_TGL_u;

typedef struct GPIO_DOUT_EN_REG_s {
    unsigned int dout_en:32; // 
} GPIO_DOUT_EN_REG_s;

typedef union GPIO_DOUT_EN_u {
    GPIO_DOUT_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_EN_u;

typedef struct GPIO_DOUT_EN_SET_REG_s {
    unsigned int dout_en_set:32; // 
} GPIO_DOUT_EN_SET_REG_s;

typedef union GPIO_DOUT_EN_SET_u {
    GPIO_DOUT_EN_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DOUT_EN_SET_u;

typedef struct GPIO_DOUT_EN_CLR_REG_s {
    unsigned int dout_en_clr:32; // 
} GPIO_DOUT_EN_CLR_REG_s;

typedef union GPIO_DOUT_EN_CLR_u {
    GPIO_DOUT_EN_CLR_REG_s;
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
    GPIO_DIN_3_0_REG_s;
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
    GPIO_DIN_7_4_REG_s;
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
    GPIO_DIN_11_8_REG_s;
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
    GPIO_DIN_15_12_REG_s;
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
    GPIO_DIN_19_16_REG_s;
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
    GPIO_DIN_23_20_REG_s;
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
    GPIO_DIN_27_24_REG_s;
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
    GPIO_DIN_31_28_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_DIN_31_28_u;

typedef struct GPIO_DIN_REG_s {
    unsigned int din:32; // 
} GPIO_DIN_REG_s;

typedef union GPIO_DIN_u {
    GPIO_DIN_REG_s;
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
    GPIO_FILT_EN_0_REG_s;
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
    GPIO_FILT_EN_1_REG_s;
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
    GPIO_INTR_POL_0_REG_s;
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
    GPIO_INTR_POL_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_INTR_POL_1_u;

typedef struct GPIO_SUB_CFG_REG_s {
    unsigned int sub_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int action:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int bit_num:5; // 
} GPIO_SUB_CFG_REG_s;

typedef union GPIO_SUB_CFG_u {
    GPIO_SUB_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} GPIO_SUB_CFG_u;

typedef struct GPIO_DMA_WR_MASK_REG_s {
    unsigned int dma_wr_mask:32; // 
} GPIO_DMA_WR_MASK_REG_s;

typedef union GPIO_DMA_WR_MASK_u {
    GPIO_DMA_WR_MASK_REG_s;
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
    volatile GPIO_SUB_CFG_u SUB_CFG[2];
    volatile GPIO_DMA_WR_MASK_u DMA_WR_MASK;
} GPIO_REGS_s;

#define GPIO_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define GPIO_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define GPIO_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)

#define GPIO_INTR_EVENT_INTR0_IDX (0)
#define GPIO_INTR_EVENT_INTR1_IDX (1)
#define GPIO_INTR_EVENT_INTR2_IDX (2)
#define GPIO_INTR_EVENT_INTR3_IDX (3)
#define GPIO_INTR_EVENT_INTR4_IDX (4)
#define GPIO_INTR_EVENT_INTR5_IDX (5)
#define GPIO_INTR_EVENT_INTR6_IDX (6)
#define GPIO_INTR_EVENT_INTR7_IDX (7)
#define GPIO_INTR_EVENT_INTR8_IDX (8)
#define GPIO_INTR_EVENT_INTR9_IDX (9)
#define GPIO_INTR_EVENT_INTR10_IDX (10)
#define GPIO_INTR_EVENT_INTR11_IDX (11)
#define GPIO_INTR_EVENT_INTR12_IDX (12)
#define GPIO_INTR_EVENT_INTR13_IDX (13)
#define GPIO_INTR_EVENT_INTR14_IDX (14)
#define GPIO_INTR_EVENT_INTR15_IDX (15)
#define GPIO_INTR_EVENT_INTR16_IDX (16)
#define GPIO_INTR_EVENT_INTR17_IDX (17)
#define GPIO_INTR_EVENT_INTR18_IDX (18)
#define GPIO_INTR_EVENT_INTR19_IDX (19)
#define GPIO_INTR_EVENT_INTR20_IDX (20)
#define GPIO_INTR_EVENT_INTR21_IDX (21)
#define GPIO_INTR_EVENT_INTR22_IDX (22)
#define GPIO_INTR_EVENT_INTR23_IDX (23)
#define GPIO_INTR_EVENT_INTR24_IDX (24)
#define GPIO_INTR_EVENT_INTR25_IDX (25)
#define GPIO_INTR_EVENT_INTR26_IDX (26)
#define GPIO_INTR_EVENT_INTR27_IDX (27)
#define GPIO_INTR_EVENT_INTR28_IDX (28)
#define GPIO_INTR_EVENT_INTR29_IDX (29)
#define GPIO_INTR_EVENT_INTR30_IDX (30)
#define GPIO_INTR_EVENT_INTR31_IDX (31)

typedef enum {
	GPIO_FILT_EN_WIDTH_0 = 0,
	GPIO_FILT_EN_WIDTH_2 = 1,
	GPIO_FILT_EN_WIDTH_4 = 2,
	GPIO_FILT_EN_WIDTH_9 = 3,
} GPIO_FILT_EN;

typedef enum {
	GPIO_INTR_POL_OFF = 0,
	GPIO_INTR_POL_POS = 1,
	GPIO_INTR_POL_NEG =  2,
	GPIO_INTR_POL_BOTH = 3,
} GPIO_INTR_POL;

typedef enum {
	GPIO_SUB_CFG_ACTION_SET = 0,
	GPIO_SUB_CFG_ACTION_CLR = 1,
	GPIO_SUB_CFG_ACTION_TGL = 2,
} GPIO_SUB_CFG_ACTION;

#define GPIO_DESC_MODULE_TYPE_OFS (0)
#define GPIO_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define GPIO_DESC_MODUE_SUBTYPE_OFS (8)
#define GPIO_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define GPIO_DESC_MAJOR_REV_OFS (16)
#define GPIO_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define GPIO_DESC_MINOR_REV_OFS (20)
#define GPIO_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define GPIO_PWR_EN_PWR_EN_OFS (0)
#define GPIO_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_PWR_EN_PWR_EN_KEY_OFS (24)
#define GPIO_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define GPIO_RST_CTRL_RST_OFS (0)
#define GPIO_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define GPIO_RST_CTRL_RST_STS_CLR_OFS (1)
#define GPIO_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define GPIO_RST_CTRL_RST_KEY_OFS (24)
#define GPIO_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define GPIO_RST_STS_RST_STS_OFS (0)
#define GPIO_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS (0)
#define GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_STS_INTR_FIRST_OFS (0)
#define GPIO_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x000000FFU)
#define GPIO_INTR_EVENT_INTR0_OFS (0)
#define GPIO_INTR_EVENT_INTR0_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EVENT_INTR1_OFS (1)
#define GPIO_INTR_EVENT_INTR1_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EVENT_INTR2_OFS (2)
#define GPIO_INTR_EVENT_INTR2_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EVENT_INTR3_OFS (3)
#define GPIO_INTR_EVENT_INTR3_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EVENT_INTR4_OFS (4)
#define GPIO_INTR_EVENT_INTR4_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EVENT_INTR5_OFS (5)
#define GPIO_INTR_EVENT_INTR5_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EVENT_INTR6_OFS (6)
#define GPIO_INTR_EVENT_INTR6_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EVENT_INTR7_OFS (7)
#define GPIO_INTR_EVENT_INTR7_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EVENT_INTR8_OFS (8)
#define GPIO_INTR_EVENT_INTR8_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EVENT_INTR9_OFS (9)
#define GPIO_INTR_EVENT_INTR9_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EVENT_INTR10_OFS (10)
#define GPIO_INTR_EVENT_INTR10_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EVENT_INTR11_OFS (11)
#define GPIO_INTR_EVENT_INTR11_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EVENT_INTR12_OFS (12)
#define GPIO_INTR_EVENT_INTR12_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EVENT_INTR13_OFS (13)
#define GPIO_INTR_EVENT_INTR13_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EVENT_INTR14_OFS (14)
#define GPIO_INTR_EVENT_INTR14_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EVENT_INTR15_OFS (15)
#define GPIO_INTR_EVENT_INTR15_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_EVENT_INTR16_OFS (16)
#define GPIO_INTR_EVENT_INTR16_MASK ((uint32_t)0x00010000U)
#define GPIO_INTR_EVENT_INTR17_OFS (17)
#define GPIO_INTR_EVENT_INTR17_MASK ((uint32_t)0x00020000U)
#define GPIO_INTR_EVENT_INTR18_OFS (18)
#define GPIO_INTR_EVENT_INTR18_MASK ((uint32_t)0x00040000U)
#define GPIO_INTR_EVENT_INTR19_OFS (19)
#define GPIO_INTR_EVENT_INTR19_MASK ((uint32_t)0x00080000U)
#define GPIO_INTR_EVENT_INTR20_OFS (20)
#define GPIO_INTR_EVENT_INTR20_MASK ((uint32_t)0x00100000U)
#define GPIO_INTR_EVENT_INTR21_OFS (21)
#define GPIO_INTR_EVENT_INTR21_MASK ((uint32_t)0x00200000U)
#define GPIO_INTR_EVENT_INTR22_OFS (22)
#define GPIO_INTR_EVENT_INTR22_MASK ((uint32_t)0x00400000U)
#define GPIO_INTR_EVENT_INTR23_OFS (23)
#define GPIO_INTR_EVENT_INTR23_MASK ((uint32_t)0x00800000U)
#define GPIO_INTR_EVENT_INTR24_OFS (24)
#define GPIO_INTR_EVENT_INTR24_MASK ((uint32_t)0x01000000U)
#define GPIO_INTR_EVENT_INTR25_OFS (25)
#define GPIO_INTR_EVENT_INTR25_MASK ((uint32_t)0x02000000U)
#define GPIO_INTR_EVENT_INTR26_OFS (26)
#define GPIO_INTR_EVENT_INTR26_MASK ((uint32_t)0x04000000U)
#define GPIO_INTR_EVENT_INTR27_OFS (27)
#define GPIO_INTR_EVENT_INTR27_MASK ((uint32_t)0x08000000U)
#define GPIO_INTR_EVENT_INTR28_OFS (28)
#define GPIO_INTR_EVENT_INTR28_MASK ((uint32_t)0x10000000U)
#define GPIO_INTR_EVENT_INTR29_OFS (29)
#define GPIO_INTR_EVENT_INTR29_MASK ((uint32_t)0x20000000U)
#define GPIO_INTR_EVENT_INTR30_OFS (30)
#define GPIO_INTR_EVENT_INTR30_MASK ((uint32_t)0x40000000U)
#define GPIO_INTR_EVENT_INTR31_OFS (31)
#define GPIO_INTR_EVENT_INTR31_MASK ((uint32_t)0x80000000U)
#define GPIO_INTR_EN0_INTR0_EN_OFS (0)
#define GPIO_INTR_EN0_INTR0_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EN0_INTR1_EN_OFS (1)
#define GPIO_INTR_EN0_INTR1_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EN0_INTR2_EN_OFS (2)
#define GPIO_INTR_EN0_INTR2_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EN0_INTR3_EN_OFS (3)
#define GPIO_INTR_EN0_INTR3_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EN0_INTR4_EN_OFS (4)
#define GPIO_INTR_EN0_INTR4_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EN0_INTR5_EN_OFS (5)
#define GPIO_INTR_EN0_INTR5_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EN0_INTR6_EN_OFS (6)
#define GPIO_INTR_EN0_INTR6_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EN0_INTR7_EN_OFS (7)
#define GPIO_INTR_EN0_INTR7_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EN0_INTR8_EN_OFS (8)
#define GPIO_INTR_EN0_INTR8_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EN0_INTR9_EN_OFS (9)
#define GPIO_INTR_EN0_INTR9_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EN0_INTR10_EN_OFS (10)
#define GPIO_INTR_EN0_INTR10_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EN0_INTR11_EN_OFS (11)
#define GPIO_INTR_EN0_INTR11_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EN0_INTR12_EN_OFS (12)
#define GPIO_INTR_EN0_INTR12_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EN0_INTR13_EN_OFS (13)
#define GPIO_INTR_EN0_INTR13_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EN0_INTR14_EN_OFS (14)
#define GPIO_INTR_EN0_INTR14_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EN0_INTR15_EN_OFS (15)
#define GPIO_INTR_EN0_INTR15_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_EN1_INTR16_EN_OFS (0)
#define GPIO_INTR_EN1_INTR16_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_EN1_INTR17_EN_OFS (1)
#define GPIO_INTR_EN1_INTR17_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_EN1_INTR18_EN_OFS (2)
#define GPIO_INTR_EN1_INTR18_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_EN1_INTR19_EN_OFS (3)
#define GPIO_INTR_EN1_INTR19_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_EN1_INTR20_EN_OFS (4)
#define GPIO_INTR_EN1_INTR20_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_EN1_INTR21_EN_OFS (5)
#define GPIO_INTR_EN1_INTR21_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_EN1_INTR22_EN_OFS (6)
#define GPIO_INTR_EN1_INTR22_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_EN1_INTR23_EN_OFS (7)
#define GPIO_INTR_EN1_INTR23_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_EN1_INTR24_EN_OFS (8)
#define GPIO_INTR_EN1_INTR24_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_EN1_INTR25_EN_OFS (9)
#define GPIO_INTR_EN1_INTR25_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_EN1_INTR26_EN_OFS (10)
#define GPIO_INTR_EN1_INTR26_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_EN1_INTR27_EN_OFS (11)
#define GPIO_INTR_EN1_INTR27_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_EN1_INTR28_EN_OFS (12)
#define GPIO_INTR_EN1_INTR28_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_EN1_INTR29_EN_OFS (13)
#define GPIO_INTR_EN1_INTR29_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_EN1_INTR30_EN_OFS (14)
#define GPIO_INTR_EN1_INTR30_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_EN1_INTR31_EN_OFS (15)
#define GPIO_INTR_EN1_INTR31_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_NMI_EN0_INTR0_NMI_EN_OFS (0)
#define GPIO_INTR_NMI_EN0_INTR0_NMI_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_NMI_EN0_INTR1_NMI_EN_OFS (1)
#define GPIO_INTR_NMI_EN0_INTR1_NMI_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_NMI_EN0_INTR2_NMI_EN_OFS (2)
#define GPIO_INTR_NMI_EN0_INTR2_NMI_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_NMI_EN0_INTR3_NMI_EN_OFS (3)
#define GPIO_INTR_NMI_EN0_INTR3_NMI_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_NMI_EN0_INTR4_NMI_EN_OFS (4)
#define GPIO_INTR_NMI_EN0_INTR4_NMI_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_NMI_EN0_INTR5_NMI_EN_OFS (5)
#define GPIO_INTR_NMI_EN0_INTR5_NMI_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_NMI_EN0_INTR6_NMI_EN_OFS (6)
#define GPIO_INTR_NMI_EN0_INTR6_NMI_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_NMI_EN0_INTR7_NMI_EN_OFS (7)
#define GPIO_INTR_NMI_EN0_INTR7_NMI_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_NMI_EN0_INTR8_NMI_EN_OFS (8)
#define GPIO_INTR_NMI_EN0_INTR8_NMI_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_NMI_EN0_INTR9_NMI_EN_OFS (9)
#define GPIO_INTR_NMI_EN0_INTR9_NMI_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_NMI_EN0_INTR10_NMI_EN_OFS (10)
#define GPIO_INTR_NMI_EN0_INTR10_NMI_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_NMI_EN0_INTR11_NMI_EN_OFS (11)
#define GPIO_INTR_NMI_EN0_INTR11_NMI_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_NMI_EN0_INTR12_NMI_EN_OFS (12)
#define GPIO_INTR_NMI_EN0_INTR12_NMI_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_NMI_EN0_INTR13_NMI_EN_OFS (13)
#define GPIO_INTR_NMI_EN0_INTR13_NMI_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_NMI_EN0_INTR14_NMI_EN_OFS (14)
#define GPIO_INTR_NMI_EN0_INTR14_NMI_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_NMI_EN0_INTR15_NMI_EN_OFS (15)
#define GPIO_INTR_NMI_EN0_INTR15_NMI_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_NMI_EN1_INTR16_NMI_EN_OFS (0)
#define GPIO_INTR_NMI_EN1_INTR16_NMI_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_NMI_EN1_INTR17_NMI_EN_OFS (1)
#define GPIO_INTR_NMI_EN1_INTR17_NMI_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_NMI_EN1_INTR18_NMI_EN_OFS (2)
#define GPIO_INTR_NMI_EN1_INTR18_NMI_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_NMI_EN1_INTR19_NMI_EN_OFS (3)
#define GPIO_INTR_NMI_EN1_INTR19_NMI_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_NMI_EN1_INTR20_NMI_EN_OFS (4)
#define GPIO_INTR_NMI_EN1_INTR20_NMI_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_NMI_EN1_INTR21_NMI_EN_OFS (5)
#define GPIO_INTR_NMI_EN1_INTR21_NMI_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_NMI_EN1_INTR22_NMI_EN_OFS (6)
#define GPIO_INTR_NMI_EN1_INTR22_NMI_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_NMI_EN1_INTR23_NMI_EN_OFS (7)
#define GPIO_INTR_NMI_EN1_INTR23_NMI_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_NMI_EN1_INTR24_NMI_EN_OFS (8)
#define GPIO_INTR_NMI_EN1_INTR24_NMI_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_NMI_EN1_INTR25_NMI_EN_OFS (9)
#define GPIO_INTR_NMI_EN1_INTR25_NMI_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_NMI_EN1_INTR26_NMI_EN_OFS (10)
#define GPIO_INTR_NMI_EN1_INTR26_NMI_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_NMI_EN1_INTR27_NMI_EN_OFS (11)
#define GPIO_INTR_NMI_EN1_INTR27_NMI_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_NMI_EN1_INTR28_NMI_EN_OFS (12)
#define GPIO_INTR_NMI_EN1_INTR28_NMI_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_NMI_EN1_INTR29_NMI_EN_OFS (13)
#define GPIO_INTR_NMI_EN1_INTR29_NMI_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_NMI_EN1_INTR30_NMI_EN_OFS (14)
#define GPIO_INTR_NMI_EN1_INTR30_NMI_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_NMI_EN1_INTR31_NMI_EN_OFS (15)
#define GPIO_INTR_NMI_EN1_INTR31_NMI_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_EVENT_EN0_INTR0_EVENT_EN_OFS (0)
#define GPIO_EVENT_EN0_INTR0_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_EVENT_EN0_INTR1_EVENT_EN_OFS (1)
#define GPIO_EVENT_EN0_INTR1_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_EVENT_EN0_INTR2_EVENT_EN_OFS (2)
#define GPIO_EVENT_EN0_INTR2_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_EVENT_EN0_INTR3_EVENT_EN_OFS (3)
#define GPIO_EVENT_EN0_INTR3_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_EVENT_EN0_INTR4_EVENT_EN_OFS (4)
#define GPIO_EVENT_EN0_INTR4_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_EVENT_EN0_INTR5_EVENT_EN_OFS (5)
#define GPIO_EVENT_EN0_INTR5_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_EVENT_EN0_INTR6_EVENT_EN_OFS (6)
#define GPIO_EVENT_EN0_INTR6_EVENT_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_EVENT_EN0_INTR7_EVENT_EN_OFS (7)
#define GPIO_EVENT_EN0_INTR7_EVENT_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_EVENT_EN0_INTR8_EVENT_EN_OFS (8)
#define GPIO_EVENT_EN0_INTR8_EVENT_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_EVENT_EN0_INTR9_EVENT_EN_OFS (9)
#define GPIO_EVENT_EN0_INTR9_EVENT_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_EVENT_EN0_INTR10_EVENT_EN_OFS (10)
#define GPIO_EVENT_EN0_INTR10_EVENT_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_EVENT_EN0_INTR11_EVENT_EN_OFS (11)
#define GPIO_EVENT_EN0_INTR11_EVENT_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_EVENT_EN0_INTR12_EVENT_EN_OFS (12)
#define GPIO_EVENT_EN0_INTR12_EVENT_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_EVENT_EN0_INTR13_EVENT_EN_OFS (13)
#define GPIO_EVENT_EN0_INTR13_EVENT_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_EVENT_EN0_INTR14_EVENT_EN_OFS (14)
#define GPIO_EVENT_EN0_INTR14_EVENT_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_EVENT_EN0_INTR15_EVENT_EN_OFS (15)
#define GPIO_EVENT_EN0_INTR15_EVENT_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_EVENT_EN1_INTR16_EVENT_EN_OFS (0)
#define GPIO_EVENT_EN1_INTR16_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_EVENT_EN1_INTR17_EVENT_EN_OFS (1)
#define GPIO_EVENT_EN1_INTR17_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define GPIO_EVENT_EN1_INTR18_EVENT_EN_OFS (2)
#define GPIO_EVENT_EN1_INTR18_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define GPIO_EVENT_EN1_INTR19_EVENT_EN_OFS (3)
#define GPIO_EVENT_EN1_INTR19_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define GPIO_EVENT_EN1_INTR20_EVENT_EN_OFS (4)
#define GPIO_EVENT_EN1_INTR20_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define GPIO_EVENT_EN1_INTR21_EVENT_EN_OFS (5)
#define GPIO_EVENT_EN1_INTR21_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define GPIO_EVENT_EN1_INTR22_EVENT_EN_OFS (6)
#define GPIO_EVENT_EN1_INTR22_EVENT_EN_MASK ((uint32_t)0x00000040U)
#define GPIO_EVENT_EN1_INTR23_EVENT_EN_OFS (7)
#define GPIO_EVENT_EN1_INTR23_EVENT_EN_MASK ((uint32_t)0x00000080U)
#define GPIO_EVENT_EN1_INTR24_EVENT_EN_OFS (8)
#define GPIO_EVENT_EN1_INTR24_EVENT_EN_MASK ((uint32_t)0x00000100U)
#define GPIO_EVENT_EN1_INTR25_EVENT_EN_OFS (9)
#define GPIO_EVENT_EN1_INTR25_EVENT_EN_MASK ((uint32_t)0x00000200U)
#define GPIO_EVENT_EN1_INTR26_EVENT_EN_OFS (10)
#define GPIO_EVENT_EN1_INTR26_EVENT_EN_MASK ((uint32_t)0x00000400U)
#define GPIO_EVENT_EN1_INTR27_EVENT_EN_OFS (11)
#define GPIO_EVENT_EN1_INTR27_EVENT_EN_MASK ((uint32_t)0x00000800U)
#define GPIO_EVENT_EN1_INTR28_EVENT_EN_OFS (12)
#define GPIO_EVENT_EN1_INTR28_EVENT_EN_MASK ((uint32_t)0x00001000U)
#define GPIO_EVENT_EN1_INTR29_EVENT_EN_OFS (13)
#define GPIO_EVENT_EN1_INTR29_EVENT_EN_MASK ((uint32_t)0x00002000U)
#define GPIO_EVENT_EN1_INTR30_EVENT_EN_OFS (14)
#define GPIO_EVENT_EN1_INTR30_EVENT_EN_MASK ((uint32_t)0x00004000U)
#define GPIO_EVENT_EN1_INTR31_EVENT_EN_OFS (15)
#define GPIO_EVENT_EN1_INTR31_EVENT_EN_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_SW_SET_INTR0_SW_SET_OFS (0)
#define GPIO_INTR_SW_SET_INTR0_SW_SET_MASK ((uint32_t)0x00000001U)
#define GPIO_INTR_SW_SET_INTR1_SW_SET_OFS (1)
#define GPIO_INTR_SW_SET_INTR1_SW_SET_MASK ((uint32_t)0x00000002U)
#define GPIO_INTR_SW_SET_INTR2_SW_SET_OFS (2)
#define GPIO_INTR_SW_SET_INTR2_SW_SET_MASK ((uint32_t)0x00000004U)
#define GPIO_INTR_SW_SET_INTR3_SW_SET_OFS (3)
#define GPIO_INTR_SW_SET_INTR3_SW_SET_MASK ((uint32_t)0x00000008U)
#define GPIO_INTR_SW_SET_INTR4_SW_SET_OFS (4)
#define GPIO_INTR_SW_SET_INTR4_SW_SET_MASK ((uint32_t)0x00000010U)
#define GPIO_INTR_SW_SET_INTR5_SW_SET_OFS (5)
#define GPIO_INTR_SW_SET_INTR5_SW_SET_MASK ((uint32_t)0x00000020U)
#define GPIO_INTR_SW_SET_INTR6_SW_SET_OFS (6)
#define GPIO_INTR_SW_SET_INTR6_SW_SET_MASK ((uint32_t)0x00000040U)
#define GPIO_INTR_SW_SET_INTR7_SW_SET_OFS (7)
#define GPIO_INTR_SW_SET_INTR7_SW_SET_MASK ((uint32_t)0x00000080U)
#define GPIO_INTR_SW_SET_INTR8_SW_SET_OFS (8)
#define GPIO_INTR_SW_SET_INTR8_SW_SET_MASK ((uint32_t)0x00000100U)
#define GPIO_INTR_SW_SET_INTR9_SW_SET_OFS (9)
#define GPIO_INTR_SW_SET_INTR9_SW_SET_MASK ((uint32_t)0x00000200U)
#define GPIO_INTR_SW_SET_INTR10_SW_SET_OFS (10)
#define GPIO_INTR_SW_SET_INTR10_SW_SET_MASK ((uint32_t)0x00000400U)
#define GPIO_INTR_SW_SET_INTR11_SW_SET_OFS (11)
#define GPIO_INTR_SW_SET_INTR11_SW_SET_MASK ((uint32_t)0x00000800U)
#define GPIO_INTR_SW_SET_INTR12_SW_SET_OFS (12)
#define GPIO_INTR_SW_SET_INTR12_SW_SET_MASK ((uint32_t)0x00001000U)
#define GPIO_INTR_SW_SET_INTR13_SW_SET_OFS (13)
#define GPIO_INTR_SW_SET_INTR13_SW_SET_MASK ((uint32_t)0x00002000U)
#define GPIO_INTR_SW_SET_INTR14_SW_SET_OFS (14)
#define GPIO_INTR_SW_SET_INTR14_SW_SET_MASK ((uint32_t)0x00004000U)
#define GPIO_INTR_SW_SET_INTR15_SW_SET_OFS (15)
#define GPIO_INTR_SW_SET_INTR15_SW_SET_MASK ((uint32_t)0x00008000U)
#define GPIO_INTR_SW_SET_INTR16_SW_SET_OFS (16)
#define GPIO_INTR_SW_SET_INTR16_SW_SET_MASK ((uint32_t)0x00010000U)
#define GPIO_INTR_SW_SET_INTR17_SW_SET_OFS (17)
#define GPIO_INTR_SW_SET_INTR17_SW_SET_MASK ((uint32_t)0x00020000U)
#define GPIO_INTR_SW_SET_INTR18_SW_SET_OFS (18)
#define GPIO_INTR_SW_SET_INTR18_SW_SET_MASK ((uint32_t)0x00040000U)
#define GPIO_INTR_SW_SET_INTR19_SW_SET_OFS (19)
#define GPIO_INTR_SW_SET_INTR19_SW_SET_MASK ((uint32_t)0x00080000U)
#define GPIO_INTR_SW_SET_INTR20_SW_SET_OFS (20)
#define GPIO_INTR_SW_SET_INTR20_SW_SET_MASK ((uint32_t)0x00100000U)
#define GPIO_INTR_SW_SET_INTR21_SW_SET_OFS (21)
#define GPIO_INTR_SW_SET_INTR21_SW_SET_MASK ((uint32_t)0x00200000U)
#define GPIO_INTR_SW_SET_INTR22_SW_SET_OFS (22)
#define GPIO_INTR_SW_SET_INTR22_SW_SET_MASK ((uint32_t)0x00400000U)
#define GPIO_INTR_SW_SET_INTR23_SW_SET_OFS (23)
#define GPIO_INTR_SW_SET_INTR23_SW_SET_MASK ((uint32_t)0x00800000U)
#define GPIO_INTR_SW_SET_INTR24_SW_SET_OFS (24)
#define GPIO_INTR_SW_SET_INTR24_SW_SET_MASK ((uint32_t)0x01000000U)
#define GPIO_INTR_SW_SET_INTR25_SW_SET_OFS (25)
#define GPIO_INTR_SW_SET_INTR25_SW_SET_MASK ((uint32_t)0x02000000U)
#define GPIO_INTR_SW_SET_INTR26_SW_SET_OFS (26)
#define GPIO_INTR_SW_SET_INTR26_SW_SET_MASK ((uint32_t)0x04000000U)
#define GPIO_INTR_SW_SET_INTR27_SW_SET_OFS (27)
#define GPIO_INTR_SW_SET_INTR27_SW_SET_MASK ((uint32_t)0x08000000U)
#define GPIO_INTR_SW_SET_INTR28_SW_SET_OFS (28)
#define GPIO_INTR_SW_SET_INTR28_SW_SET_MASK ((uint32_t)0x10000000U)
#define GPIO_INTR_SW_SET_INTR29_SW_SET_OFS (29)
#define GPIO_INTR_SW_SET_INTR29_SW_SET_MASK ((uint32_t)0x20000000U)
#define GPIO_INTR_SW_SET_INTR30_SW_SET_OFS (30)
#define GPIO_INTR_SW_SET_INTR30_SW_SET_MASK ((uint32_t)0x40000000U)
#define GPIO_INTR_SW_SET_INTR31_SW_SET_OFS (31)
#define GPIO_INTR_SW_SET_INTR31_SW_SET_MASK ((uint32_t)0x80000000U)
#define GPIO_DOUT_3_0_DOUT_0_OFS (0)
#define GPIO_DOUT_3_0_DOUT_0_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_3_0_DOUT_1_OFS (8)
#define GPIO_DOUT_3_0_DOUT_1_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_3_0_DOUT_2_OFS (16)
#define GPIO_DOUT_3_0_DOUT_2_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_3_0_DOUT_3_OFS (24)
#define GPIO_DOUT_3_0_DOUT_3_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_7_4_DOUT_4_OFS (0)
#define GPIO_DOUT_7_4_DOUT_4_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_7_4_DOUT_5_OFS (8)
#define GPIO_DOUT_7_4_DOUT_5_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_7_4_DOUT_6_OFS (16)
#define GPIO_DOUT_7_4_DOUT_6_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_7_4_DOUT_7_OFS (24)
#define GPIO_DOUT_7_4_DOUT_7_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_11_8_DOUT_8_OFS (0)
#define GPIO_DOUT_11_8_DOUT_8_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_11_8_DOUT_9_OFS (8)
#define GPIO_DOUT_11_8_DOUT_9_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_11_8_DOUT_10_OFS (16)
#define GPIO_DOUT_11_8_DOUT_10_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_11_8_DOUT_11_OFS (24)
#define GPIO_DOUT_11_8_DOUT_11_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_15_12_DOUT_12_OFS (0)
#define GPIO_DOUT_15_12_DOUT_12_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_15_12_DOUT_13_OFS (8)
#define GPIO_DOUT_15_12_DOUT_13_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_15_12_DOUT_14_OFS (16)
#define GPIO_DOUT_15_12_DOUT_14_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_15_12_DOUT_15_OFS (24)
#define GPIO_DOUT_15_12_DOUT_15_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_19_16_DOUT_16_OFS (0)
#define GPIO_DOUT_19_16_DOUT_16_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_19_16_DOUT_17_OFS (8)
#define GPIO_DOUT_19_16_DOUT_17_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_19_16_DOUT_18_OFS (16)
#define GPIO_DOUT_19_16_DOUT_18_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_19_16_DOUT_19_OFS (24)
#define GPIO_DOUT_19_16_DOUT_19_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_23_20_DOUT_20_OFS (0)
#define GPIO_DOUT_23_20_DOUT_20_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_23_20_DOUT_21_OFS (8)
#define GPIO_DOUT_23_20_DOUT_21_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_23_20_DOUT_22_OFS (16)
#define GPIO_DOUT_23_20_DOUT_22_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_23_20_DOUT_23_OFS (24)
#define GPIO_DOUT_23_20_DOUT_23_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_27_24_DOUT_24_OFS (0)
#define GPIO_DOUT_27_24_DOUT_24_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_27_24_DOUT_25_OFS (8)
#define GPIO_DOUT_27_24_DOUT_25_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_27_24_DOUT_26_OFS (16)
#define GPIO_DOUT_27_24_DOUT_26_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_27_24_DOUT_27_OFS (24)
#define GPIO_DOUT_27_24_DOUT_27_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_31_28_DOUT_28_OFS (0)
#define GPIO_DOUT_31_28_DOUT_28_MASK ((uint32_t)0x00000001U)
#define GPIO_DOUT_31_28_DOUT_29_OFS (8)
#define GPIO_DOUT_31_28_DOUT_29_MASK ((uint32_t)0x00000100U)
#define GPIO_DOUT_31_28_DOUT_30_OFS (16)
#define GPIO_DOUT_31_28_DOUT_30_MASK ((uint32_t)0x00010000U)
#define GPIO_DOUT_31_28_DOUT_31_OFS (24)
#define GPIO_DOUT_31_28_DOUT_31_MASK ((uint32_t)0x01000000U)
#define GPIO_DOUT_DOUT_OFS (0)
#define GPIO_DOUT_DOUT_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_SET_DOUT_SET_OFS (0)
#define GPIO_DOUT_SET_DOUT_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_CLR_DOUT_CLR_OFS (0)
#define GPIO_DOUT_CLR_DOUT_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_TGL_DOUT_TGL_OFS (0)
#define GPIO_DOUT_TGL_DOUT_TGL_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_DOUT_EN_OFS (0)
#define GPIO_DOUT_EN_DOUT_EN_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_SET_DOUT_EN_SET_OFS (0)
#define GPIO_DOUT_EN_SET_DOUT_EN_SET_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DOUT_EN_CLR_DOUT_EN_CLR_OFS (0)
#define GPIO_DOUT_EN_CLR_DOUT_EN_CLR_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_DIN_3_0_DIN_0_OFS (0)
#define GPIO_DIN_3_0_DIN_0_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_3_0_DIN_1_OFS (8)
#define GPIO_DIN_3_0_DIN_1_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_3_0_DIN_2_OFS (16)
#define GPIO_DIN_3_0_DIN_2_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_3_0_DIN_3_OFS (24)
#define GPIO_DIN_3_0_DIN_3_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_7_4_DIN_4_OFS (0)
#define GPIO_DIN_7_4_DIN_4_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_7_4_DIN_5_OFS (8)
#define GPIO_DIN_7_4_DIN_5_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_7_4_DIN_6_OFS (16)
#define GPIO_DIN_7_4_DIN_6_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_7_4_DIN_7_OFS (24)
#define GPIO_DIN_7_4_DIN_7_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_11_8_DIN_8_OFS (0)
#define GPIO_DIN_11_8_DIN_8_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_11_8_DIN_9_OFS (8)
#define GPIO_DIN_11_8_DIN_9_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_11_8_DIN_10_OFS (16)
#define GPIO_DIN_11_8_DIN_10_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_11_8_DIN_11_OFS (24)
#define GPIO_DIN_11_8_DIN_11_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_15_12_DIN_12_OFS (0)
#define GPIO_DIN_15_12_DIN_12_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_15_12_DIN_13_OFS (8)
#define GPIO_DIN_15_12_DIN_13_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_15_12_DIN_14_OFS (16)
#define GPIO_DIN_15_12_DIN_14_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_15_12_DIN_15_OFS (24)
#define GPIO_DIN_15_12_DIN_15_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_19_16_DIN_16_OFS (0)
#define GPIO_DIN_19_16_DIN_16_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_19_16_DIN_17_OFS (8)
#define GPIO_DIN_19_16_DIN_17_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_19_16_DIN_18_OFS (16)
#define GPIO_DIN_19_16_DIN_18_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_19_16_DIN_19_OFS (24)
#define GPIO_DIN_19_16_DIN_19_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_23_20_DIN_20_OFS (0)
#define GPIO_DIN_23_20_DIN_20_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_23_20_DIN_21_OFS (8)
#define GPIO_DIN_23_20_DIN_21_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_23_20_DIN_22_OFS (16)
#define GPIO_DIN_23_20_DIN_22_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_23_20_DIN_23_OFS (24)
#define GPIO_DIN_23_20_DIN_23_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_27_24_DIN_24_OFS (0)
#define GPIO_DIN_27_24_DIN_24_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_27_24_DIN_25_OFS (8)
#define GPIO_DIN_27_24_DIN_25_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_27_24_DIN_26_OFS (16)
#define GPIO_DIN_27_24_DIN_26_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_27_24_DIN_27_OFS (24)
#define GPIO_DIN_27_24_DIN_27_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_31_28_DIN_28_OFS (0)
#define GPIO_DIN_31_28_DIN_28_MASK ((uint32_t)0x00000001U)
#define GPIO_DIN_31_28_DIN_29_OFS (8)
#define GPIO_DIN_31_28_DIN_29_MASK ((uint32_t)0x00000100U)
#define GPIO_DIN_31_28_DIN_30_OFS (16)
#define GPIO_DIN_31_28_DIN_30_MASK ((uint32_t)0x00010000U)
#define GPIO_DIN_31_28_DIN_31_OFS (24)
#define GPIO_DIN_31_28_DIN_31_MASK ((uint32_t)0x01000000U)
#define GPIO_DIN_DIN_OFS (0)
#define GPIO_DIN_DIN_MASK ((uint32_t)0xFFFFFFFFU)
#define GPIO_FILT_EN_0_FILT_EN_0_OFS (0)
#define GPIO_FILT_EN_0_FILT_EN_0_MASK ((uint32_t)0x00000003U)
#define GPIO_FILT_EN_0_FILT_EN_1_OFS (2)
#define GPIO_FILT_EN_0_FILT_EN_1_MASK ((uint32_t)0x0000000CU)
#define GPIO_FILT_EN_0_FILT_EN_2_OFS (4)
#define GPIO_FILT_EN_0_FILT_EN_2_MASK ((uint32_t)0x00000030U)
#define GPIO_FILT_EN_0_FILT_EN_3_OFS (6)
#define GPIO_FILT_EN_0_FILT_EN_3_MASK ((uint32_t)0x000000C0U)
#define GPIO_FILT_EN_0_FILT_EN_4_OFS (8)
#define GPIO_FILT_EN_0_FILT_EN_4_MASK ((uint32_t)0x00000300U)
#define GPIO_FILT_EN_0_FILT_EN_5_OFS (10)
#define GPIO_FILT_EN_0_FILT_EN_5_MASK ((uint32_t)0x00000C00U)
#define GPIO_FILT_EN_0_FILT_EN_6_OFS (12)
#define GPIO_FILT_EN_0_FILT_EN_6_MASK ((uint32_t)0x00003000U)
#define GPIO_FILT_EN_0_FILT_EN_7_OFS (14)
#define GPIO_FILT_EN_0_FILT_EN_7_MASK ((uint32_t)0x0000C000U)
#define GPIO_FILT_EN_0_FILT_EN_8_OFS (16)
#define GPIO_FILT_EN_0_FILT_EN_8_MASK ((uint32_t)0x00030000U)
#define GPIO_FILT_EN_0_FILT_EN_9_OFS (18)
#define GPIO_FILT_EN_0_FILT_EN_9_MASK ((uint32_t)0x000C0000U)
#define GPIO_FILT_EN_0_FILT_EN_10_OFS (20)
#define GPIO_FILT_EN_0_FILT_EN_10_MASK ((uint32_t)0x00300000U)
#define GPIO_FILT_EN_0_FILT_EN_11_OFS (22)
#define GPIO_FILT_EN_0_FILT_EN_11_MASK ((uint32_t)0x00C00000U)
#define GPIO_FILT_EN_0_FILT_EN_12_OFS (24)
#define GPIO_FILT_EN_0_FILT_EN_12_MASK ((uint32_t)0x03000000U)
#define GPIO_FILT_EN_0_FILT_EN_13_OFS (26)
#define GPIO_FILT_EN_0_FILT_EN_13_MASK ((uint32_t)0x0C000000U)
#define GPIO_FILT_EN_0_FILT_EN_14_OFS (28)
#define GPIO_FILT_EN_0_FILT_EN_14_MASK ((uint32_t)0x30000000U)
#define GPIO_FILT_EN_0_FILT_EN_15_OFS (30)
#define GPIO_FILT_EN_0_FILT_EN_15_MASK ((uint32_t)0xC0000000U)
#define GPIO_FILT_EN_1_FILT_EN_16_OFS (0)
#define GPIO_FILT_EN_1_FILT_EN_16_MASK ((uint32_t)0x00000003U)
#define GPIO_FILT_EN_1_FILT_EN_17_OFS (2)
#define GPIO_FILT_EN_1_FILT_EN_17_MASK ((uint32_t)0x0000000CU)
#define GPIO_FILT_EN_1_FILT_EN_18_OFS (4)
#define GPIO_FILT_EN_1_FILT_EN_18_MASK ((uint32_t)0x00000030U)
#define GPIO_FILT_EN_1_FILT_EN_19_OFS (6)
#define GPIO_FILT_EN_1_FILT_EN_19_MASK ((uint32_t)0x000000C0U)
#define GPIO_FILT_EN_1_FILT_EN_20_OFS (8)
#define GPIO_FILT_EN_1_FILT_EN_20_MASK ((uint32_t)0x00000300U)
#define GPIO_FILT_EN_1_FILT_EN_21_OFS (10)
#define GPIO_FILT_EN_1_FILT_EN_21_MASK ((uint32_t)0x00000C00U)
#define GPIO_FILT_EN_1_FILT_EN_22_OFS (12)
#define GPIO_FILT_EN_1_FILT_EN_22_MASK ((uint32_t)0x00003000U)
#define GPIO_FILT_EN_1_FILT_EN_23_OFS (14)
#define GPIO_FILT_EN_1_FILT_EN_23_MASK ((uint32_t)0x0000C000U)
#define GPIO_FILT_EN_1_FILT_EN_24_OFS (16)
#define GPIO_FILT_EN_1_FILT_EN_24_MASK ((uint32_t)0x00030000U)
#define GPIO_FILT_EN_1_FILT_EN_25_OFS (18)
#define GPIO_FILT_EN_1_FILT_EN_25_MASK ((uint32_t)0x000C0000U)
#define GPIO_FILT_EN_1_FILT_EN_26_OFS (20)
#define GPIO_FILT_EN_1_FILT_EN_26_MASK ((uint32_t)0x00300000U)
#define GPIO_FILT_EN_1_FILT_EN_27_OFS (22)
#define GPIO_FILT_EN_1_FILT_EN_27_MASK ((uint32_t)0x00C00000U)
#define GPIO_FILT_EN_1_FILT_EN_28_OFS (24)
#define GPIO_FILT_EN_1_FILT_EN_28_MASK ((uint32_t)0x03000000U)
#define GPIO_FILT_EN_1_FILT_EN_29_OFS (26)
#define GPIO_FILT_EN_1_FILT_EN_29_MASK ((uint32_t)0x0C000000U)
#define GPIO_FILT_EN_1_FILT_EN_30_OFS (28)
#define GPIO_FILT_EN_1_FILT_EN_30_MASK ((uint32_t)0x30000000U)
#define GPIO_FILT_EN_1_FILT_EN_31_OFS (30)
#define GPIO_FILT_EN_1_FILT_EN_31_MASK ((uint32_t)0xC0000000U)
#define GPIO_INTR_POL_0_INTR_POL_0_OFS (0)
#define GPIO_INTR_POL_0_INTR_POL_0_MASK ((uint32_t)0x00000003U)
#define GPIO_INTR_POL_0_INTR_POL_1_OFS (2)
#define GPIO_INTR_POL_0_INTR_POL_1_MASK ((uint32_t)0x0000000CU)
#define GPIO_INTR_POL_0_INTR_POL_2_OFS (4)
#define GPIO_INTR_POL_0_INTR_POL_2_MASK ((uint32_t)0x00000030U)
#define GPIO_INTR_POL_0_INTR_POL_3_OFS (6)
#define GPIO_INTR_POL_0_INTR_POL_3_MASK ((uint32_t)0x000000C0U)
#define GPIO_INTR_POL_0_INTR_POL_4_OFS (8)
#define GPIO_INTR_POL_0_INTR_POL_4_MASK ((uint32_t)0x00000300U)
#define GPIO_INTR_POL_0_INTR_POL_5_OFS (10)
#define GPIO_INTR_POL_0_INTR_POL_5_MASK ((uint32_t)0x00000C00U)
#define GPIO_INTR_POL_0_INTR_POL_6_OFS (12)
#define GPIO_INTR_POL_0_INTR_POL_6_MASK ((uint32_t)0x00003000U)
#define GPIO_INTR_POL_0_INTR_POL_7_OFS (14)
#define GPIO_INTR_POL_0_INTR_POL_7_MASK ((uint32_t)0x0000C000U)
#define GPIO_INTR_POL_0_INTR_POL_8_OFS (16)
#define GPIO_INTR_POL_0_INTR_POL_8_MASK ((uint32_t)0x00030000U)
#define GPIO_INTR_POL_0_INTR_POL_9_OFS (18)
#define GPIO_INTR_POL_0_INTR_POL_9_MASK ((uint32_t)0x000C0000U)
#define GPIO_INTR_POL_0_INTR_POL_10_OFS (20)
#define GPIO_INTR_POL_0_INTR_POL_10_MASK ((uint32_t)0x00300000U)
#define GPIO_INTR_POL_0_INTR_POL_11_OFS (22)
#define GPIO_INTR_POL_0_INTR_POL_11_MASK ((uint32_t)0x00C00000U)
#define GPIO_INTR_POL_0_INTR_POL_12_OFS (24)
#define GPIO_INTR_POL_0_INTR_POL_12_MASK ((uint32_t)0x03000000U)
#define GPIO_INTR_POL_0_INTR_POL_13_OFS (26)
#define GPIO_INTR_POL_0_INTR_POL_13_MASK ((uint32_t)0x0C000000U)
#define GPIO_INTR_POL_0_INTR_POL_14_OFS (28)
#define GPIO_INTR_POL_0_INTR_POL_14_MASK ((uint32_t)0x30000000U)
#define GPIO_INTR_POL_0_INTR_POL_15_OFS (30)
#define GPIO_INTR_POL_0_INTR_POL_15_MASK ((uint32_t)0xC0000000U)
#define GPIO_INTR_POL_1_INTR_POL_16_OFS (0)
#define GPIO_INTR_POL_1_INTR_POL_16_MASK ((uint32_t)0x00000003U)
#define GPIO_INTR_POL_1_INTR_POL_17_OFS (2)
#define GPIO_INTR_POL_1_INTR_POL_17_MASK ((uint32_t)0x0000000CU)
#define GPIO_INTR_POL_1_INTR_POL_18_OFS (4)
#define GPIO_INTR_POL_1_INTR_POL_18_MASK ((uint32_t)0x00000030U)
#define GPIO_INTR_POL_1_INTR_POL_19_OFS (6)
#define GPIO_INTR_POL_1_INTR_POL_19_MASK ((uint32_t)0x000000C0U)
#define GPIO_INTR_POL_1_INTR_POL_20_OFS (8)
#define GPIO_INTR_POL_1_INTR_POL_20_MASK ((uint32_t)0x00000300U)
#define GPIO_INTR_POL_1_INTR_POL_21_OFS (10)
#define GPIO_INTR_POL_1_INTR_POL_21_MASK ((uint32_t)0x00000C00U)
#define GPIO_INTR_POL_1_INTR_POL_22_OFS (12)
#define GPIO_INTR_POL_1_INTR_POL_22_MASK ((uint32_t)0x00003000U)
#define GPIO_INTR_POL_1_INTR_POL_23_OFS (14)
#define GPIO_INTR_POL_1_INTR_POL_23_MASK ((uint32_t)0x0000C000U)
#define GPIO_INTR_POL_1_INTR_POL_24_OFS (16)
#define GPIO_INTR_POL_1_INTR_POL_24_MASK ((uint32_t)0x00030000U)
#define GPIO_INTR_POL_1_INTR_POL_25_OFS (18)
#define GPIO_INTR_POL_1_INTR_POL_25_MASK ((uint32_t)0x000C0000U)
#define GPIO_INTR_POL_1_INTR_POL_26_OFS (20)
#define GPIO_INTR_POL_1_INTR_POL_26_MASK ((uint32_t)0x00300000U)
#define GPIO_INTR_POL_1_INTR_POL_27_OFS (22)
#define GPIO_INTR_POL_1_INTR_POL_27_MASK ((uint32_t)0x00C00000U)
#define GPIO_INTR_POL_1_INTR_POL_28_OFS (24)
#define GPIO_INTR_POL_1_INTR_POL_28_MASK ((uint32_t)0x03000000U)
#define GPIO_INTR_POL_1_INTR_POL_29_OFS (26)
#define GPIO_INTR_POL_1_INTR_POL_29_MASK ((uint32_t)0x0C000000U)
#define GPIO_INTR_POL_1_INTR_POL_30_OFS (28)
#define GPIO_INTR_POL_1_INTR_POL_30_MASK ((uint32_t)0x30000000U)
#define GPIO_INTR_POL_1_INTR_POL_31_OFS (30)
#define GPIO_INTR_POL_1_INTR_POL_31_MASK ((uint32_t)0xC0000000U)
#define GPIO_SUB_CFG_SUB_EN_OFS (0)
#define GPIO_SUB_CFG_SUB_EN_MASK ((uint32_t)0x00000001U)
#define GPIO_SUB_CFG_ACTION_OFS (8)
#define GPIO_SUB_CFG_ACTION_MASK ((uint32_t)0x00000300U)
#define GPIO_SUB_CFG_BIT_NUM_OFS (16)
#define GPIO_SUB_CFG_BIT_NUM_MASK ((uint32_t)0x001F0000U)
#define GPIO_DMA_WR_MASK_DMA_WR_MASK_OFS (0)
#define GPIO_DMA_WR_MASK_DMA_WR_MASK_MASK ((uint32_t)0xFFFFFFFFU)

#endif
