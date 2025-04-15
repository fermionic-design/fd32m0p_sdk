#ifndef IOMUX_REGISTERS_H
#define IOMUX_REGISTERS_H

#include <stdint.h>

typedef struct base0_s {
    unsigned int base:32;
} base0_s;

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
    IOMUX_PA_0_REG_s PA_0;
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
    IOMUX_PA_1_REG_s PA_1;
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
    IOMUX_PA_2_REG_s PA_2;
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
    IOMUX_PA_3_REG_s PA_3;
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
    IOMUX_PA_4_REG_s PA_4;
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
    IOMUX_PA_5_REG_s PA_5;
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
    IOMUX_PA_6_REG_s PA_6;
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
    IOMUX_PA_7_REG_s PA_7;
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
    IOMUX_PA_8_REG_s PA_8;
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
    IOMUX_PA_9_REG_s PA_9;
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
    IOMUX_PA_10_REG_s PA_10;
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
    IOMUX_PA_11_REG_s PA_11;
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
    IOMUX_PA_12_REG_s PA_12;
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
    IOMUX_PA_13_REG_s PA_13;
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
    IOMUX_PA_14_REG_s PA_14;
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
    IOMUX_PA_15_REG_s PA_15;
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
    IOMUX_PA_16_REG_s PA_16;
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
    IOMUX_PA_17_REG_s PA_17;
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
    IOMUX_PA_18_REG_s PA_18;
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
    IOMUX_PA_19_REG_s PA_19;
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
    IOMUX_PA_20_REG_s PA_20;
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
    IOMUX_PA_21_REG_s PA_21;
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
    IOMUX_PA_22_REG_s PA_22;
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
    IOMUX_PA_23_REG_s PA_23;
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
    IOMUX_PA_24_REG_s PA_24;
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
    IOMUX_PA_25_REG_s PA_25;
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
    IOMUX_PA_26_REG_s PA_26;
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
    IOMUX_PA_27_REG_s PA_27;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_27_u;

typedef struct IOMUX_DUMMY_REG_s {
    unsigned int dummy:1; // 
} IOMUX_DUMMY_REG_s;

