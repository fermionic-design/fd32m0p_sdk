//////////////////////////////////////////////////////////////////////////////
////               CRC HAL MEM TEST                                       ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test crc computation over          ////
////        over a memory range using both 16 and 32 polynomial           ////
////                                                                      //// 
//////////////////////////////////////////////////////////////////////////////

#include <stdlib.h> 
#include "FD32M0P.h"
#include "crc.h"
#include "uart_stdout_mcu.h"

//byte swap - 32bit number - changes from little endian to big endian.
uint32_t swap_bytes_32(uint32_t num)
{
   uint32_t r_num = 0;
   uint8_t  temp_num = 0;
   for(int i=0; i<=3; i++){
       temp_num = num >> i*8;
       r_num = r_num | (temp_num << (3-i)*8);
   }
   return r_num;
}

//byte swap - 16bit number - changes from little endian to big endian.
uint16_t swap_bytes_16(uint16_t num)
{
   uint16_t r_num = 0;
   uint8_t  temp_num = 0;
   for(int i=0; i<=1; i++){
       temp_num = num >> i*8;
       r_num = r_num | (temp_num << (1-i)*8);
   }
   return r_num;
}

uint32_t rev_bits(uint32_t num, int size)
{
    unsigned int NO_OF_BITS = size * 8;
    uint32_t reverse_num = 0;
    int i;
    for (i = 0; i < NO_OF_BITS; i++) {
        if ((num & (1 << i)))
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
    }
    return reverse_num;
}

uint16_t crc16_byte(uint8_t* pData, int length, uint16_t i_seed) 
{
    uint8_t i;
    uint16_t  Crc_16 = i_seed;   //Seed value

    UartPuts("CRC 16 entering while\n");
    while (length--) { 
        Crc_16 ^= *(uint8_t *)pData++ << 8; 
        for (i=0; i < 8; i++) {
             Crc_16 =  Crc_16 & 0x8000 ? ( Crc_16 << 1) ^ 0x1021 :  Crc_16 << 1; 
        }
    }
    UartPuts("CRC 16 exit while\n");
    return  Crc_16 & 0xffff;        //return least 16 bits 
}

uint16_t crc16_hw(uint16_t* pData, int length, uint16_t i_seed) 
{
    uint16_t i;
    uint16_t  Crc_16 = i_seed;   //Seed value

    UartPuts("CRC 16 entering while\n");
    while (length--) { 
        Crc_16 ^= *(uint16_t *)pData++ ;  
        for (i=0; i < 16; i++) {
             Crc_16 =  Crc_16 & 0x8000 ? ( Crc_16 << 1) ^ 0x1021 :  Crc_16 << 1; 
        }
    }
    UartPuts("CRC 16 exit while\n");
    return  Crc_16 & 0xffff;        //return least 16 bits 
}

