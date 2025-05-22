#ifndef crc_h_include
#define crc_h_include
#include "CRC_REGS.h"
#include "CRC_RW_API.h"
#include <stdbool.h>

//structs
//TODO: add comments
typedef struct
{
    CRC_CRCCONFIG_POLY_TYPE_E   poly_type;
    bool                        input_bit_rev;
    bool                        output_bit_rev;
    bool                        in_is_big_endian;
    bool                        out_is_big_endian;
} crc_cfg_s;

#define CRC_CFG_DEFAULT { \
   .poly_type = CRC_CRCCONFIG_POLY_TYPE_32_BIT, \
   .input_bit_rev = 0, \
   .output_bit_rev = 0, \
   .in_is_big_endian = 0, \
   .out_is_big_endian = 0, \
}

/*function definitions*/
//crc configurations
void crc_cfg(CRC_REGS_s *regs, const crc_cfg_s *cfg);

//set seed
void crc_set_seed(CRC_REGS_s *regs, uint32_t seed);

//32 bit data feed
void crc_feed_32bit_data(CRC_REGS_s *regs, const uint32_t *buffer, uint32_t length);

//16 bit data feed
void crc_feed_16bit_data(CRC_REGS_s *regs, const uint16_t *buffer, uint32_t length);

//8 bit data feed
void crc_feed_8bit_data(CRC_REGS_s *regs, const uint8_t *buffer, uint32_t length);

//get result
uint32_t crc_get_result(CRC_REGS_s *regs);

//compute block crc 32 bit
uint32_t crc_compute_32bit_block(CRC_REGS_s *regs, uint32_t length, const uint32_t *buffer, uint32_t seed);

//compute block crc 16 bit
uint32_t crc_compute_16bit_block(CRC_REGS_s *regs, uint32_t length, const uint16_t *buffer, uint32_t seed);

//compute block crc 8 bit
uint32_t crc_compute_8bit_block(CRC_REGS_s *regs, uint32_t length, const uint8_t *buffer, uint32_t seed);

//compute crc mem range 32 bit
uint32_t crc_compute_32bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint32_t *start_addr);

//compute crc mem range 16 bit
uint32_t crc_compute_16bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint16_t *start_addr);

//compute crc mem range 8 bit
uint32_t crc_compute_8bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint8_t *start_addr);

//read crc cfg
void crc_read_cfg(CRC_REGS_s *regs, crc_cfg_s *rd_cfg);

#endif


