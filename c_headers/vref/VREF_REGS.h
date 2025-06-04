#ifndef VREF_REGISTERS_H
#define VREF_REGISTERS_H

#include <stdint.h>

/** @defgroup VREF
 *  @{
 */
/** @defgroup VREF_REGISTERS 
 *  @{
 */
/** @defgroup VREF_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} VREF_DESC_REG_s;

typedef union {
    /** @ref VREF_DESC_REG_s */
    VREF_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_DESC_u;

/** @} end of VREF_DESC_REG */ 

/** @defgroup VREF_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} VREF_PWR_EN_REG_s;

typedef union {
    /** @ref VREF_PWR_EN_REG_s */
    VREF_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_PWR_EN_u;

/** @} end of VREF_PWR_EN_REG */ 

/** @defgroup VREF_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} VREF_RST_CTRL_REG_s;

typedef union {
    /** @ref VREF_RST_CTRL_REG_s */
    VREF_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_RST_CTRL_u;

/** @} end of VREF_RST_CTRL_REG */ 

/** @defgroup VREF_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} VREF_RST_STS_REG_s;

typedef union {
    /** @ref VREF_RST_STS_REG_s */
    VREF_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_RST_STS_u;

/** @} end of VREF_RST_STS_REG */ 

/** @defgroup VREF_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_sel:2; // 0: clk_lf 1: clk_4mhz 2: clk_ahb 3: clk_apb
    unsigned int rsvd_0:6; // clk divide ratio for sample and hold logic
    unsigned int clk_div:3; // clk divide ratio for sample and hold logic
} VREF_CLK_CTRL_REG_s;

typedef union {
    /** @ref VREF_CLK_CTRL_REG_s */
    VREF_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_CLK_CTRL_u;

/** @} end of VREF_CLK_CTRL_REG */ 

/** @defgroup VREF_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int vref_rdy:1; // VREF is ready and stable
} VREF_STS_REG_s;

typedef union {
    /** @ref VREF_STS_REG_s */
    VREF_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_STS_u;

/** @} end of VREF_STS_REG */ 

/** @defgroup VREF_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int enable:1; // enable VREF Buffer
    unsigned int rsvd_0:7; // 0: 1.4V 1: 2.5V
    unsigned int vref_mode:1; // 0: 1.4V 1: 2.5V
    unsigned int rsvd_1:7; // enable sample and hold mode
    unsigned int sh_en:1; // enable sample and hold mode
} VREF_CTRL_REG_s;

typedef union {
    /** @ref VREF_CTRL_REG_s */
    VREF_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_CTRL_u;

/** @} end of VREF_CTRL_REG */ 

/** @defgroup VREF_SH_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int hold_cnt:16; // hold cycle count
    unsigned int period_cnt:16; // total period count
} VREF_SH_CTRL_REG_s;

typedef union {
    /** @ref VREF_SH_CTRL_REG_s */
    VREF_SH_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_SH_CTRL_u;

/** @} end of VREF_SH_CTRL_REG */ 

/** @defgroup VREF_SPARE_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int vref_cfg0:8; // 
    unsigned int vref_cfg1:8; // 
} VREF_SPARE_CTRL_REG_s;

typedef union {
    /** @ref VREF_SPARE_CTRL_REG_s */
    VREF_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_SPARE_CTRL_u;

/** @} end of VREF_SPARE_CTRL_REG */ 

/** @defgroup VREF_SPARE_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int vref_sts0:8; // 
    unsigned int vref_sts1:8; // 
} VREF_SPARE_STS_REG_s;

typedef union {
    /** @ref VREF_SPARE_STS_REG_s */
    VREF_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VREF_SPARE_STS_u;

/** @} end of VREF_SPARE_STS_REG */ 

/** @} end of VREF_REGISTERS */ 

typedef struct {
    volatile  VREF_DESC_u DESC;
    volatile  VREF_PWR_EN_u PWR_EN;
    volatile  VREF_RST_CTRL_u RST_CTRL;
    volatile  VREF_RST_STS_u RST_STS;
    volatile  VREF_CLK_CTRL_u CLK_CTRL;
    volatile  VREF_STS_u STS;
    volatile  VREF_CTRL_u CTRL;
    volatile  VREF_SH_CTRL_u SH_CTRL;
    volatile  VREF_SPARE_CTRL_u SPARE_CTRL;
    volatile  VREF_SPARE_STS_u SPARE_STS;
} VREF_REGS_s;

/** @defgroup VREF_KEY 
 *  @{
 */
#define VREF_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define VREF_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define VREF_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)
/** @} end of VREF_KEY*/ 


