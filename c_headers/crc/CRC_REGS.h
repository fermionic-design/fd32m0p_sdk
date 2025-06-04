#ifndef CRC_REGISTERS_H
#define CRC_REGISTERS_H

#include <stdint.h>

/** @defgroup CRC
 *  @{
 */
/** @defgroup CRC_REGISTERS 
 *  @{
 */
/** @defgroup CRC_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref CRC_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} CRC_PWR_EN_REG_s;

typedef union {
    /** @ref CRC_PWR_EN_REG_s */
    CRC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_PWR_EN_u;

/** @} end of CRC_PWR_EN_REG */ 

/** @defgroup CRC_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref CRC_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} CRC_RST_CTRL_REG_s;

typedef union {
    /** @ref CRC_RST_CTRL_REG_s */
    CRC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_RST_CTRL_u;

/** @} end of CRC_RST_CTRL_REG */ 

/** @defgroup CRC_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} CRC_RST_STS_REG_s;

typedef union {
    /** @ref CRC_RST_STS_REG_s */
    CRC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_RST_STS_u;

/** @} end of CRC_RST_STS_REG */ 

/** @defgroup CRC_CRCCONFIG_REG 
 *  @{
 */
typedef struct {
    /** @ref CRC_CRCCONFIG_POLY_TYPE_E */
    unsigned int poly_type:1; // 
    unsigned int input_bit_rev:1; // 
    unsigned int output_bit_rev:1; // 
    unsigned int in_is_big_endian:1; // 
    unsigned int out_is_big_endian:1; // 
} CRC_CRCCONFIG_REG_s;

typedef union {
    /** @ref CRC_CRCCONFIG_REG_s */
    CRC_CRCCONFIG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCCONFIG_u;

/** @} end of CRC_CRCCONFIG_REG */ 

/** @defgroup CRC_CRCSEED_REG 
 *  @{
 */
typedef struct {
    unsigned int seed:32; // 
} CRC_CRCSEED_REG_s;

typedef union {
    /** @ref CRC_CRCSEED_REG_s */
    CRC_CRCSEED_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCSEED_u;

/** @} end of CRC_CRCSEED_REG */ 

/** @defgroup CRC_CRCINPUT_REG 
 *  @{
 */
typedef struct {
    unsigned int data:32; // 
} CRC_CRCINPUT_REG_s;

typedef union {
    /** @ref CRC_CRCINPUT_REG_s */
    CRC_CRCINPUT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCINPUT_u;

/** @} end of CRC_CRCINPUT_REG */ 

/** @defgroup CRC_CRCRESULT_REG 
 *  @{
 */
typedef struct {
    unsigned int result:32; // 
} CRC_CRCRESULT_REG_s;

typedef union {
    /** @ref CRC_CRCRESULT_REG_s */
    CRC_CRCRESULT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCRESULT_u;

/** @} end of CRC_CRCRESULT_REG */ 

/** @} end of CRC_REGISTERS */ 

/** @defgroup CRC_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  CRC_PWR_EN_u PWR_EN; ///< 0x00000000
    volatile  CRC_RST_CTRL_u RST_CTRL; ///< 0x00000004
    volatile  CRC_RST_STS_u RST_STS; ///< 0x00000008
    volatile  CRC_CRCCONFIG_u CRCCONFIG; ///< 0x0000000C
    volatile  CRC_CRCSEED_u CRCSEED; ///< 0x00000010
    volatile  CRC_CRCINPUT_u CRCINPUT[1024]; ///< 0x00000014
    volatile  CRC_CRCRESULT_u CRCRESULT; ///< 0x00001014
} CRC_REGS_s;

/** @} end of CRC_MEMORY_MAP */ 

/** @defgroup CRC_KEY 
 *  @{
 */
#define CRC_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000D7U)
#define CRC_RST_CTRL_RST_KEY ((uint32_t)0x000000D7U)
#define CRC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000D7U)
/** @} end of CRC_KEY*/ 


/** @defgroup CRC_INTERRUPTS 
 *  @{
 */
/** @} end of CRC_INTERRUPTS */ 

/** @addtogroup CRC_CRCCONFIG_REG  
 *  @{
 */
typedef enum {
	CRC_CRCCONFIG_POLY_TYPE_32_BIT = 0, ///< 0x0
	CRC_CRCCONFIG_POLY_TYPE_16_BIT = 1, ///< 0x1
} CRC_CRCCONFIG_POLY_TYPE_E;
/** @} */

/** @defgroup CRC_REGISTER_FLAGS 
 *  @{
 */
#define CRC_PWR_EN_PWR_EN_OFS (0)
#define CRC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define CRC_PWR_EN_PWR_EN_KEY_OFS (24)
#define CRC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define CRC_RST_CTRL_RST_OFS (0)
#define CRC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define CRC_RST_CTRL_RST_STS_CLR_OFS (1)
#define CRC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define CRC_RST_CTRL_RST_KEY_OFS (24)
#define CRC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define CRC_RST_STS_RST_STS_OFS (0)
#define CRC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define CRC_CRCCONFIG_POLY_TYPE_OFS (0)
#define CRC_CRCCONFIG_POLY_TYPE_MASK ((uint32_t)0x00000001U)
#define CRC_CRCCONFIG_INPUT_BIT_REV_OFS (1)
#define CRC_CRCCONFIG_INPUT_BIT_REV_MASK ((uint32_t)0x00000002U)
#define CRC_CRCCONFIG_OUTPUT_BIT_REV_OFS (2)
#define CRC_CRCCONFIG_OUTPUT_BIT_REV_MASK ((uint32_t)0x00000004U)
#define CRC_CRCCONFIG_IN_IS_BIG_ENDIAN_OFS (3)
#define CRC_CRCCONFIG_IN_IS_BIG_ENDIAN_MASK ((uint32_t)0x00000008U)
#define CRC_CRCCONFIG_OUT_IS_BIG_ENDIAN_OFS (4)
#define CRC_CRCCONFIG_OUT_IS_BIG_ENDIAN_MASK ((uint32_t)0x00000010U)
#define CRC_CRCSEED_SEED_OFS (0)
#define CRC_CRCSEED_SEED_MASK ((uint32_t)0xFFFFFFFFU)
#define CRC_CRCINPUT_DATA_OFS (0)
#define CRC_CRCINPUT_DATA_MASK ((uint32_t)0xFFFFFFFFU)
#define CRC_CRCRESULT_RESULT_OFS (0)
#define CRC_CRCRESULT_RESULT_MASK ((uint32_t)0xFFFFFFFFU)
/** @} end of CRC_REGISTER_FLAGS */ 

/** @} end of CRC */


#endif
