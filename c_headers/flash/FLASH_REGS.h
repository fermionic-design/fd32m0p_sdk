#ifndef FLASH_REGISTERS_H
#define FLASH_REGISTERS_H

#include <stdint.h>

typedef struct FLASH_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} FLASH_DESC_REG_s;

typedef union FLASH_DESC_u {
    FLASH_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_DESC_u;

typedef struct FLASH_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} FLASH_CLK_CTRL_REG_s;

typedef union FLASH_CLK_CTRL_u {
    FLASH_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_CLK_CTRL_u;

typedef struct FLASH_FLASH_CTRL_REG_s {
    unsigned int clen:1; // 
    unsigned int srl:1; // 
    unsigned int isavb:1; // 
    unsigned int rdecc:1; // 
    unsigned int cpecc:1; // 
} FLASH_FLASH_CTRL_REG_s;

typedef union FLASH_FLASH_CTRL_u {
    FLASH_FLASH_CTRL_REG_s FLASH_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_FLASH_CTRL_u;

typedef struct FLASH_FLASH_STATUS_REG_s {
    unsigned int eced:1; // 
} FLASH_FLASH_STATUS_REG_s;

typedef union FLASH_FLASH_STATUS_u {
    FLASH_FLASH_STATUS_REG_s FLASH_STATUS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_FLASH_STATUS_u;

typedef struct FLASH_TIME_CTRL_REG_s {
    unsigned int tcsctrls:4; // 
    unsigned int tras:6; // 
    unsigned int eeprom_tras:8; // 
    unsigned int trc:6; // 
    unsigned int eeprom_trc:8; // 
} FLASH_TIME_CTRL_REG_s;

typedef union FLASH_TIME_CTRL_u {
    FLASH_TIME_CTRL_REG_s TIME_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_u;

typedef struct FLASH_TIME_CTRL_1_REG_s {
    unsigned int tadhr:1; // 
    unsigned int rtw:4; // 
    unsigned int tads:1; // 
    unsigned int twpw:4; // 
    unsigned int tpwcsh:4; // 
} FLASH_TIME_CTRL_1_REG_s;

typedef union FLASH_TIME_CTRL_1_u {
    FLASH_TIME_CTRL_1_REG_s TIME_CTRL_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_1_u;

typedef struct FLASH_TIME_CTRL_2_REG_s {
    unsigned int twrc:4; // 
    unsigned int twes:18; // 
    unsigned int tbr:4; // 
    unsigned int wtw:4; // 
} FLASH_TIME_CTRL_2_REG_s;

typedef union FLASH_TIME_CTRL_2_u {
    FLASH_TIME_CTRL_2_REG_s TIME_CTRL_2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_2_u;

typedef struct FLASH_TIME_UPTD_REG_s {
    unsigned int flash_config_done:1; // 
} FLASH_TIME_UPTD_REG_s;

typedef union FLASH_TIME_UPTD_u {
    FLASH_TIME_UPTD_REG_s TIME_UPTD;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_UPTD_u;

typedef struct FLASH_HSIZE_CTRL_REG_s {
    unsigned int force_hsize_val:3; // 
    unsigned int force_hsize_en:1; // 
} FLASH_HSIZE_CTRL_REG_s;

typedef union FLASH_HSIZE_CTRL_u {
    FLASH_HSIZE_CTRL_REG_s HSIZE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_HSIZE_CTRL_u;

typedef struct FLASH_REGS_s{
    volatile FLASH_DESC_u DESC;
    volatile FLASH_CLK_CTRL_u CLK_CTRL;
    volatile FLASH_FLASH_CTRL_u FLASH_CTRL;
    volatile FLASH_FLASH_STATUS_u FLASH_STATUS;
    volatile FLASH_TIME_CTRL_u TIME_CTRL;
    volatile FLASH_TIME_CTRL_1_u TIME_CTRL_1;
    volatile FLASH_TIME_CTRL_2_u TIME_CTRL_2;
    volatile FLASH_TIME_UPTD_u TIME_UPTD;
    volatile FLASH_HSIZE_CTRL_u HSIZE_CTRL;
} FLASH_REGS_s;

#define FLASH_DESC_module_type_OFS (0)
#define FLASH_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define FLASH_DESC_modue_subtype_OFS (8)
#define FLASH_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define FLASH_DESC_major_rev_OFS (16)
#define FLASH_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define FLASH_DESC_minor_rev_OFS (20)
#define FLASH_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define FLASH_CLK_CTRL_clk_en_OFS (0)
#define FLASH_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define FLASH_FLASH_CTRL_clen_OFS (0)
#define FLASH_FLASH_CTRL_clen_MASK ((uint32_t)0x00000001U)
#define FLASH_FLASH_CTRL_srl_OFS (1)
#define FLASH_FLASH_CTRL_srl_MASK ((uint32_t)0x00000002U)
#define FLASH_FLASH_CTRL_isavb_OFS (2)
#define FLASH_FLASH_CTRL_isavb_MASK ((uint32_t)0x00000004U)
#define FLASH_FLASH_CTRL_rdecc_OFS (3)
#define FLASH_FLASH_CTRL_rdecc_MASK ((uint32_t)0x00000008U)
#define FLASH_FLASH_CTRL_cpecc_OFS (4)
#define FLASH_FLASH_CTRL_cpecc_MASK ((uint32_t)0x00000010U)
#define FLASH_FLASH_STATUS_eced_OFS (0)
#define FLASH_FLASH_STATUS_eced_MASK ((uint32_t)0x00000001U)
#define FLASH_TIME_CTRL_tcsctrls_OFS (0)
#define FLASH_TIME_CTRL_tcsctrls_MASK ((uint32_t)0x0000000FU)
#define FLASH_TIME_CTRL_tras_OFS (4)
#define FLASH_TIME_CTRL_tras_MASK ((uint32_t)0x000003F0U)
#define FLASH_TIME_CTRL_eeprom_tras_OFS (10)
#define FLASH_TIME_CTRL_eeprom_tras_MASK ((uint32_t)0x0003FC00U)
#define FLASH_TIME_CTRL_trc_OFS (18)
#define FLASH_TIME_CTRL_trc_MASK ((uint32_t)0x00FC0000U)
#define FLASH_TIME_CTRL_eeprom_trc_OFS (24)
#define FLASH_TIME_CTRL_eeprom_trc_MASK ((uint32_t)0xFF000000U)
#define FLASH_TIME_CTRL_1_tadhr_OFS (0)
#define FLASH_TIME_CTRL_1_tadhr_MASK ((uint32_t)0x00000001U)
#define FLASH_TIME_CTRL_1_rtw_OFS (1)
#define FLASH_TIME_CTRL_1_rtw_MASK ((uint32_t)0x0000001EU)
#define FLASH_TIME_CTRL_1_tads_OFS (5)
#define FLASH_TIME_CTRL_1_tads_MASK ((uint32_t)0x00000020U)
#define FLASH_TIME_CTRL_1_twpw_OFS (6)
#define FLASH_TIME_CTRL_1_twpw_MASK ((uint32_t)0x000003C0U)
#define FLASH_TIME_CTRL_1_tpwcsh_OFS (10)
#define FLASH_TIME_CTRL_1_tpwcsh_MASK ((uint32_t)0x00003C00U)
#define FLASH_TIME_CTRL_2_twrc_OFS (0)
#define FLASH_TIME_CTRL_2_twrc_MASK ((uint32_t)0x0000000FU)
#define FLASH_TIME_CTRL_2_twes_OFS (4)
#define FLASH_TIME_CTRL_2_twes_MASK ((uint32_t)0x003FFFF0U)
#define FLASH_TIME_CTRL_2_tbr_OFS (22)
#define FLASH_TIME_CTRL_2_tbr_MASK ((uint32_t)0x03C00000U)
#define FLASH_TIME_CTRL_2_wtw_OFS (26)
#define FLASH_TIME_CTRL_2_wtw_MASK ((uint32_t)0x3C000000U)
#define FLASH_TIME_UPTD_flash_config_done_OFS (0)
#define FLASH_TIME_UPTD_flash_config_done_MASK ((uint32_t)0x00000001U)
#define FLASH_HSIZE_CTRL_force_hsize_val_OFS (0)
#define FLASH_HSIZE_CTRL_force_hsize_val_MASK ((uint32_t)0x00000007U)
#define FLASH_HSIZE_CTRL_force_hsize_en_OFS (3)
#define FLASH_HSIZE_CTRL_force_hsize_en_MASK ((uint32_t)0x00000008U)
#endif
