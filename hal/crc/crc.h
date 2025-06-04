#ifndef crc_h_include
#define crc_h_include

#include "CRC_REGS.h"
#include "CRC_RW_API.h"
#include <stdbool.h>

/*!
 *  @brief  CRC Configuration Struct
 */
typedef struct
{
    CRC_CRCCONFIG_POLY_TYPE_E   poly_type;
    bool                        input_bit_rev;
    bool                        output_bit_rev;
    bool                        in_is_big_endian;
    bool                        out_is_big_endian;
} crc_cfg_s;

/*!
 *  @brief  Default Initializer for CRC Configuration Struct
 */
#define CRC_CFG_DEFAULT { \
   .poly_type = CRC_CRCCONFIG_POLY_TYPE_32_BIT, \
   .input_bit_rev = 0, \
   .output_bit_rev = 0, \
   .in_is_big_endian = 0, \
   .out_is_big_endian = 0, \
}

/**
 * @brief   This function configures CRC peripheral with polynomial type
 *          input bit reveral, output bit reversal, input and output endianness
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   crc_cfg_struct : pointer to the CRC Configuration Struct
 *
 * @retval  void
 */
void crc_cfg(CRC_REGS_s *regs, const crc_cfg_s *cfg);

/**
 * @brief   This function sets the CRC seed value
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   seed : seed value
 *
 * @retval  void
 */
void crc_set_seed(CRC_REGS_s *regs, uint32_t seed);

/**
 * @brief   This function writes a sequence of 32-bit words from the input buffer
 *          into the CRC input register block
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   buffer : pointer to the 32-bit data buffer
 * @param   length : number of 32-bit words to feed into the CRC engine
 *
 * @retval  void
 */
void crc_feed_32bit_data(CRC_REGS_s *regs, const uint32_t *buffer, uint32_t length);

/**
 * @brief   This function writes a sequence of 16-bit words from the input buffer
 *          into the CRC input register block
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   buffer : pointer to the 16-bit data buffer
 * @param   length : number of 16-bit words to feed into the CRC engine
 *
 * @retval  void
 */
void crc_feed_16bit_data(CRC_REGS_s *regs, const uint16_t *buffer, uint32_t length);

/**
 * @brief   This function writes a sequence of 8-bit words from the input buffer
 *          into the CRC input register block
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   buffer : pointer to the 8-bit data buffer
 * @param   length : number of 8-bit words to feed into the CRC engine
 *
 * @retval  void
 */
void crc_feed_8bit_data(CRC_REGS_s *regs, const uint8_t *buffer, uint32_t length);

/**
 * @brief   This function returns the crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 *
 * @retval  crc result
 */
uint32_t crc_get_result(CRC_REGS_s *regs);

/**
 * @brief   This function feeds a block of 32-bit data from the input buffer
 *          into the CRC input register, sets the seed and returns the 
 *          calculated crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 32-bit words to feed into the CRC engine
 * @param   buffer : pointer to the 32-bit data buffer
 * @param   seed : seed value
 *
 * @retval  crc result
 */
uint32_t crc_compute_32bit_block(CRC_REGS_s *regs, uint32_t length, const uint32_t *buffer, uint32_t seed);

/**
 * @brief   This function feeds a block of 16-bit data from the input buffer
 *          into the CRC input register, sets the seed and returns the 
 *          calculated crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 16-bit words to feed into the CRC engine
 * @param   buffer : pointer to the 16-bit data buffer
 * @param   seed : seed value
 *
 * @retval  crc result
 */
uint32_t crc_compute_16bit_block(CRC_REGS_s *regs, uint32_t length, const uint16_t *buffer, uint32_t seed);

/**
 * @brief   This function feeds a block of 8-bit data from the input buffer
 *          into the CRC input register, sets the seed and returns the 
 *          calculated crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 8-bit words to feed into the CRC engine
 * @param   buffer : pointer to the 8-bit data buffer
 * @param   seed : seed value
 *
 * @retval  crc result
 */
uint32_t crc_compute_8bit_block(CRC_REGS_s *regs, uint32_t length, const uint8_t *buffer, uint32_t seed);

/**
 * @brief   This function computes CRC over a memory range of 32-bit words,
 *          sets seed, returns the crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 32-bit words to feed into the CRC engine
 * @param   seed : seed value
 * @param   start_addr : pointer to the start of the 32-bit word aligned memory region
 *
 * @retval  crc result
 */
uint32_t crc_compute_32bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint32_t *start_addr);

/**
 * @brief   This function computes CRC over a memory range of 16-bit words,
 *          sets seed, returns the crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 16-bit words to feed into the CRC engine
 * @param   seed : seed value
 * @param   start_addr : pointer to the start of the 16-bit word aligned memory region
 *
 * @retval  crc result
 */
uint32_t crc_compute_16bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint16_t *start_addr);

/**
 * @brief   This function computes CRC over a memory range of 8-bit words,
 *          sets seed, returns the crc result
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   length : number of 8-bit words to feed into the CRC engine
 * @param   seed : seed value
 * @param   start_addr : pointer to the start of the 8-bit word aligned memory region
 *
 * @retval  crc result
 */
uint32_t crc_compute_8bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint8_t *start_addr);

/**
 * @brief   This function reads the CRC configurations from the register space,
 *          puts them in the configuration struct provided in the input
 *
 * @param   crc_regs : pointer to the CRC register space
 * @param   crc_cfg_struct : pointer to a crc configuration struct
 *
 * @retval  void
 */
void crc_read_cfg(CRC_REGS_s *regs, crc_cfg_s *rd_cfg);

#endif

