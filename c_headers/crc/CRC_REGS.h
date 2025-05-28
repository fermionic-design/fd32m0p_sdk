#ifndef CRC_REGISTERS_H
#define CRC_REGISTERS_H

#include <stdint.h>

typedef struct CRC_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} CRC_PWR_EN_REG_s;

typedef union CRC_PWR_EN_u {
    CRC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_PWR_EN_u;

typedef struct CRC_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} CRC_RST_CTRL_REG_s;

typedef union CRC_RST_CTRL_u {
    CRC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_RST_CTRL_u;

typedef struct CRC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} CRC_RST_STS_REG_s;

typedef union CRC_RST_STS_u {
    CRC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_RST_STS_u;

typedef struct CRC_CRCCONFIG_REG_s {
    unsigned int poly_type:1; // 
    unsigned int input_bit_rev:1; // 
    unsigned int output_bit_rev:1; // 
    unsigned int in_is_big_endian:1; // 
    unsigned int out_is_big_endian:1; // 
} CRC_CRCCONFIG_REG_s;

typedef union CRC_CRCCONFIG_u {
    CRC_CRCCONFIG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCCONFIG_u;

typedef struct CRC_CRCSEED_REG_s {
    unsigned int seed:32; // 
} CRC_CRCSEED_REG_s;

typedef union CRC_CRCSEED_u {
    CRC_CRCSEED_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCSEED_u;

typedef struct CRC_CRCINPUT_REG_s {
    unsigned int data:32; // 
} CRC_CRCINPUT_REG_s;

typedef union CRC_CRCINPUT_u {
    CRC_CRCINPUT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCINPUT_u;

typedef struct CRC_CRCRESULT_REG_s {
    unsigned int result:32; // 
} CRC_CRCRESULT_REG_s;

typedef union CRC_CRCRESULT_u {
    CRC_CRCRESULT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} CRC_CRCRESULT_u;

typedef struct CRC_REGS_s{
    volatile  CRC_PWR_EN_u PWR_EN;
    volatile  CRC_RST_CTRL_u RST_CTRL;
    volatile  CRC_RST_STS_u RST_STS;
    volatile  CRC_CRCCONFIG_u CRCCONFIG;
    volatile  CRC_CRCSEED_u CRCSEED;
    volatile  CRC_CRCINPUT_u CRCINPUT[1024];
    volatile  CRC_CRCRESULT_u CRCRESULT;
} CRC_REGS_s;

#define CRC_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000D7U)
#define CRC_RST_CTRL_RST_KEY ((uint32_t)0x000000D7U)
#define CRC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000D7U)


typedef enum {
	CRC_CRCCONFIG_POLY_TYPE_32_BIT = 0,
	CRC_CRCCONFIG_POLY_TYPE_16_BIT = 1,
} CRC_CRCCONFIG_POLY_TYPE_E;

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

#endif
