#ifndef VREF_REGISTERS_H
#define VREF_REGISTERS_H

#include <stdint.h>

typedef struct VREF_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} VREF_DESC_REG_s;

typedef union VREF_DESC_u {
    VREF_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_DESC_u;

typedef struct VREF_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} VREF_PWR_EN_REG_s;

typedef union VREF_PWR_EN_u {
    VREF_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_PWR_EN_u;

typedef struct VREF_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} VREF_RST_CTRL_REG_s;

typedef union VREF_RST_CTRL_u {
    VREF_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_RST_CTRL_u;

typedef struct VREF_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} VREF_RST_STS_REG_s;

typedef union VREF_RST_STS_u {
    VREF_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_RST_STS_u;

typedef struct VREF_CLK_CTRL_REG_s {
    unsigned int clk_sel:2; // 0: clk_lf 1: clk_4mhz 2: clk_ahb 3: clk_apb
    unsigned int rsvd_0:6; // clk divide ratio for sample and hold logic
    unsigned int clk_div:3; // clk divide ratio for sample and hold logic
} VREF_CLK_CTRL_REG_s;

typedef union VREF_CLK_CTRL_u {
    VREF_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_CLK_CTRL_u;

typedef struct VREF_STS_REG_s {
    unsigned int vref_rdy:1; // VREF is ready and stable
} VREF_STS_REG_s;

typedef union VREF_STS_u {
    VREF_STS_REG_s STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_STS_u;

typedef struct VREF_VREF_CTRL_REG_s {
    unsigned int enable:1; // enable VREF Buffer
    unsigned int rsvd_0:7; // 0: 1.4V 1: 2.5V
    unsigned int vref_mode:1; // 0: 1.4V 1: 2.5V
    unsigned int rsvd_1:7; // enable sample and hold mode
    unsigned int sh_en:1; // enable sample and hold mode
} VREF_VREF_CTRL_REG_s;

typedef union VREF_VREF_CTRL_u {
    VREF_VREF_CTRL_REG_s VREF_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_VREF_CTRL_u;

typedef struct VREF_SH_CTRL_REG_s {
    unsigned int hold_cnt:16; // hold cycle count
    unsigned int period_cnt:16; // total period count
} VREF_SH_CTRL_REG_s;

typedef union VREF_SH_CTRL_u {
    VREF_SH_CTRL_REG_s SH_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_SH_CTRL_u;

typedef struct VREF_VREF_SPARE_CTRL_REG_s {
    unsigned int vref_cfg0:8; // 
    unsigned int vref_cfg1:8; // 
} VREF_VREF_SPARE_CTRL_REG_s;

typedef union VREF_VREF_SPARE_CTRL_u {
    VREF_VREF_SPARE_CTRL_REG_s VREF_SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_VREF_SPARE_CTRL_u;

typedef struct VREF_VREF_SPARE_STS_REG_s {
    unsigned int vref_sts0:8; // 
    unsigned int vref_sts1:8; // 
} VREF_VREF_SPARE_STS_REG_s;

typedef union VREF_VREF_SPARE_STS_u {
    VREF_VREF_SPARE_STS_REG_s VREF_SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_VREF_SPARE_STS_u;

typedef struct VREF_REGS_s{
    volatile VREF_DESC_u DESC;
    volatile VREF_PWR_EN_u PWR_EN;
    volatile VREF_RST_CTRL_u RST_CTRL;
    volatile VREF_RST_STS_u RST_STS;
    volatile VREF_CLK_CTRL_u CLK_CTRL;
    volatile VREF_STS_u STS;
    volatile VREF_VREF_CTRL_u VREF_CTRL;
    volatile VREF_SH_CTRL_u SH_CTRL;
    volatile VREF_VREF_SPARE_CTRL_u VREF_SPARE_CTRL;
    volatile VREF_VREF_SPARE_STS_u VREF_SPARE_STS;
} VREF_REGS_s;

#define VREF_DESC_module_type_OFS (0)
#define VREF_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define VREF_DESC_modue_subtype_OFS (8)
#define VREF_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define VREF_DESC_major_rev_OFS (16)
#define VREF_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define VREF_DESC_minor_rev_OFS (20)
#define VREF_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define VREF_PWR_EN_pwr_en_OFS (0)
#define VREF_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define VREF_PWR_EN_pwr_en_key_OFS (24)
#define VREF_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define VREF_RST_CTRL_rst_OFS (0)
#define VREF_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define VREF_RST_CTRL_rst_sts_clr_OFS (1)
#define VREF_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define VREF_RST_CTRL_rst_key_OFS (24)
#define VREF_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define VREF_RST_STS_rst_sts_OFS (0)
#define VREF_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define VREF_CLK_CTRL_clk_sel_OFS (0)
#define VREF_CLK_CTRL_clk_sel_MASK ((uint32_t)0x00000003U)
#define VREF_CLK_CTRL_clk_div_OFS (8)
#define VREF_CLK_CTRL_clk_div_MASK ((uint32_t)0x00000700U)
#define VREF_STS_vref_rdy_OFS (0)
#define VREF_STS_vref_rdy_MASK ((uint32_t)0x00000001U)
#define VREF_VREF_CTRL_enable_OFS (0)
#define VREF_VREF_CTRL_enable_MASK ((uint32_t)0x00000001U)
#define VREF_VREF_CTRL_vref_mode_OFS (8)
#define VREF_VREF_CTRL_vref_mode_MASK ((uint32_t)0x00000100U)
#define VREF_VREF_CTRL_sh_en_OFS (16)
#define VREF_VREF_CTRL_sh_en_MASK ((uint32_t)0x00010000U)
#define VREF_SH_CTRL_hold_cnt_OFS (0)
#define VREF_SH_CTRL_hold_cnt_MASK ((uint32_t)0x0000FFFFU)
#define VREF_SH_CTRL_period_cnt_OFS (16)
#define VREF_SH_CTRL_period_cnt_MASK ((uint32_t)0xFFFF0000U)
#define VREF_VREF_SPARE_CTRL_vref_cfg0_OFS (0)
#define VREF_VREF_SPARE_CTRL_vref_cfg0_MASK ((uint32_t)0x000000FFU)
#define VREF_VREF_SPARE_CTRL_vref_cfg1_OFS (8)
#define VREF_VREF_SPARE_CTRL_vref_cfg1_MASK ((uint32_t)0x0000FF00U)
#define VREF_VREF_SPARE_STS_vref_sts0_OFS (0)
#define VREF_VREF_SPARE_STS_vref_sts0_MASK ((uint32_t)0x000000FFU)
#define VREF_VREF_SPARE_STS_vref_sts1_OFS (8)
#define VREF_VREF_SPARE_STS_vref_sts1_MASK ((uint32_t)0x0000FF00U)
#endif