uint16_t crc16_w(uint32_t* pData, int length, uint16_t i_seed) 
{
    uint16_t i;
    uint16_t  Crc_16 = i_seed;   //Seed value
    uint32_t data_in_tmp;
    uint16_t data_h, data_l;

    while(length--){
    data_in_tmp = *(uint32_t *)pData++;

    data_l = data_in_tmp;
    data_h = data_in_tmp >> 16;

    Crc_16 = crc16_hw(&data_h, 1, Crc_16);
    Crc_16 = crc16_hw(&data_l, 1, Crc_16);

    data_in_tmp = 0;
    data_l = 0;
    data_h = 0;

    }

    return  Crc_16 & 0xffff;        //return least 16 bits 
}

 uint32_t crc32_byte(uint8_t* pData, int length, uint32_t i_seed) 
{
    uint8_t i;
    uint32_t  Crc_32 = i_seed;   //Seed value

    UartPuts("CRC 32 entering while\n");
    while (length--) { 
        Crc_32 ^= *(uint8_t *)pData++ << 24; 
        for (i=0; i < 8; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    UartPuts("CRC 32 exit while\n");
    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}

 uint32_t crc32_hw(uint16_t* pData, int length, uint32_t i_seed) 
{
    uint16_t i;
    uint32_t  Crc_32 = i_seed;   //Seed value
    uint16_t data_in_tmp;

    UartPuts("CRC 32 entering while\n");
    while (length--) { 
        data_in_tmp = *(uint16_t *)pData++ ;
        data_in_tmp = swap_bytes_16(data_in_tmp);
        Crc_32 ^= data_in_tmp << 16; 
        for (i=0; i < 16; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    UartPuts("CRC 32 exit while\n");
    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}

 uint32_t crc32_w(uint32_t* pData, int length, uint32_t i_seed) 
{
    uint32_t i;
    uint32_t  Crc_32 = i_seed;   //Seed value
    uint32_t data_in_tmp;

    UartPuts("CRC 32 entering while\n");
    while (length--) { 
        data_in_tmp = *(uint32_t *)pData++;
        data_in_tmp = swap_bytes_32(data_in_tmp);
        Crc_32 ^= data_in_tmp ; 
        for (i=0; i < 32; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    UartPuts("CRC 32 exit while\n");
    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}

void gpio_print(uint32_t tb_crc_32){

    print_int_var("tb_crc_32 = ", tb_crc_32, 1);

}

typedef struct test_data_s {
    uint8_t  byte_data  ;  
    uint16_t hw_data    ; 
    uint32_t w_data     ; 
    uint8_t  byte_data_arr[10] ;  
    uint16_t hw_data_arr[6]   ; 
    uint32_t w_data_arr[4]    ; 
} test_data_s;


int main(void) {

    UartStdOutInit();
    UartPuts("CRC mem test\n");
 
    //Variable to store tb & dut crc values
    uint32_t tb_crc_32 = 0;
    uint32_t dut_crc_32 = 0;
    uint16_t tb_crc_16   = 0;
    uint16_t dut_crc_16  = 0;

    //variable to print on GPIO
    uint32_t i_seed= 0;
    uint16_t i_seed_16= 0;
    int failed = 0;
    uint32_t length = 8;

    //config struct
    crc_cfg_s crc_config_struct = CRC_CFG_DEFAULT;

    //structure - int type input data sample
    test_data_s td_s1;
    td_s1.byte_data = 0xA5;
    td_s1.hw_data   = 0xABCD;
    td_s1.w_data    = 0xDEADBEAF;

    //Generate an array of random numbers
    int num = rand()%50+1; 
    print_int_var("ARRAY length = ",num,0);

    uint8_t mem_array[num];// = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77/*, 0x88*/};
    uint16_t mem_array_hw[num];
    uint32_t mem_array_w[num];
    for(int i=0; i<length; i++){
        mem_array[i] = rand();
        mem_array_hw[i] = rand();
        mem_array_w[i] = rand();
    }

        //CRC_SEED -addr: 0x40020010
    //Print the tb crc value on GPIO
    UartPuts("INFO: Setting GPIO0 as Output\n");

    //------------------------------------------------------------------------
    //    PWR EN and RST CTRL programming 
    //------------------------------------------------------------------------
        //PWR_EN -addr: 0x40020000
        CRC_PWR_EN_WRITE(CRC_REGS, 1, CRC_PWR_EN_PWR_EN_KEY);        //pwr_en, pwr_en_key

        //RST_CTRL -addr: 0x40020004
        CRC_RST_CTRL_WRITE(CRC_REGS, 1, 0, CRC_RST_CTRL_RST_KEY);        

        //RST_STS -addr: 0x40020008
        if((CRC_REGS->RST_STS.packed_w & CRC_RST_STS_RST_STS_MASK) == 1){
            UartPuts("RST_STS reg = 1 : deasserting the reset\n");
            CRC_RST_CTRL_WRITE(CRC_REGS, 0,1,CRC_RST_CTRL_RST_STS_CLR_KEY);   //rst, rst_sts_clr, rst_key
        }
    //________________________________________________________________________


    //------------------------------------------------------------------------
    //    CRC_CONFIG reg programming 
    //------------------------------------------------------------------------
        //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
        crc_config_struct.in_is_big_endian = 1;
        crc_cfg(CRC_REGS, &crc_config_struct);
    //________________________________________________________________________

    //------------------------------------------------------------------------
    //    CRC_CONFIG reg programming - 32-bit CRC 
    //------------------------------------------------------------------------
        //CRC_SEED -addr: 0x40020010
        i_seed = rand();

        //Write data to CRC_INPUT using memcpy()
        #ifdef crc_wrd_mem
            dut_crc_32 = crc_compute_32bit_mem_range(CRC_REGS, length, i_seed, mem_array_w);
        #elif crc_hwrd_mem
            dut_crc_32 = crc_compute_16bit_mem_range(CRC_REGS, length, i_seed, mem_array_hw);
        #else
            dut_crc_32 = crc_compute_8bit_mem_range(CRC_REGS, length, i_seed, mem_array);
        #endif
        
        i_seed = swap_bytes_32(i_seed);
        
        #ifdef crc_wrd_mem
            tb_crc_32 = crc32_w(mem_array_w, length, i_seed);
        #elif crc_hwrd_mem
            tb_crc_32 = crc32_hw(mem_array_hw, length, i_seed); 
        #else        
            tb_crc_32 = crc32_byte(mem_array, length, i_seed);
        #endif

        if(dut_crc_32 == tb_crc_32)
        {
            UartPuts("CRC 32 matched\n");
        }
        else
        {
            failed++;
            UartPuts("CRC 32 did not match\n");
            print_int_var("DUT CRC = ",dut_crc_32,1);
            gpio_print(tb_crc_32);
        }
        dut_crc_32 = 0;
        tb_crc_32  = 0;
    //________________________________________________________________________


    //------------------------------------------------------------------------
    //    CRC_CONFIG reg programming - 16 bit CRC 
    //------------------------------------------------------------------------
        //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
        crc_config_struct.poly_type = CRC_CRCCONFIG_POLY_TYPE_16_BIT;
        crc_cfg(CRC_REGS, &crc_config_struct);
    //________________________________________________________________________

    //------------------------------------------------------------------------
    //Write using memcpy() 
    //------------------------------------------------------------------------
        //CRC_SEED -addr: 0x40020010
        i_seed_16 = rand();

        dut_crc_16 = crc_compute_8bit_mem_range(CRC_REGS, length, i_seed_16, mem_array);
        
        i_seed_16 = swap_bytes_16(i_seed_16);   

        tb_crc_16 = crc16_byte(mem_array, length, i_seed_16);

        if(dut_crc_16 == tb_crc_16)
        {
            UartPuts("CRC 16 matched\n");
        }
        else
        {
            failed++;
            UartPuts("CRC 16 did not match\n");
            print_int_var("DUT CRC = ",dut_crc_16,1);
            gpio_print(tb_crc_16);
        }

        dut_crc_16 = 0;
        tb_crc_16  = 0;
    //________________________________________________________________________


    //------------------------------------------------------------------------
    //Final test RESULT
    //------------------------------------------------------------------------
    if(failed == 0){
        UartPuts("** TEST PASSED **\n");
        UartPass();
    }
    else{ 
        UartPuts("** TEST FAILED**\n");
        UartFail();
    }
    UartEndSimulation();

    return 0;
}