/** @defgroup VREF_INTERRUPTS 
 *  @{
 */
/** @} end of VREF_INTERRUPTS */ 

/** @defgroup VREF_ENUM 
 *  @{
 */

typedef enum {
	VREF_CLK_CTRL_CLK_SEL_LF = 0,
	VREF_CLK_CTRL_CLK_SEL_4MHZ = 1,
	VREF_CLK_CTRL_CLK_SEL_APB = 2,
} VREF_CLK_CTRL_CLK_SEL_E;

typedef enum {
	VREF_CLK_CTRL_CLK_DIV_BY_1 = 0,
	VREF_CLK_CTRL_CLK_DIV_BY_2 = 1,
	VREF_CLK_CTRL_CLK_DIV_BY_3 = 2,
	VREF_CLK_CTRL_CLK_DIV_BY_4 = 3,
	VREF_CLK_CTRL_CLK_DIV_BY_5 = 4,
	VREF_CLK_CTRL_CLK_DIV_BY_6 = 5,
	VREF_CLK_CTRL_CLK_DIV_BY_7 = 6,
	VREF_CLK_CTRL_CLK_DIV_BY_8 = 7,
} VREF_CLK_CTRL_CLK_DIV_E;

typedef enum {
	VREF_CTRL_VREF_MODE_1P4V = 0,
	VREF_CTRL_VREF_MODE_2P5V = 1,
} VREF_CTRL_VREF_MODE_E;
/** @} end of VREF_ENUM */ 


/** @defgroup VREF_REGISTER_FLAGS 
 *  @{
 */
#define VREF_DESC_MODULE_TYPE_OFS (0)
#define VREF_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define VREF_DESC_MODUE_SUBTYPE_OFS (8)
#define VREF_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define VREF_DESC_MAJOR_REV_OFS (16)
#define VREF_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define VREF_DESC_MINOR_REV_OFS (20)
#define VREF_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define VREF_PWR_EN_PWR_EN_OFS (0)
#define VREF_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define VREF_PWR_EN_PWR_EN_KEY_OFS (24)
#define VREF_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define VREF_RST_CTRL_RST_OFS (0)
#define VREF_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define VREF_RST_CTRL_RST_STS_CLR_OFS (1)
#define VREF_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define VREF_RST_CTRL_RST_KEY_OFS (24)
#define VREF_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define VREF_RST_STS_RST_STS_OFS (0)
#define VREF_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define VREF_CLK_CTRL_CLK_SEL_OFS (0)
#define VREF_CLK_CTRL_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define VREF_CLK_CTRL_CLK_DIV_OFS (8)
#define VREF_CLK_CTRL_CLK_DIV_MASK ((uint32_t)0x00000700U)
#define VREF_STS_VREF_RDY_OFS (0)
#define VREF_STS_VREF_RDY_MASK ((uint32_t)0x00000001U)
#define VREF_CTRL_ENABLE_OFS (0)
#define VREF_CTRL_ENABLE_MASK ((uint32_t)0x00000001U)
#define VREF_CTRL_VREF_MODE_OFS (8)
#define VREF_CTRL_VREF_MODE_MASK ((uint32_t)0x00000100U)
#define VREF_CTRL_SH_EN_OFS (16)
#define VREF_CTRL_SH_EN_MASK ((uint32_t)0x00010000U)
#define VREF_SH_CTRL_HOLD_CNT_OFS (0)
#define VREF_SH_CTRL_HOLD_CNT_MASK ((uint32_t)0x0000FFFFU)
#define VREF_SH_CTRL_PERIOD_CNT_OFS (16)
#define VREF_SH_CTRL_PERIOD_CNT_MASK ((uint32_t)0xFFFF0000U)
#define VREF_SPARE_CTRL_VREF_CFG0_OFS (0)
#define VREF_SPARE_CTRL_VREF_CFG0_MASK ((uint32_t)0x000000FFU)
#define VREF_SPARE_CTRL_VREF_CFG1_OFS (8)
#define VREF_SPARE_CTRL_VREF_CFG1_MASK ((uint32_t)0x0000FF00U)
#define VREF_SPARE_STS_VREF_STS0_OFS (0)
#define VREF_SPARE_STS_VREF_STS0_MASK ((uint32_t)0x000000FFU)
#define VREF_SPARE_STS_VREF_STS1_OFS (8)
#define VREF_SPARE_STS_VREF_STS1_MASK ((uint32_t)0x0000FF00U)
/** @} end of VREF_REGISTER_FLAGS */ 

/** @} end of VREF */


#endif
