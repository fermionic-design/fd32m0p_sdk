#include "CRC_REGS.h"

static inline void CRC_PWR_EN_WRITE(CRC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<CRC_PWR_EN_PWR_EN_OFS) & CRC_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<CRC_PWR_EN_PWR_EN_KEY_OFS) & CRC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void CRC_RST_CTRL_WRITE(CRC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<CRC_RST_CTRL_RST_OFS) & CRC_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<CRC_RST_CTRL_RST_STS_CLR_OFS) & CRC_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<CRC_RST_CTRL_RST_KEY_OFS) & CRC_RST_CTRL_RST_KEY_MASK);
}

static inline void CRC_CRCCONFIG_WRITE(CRC_REGS_s * registers, uint32_t poly_type, uint32_t input_bit_rev, uint32_t output_bit_rev, uint32_t in_is_big_endian, uint32_t out_is_big_endian) {
    registers->CRCCONFIG.packed_w = ((poly_type<<CRC_CRCCONFIG_POLY_TYPE_OFS) & CRC_CRCCONFIG_POLY_TYPE_MASK)
                                   +((input_bit_rev<<CRC_CRCCONFIG_INPUT_BIT_REV_OFS) & CRC_CRCCONFIG_INPUT_BIT_REV_MASK)
                                   +((output_bit_rev<<CRC_CRCCONFIG_OUTPUT_BIT_REV_OFS) & CRC_CRCCONFIG_OUTPUT_BIT_REV_MASK)
                                   +((in_is_big_endian<<CRC_CRCCONFIG_IN_IS_BIG_ENDIAN_OFS) & CRC_CRCCONFIG_IN_IS_BIG_ENDIAN_MASK)
                                   +((out_is_big_endian<<CRC_CRCCONFIG_OUT_IS_BIG_ENDIAN_OFS) & CRC_CRCCONFIG_OUT_IS_BIG_ENDIAN_MASK);
}

static inline void CRC_CRCSEED_WRITE(CRC_REGS_s * registers, uint32_t seed) {
    registers->CRCSEED.packed_w = ((seed<<CRC_CRCSEED_SEED_OFS) & CRC_CRCSEED_SEED_MASK);
}

static inline void CRC_CRCINPUT_N_WRITE(CRC_REGS_s * registers, uint32_t index, uint32_t data) {
    registers->CRCINPUT[index].packed_w = ((data<<CRC_CRCINPUT_DATA_OFS) & CRC_CRCINPUT_DATA_MASK);
}

