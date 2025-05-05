#ifndef IOMUX_REGISTERS_H
#define IOMUX_REGISTERS_H

#include <stdint.h>

typedef struct IOMUX_PA_REG_s {
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
} IOMUX_PA_REG_s;

typedef union IOMUX_PA_u {
    IOMUX_PA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} IOMUX_PA_u;

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
    volatile IOMUX_PA_u PA[28];
    volatile IOMUX_DUMMY_u DUMMY;
} IOMUX_REGS_s;

#define IOMUX_PA_OUTPUT_EN_OFS (0)
#define IOMUX_PA_OUTPUT_EN_MASK ((uint32_t)0x00000001U)
#define IOMUX_PA_INPUT_EN_OFS (1)
#define IOMUX_PA_INPUT_EN_MASK ((uint32_t)0x00000002U)
#define IOMUX_PA_DRIVE_STRENGTH_OFS (2)
#define IOMUX_PA_DRIVE_STRENGTH_MASK ((uint32_t)0x0000000CU)
#define IOMUX_PA_SLEW_RATE_OFS (4)
#define IOMUX_PA_SLEW_RATE_MASK ((uint32_t)0x00000010U)
#define IOMUX_PA_PULL_UP_OFS (5)
#define IOMUX_PA_PULL_UP_MASK ((uint32_t)0x00000020U)
#define IOMUX_PA_PULL_DOWN_OFS (6)
#define IOMUX_PA_PULL_DOWN_MASK ((uint32_t)0x00000040U)
#define IOMUX_PA_HYSTERESIS_OFS (7)
#define IOMUX_PA_HYSTERESIS_MASK ((uint32_t)0x00000080U)
#define IOMUX_PA_SEL_OFS (8)
#define IOMUX_PA_SEL_MASK ((uint32_t)0x00000700U)
#define IOMUX_PA_INPUT_VAL_OFS (16)
#define IOMUX_PA_INPUT_VAL_MASK ((uint32_t)0x00010000U)
#define IOMUX_DUMMY_DUMMY_OFS (0)
#define IOMUX_DUMMY_DUMMY_MASK ((uint32_t)0x00000001U)
#endif
