#ifndef FLASH_REGISTERS_H
#define FLASH_REGISTERS_H

#include <stdint.h>

/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
 *  @{
 */
/** @defgroup FLASH
 *  @{
 */
/** @defgroup FLASH_REGISTERS 
 *  @{
 */
/** @defgroup FLASH_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} FLASH_DESC_REG_s;

typedef union {
    /** @ref FLASH_DESC_REG_s */
    FLASH_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_DESC_u;

/** @} end of FLASH_DESC_REG */ 

/** @defgroup FLASH_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
} FLASH_CLK_CTRL_REG_s;

typedef union {
    /** @ref FLASH_CLK_CTRL_REG_s */
    FLASH_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_CLK_CTRL_u;

/** @} end of FLASH_CLK_CTRL_REG */ 

/** @defgroup FLASH_CTRL_REG 
 *  @{
 */
typedef struct {
    /** @ref FLASH_CTRL_CLEN_E */
    unsigned int clen:1; // 
    /** @ref FLASH_CTRL_SRL_E */
    unsigned int srl:1; // 
    /** @ref FLASH_CTRL_ISAVB_E */
    unsigned int isavb:1; // 
    /** @ref FLASH_CTRL_RDECC_E */
    unsigned int rdecc:1; // 
    /** @ref FLASH_CTRL_CPECC_E */
    unsigned int cpecc:1; // 
} FLASH_CTRL_REG_s;

typedef union {
    /** @ref FLASH_CTRL_REG_s */
    FLASH_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_CTRL_u;

/** @} end of FLASH_CTRL_REG */ 

/** @defgroup FLASH_STATUS_REG 
 *  @{
 */
typedef struct {
    unsigned int eced:1; // 
} FLASH_STATUS_REG_s;

typedef union {
    /** @ref FLASH_STATUS_REG_s */
    FLASH_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_STATUS_u;

/** @} end of FLASH_STATUS_REG */ 

/** @defgroup FLASH_TIME_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int tcsctrls:4; // 
    unsigned int tras:6; // 
    unsigned int eeprom_tras:8; // 
    unsigned int trc:6; // 
    unsigned int eeprom_trc:8; // 
} FLASH_TIME_CTRL_REG_s;

typedef union {
    /** @ref FLASH_TIME_CTRL_REG_s */
    FLASH_TIME_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_u;

/** @} end of FLASH_TIME_CTRL_REG */ 

/** @defgroup FLASH_TIME_CTRL_1_REG 
 *  @{
 */
typedef struct {
    unsigned int tadhr:1; // 
    unsigned int rtw:8; // 
    unsigned int tads:1; // 
    unsigned int twpw:6; // 
    unsigned int tpwcsh:4; // 
} FLASH_TIME_CTRL_1_REG_s;

typedef union {
    /** @ref FLASH_TIME_CTRL_1_REG_s */
    FLASH_TIME_CTRL_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_1_u;

/** @} end of FLASH_TIME_CTRL_1_REG */ 

/** @defgroup FLASH_TIME_CTRL_2_REG 
 *  @{
 */
typedef struct {
    unsigned int twrc:4; // 
    unsigned int twes:18; // 
    unsigned int tbr:4; // 
    unsigned int wtw:6; // 
} FLASH_TIME_CTRL_2_REG_s;

typedef union {
    /** @ref FLASH_TIME_CTRL_2_REG_s */
    FLASH_TIME_CTRL_2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_CTRL_2_u;

/** @} end of FLASH_TIME_CTRL_2_REG */ 

/** @defgroup FLASH_TIME_UPTD_REG 
 *  @{
 */
typedef struct {
    unsigned int flash_config_done:1; // 
} FLASH_TIME_UPTD_REG_s;

typedef union {
    /** @ref FLASH_TIME_UPTD_REG_s */
    FLASH_TIME_UPTD_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_TIME_UPTD_u;

/** @} end of FLASH_TIME_UPTD_REG */ 

/** @defgroup FLASH_HSIZE_CTRL_REG 
 *  @{
 */
typedef struct {
    /** @ref FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_E */
    unsigned int force_hsize_val:3; // 
    unsigned int force_hsize_en:1; // 
} FLASH_HSIZE_CTRL_REG_s;

typedef union {
    /** @ref FLASH_HSIZE_CTRL_REG_s */
    FLASH_HSIZE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_HSIZE_CTRL_u;

/** @} end of FLASH_HSIZE_CTRL_REG */ 

/** @defgroup FLASH_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int flash_pstate:5; // 
} FLASH_STS_REG_s;

typedef union {
    /** @ref FLASH_STS_REG_s */
    FLASH_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_STS_u;

/** @} end of FLASH_STS_REG */ 

/** @defgroup FLASH_ECED_STATUS_REG 
 *  @{
 */
typedef struct {
    unsigned int eced_sts:32; // 
} FLASH_ECED_STATUS_REG_s;

typedef union {
    /** @ref FLASH_ECED_STATUS_REG_s */
    FLASH_ECED_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} FLASH_ECED_STATUS_u;

/** @} end of FLASH_ECED_STATUS_REG */ 

/** @} end of FLASH_REGISTERS */ 

/** @defgroup FLASH_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  FLASH_DESC_u DESC; ///< 0x00000000
    volatile  FLASH_CLK_CTRL_u CLK_CTRL; ///< 0x00000004
    volatile  FLASH_CTRL_u CTRL; ///< 0x00000008
    volatile  FLASH_STATUS_u STATUS; ///< 0x0000000C
    volatile  FLASH_TIME_CTRL_u TIME_CTRL; ///< 0x00000010
    volatile  FLASH_TIME_CTRL_1_u TIME_CTRL_1; ///< 0x00000014
    volatile  FLASH_TIME_CTRL_2_u TIME_CTRL_2; ///< 0x00000018
    volatile  FLASH_TIME_UPTD_u TIME_UPTD; ///< 0x0000001C
    volatile  FLASH_HSIZE_CTRL_u HSIZE_CTRL; ///< 0x00000020
    volatile  FLASH_STS_u STS; ///< 0x00000024
    volatile  FLASH_ECED_STATUS_u ECED_STATUS; ///< 0x00000028
} FLASH_REGS_s;

/** @} end of FLASH_MEMORY_MAP */ 

/** @defgroup FLASH_KEY 
 *  @{
 */
/** @} end of FLASH_KEY*/ 


/** @addtogroup FLASH_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_CTRL_CLEN_NORMAL_MODE = 0, ///< 0x0
	FLASH_CTRL_CLEN_TEST_MODE = 1, ///< 0x1
} FLASH_CTRL_CLEN_E;
/** @} */
/** @addtogroup FLASH_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_CTRL_SRL_DEFAULT = 0, ///< 0x0
	FLASH_CTRL_SRL_SHADOW = 1, ///< 0x1
} FLASH_CTRL_SRL_E;
/** @} */
/** @addtogroup FLASH_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_CTRL_ISAVB_LOW_POWER = 0, ///< 0x0
	FLASH_CTRL_ISAVB_HIGH_SPEED = 1, ///< 0x1
} FLASH_CTRL_ISAVB_E;
/** @} */
/** @addtogroup FLASH_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_CTRL_RDECC_DEFAULT = 0, ///< 0x0
	FLASH_CTRL_RDECC_ECC_SWITCHING = 1, ///< 0x1
} FLASH_CTRL_RDECC_E;
/** @} */
/** @addtogroup FLASH_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_CTRL_CPECC_OFF = 0, ///< 0x0
	FLASH_CTRL_CPECC_ON = 1, ///< 0x1
} FLASH_CTRL_CPECC_E;
/** @} */
/** @addtogroup FLASH_HSIZE_CTRL_REG  
 *  @{
 */
typedef enum {
	FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_BYTE = 0, ///< 0x0
	FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_HALF_WORD = 1, ///< 0x1
	FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_WORD = 2, ///< 0x2
} FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_E;
/** @} */

/** @defgroup FLASH_REGISTER_FLAGS 
 *  @{
 */
#define FLASH_DESC_MODULE_TYPE_OFS (0)
#define FLASH_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define FLASH_DESC_MODUE_SUBTYPE_OFS (8)
#define FLASH_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define FLASH_DESC_MAJOR_REV_OFS (16)
#define FLASH_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define FLASH_DESC_MINOR_REV_OFS (20)
#define FLASH_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define FLASH_CLK_CTRL_CLK_EN_OFS (0)
#define FLASH_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define FLASH_CTRL_CLEN_OFS (0)
#define FLASH_CTRL_CLEN_MASK ((uint32_t)0x00000001U)
#define FLASH_CTRL_SRL_OFS (1)
#define FLASH_CTRL_SRL_MASK ((uint32_t)0x00000002U)
#define FLASH_CTRL_ISAVB_OFS (2)
#define FLASH_CTRL_ISAVB_MASK ((uint32_t)0x00000004U)
#define FLASH_CTRL_RDECC_OFS (3)
#define FLASH_CTRL_RDECC_MASK ((uint32_t)0x00000008U)
#define FLASH_CTRL_CPECC_OFS (4)
#define FLASH_CTRL_CPECC_MASK ((uint32_t)0x00000010U)
#define FLASH_STATUS_ECED_OFS (0)
#define FLASH_STATUS_ECED_MASK ((uint32_t)0x00000001U)
#define FLASH_TIME_CTRL_TCSCTRLS_OFS (0)
#define FLASH_TIME_CTRL_TCSCTRLS_MASK ((uint32_t)0x0000000FU)
#define FLASH_TIME_CTRL_TRAS_OFS (4)
#define FLASH_TIME_CTRL_TRAS_MASK ((uint32_t)0x000003F0U)
#define FLASH_TIME_CTRL_EEPROM_TRAS_OFS (10)
#define FLASH_TIME_CTRL_EEPROM_TRAS_MASK ((uint32_t)0x0003FC00U)
#define FLASH_TIME_CTRL_TRC_OFS (18)
#define FLASH_TIME_CTRL_TRC_MASK ((uint32_t)0x00FC0000U)
#define FLASH_TIME_CTRL_EEPROM_TRC_OFS (24)
#define FLASH_TIME_CTRL_EEPROM_TRC_MASK ((uint32_t)0xFF000000U)
#define FLASH_TIME_CTRL_1_TADHR_OFS (0)
#define FLASH_TIME_CTRL_1_TADHR_MASK ((uint32_t)0x00000001U)
#define FLASH_TIME_CTRL_1_RTW_OFS (1)
#define FLASH_TIME_CTRL_1_RTW_MASK ((uint32_t)0x000001FEU)
#define FLASH_TIME_CTRL_1_TADS_OFS (9)
#define FLASH_TIME_CTRL_1_TADS_MASK ((uint32_t)0x00000200U)
#define FLASH_TIME_CTRL_1_TWPW_OFS (10)
#define FLASH_TIME_CTRL_1_TWPW_MASK ((uint32_t)0x0000FC00U)
#define FLASH_TIME_CTRL_1_TPWCSH_OFS (16)
#define FLASH_TIME_CTRL_1_TPWCSH_MASK ((uint32_t)0x000F0000U)
#define FLASH_TIME_CTRL_2_TWRC_OFS (0)
#define FLASH_TIME_CTRL_2_TWRC_MASK ((uint32_t)0x0000000FU)
#define FLASH_TIME_CTRL_2_TWES_OFS (4)
#define FLASH_TIME_CTRL_2_TWES_MASK ((uint32_t)0x003FFFF0U)
#define FLASH_TIME_CTRL_2_TBR_OFS (22)
#define FLASH_TIME_CTRL_2_TBR_MASK ((uint32_t)0x03C00000U)
#define FLASH_TIME_CTRL_2_WTW_OFS (26)
#define FLASH_TIME_CTRL_2_WTW_MASK ((uint32_t)0xFC000000U)
#define FLASH_TIME_UPTD_FLASH_CONFIG_DONE_OFS (0)
#define FLASH_TIME_UPTD_FLASH_CONFIG_DONE_MASK ((uint32_t)0x00000001U)
#define FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_OFS (0)
#define FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_MASK ((uint32_t)0x00000007U)
#define FLASH_HSIZE_CTRL_FORCE_HSIZE_EN_OFS (3)
#define FLASH_HSIZE_CTRL_FORCE_HSIZE_EN_MASK ((uint32_t)0x00000008U)
#define FLASH_STS_FLASH_PSTATE_OFS (0)
#define FLASH_STS_FLASH_PSTATE_MASK ((uint32_t)0x0000001FU)
#define FLASH_ECED_STATUS_ECED_STS_OFS (0)
#define FLASH_ECED_STATUS_ECED_STS_MASK ((uint32_t)0xFFFFFFFFU)
/** @} end of FLASH_REGISTER_FLAGS */ 

/** @} end of FLASH */

/** @} end of group FD32M0P_Peripherals */
#endif
