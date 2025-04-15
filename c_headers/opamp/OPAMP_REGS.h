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
    OPAMP_DESC_REG_s DESC;
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
    OPAMP_PWR_EN_REG_s PWR_EN;
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
    OPAMP_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_RST_CTRL_u;

typedef struct OPAMP_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} OPAMP_RST_STS_REG_s;

typedef union OPAMP_RST_STS_u {
    OPAMP_RST_STS_REG_s RST_STS;
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
    OPAMP_CTRL0_REG_s CTRL0;
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
    OPAMP_GAIN_CTRL0_REG_s GAIN_CTRL0;
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
    OPAMP_INPUT_CTRL0_REG_s INPUT_CTRL0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_INPUT_CTRL0_u;

typedef struct OPAMP_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} OPAMP_SPARE_CTRL_REG_s;

typedef union OPAMP_SPARE_CTRL_u {
    OPAMP_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OPAMP_SPARE_CTRL_u;

typedef struct OPAMP_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} OPAMP_SPARE_STS_REG_s;

typedef union OPAMP_SPARE_STS_u {
    OPAMP_SPARE_STS_REG_s SPARE_STS;
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

#define OPAMP_DESC_module_type_OFS (0)
#define OPAMP_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define OPAMP_DESC_modue_subtype_OFS (8)
#define OPAMP_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define OPAMP_DESC_major_rev_OFS (16)
#define OPAMP_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define OPAMP_DESC_minor_rev_OFS (20)
#define OPAMP_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define OPAMP_PWR_EN_pwr_en_OFS (0)
#define OPAMP_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define OPAMP_PWR_EN_pwr_en_key_OFS (24)
#define OPAMP_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define OPAMP_RST_CTRL_rst_OFS (0)
#define OPAMP_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define OPAMP_RST_CTRL_rst_sts_clr_OFS (1)
#define OPAMP_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define OPAMP_RST_CTRL_rst_key_OFS (24)
#define OPAMP_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define OPAMP_RST_STS_rst_sts_OFS (0)
#define OPAMP_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define OPAMP_CTRL0_enable_OFS (0)
#define OPAMP_CTRL0_enable_MASK ((uint32_t)0x00000001U)
#define OPAMP_CTRL0_bcs_en_OFS (8)
#define OPAMP_CTRL0_bcs_en_MASK ((uint32_t)0x00000100U)
#define OPAMP_CTRL0_rri_en_OFS (16)
#define OPAMP_CTRL0_rri_en_MASK ((uint32_t)0x00010000U)
#define OPAMP_CTRL0_out_en_OFS (24)
#define OPAMP_CTRL0_out_en_MASK ((uint32_t)0x01000000U)
#define OPAMP_GAIN_CTRL0_gain_OFS (0)
#define OPAMP_GAIN_CTRL0_gain_MASK ((uint32_t)0x0000000FU)
#define OPAMP_GAIN_CTRL0_gbw_OFS (8)
#define OPAMP_GAIN_CTRL0_gbw_MASK ((uint32_t)0x00000100U)
#define OPAMP_GAIN_CTRL0_chop_en_OFS (16)
#define OPAMP_GAIN_CTRL0_chop_en_MASK ((uint32_t)0x00010000U)
#define OPAMP_GAIN_CTRL0_chop_mode_OFS (24)
#define OPAMP_GAIN_CTRL0_chop_mode_MASK ((uint32_t)0x01000000U)
#define OPAMP_INPUT_CTRL0_in_p_sel_OFS (0)
#define OPAMP_INPUT_CTRL0_in_p_sel_MASK ((uint32_t)0x0000000FU)
#define OPAMP_INPUT_CTRL0_in_n_sel_OFS (4)
#define OPAMP_INPUT_CTRL0_in_n_sel_MASK ((uint32_t)0x000000F0U)
#define OPAMP_INPUT_CTRL0_in_m_sel_OFS (8)
#define OPAMP_INPUT_CTRL0_in_m_sel_MASK ((uint32_t)0x00000F00U)
#define OPAMP_SPARE_CTRL_cfg0_OFS (0)
#define OPAMP_SPARE_CTRL_cfg0_MASK ((uint32_t)0x000000FFU)
#define OPAMP_SPARE_CTRL_cfg1_OFS (8)
#define OPAMP_SPARE_CTRL_cfg1_MASK ((uint32_t)0x0000FF00U)
#define OPAMP_SPARE_STS_sts0_OFS (0)
#define OPAMP_SPARE_STS_sts0_MASK ((uint32_t)0x000000FFU)
#define OPAMP_SPARE_STS_sts1_OFS (8)
#define OPAMP_SPARE_STS_sts1_MASK ((uint32_t)0x0000FF00U)
#endif
