#ifndef OPAMP_REGISTERS_H
#define OPAMP_REGISTERS_H

#include <stdint.h>

typedef struct OPAMP_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} OPAMP_DESC_REG_s;

typedef union OPAMP_DESC_u {
    OPAMP_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_DESC_u;

typedef struct OPAMP_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} OPAMP_PWR_EN_REG_s;

typedef union OPAMP_PWR_EN_u {
    OPAMP_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_PWR_EN_u;

typedef struct OPAMP_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} OPAMP_RST_CTRL_REG_s;

typedef union OPAMP_RST_CTRL_u {
    OPAMP_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_RST_CTRL_u;

typedef struct OPAMP_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} OPAMP_RST_STS_REG_s;

typedef union OPAMP_RST_STS_u {
    OPAMP_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_RST_STS_u;

typedef struct OPAMP_CTRL0_REG_s {
    unsigned int enable:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int bcs_en:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int rri_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int out_en:1; // 
} OPAMP_CTRL0_REG_s;

typedef union OPAMP_CTRL0_u {
    OPAMP_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_CTRL0_u;

typedef struct OPAMP_GAIN_CTRL0_REG_s {
    unsigned int gain:4; // 
    unsigned int rsvd_0:4; // 
    unsigned int gbw:1; // 
    unsigned int rsvd_1:7; // 
    unsigned int chop_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int chop_mode:1; // 
} OPAMP_GAIN_CTRL0_REG_s;

typedef union OPAMP_GAIN_CTRL0_u {
    OPAMP_GAIN_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_GAIN_CTRL0_u;

typedef struct OPAMP_INPUT_CTRL0_REG_s {
    unsigned int in_p_sel:4; // 
    unsigned int in_n_sel:4; // 
    unsigned int in_m_sel:4; // 
} OPAMP_INPUT_CTRL0_REG_s;

typedef union OPAMP_INPUT_CTRL0_u {
    OPAMP_INPUT_CTRL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_INPUT_CTRL0_u;

typedef struct OPAMP_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} OPAMP_SPARE_CTRL_REG_s;

typedef union OPAMP_SPARE_CTRL_u {
    OPAMP_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_SPARE_CTRL_u;

typedef struct OPAMP_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} OPAMP_SPARE_STS_REG_s;

typedef union OPAMP_SPARE_STS_u {
    OPAMP_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_SPARE_STS_u;

typedef struct OPAMP_REGS_s{
    volatile OPAMP_DESC_u DESC;
    volatile OPAMP_PWR_EN_u PWR_EN;
    volatile OPAMP_RST_CTRL_u RST_CTRL;
    volatile OPAMP_RST_STS_u RST_STS;
    volatile OPAMP_CTRL0_u CTRL0;
    volatile OPAMP_GAIN_CTRL0_u GAIN_CTRL0;
    volatile OPAMP_INPUT_CTRL0_u INPUT_CTRL0;
    volatile OPAMP_SPARE_CTRL_u SPARE_CTRL;
    volatile OPAMP_SPARE_STS_u SPARE_STS;
} OPAMP_REGS_s;

#define OPAMP_DESC_MODULE_TYPE_OFS (0)
#define OPAMP_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define OPAMP_DESC_MODUE_SUBTYPE_OFS (8)
#define OPAMP_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define OPAMP_DESC_MAJOR_REV_OFS (16)
#define OPAMP_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define OPAMP_DESC_MINOR_REV_OFS (20)
#define OPAMP_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define OPAMP_PWR_EN_PWR_EN_OFS (0)
#define OPAMP_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define OPAMP_PWR_EN_PWR_EN_KEY_OFS (24)
#define OPAMP_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define OPAMP_RST_CTRL_RST_OFS (0)
#define OPAMP_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define OPAMP_RST_CTRL_RST_STS_CLR_OFS (1)
#define OPAMP_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define OPAMP_RST_CTRL_RST_KEY_OFS (24)
#define OPAMP_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define OPAMP_RST_STS_RST_STS_OFS (0)
#define OPAMP_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define OPAMP_CTRL0_ENABLE_OFS (0)
#define OPAMP_CTRL0_ENABLE_MASK ((uint32_t)0x00000001U)
#define OPAMP_CTRL0_BCS_EN_OFS (8)
#define OPAMP_CTRL0_BCS_EN_MASK ((uint32_t)0x00000100U)
#define OPAMP_CTRL0_RRI_EN_OFS (16)
#define OPAMP_CTRL0_RRI_EN_MASK ((uint32_t)0x00010000U)
#define OPAMP_CTRL0_OUT_EN_OFS (24)
#define OPAMP_CTRL0_OUT_EN_MASK ((uint32_t)0x01000000U)
#define OPAMP_GAIN_CTRL0_GAIN_OFS (0)
#define OPAMP_GAIN_CTRL0_GAIN_MASK ((uint32_t)0x0000000FU)
#define OPAMP_GAIN_CTRL0_GBW_OFS (8)
#define OPAMP_GAIN_CTRL0_GBW_MASK ((uint32_t)0x00000100U)
#define OPAMP_GAIN_CTRL0_CHOP_EN_OFS (16)
#define OPAMP_GAIN_CTRL0_CHOP_EN_MASK ((uint32_t)0x00010000U)
#define OPAMP_GAIN_CTRL0_CHOP_MODE_OFS (24)
#define OPAMP_GAIN_CTRL0_CHOP_MODE_MASK ((uint32_t)0x01000000U)
#define OPAMP_INPUT_CTRL0_IN_P_SEL_OFS (0)
#define OPAMP_INPUT_CTRL0_IN_P_SEL_MASK ((uint32_t)0x0000000FU)
#define OPAMP_INPUT_CTRL0_IN_N_SEL_OFS (4)
#define OPAMP_INPUT_CTRL0_IN_N_SEL_MASK ((uint32_t)0x000000F0U)
#define OPAMP_INPUT_CTRL0_IN_M_SEL_OFS (8)
#define OPAMP_INPUT_CTRL0_IN_M_SEL_MASK ((uint32_t)0x00000F00U)
#define OPAMP_SPARE_CTRL_CFG0_OFS (0)
#define OPAMP_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define OPAMP_SPARE_CTRL_CFG1_OFS (8)
#define OPAMP_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define OPAMP_SPARE_STS_STS0_OFS (0)
#define OPAMP_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define OPAMP_SPARE_STS_STS1_OFS (8)
#define OPAMP_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)
#endif
