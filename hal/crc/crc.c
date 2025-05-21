#include "crc.h"

//TODO: add comments before every function

void crc_cfg(CRC_REGS_s *regs, const crc_cfg_s *cfg)
{
    regs->CRCCONFIG.poly_type = cfg->poly_type;
    regs->CRCCONFIG.input_bit_rev = cfg->input_bit_rev;
    regs->CRCCONFIG.output_bit_rev = cfg->output_bit_rev;
    regs->CRCCONFIG.in_is_big_endian = cfg->in_is_big_endian;
    regs->CRCCONFIG.out_is_big_endian = cfg->out_is_big_endian;
}

void crc_set_seed(CRC_REGS_s *regs, uint32_t seed)
{
    regs->CRCSEED.packed_w = seed;
}

void crc_feed_32bit_data(CRC_REGS_s *regs, const uint32_t *buffer, uint32_t length)
{
    for(int i=0; i<length; i++)
    {
        regs->CRCINPUT[0].packed_w = buffer[i];
    }
}

void crc_feed_16bit_data(CRC_REGS_s *regs, const uint16_t *buffer, uint32_t length)
{
    for(int i=0; i<length; i++)
    {
        regs->CRCINPUT[0].packed_hw[0] = buffer[i];
    }
}

void crc_feed_8bit_data(CRC_REGS_s *regs, const uint8_t *buffer, uint32_t length)
{
    for(int i=0; i<length; i++)
    {
        regs->CRCINPUT[0].packed_byte[0] = buffer[i];
    }
}

uint32_t crc_get_result(CRC_REGS_s *regs)
{
    return(regs->CRCRESULT.packed_w);
}

uint32_t crc_compute_32bit_block(CRC_REGS_s *regs,uint32_t length, const uint32_t *buffer, uint32_t seed)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    crc_feed_32bit_data(regs, buffer, length);
    crc_result = crc_get_result(regs);
    return crc_result;
}

uint32_t crc_compute_16bit_block(CRC_REGS_s *regs, uint32_t length, const uint16_t *buffer, uint32_t seed)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    crc_feed_16bit_data(regs, buffer, length);
    crc_result = crc_get_result(regs);
    return crc_result;
}

uint32_t crc_compute_8bit_block(CRC_REGS_s *regs, uint32_t length, const uint8_t *buffer, uint32_t seed)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    crc_feed_8bit_data(regs, buffer, length);
    crc_result = crc_get_result(regs);
    return crc_result;
}

uint32_t crc_compute_32bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint32_t *start_addr)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    memcpy((&regs->CRCINPUT[0].packed_w), (start_addr), length*sizeof(uint32_t));
    crc_result = crc_get_result(regs);
    return crc_result;
}

uint32_t crc_compute_16bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint16_t *start_addr)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    memcpy((&regs->CRCINPUT[0].packed_hw[0]), (start_addr), length*sizeof(uint16_t));
    crc_result = crc_get_result(regs);
    return crc_result;
}

uint32_t crc_compute_8bit_mem_range(CRC_REGS_s *regs, uint32_t length, uint32_t seed, const uint8_t *start_addr)
{
    uint32_t crc_result;
    crc_set_seed(regs, seed);
    memcpy((&regs->CRCINPUT[0].packed_byte[0]), (start_addr), length);
    crc_result = crc_get_result(regs);
    return crc_result;    
}

void crc_read_cfg(CRC_REGS_s *regs, crc_cfg_s *rd_cfg)
{
    rd_cfg->poly_type = regs->CRCCONFIG.poly_type;
    rd_cfg->input_bit_rev = regs->CRCCONFIG.input_bit_rev;
    rd_cfg->output_bit_rev = regs->CRCCONFIG.output_bit_rev;
    rd_cfg->in_is_big_endian = regs->CRCCONFIG.in_is_big_endian;
    rd_cfg->out_is_big_endian = regs->CRCCONFIG.out_is_big_endian;
}



