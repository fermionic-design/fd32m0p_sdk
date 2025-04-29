#ifndef IOMUX_REGISTERS_H
#define IOMUX_REGISTERS_H

#include <stdint.h>

typedef struct IOMUX_PA_0_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_0_REG_s;

typedef union IOMUX_PA_0_u {
    IOMUX_PA_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_0_u;

typedef struct IOMUX_PA_1_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_1_REG_s;

typedef union IOMUX_PA_1_u {
    IOMUX_PA_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_1_u;

typedef struct IOMUX_PA_2_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_2_REG_s;

typedef union IOMUX_PA_2_u {
    IOMUX_PA_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_2_u;

typedef struct IOMUX_PA_3_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_3_REG_s;

typedef union IOMUX_PA_3_u {
    IOMUX_PA_3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_3_u;

typedef struct IOMUX_PA_4_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_4_REG_s;

typedef union IOMUX_PA_4_u {
    IOMUX_PA_4_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_4_u;

typedef struct IOMUX_PA_5_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_5_REG_s;

typedef union IOMUX_PA_5_u {
    IOMUX_PA_5_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_5_u;

typedef struct IOMUX_PA_6_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_6_REG_s;

typedef union IOMUX_PA_6_u {
    IOMUX_PA_6_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_6_u;

typedef struct IOMUX_PA_7_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_7_REG_s;

typedef union IOMUX_PA_7_u {
    IOMUX_PA_7_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_7_u;

typedef struct IOMUX_PA_8_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_8_REG_s;

typedef union IOMUX_PA_8_u {
    IOMUX_PA_8_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_8_u;

typedef struct IOMUX_PA_9_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_9_REG_s;

typedef union IOMUX_PA_9_u {
    IOMUX_PA_9_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_9_u;

typedef struct IOMUX_PA_10_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:4; // 
    unsigned int rsvd_0:4; // 
    unsigned int input_val:1; // 
} IOMUX_PA_10_REG_s;

typedef union IOMUX_PA_10_u {
    IOMUX_PA_10_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_10_u;

typedef struct IOMUX_PA_11_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_11_REG_s;

typedef union IOMUX_PA_11_u {
    IOMUX_PA_11_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_11_u;

typedef struct IOMUX_PA_12_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_12_REG_s;

typedef union IOMUX_PA_12_u {
    IOMUX_PA_12_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_12_u;

typedef struct IOMUX_PA_13_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_13_REG_s;

typedef union IOMUX_PA_13_u {
    IOMUX_PA_13_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_13_u;

typedef struct IOMUX_PA_14_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_14_REG_s;

typedef union IOMUX_PA_14_u {
    IOMUX_PA_14_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_14_u;

typedef struct IOMUX_PA_15_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_15_REG_s;

typedef union IOMUX_PA_15_u {
    IOMUX_PA_15_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_15_u;

typedef struct IOMUX_PA_16_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_16_REG_s;

typedef union IOMUX_PA_16_u {
    IOMUX_PA_16_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_16_u;

typedef struct IOMUX_PA_17_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_17_REG_s;

typedef union IOMUX_PA_17_u {
    IOMUX_PA_17_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_17_u;

typedef struct IOMUX_PA_18_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_18_REG_s;

typedef union IOMUX_PA_18_u {
    IOMUX_PA_18_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_18_u;

typedef struct IOMUX_PA_19_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_19_REG_s;

typedef union IOMUX_PA_19_u {
    IOMUX_PA_19_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_19_u;

typedef struct IOMUX_PA_20_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_20_REG_s;

typedef union IOMUX_PA_20_u {
    IOMUX_PA_20_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_20_u;

typedef struct IOMUX_PA_21_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_21_REG_s;

typedef union IOMUX_PA_21_u {
    IOMUX_PA_21_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_21_u;

typedef struct IOMUX_PA_22_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:4; // 
    unsigned int rsvd_0:4; // 
    unsigned int input_val:1; // 
} IOMUX_PA_22_REG_s;

typedef union IOMUX_PA_22_u {
    IOMUX_PA_22_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_22_u;

typedef struct IOMUX_PA_23_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:4; // 
    unsigned int rsvd_0:4; // 
    unsigned int input_val:1; // 
} IOMUX_PA_23_REG_s;

typedef union IOMUX_PA_23_u {
    IOMUX_PA_23_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_23_u;

typedef struct IOMUX_PA_24_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_24_REG_s;

typedef union IOMUX_PA_24_u {
    IOMUX_PA_24_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_24_u;

typedef struct IOMUX_PA_25_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_25_REG_s;

typedef union IOMUX_PA_25_u {
    IOMUX_PA_25_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_25_u;

typedef struct IOMUX_PA_26_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_26_REG_s;

typedef union IOMUX_PA_26_u {
    IOMUX_PA_26_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_26_u;

typedef struct IOMUX_PA_27_REG_s {
    unsigned int output_en:1; // 
    unsigned int input_en:1; // 
    unsigned int drive_strength:2; // 
    unsigned int slew_rate:1; // 
    unsigned int pull_up:1; // 
    unsigned int pull_down:1; // 
    unsigned int hysteresis:1; // 
    unsigned int sel:3; // 
    unsigned int rsvd_0:5; // 
    unsigned int input_val:1; // 
} IOMUX_PA_27_REG_s;

typedef union IOMUX_PA_27_u {
    IOMUX_PA_27_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_27_u;

typedef struct IOMUX_DUMMY_REG_s {
    unsigned int dummy:1; // 
} IOMUX_DUMMY_REG_s;

typedef union IOMUX_DUMMY_u {
    IOMUX_DUMMY_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_DUMMY_u;

typedef struct IOMUX_REGS_s{
    volatile IOMUX_PA_0_u PA_0;
    volatile IOMUX_PA_1_u PA_1;
    volatile IOMUX_PA_2_u PA_2;
    volatile IOMUX_PA_3_u PA_3;
    volatile IOMUX_PA_4_u PA_4;
    volatile IOMUX_PA_5_u PA_5;
    volatile IOMUX_PA_6_u PA_6;
    volatile IOMUX_PA_7_u PA_7;
    volatile IOMUX_PA_8_u PA_8;
    volatile IOMUX_PA_9_u PA_9;
    volatile IOMUX_PA_10_u PA_10;
    volatile IOMUX_PA_11_u PA_11;
    volatile IOMUX_PA_12_u PA_12;
    volatile IOMUX_PA_13_u PA_13;
    volatile IOMUX_PA_14_u PA_14;
    volatile IOMUX_PA_15_u PA_15;
    volatile IOMUX_PA_16_u PA_16;
    volatile IOMUX_PA_17_u PA_17;
    volatile IOMUX_PA_18_u PA_18;
    volatile IOMUX_PA_19_u PA_19;
    volatile IOMUX_PA_20_u PA_20;
    volatile IOMUX_PA_21_u PA_21;
    volatile IOMUX_PA_22_u PA_22;
    volatile IOMUX_PA_23_u PA_23;
    volatile IOMUX_PA_24_u PA_24;
    volatile IOMUX_PA_25_u PA_25;
    volatile IOMUX_PA_26_u PA_26;
    volatile IOMUX_PA_27_u PA_27;
    volatile IOMUX_DUMMY_u DUMMY;
} IOMUX_REGS_s;

#define IOMUX_PA_0_OUTPUT_EN_OFS (0)
#define IOMUX_PA_0_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_0_INPUT_EN_OFS (1)
#define IOMUX_PA_0_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_0_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_0_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_0_SLEW_RATE_OFS (4)
#define IOMUX_PA_0_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_0_PULL_UP_OFS (5)
#define IOMUX_PA_0_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_0_PULL_DOWN_OFS (6)
#define IOMUX_PA_0_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_0_HYSTERESIS_OFS (7)
#define IOMUX_PA_0_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_0_SEL_OFS (8)
#define IOMUX_PA_0_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_0_INPUT_VAL_OFS (16)
#define IOMUX_PA_0_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_1_OUTPUT_EN_OFS (0)
#define IOMUX_PA_1_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_1_INPUT_EN_OFS (1)
#define IOMUX_PA_1_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_1_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_1_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_1_SLEW_RATE_OFS (4)
#define IOMUX_PA_1_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_1_PULL_UP_OFS (5)
#define IOMUX_PA_1_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_1_PULL_DOWN_OFS (6)
#define IOMUX_PA_1_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_1_HYSTERESIS_OFS (7)
#define IOMUX_PA_1_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_1_SEL_OFS (8)
#define IOMUX_PA_1_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_1_INPUT_VAL_OFS (16)
#define IOMUX_PA_1_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_2_OUTPUT_EN_OFS (0)
#define IOMUX_PA_2_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_2_INPUT_EN_OFS (1)
#define IOMUX_PA_2_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_2_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_2_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_2_SLEW_RATE_OFS (4)
#define IOMUX_PA_2_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_2_PULL_UP_OFS (5)
#define IOMUX_PA_2_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_2_PULL_DOWN_OFS (6)
#define IOMUX_PA_2_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_2_HYSTERESIS_OFS (7)
#define IOMUX_PA_2_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_2_SEL_OFS (8)
#define IOMUX_PA_2_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_2_INPUT_VAL_OFS (16)
#define IOMUX_PA_2_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_3_OUTPUT_EN_OFS (0)
#define IOMUX_PA_3_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_3_INPUT_EN_OFS (1)
#define IOMUX_PA_3_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_3_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_3_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_3_SLEW_RATE_OFS (4)
#define IOMUX_PA_3_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_3_PULL_UP_OFS (5)
#define IOMUX_PA_3_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_3_PULL_DOWN_OFS (6)
#define IOMUX_PA_3_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_3_HYSTERESIS_OFS (7)
#define IOMUX_PA_3_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_3_SEL_OFS (8)
#define IOMUX_PA_3_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_3_INPUT_VAL_OFS (16)
#define IOMUX_PA_3_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_4_OUTPUT_EN_OFS (0)
#define IOMUX_PA_4_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_4_INPUT_EN_OFS (1)
#define IOMUX_PA_4_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_4_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_4_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_4_SLEW_RATE_OFS (4)
#define IOMUX_PA_4_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_4_PULL_UP_OFS (5)
#define IOMUX_PA_4_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_4_PULL_DOWN_OFS (6)
#define IOMUX_PA_4_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_4_HYSTERESIS_OFS (7)
#define IOMUX_PA_4_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_4_SEL_OFS (8)
#define IOMUX_PA_4_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_4_INPUT_VAL_OFS (16)
#define IOMUX_PA_4_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_5_OUTPUT_EN_OFS (0)
#define IOMUX_PA_5_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_5_INPUT_EN_OFS (1)
#define IOMUX_PA_5_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_5_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_5_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_5_SLEW_RATE_OFS (4)
#define IOMUX_PA_5_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_5_PULL_UP_OFS (5)
#define IOMUX_PA_5_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_5_PULL_DOWN_OFS (6)
#define IOMUX_PA_5_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_5_HYSTERESIS_OFS (7)
#define IOMUX_PA_5_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_5_SEL_OFS (8)
#define IOMUX_PA_5_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_5_INPUT_VAL_OFS (16)
#define IOMUX_PA_5_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_6_OUTPUT_EN_OFS (0)
#define IOMUX_PA_6_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_6_INPUT_EN_OFS (1)
#define IOMUX_PA_6_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_6_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_6_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_6_SLEW_RATE_OFS (4)
#define IOMUX_PA_6_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_6_PULL_UP_OFS (5)
#define IOMUX_PA_6_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_6_PULL_DOWN_OFS (6)
#define IOMUX_PA_6_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_6_HYSTERESIS_OFS (7)
#define IOMUX_PA_6_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_6_SEL_OFS (8)
#define IOMUX_PA_6_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_6_INPUT_VAL_OFS (16)
#define IOMUX_PA_6_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_7_OUTPUT_EN_OFS (0)
#define IOMUX_PA_7_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_7_INPUT_EN_OFS (1)
#define IOMUX_PA_7_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_7_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_7_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_7_SLEW_RATE_OFS (4)
#define IOMUX_PA_7_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_7_PULL_UP_OFS (5)
#define IOMUX_PA_7_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_7_PULL_DOWN_OFS (6)
#define IOMUX_PA_7_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_7_HYSTERESIS_OFS (7)
#define IOMUX_PA_7_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_7_SEL_OFS (8)
#define IOMUX_PA_7_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_7_INPUT_VAL_OFS (16)
#define IOMUX_PA_7_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_8_OUTPUT_EN_OFS (0)
#define IOMUX_PA_8_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_8_INPUT_EN_OFS (1)
#define IOMUX_PA_8_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_8_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_8_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_8_SLEW_RATE_OFS (4)
#define IOMUX_PA_8_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_8_PULL_UP_OFS (5)
#define IOMUX_PA_8_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_8_PULL_DOWN_OFS (6)
#define IOMUX_PA_8_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_8_HYSTERESIS_OFS (7)
#define IOMUX_PA_8_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_8_SEL_OFS (8)
#define IOMUX_PA_8_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_8_INPUT_VAL_OFS (16)
#define IOMUX_PA_8_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_9_OUTPUT_EN_OFS (0)
#define IOMUX_PA_9_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_9_INPUT_EN_OFS (1)
#define IOMUX_PA_9_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_9_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_9_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_9_SLEW_RATE_OFS (4)
#define IOMUX_PA_9_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_9_PULL_UP_OFS (5)
#define IOMUX_PA_9_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_9_PULL_DOWN_OFS (6)
#define IOMUX_PA_9_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_9_HYSTERESIS_OFS (7)
#define IOMUX_PA_9_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_9_SEL_OFS (8)
#define IOMUX_PA_9_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_9_INPUT_VAL_OFS (16)
#define IOMUX_PA_9_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_10_OUTPUT_EN_OFS (0)
#define IOMUX_PA_10_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_10_INPUT_EN_OFS (1)
#define IOMUX_PA_10_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_10_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_10_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_10_SLEW_RATE_OFS (4)
#define IOMUX_PA_10_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_10_PULL_UP_OFS (5)
#define IOMUX_PA_10_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_10_PULL_DOWN_OFS (6)
#define IOMUX_PA_10_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_10_HYSTERESIS_OFS (7)
#define IOMUX_PA_10_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_10_SEL_OFS (8)
#define IOMUX_PA_10_SEL_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_10_INPUT_VAL_OFS (16)
#define IOMUX_PA_10_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_11_OUTPUT_EN_OFS (0)
#define IOMUX_PA_11_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_11_INPUT_EN_OFS (1)
#define IOMUX_PA_11_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_11_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_11_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_11_SLEW_RATE_OFS (4)
#define IOMUX_PA_11_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_11_PULL_UP_OFS (5)
#define IOMUX_PA_11_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_11_PULL_DOWN_OFS (6)
#define IOMUX_PA_11_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_11_HYSTERESIS_OFS (7)
#define IOMUX_PA_11_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_11_SEL_OFS (8)
#define IOMUX_PA_11_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_11_INPUT_VAL_OFS (16)
#define IOMUX_PA_11_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_12_OUTPUT_EN_OFS (0)
#define IOMUX_PA_12_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_12_INPUT_EN_OFS (1)
#define IOMUX_PA_12_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_12_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_12_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_12_SLEW_RATE_OFS (4)
#define IOMUX_PA_12_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_12_PULL_UP_OFS (5)
#define IOMUX_PA_12_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_12_PULL_DOWN_OFS (6)
#define IOMUX_PA_12_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_12_HYSTERESIS_OFS (7)
#define IOMUX_PA_12_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_12_SEL_OFS (8)
#define IOMUX_PA_12_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_12_INPUT_VAL_OFS (16)
#define IOMUX_PA_12_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_13_OUTPUT_EN_OFS (0)
#define IOMUX_PA_13_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_13_INPUT_EN_OFS (1)
#define IOMUX_PA_13_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_13_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_13_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_13_SLEW_RATE_OFS (4)
#define IOMUX_PA_13_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_13_PULL_UP_OFS (5)
#define IOMUX_PA_13_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_13_PULL_DOWN_OFS (6)
#define IOMUX_PA_13_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_13_HYSTERESIS_OFS (7)
#define IOMUX_PA_13_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_13_SEL_OFS (8)
#define IOMUX_PA_13_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_13_INPUT_VAL_OFS (16)
#define IOMUX_PA_13_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_14_OUTPUT_EN_OFS (0)
#define IOMUX_PA_14_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_14_INPUT_EN_OFS (1)
#define IOMUX_PA_14_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_14_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_14_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_14_SLEW_RATE_OFS (4)
#define IOMUX_PA_14_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_14_PULL_UP_OFS (5)
#define IOMUX_PA_14_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_14_PULL_DOWN_OFS (6)
#define IOMUX_PA_14_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_14_HYSTERESIS_OFS (7)
#define IOMUX_PA_14_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_14_SEL_OFS (8)
#define IOMUX_PA_14_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_14_INPUT_VAL_OFS (16)
#define IOMUX_PA_14_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_15_OUTPUT_EN_OFS (0)
#define IOMUX_PA_15_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_15_INPUT_EN_OFS (1)
#define IOMUX_PA_15_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_15_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_15_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_15_SLEW_RATE_OFS (4)
#define IOMUX_PA_15_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_15_PULL_UP_OFS (5)
#define IOMUX_PA_15_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_15_PULL_DOWN_OFS (6)
#define IOMUX_PA_15_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_15_HYSTERESIS_OFS (7)
#define IOMUX_PA_15_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_15_SEL_OFS (8)
#define IOMUX_PA_15_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_15_INPUT_VAL_OFS (16)
#define IOMUX_PA_15_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_16_OUTPUT_EN_OFS (0)
#define IOMUX_PA_16_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_16_INPUT_EN_OFS (1)
#define IOMUX_PA_16_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_16_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_16_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_16_SLEW_RATE_OFS (4)
#define IOMUX_PA_16_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_16_PULL_UP_OFS (5)
#define IOMUX_PA_16_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_16_PULL_DOWN_OFS (6)
#define IOMUX_PA_16_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_16_HYSTERESIS_OFS (7)
#define IOMUX_PA_16_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_16_SEL_OFS (8)
#define IOMUX_PA_16_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_16_INPUT_VAL_OFS (16)
#define IOMUX_PA_16_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_17_OUTPUT_EN_OFS (0)
#define IOMUX_PA_17_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_17_INPUT_EN_OFS (1)
#define IOMUX_PA_17_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_17_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_17_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_17_SLEW_RATE_OFS (4)
#define IOMUX_PA_17_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_17_PULL_UP_OFS (5)
#define IOMUX_PA_17_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_17_PULL_DOWN_OFS (6)
#define IOMUX_PA_17_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_17_HYSTERESIS_OFS (7)
#define IOMUX_PA_17_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_17_SEL_OFS (8)
#define IOMUX_PA_17_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_17_INPUT_VAL_OFS (16)
#define IOMUX_PA_17_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_18_OUTPUT_EN_OFS (0)
#define IOMUX_PA_18_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_18_INPUT_EN_OFS (1)
#define IOMUX_PA_18_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_18_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_18_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_18_SLEW_RATE_OFS (4)
#define IOMUX_PA_18_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_18_PULL_UP_OFS (5)
#define IOMUX_PA_18_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_18_PULL_DOWN_OFS (6)
#define IOMUX_PA_18_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_18_HYSTERESIS_OFS (7)
#define IOMUX_PA_18_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_18_SEL_OFS (8)
#define IOMUX_PA_18_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_18_INPUT_VAL_OFS (16)
#define IOMUX_PA_18_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_19_OUTPUT_EN_OFS (0)
#define IOMUX_PA_19_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_19_INPUT_EN_OFS (1)
#define IOMUX_PA_19_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_19_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_19_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_19_SLEW_RATE_OFS (4)
#define IOMUX_PA_19_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_19_PULL_UP_OFS (5)
#define IOMUX_PA_19_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_19_PULL_DOWN_OFS (6)
#define IOMUX_PA_19_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_19_HYSTERESIS_OFS (7)
#define IOMUX_PA_19_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_19_SEL_OFS (8)
#define IOMUX_PA_19_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_19_INPUT_VAL_OFS (16)
#define IOMUX_PA_19_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_20_OUTPUT_EN_OFS (0)
#define IOMUX_PA_20_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_20_INPUT_EN_OFS (1)
#define IOMUX_PA_20_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_20_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_20_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_20_SLEW_RATE_OFS (4)
#define IOMUX_PA_20_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_20_PULL_UP_OFS (5)
#define IOMUX_PA_20_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_20_PULL_DOWN_OFS (6)
#define IOMUX_PA_20_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_20_HYSTERESIS_OFS (7)
#define IOMUX_PA_20_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_20_SEL_OFS (8)
#define IOMUX_PA_20_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_20_INPUT_VAL_OFS (16)
#define IOMUX_PA_20_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_21_OUTPUT_EN_OFS (0)
#define IOMUX_PA_21_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_21_INPUT_EN_OFS (1)
#define IOMUX_PA_21_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_21_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_21_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_21_SLEW_RATE_OFS (4)
#define IOMUX_PA_21_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_21_PULL_UP_OFS (5)
#define IOMUX_PA_21_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_21_PULL_DOWN_OFS (6)
#define IOMUX_PA_21_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_21_HYSTERESIS_OFS (7)
#define IOMUX_PA_21_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_21_SEL_OFS (8)
#define IOMUX_PA_21_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_21_INPUT_VAL_OFS (16)
#define IOMUX_PA_21_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_22_OUTPUT_EN_OFS (0)
#define IOMUX_PA_22_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_22_INPUT_EN_OFS (1)
#define IOMUX_PA_22_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_22_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_22_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_22_SLEW_RATE_OFS (4)
#define IOMUX_PA_22_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_22_PULL_UP_OFS (5)
#define IOMUX_PA_22_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_22_PULL_DOWN_OFS (6)
#define IOMUX_PA_22_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_22_HYSTERESIS_OFS (7)
#define IOMUX_PA_22_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_22_SEL_OFS (8)
#define IOMUX_PA_22_SEL_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_22_INPUT_VAL_OFS (16)
#define IOMUX_PA_22_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_23_OUTPUT_EN_OFS (0)
#define IOMUX_PA_23_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_23_INPUT_EN_OFS (1)
#define IOMUX_PA_23_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_23_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_23_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_23_SLEW_RATE_OFS (4)
#define IOMUX_PA_23_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_23_PULL_UP_OFS (5)
#define IOMUX_PA_23_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_23_PULL_DOWN_OFS (6)
#define IOMUX_PA_23_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_23_HYSTERESIS_OFS (7)
#define IOMUX_PA_23_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_23_SEL_OFS (8)
#define IOMUX_PA_23_SEL_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_23_INPUT_VAL_OFS (16)
#define IOMUX_PA_23_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_24_OUTPUT_EN_OFS (0)
#define IOMUX_PA_24_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_24_INPUT_EN_OFS (1)
#define IOMUX_PA_24_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_24_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_24_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_24_SLEW_RATE_OFS (4)
#define IOMUX_PA_24_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_24_PULL_UP_OFS (5)
#define IOMUX_PA_24_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_24_PULL_DOWN_OFS (6)
#define IOMUX_PA_24_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_24_HYSTERESIS_OFS (7)
#define IOMUX_PA_24_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_24_SEL_OFS (8)
#define IOMUX_PA_24_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_24_INPUT_VAL_OFS (16)
#define IOMUX_PA_24_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_25_OUTPUT_EN_OFS (0)
#define IOMUX_PA_25_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_25_INPUT_EN_OFS (1)
#define IOMUX_PA_25_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_25_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_25_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_25_SLEW_RATE_OFS (4)
#define IOMUX_PA_25_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_25_PULL_UP_OFS (5)
#define IOMUX_PA_25_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_25_PULL_DOWN_OFS (6)
#define IOMUX_PA_25_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_25_HYSTERESIS_OFS (7)
#define IOMUX_PA_25_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_25_SEL_OFS (8)
#define IOMUX_PA_25_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_25_INPUT_VAL_OFS (16)
#define IOMUX_PA_25_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_26_OUTPUT_EN_OFS (0)
#define IOMUX_PA_26_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_26_INPUT_EN_OFS (1)
#define IOMUX_PA_26_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_26_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_26_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_26_SLEW_RATE_OFS (4)
#define IOMUX_PA_26_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_26_PULL_UP_OFS (5)
#define IOMUX_PA_26_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_26_PULL_DOWN_OFS (6)
#define IOMUX_PA_26_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_26_HYSTERESIS_OFS (7)
#define IOMUX_PA_26_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_26_SEL_OFS (8)
#define IOMUX_PA_26_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_26_INPUT_VAL_OFS (16)
#define IOMUX_PA_26_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_27_OUTPUT_EN_OFS (0)
#define IOMUX_PA_27_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_27_INPUT_EN_OFS (1)
#define IOMUX_PA_27_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_27_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_27_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_27_SLEW_RATE_OFS (4)
#define IOMUX_PA_27_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_27_PULL_UP_OFS (5)
#define IOMUX_PA_27_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_27_PULL_DOWN_OFS (6)
#define IOMUX_PA_27_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_27_HYSTERESIS_OFS (7)
#define IOMUX_PA_27_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_27_SEL_OFS (8)
#define IOMUX_PA_27_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_27_INPUT_VAL_OFS (16)
#define IOMUX_PA_27_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_DUMMY_DUMMY_OFS (0)
#define IOMUX_DUMMY_DUMMY_MASK ((uint32_t)0x00000001U)
#endif