typedef union IOMUX_DUMMY_u {
    IOMUX_DUMMY_REG_s DUMMY;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_DUMMY_u;

typedef struct IOMUX_REGS_s{
    volatile base0_s base0;    
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

#define IOMUX_PA_0_output_en_OFS (0)
#define IOMUX_PA_0_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_0_input_en_OFS (1)
#define IOMUX_PA_0_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_0_drive_strength_OFS (2)
#define IOMUX_PA_0_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_0_slew_rate_OFS (4)
#define IOMUX_PA_0_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_0_pull_up_OFS (5)
#define IOMUX_PA_0_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_0_pull_down_OFS (6)
#define IOMUX_PA_0_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_0_hysteresis_OFS (7)
#define IOMUX_PA_0_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_0_sel_OFS (8)
#define IOMUX_PA_0_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_0_input_val_OFS (16)
#define IOMUX_PA_0_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_1_output_en_OFS (0)
#define IOMUX_PA_1_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_1_input_en_OFS (1)
#define IOMUX_PA_1_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_1_drive_strength_OFS (2)
#define IOMUX_PA_1_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_1_slew_rate_OFS (4)
#define IOMUX_PA_1_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_1_pull_up_OFS (5)
#define IOMUX_PA_1_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_1_pull_down_OFS (6)
#define IOMUX_PA_1_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_1_hysteresis_OFS (7)
#define IOMUX_PA_1_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_1_sel_OFS (8)
#define IOMUX_PA_1_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_1_input_val_OFS (16)
#define IOMUX_PA_1_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_2_output_en_OFS (0)
#define IOMUX_PA_2_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_2_input_en_OFS (1)
#define IOMUX_PA_2_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_2_drive_strength_OFS (2)
#define IOMUX_PA_2_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_2_slew_rate_OFS (4)
#define IOMUX_PA_2_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_2_pull_up_OFS (5)
#define IOMUX_PA_2_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_2_pull_down_OFS (6)
#define IOMUX_PA_2_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_2_hysteresis_OFS (7)
#define IOMUX_PA_2_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_2_sel_OFS (8)
#define IOMUX_PA_2_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_2_input_val_OFS (16)
#define IOMUX_PA_2_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_3_output_en_OFS (0)
#define IOMUX_PA_3_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_3_input_en_OFS (1)
#define IOMUX_PA_3_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_3_drive_strength_OFS (2)
#define IOMUX_PA_3_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_3_slew_rate_OFS (4)
#define IOMUX_PA_3_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_3_pull_up_OFS (5)
#define IOMUX_PA_3_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_3_pull_down_OFS (6)
#define IOMUX_PA_3_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_3_hysteresis_OFS (7)
#define IOMUX_PA_3_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_3_sel_OFS (8)
#define IOMUX_PA_3_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_3_input_val_OFS (16)
#define IOMUX_PA_3_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_4_output_en_OFS (0)
#define IOMUX_PA_4_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_4_input_en_OFS (1)
#define IOMUX_PA_4_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_4_drive_strength_OFS (2)
#define IOMUX_PA_4_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_4_slew_rate_OFS (4)
#define IOMUX_PA_4_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_4_pull_up_OFS (5)
#define IOMUX_PA_4_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_4_pull_down_OFS (6)
#define IOMUX_PA_4_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_4_hysteresis_OFS (7)
#define IOMUX_PA_4_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_4_sel_OFS (8)
#define IOMUX_PA_4_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_4_input_val_OFS (16)
#define IOMUX_PA_4_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_5_output_en_OFS (0)
#define IOMUX_PA_5_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_5_input_en_OFS (1)
#define IOMUX_PA_5_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_5_drive_strength_OFS (2)
#define IOMUX_PA_5_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_5_slew_rate_OFS (4)
#define IOMUX_PA_5_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_5_pull_up_OFS (5)
#define IOMUX_PA_5_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_5_pull_down_OFS (6)
#define IOMUX_PA_5_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_5_hysteresis_OFS (7)
#define IOMUX_PA_5_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_5_sel_OFS (8)
#define IOMUX_PA_5_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_5_input_val_OFS (16)
#define IOMUX_PA_5_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_6_output_en_OFS (0)
#define IOMUX_PA_6_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_6_input_en_OFS (1)
#define IOMUX_PA_6_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_6_drive_strength_OFS (2)
#define IOMUX_PA_6_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_6_slew_rate_OFS (4)
#define IOMUX_PA_6_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_6_pull_up_OFS (5)
#define IOMUX_PA_6_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_6_pull_down_OFS (6)
#define IOMUX_PA_6_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_6_hysteresis_OFS (7)
#define IOMUX_PA_6_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_6_sel_OFS (8)
#define IOMUX_PA_6_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_6_input_val_OFS (16)
#define IOMUX_PA_6_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_7_output_en_OFS (0)
#define IOMUX_PA_7_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_7_input_en_OFS (1)
#define IOMUX_PA_7_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_7_drive_strength_OFS (2)
#define IOMUX_PA_7_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_7_slew_rate_OFS (4)
#define IOMUX_PA_7_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_7_pull_up_OFS (5)
#define IOMUX_PA_7_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_7_pull_down_OFS (6)
#define IOMUX_PA_7_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_7_hysteresis_OFS (7)
#define IOMUX_PA_7_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_7_sel_OFS (8)
#define IOMUX_PA_7_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_7_input_val_OFS (16)
#define IOMUX_PA_7_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_8_output_en_OFS (0)
#define IOMUX_PA_8_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_8_input_en_OFS (1)
#define IOMUX_PA_8_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_8_drive_strength_OFS (2)
#define IOMUX_PA_8_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_8_slew_rate_OFS (4)
#define IOMUX_PA_8_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_8_pull_up_OFS (5)
#define IOMUX_PA_8_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_8_pull_down_OFS (6)
#define IOMUX_PA_8_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_8_hysteresis_OFS (7)
#define IOMUX_PA_8_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_8_sel_OFS (8)
#define IOMUX_PA_8_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_8_input_val_OFS (16)
#define IOMUX_PA_8_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_9_output_en_OFS (0)
#define IOMUX_PA_9_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_9_input_en_OFS (1)
#define IOMUX_PA_9_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_9_drive_strength_OFS (2)
#define IOMUX_PA_9_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_9_slew_rate_OFS (4)
#define IOMUX_PA_9_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_9_pull_up_OFS (5)
#define IOMUX_PA_9_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_9_pull_down_OFS (6)
#define IOMUX_PA_9_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_9_hysteresis_OFS (7)
#define IOMUX_PA_9_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_9_sel_OFS (8)
#define IOMUX_PA_9_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_9_input_val_OFS (16)
#define IOMUX_PA_9_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_10_output_en_OFS (0)
#define IOMUX_PA_10_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_10_input_en_OFS (1)
#define IOMUX_PA_10_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_10_drive_strength_OFS (2)
#define IOMUX_PA_10_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_10_slew_rate_OFS (4)
#define IOMUX_PA_10_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_10_pull_up_OFS (5)
#define IOMUX_PA_10_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_10_pull_down_OFS (6)
#define IOMUX_PA_10_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_10_hysteresis_OFS (7)
#define IOMUX_PA_10_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_10_sel_OFS (8)
#define IOMUX_PA_10_sel_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_10_input_val_OFS (16)
#define IOMUX_PA_10_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_11_output_en_OFS (0)
#define IOMUX_PA_11_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_11_input_en_OFS (1)
#define IOMUX_PA_11_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_11_drive_strength_OFS (2)
#define IOMUX_PA_11_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_11_slew_rate_OFS (4)
#define IOMUX_PA_11_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_11_pull_up_OFS (5)
#define IOMUX_PA_11_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_11_pull_down_OFS (6)
#define IOMUX_PA_11_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_11_hysteresis_OFS (7)
#define IOMUX_PA_11_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_11_sel_OFS (8)
#define IOMUX_PA_11_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_11_input_val_OFS (16)
#define IOMUX_PA_11_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_12_output_en_OFS (0)
#define IOMUX_PA_12_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_12_input_en_OFS (1)
#define IOMUX_PA_12_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_12_drive_strength_OFS (2)
#define IOMUX_PA_12_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_12_slew_rate_OFS (4)
#define IOMUX_PA_12_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_12_pull_up_OFS (5)
#define IOMUX_PA_12_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_12_pull_down_OFS (6)
#define IOMUX_PA_12_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_12_hysteresis_OFS (7)
#define IOMUX_PA_12_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_12_sel_OFS (8)
#define IOMUX_PA_12_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_12_input_val_OFS (16)
#define IOMUX_PA_12_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_13_output_en_OFS (0)
#define IOMUX_PA_13_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_13_input_en_OFS (1)
#define IOMUX_PA_13_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_13_drive_strength_OFS (2)
#define IOMUX_PA_13_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_13_slew_rate_OFS (4)
#define IOMUX_PA_13_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_13_pull_up_OFS (5)
#define IOMUX_PA_13_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_13_pull_down_OFS (6)
#define IOMUX_PA_13_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_13_hysteresis_OFS (7)
#define IOMUX_PA_13_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_13_sel_OFS (8)
#define IOMUX_PA_13_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_13_input_val_OFS (16)
#define IOMUX_PA_13_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_14_output_en_OFS (0)
#define IOMUX_PA_14_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_14_input_en_OFS (1)
#define IOMUX_PA_14_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_14_drive_strength_OFS (2)
#define IOMUX_PA_14_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_14_slew_rate_OFS (4)
#define IOMUX_PA_14_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_14_pull_up_OFS (5)
#define IOMUX_PA_14_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_14_pull_down_OFS (6)
#define IOMUX_PA_14_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_14_hysteresis_OFS (7)
#define IOMUX_PA_14_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_14_sel_OFS (8)
#define IOMUX_PA_14_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_14_input_val_OFS (16)
#define IOMUX_PA_14_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_15_output_en_OFS (0)
#define IOMUX_PA_15_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_15_input_en_OFS (1)
#define IOMUX_PA_15_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_15_drive_strength_OFS (2)
#define IOMUX_PA_15_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_15_slew_rate_OFS (4)
#define IOMUX_PA_15_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_15_pull_up_OFS (5)
#define IOMUX_PA_15_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_15_pull_down_OFS (6)
#define IOMUX_PA_15_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_15_hysteresis_OFS (7)
#define IOMUX_PA_15_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_15_sel_OFS (8)
#define IOMUX_PA_15_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_15_input_val_OFS (16)
#define IOMUX_PA_15_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_16_output_en_OFS (0)
#define IOMUX_PA_16_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_16_input_en_OFS (1)
#define IOMUX_PA_16_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_16_drive_strength_OFS (2)
#define IOMUX_PA_16_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_16_slew_rate_OFS (4)
#define IOMUX_PA_16_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_16_pull_up_OFS (5)
#define IOMUX_PA_16_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_16_pull_down_OFS (6)
#define IOMUX_PA_16_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_16_hysteresis_OFS (7)
#define IOMUX_PA_16_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_16_sel_OFS (8)
#define IOMUX_PA_16_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_16_input_val_OFS (16)
#define IOMUX_PA_16_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_17_output_en_OFS (0)
#define IOMUX_PA_17_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_17_input_en_OFS (1)
#define IOMUX_PA_17_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_17_drive_strength_OFS (2)
#define IOMUX_PA_17_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_17_slew_rate_OFS (4)
#define IOMUX_PA_17_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_17_pull_up_OFS (5)
#define IOMUX_PA_17_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_17_pull_down_OFS (6)
#define IOMUX_PA_17_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_17_hysteresis_OFS (7)
#define IOMUX_PA_17_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_17_sel_OFS (8)
#define IOMUX_PA_17_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_17_input_val_OFS (16)
#define IOMUX_PA_17_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_18_output_en_OFS (0)
#define IOMUX_PA_18_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_18_input_en_OFS (1)
#define IOMUX_PA_18_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_18_drive_strength_OFS (2)
#define IOMUX_PA_18_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_18_slew_rate_OFS (4)
#define IOMUX_PA_18_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_18_pull_up_OFS (5)
#define IOMUX_PA_18_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_18_pull_down_OFS (6)
#define IOMUX_PA_18_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_18_hysteresis_OFS (7)
#define IOMUX_PA_18_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_18_sel_OFS (8)
#define IOMUX_PA_18_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_18_input_val_OFS (16)
#define IOMUX_PA_18_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_19_output_en_OFS (0)
#define IOMUX_PA_19_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_19_input_en_OFS (1)
#define IOMUX_PA_19_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_19_drive_strength_OFS (2)
#define IOMUX_PA_19_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_19_slew_rate_OFS (4)
#define IOMUX_PA_19_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_19_pull_up_OFS (5)
#define IOMUX_PA_19_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_19_pull_down_OFS (6)
#define IOMUX_PA_19_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_19_hysteresis_OFS (7)
#define IOMUX_PA_19_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_19_sel_OFS (8)
#define IOMUX_PA_19_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_19_input_val_OFS (16)
#define IOMUX_PA_19_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_20_output_en_OFS (0)
#define IOMUX_PA_20_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_20_input_en_OFS (1)
#define IOMUX_PA_20_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_20_drive_strength_OFS (2)
#define IOMUX_PA_20_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_20_slew_rate_OFS (4)
#define IOMUX_PA_20_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_20_pull_up_OFS (5)
#define IOMUX_PA_20_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_20_pull_down_OFS (6)
#define IOMUX_PA_20_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_20_hysteresis_OFS (7)
#define IOMUX_PA_20_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_20_sel_OFS (8)
#define IOMUX_PA_20_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_20_input_val_OFS (16)
#define IOMUX_PA_20_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_21_output_en_OFS (0)
#define IOMUX_PA_21_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_21_input_en_OFS (1)
#define IOMUX_PA_21_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_21_drive_strength_OFS (2)
#define IOMUX_PA_21_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_21_slew_rate_OFS (4)
#define IOMUX_PA_21_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_21_pull_up_OFS (5)
#define IOMUX_PA_21_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_21_pull_down_OFS (6)
#define IOMUX_PA_21_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_21_hysteresis_OFS (7)
#define IOMUX_PA_21_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_21_sel_OFS (8)
#define IOMUX_PA_21_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_21_input_val_OFS (16)
#define IOMUX_PA_21_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_22_output_en_OFS (0)
#define IOMUX_PA_22_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_22_input_en_OFS (1)
#define IOMUX_PA_22_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_22_drive_strength_OFS (2)
#define IOMUX_PA_22_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_22_slew_rate_OFS (4)
#define IOMUX_PA_22_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_22_pull_up_OFS (5)
#define IOMUX_PA_22_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_22_pull_down_OFS (6)
#define IOMUX_PA_22_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_22_hysteresis_OFS (7)
#define IOMUX_PA_22_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_22_sel_OFS (8)
#define IOMUX_PA_22_sel_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_22_input_val_OFS (16)
#define IOMUX_PA_22_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_23_output_en_OFS (0)
#define IOMUX_PA_23_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_23_input_en_OFS (1)
#define IOMUX_PA_23_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_23_drive_strength_OFS (2)
#define IOMUX_PA_23_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_23_slew_rate_OFS (4)
#define IOMUX_PA_23_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_23_pull_up_OFS (5)
#define IOMUX_PA_23_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_23_pull_down_OFS (6)
#define IOMUX_PA_23_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_23_hysteresis_OFS (7)
#define IOMUX_PA_23_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_23_sel_OFS (8)
#define IOMUX_PA_23_sel_MASK ((uint32_t)0x00000F00U)
#define IOMUX_PA_23_input_val_OFS (16)
#define IOMUX_PA_23_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_24_output_en_OFS (0)
#define IOMUX_PA_24_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_24_input_en_OFS (1)
#define IOMUX_PA_24_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_24_drive_strength_OFS (2)
#define IOMUX_PA_24_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_24_slew_rate_OFS (4)
#define IOMUX_PA_24_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_24_pull_up_OFS (5)
#define IOMUX_PA_24_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_24_pull_down_OFS (6)
#define IOMUX_PA_24_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_24_hysteresis_OFS (7)
#define IOMUX_PA_24_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_24_sel_OFS (8)
#define IOMUX_PA_24_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_24_input_val_OFS (16)
#define IOMUX_PA_24_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_25_output_en_OFS (0)
#define IOMUX_PA_25_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_25_input_en_OFS (1)
#define IOMUX_PA_25_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_25_drive_strength_OFS (2)
#define IOMUX_PA_25_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_25_slew_rate_OFS (4)
#define IOMUX_PA_25_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_25_pull_up_OFS (5)
#define IOMUX_PA_25_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_25_pull_down_OFS (6)
#define IOMUX_PA_25_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_25_hysteresis_OFS (7)
#define IOMUX_PA_25_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_25_sel_OFS (8)
#define IOMUX_PA_25_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_25_input_val_OFS (16)
#define IOMUX_PA_25_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_26_output_en_OFS (0)
#define IOMUX_PA_26_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_26_input_en_OFS (1)
#define IOMUX_PA_26_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_26_drive_strength_OFS (2)
#define IOMUX_PA_26_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_26_slew_rate_OFS (4)
#define IOMUX_PA_26_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_26_pull_up_OFS (5)
#define IOMUX_PA_26_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_26_pull_down_OFS (6)
#define IOMUX_PA_26_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_26_hysteresis_OFS (7)
#define IOMUX_PA_26_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_26_sel_OFS (8)
#define IOMUX_PA_26_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_26_input_val_OFS (16)
#define IOMUX_PA_26_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_PA_27_output_en_OFS (0)
#define IOMUX_PA_27_output_en_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_27_input_en_OFS (1)
#define IOMUX_PA_27_input_en_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_27_drive_strength_OFS (2)
#define IOMUX_PA_27_drive_strength_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_27_slew_rate_OFS (4)
#define IOMUX_PA_27_slew_rate_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_27_pull_up_OFS (5)
#define IOMUX_PA_27_pull_up_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_27_pull_down_OFS (6)
#define IOMUX_PA_27_pull_down_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_27_hysteresis_OFS (7)
#define IOMUX_PA_27_hysteresis_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_27_sel_OFS (8)
#define IOMUX_PA_27_sel_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_27_input_val_OFS (16)
#define IOMUX_PA_27_input_val_MASK ((uint32_t)0x00010000U)
#define IOMUX_DUMMY_dummy_OFS (0)
#define IOMUX_DUMMY_dummy_MASK ((uint32_t)0x00000001U)
#endif
