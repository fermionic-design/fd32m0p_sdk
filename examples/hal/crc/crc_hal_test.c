//////////////////////////////////////////////////////////////////////////////
////               CRC HAL TEST                                           ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test crc block computation with a  ////
////        32 bit polynomial                                             ////
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

//bit reverse a 8bit data
uint8_t rev_byte(uint8_t num)
{
    unsigned int NO_OF_BITS = 8;
    uint8_t reverse_num = 0;
    
    unsigned int i;
    for (i = 0; i < NO_OF_BITS; i++) {
        if ((num & (1 << i)))
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
    }
    return reverse_num;
}

//32bit input - each byte is bit reversed 
uint32_t rev_ip_bits_32(uint32_t num)
{
    uint32_t reverse_num = 0;
    uint8_t temp_num;
    for(int i=0; i<4; i++){
        temp_num = num >> i*8;
        reverse_num = reverse_num | (rev_byte(temp_num) << i*8);
    }
    return reverse_num;
}

//16bit input - each byte is bit reversed 
uint16_t rev_ip_bits_16(uint16_t num)
{
    uint16_t reverse_num = 0;
    uint8_t temp_num;
    for(int i=0; i<2; i++){
        temp_num = num >> i*8;
        reverse_num = reverse_num | (rev_byte(temp_num) << i*8);
    }
    return reverse_num;
}

//Output bit reversal - entire 32 bit output is bit reversed.
uint32_t rev_bits_op_32(uint32_t num)
{
    unsigned int NO_OF_BITS = 32;
    uint32_t reverse_num = 0;
    
    unsigned int i;
    for (i = 0; i < NO_OF_BITS; i++) {
        if ((num & (1 << i)))
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
    }
    return reverse_num;
}

//Output bit reversal - entire 16 bit output is bit reversed.
uint16_t rev_bits_op_16(uint16_t num)
{
    unsigned int NO_OF_BITS = 16;
    uint32_t reverse_num = 0;
    
    unsigned int i;
    for (i = 0; i < NO_OF_BITS; i++) {
        if ((num & (1 << i)))
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
    }
    return reverse_num;
}

uint32_t crc32_byte_features(uint8_t* pData, int length, uint32_t i_seed, uint8_t seed_rev, uint8_t i_bit_rev, uint8_t o_bit_rev, uint8_t i_big_en, uint8_t o_big_en) 
{
    uint8_t i;
    uint32_t  Crc_32 = (seed_rev == 0)? i_seed : swap_bytes_32(i_seed);   
    uint8_t data_in_tmp;

    while (length--) { 
        data_in_tmp = *(uint8_t *)pData++ ;  

        data_in_tmp = (i_bit_rev == 0)? data_in_tmp : rev_byte(data_in_tmp); 

        Crc_32 ^= data_in_tmp << 24; 
        for (i=0; i < 8; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    Crc_32 = (o_big_en  == 0) ? Crc_32 : swap_bytes_32(Crc_32); 
    Crc_32 = (o_bit_rev == 0) ? Crc_32 : rev_bits_op_32(Crc_32); 

    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}

uint32_t crc32_hw_features(uint16_t* pData, int length, uint32_t i_seed, uint8_t seed_rev, uint8_t i_bit_rev, uint8_t o_bit_rev, uint8_t i_big_en, uint8_t o_big_en) 
{
    uint16_t i;
    uint32_t  Crc_32 = (seed_rev == 0)? i_seed : swap_bytes_32(i_seed);   
    uint16_t data_in_tmp;

    while (length--) { 
        data_in_tmp = *(uint16_t *)pData++ ;  

        data_in_tmp = (i_bit_rev == 0)? data_in_tmp : rev_ip_bits_16(data_in_tmp); 
        data_in_tmp = (i_big_en == 0)? data_in_tmp : swap_bytes_16(data_in_tmp); 

        Crc_32 ^= data_in_tmp << 16; 
        for (i=0; i < 16; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    Crc_32 = (o_big_en  == 0) ? Crc_32 : swap_bytes_32(Crc_32); 
    Crc_32 = (o_bit_rev == 0) ? Crc_32 : rev_bits_op_32(Crc_32); 

    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}

uint32_t crc32_w_features(uint32_t* pData, int length, uint32_t i_seed, uint8_t seed_rev, uint8_t i_bit_rev, uint8_t o_bit_rev, uint8_t i_big_en, uint8_t o_big_en) 
{
    uint32_t i;
    uint32_t  Crc_32 = (seed_rev == 0)? i_seed : swap_bytes_32(i_seed);   
    uint32_t data_in_tmp;

    while (length--) { 
        data_in_tmp = *(uint32_t *)pData++;

        data_in_tmp = (i_bit_rev == 0)? data_in_tmp : rev_ip_bits_32(data_in_tmp); 
        data_in_tmp = (i_big_en == 0)? data_in_tmp : swap_bytes_32(data_in_tmp); 

        Crc_32 ^= data_in_tmp ; 
        for (i=0; i < 32; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    Crc_32 = (o_big_en  == 0) ? Crc_32 : swap_bytes_32(Crc_32); 
    Crc_32 = (o_bit_rev == 0) ? Crc_32 : rev_bits_op_32(Crc_32); 

    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}


typedef struct test_data_s {
    uint8_t  byte_data  ;  
    uint16_t hw_data    ; 
    uint32_t w_data     ; 
    uint8_t  byte_data_arr[10] ;  
    uint16_t hw_data_arr[8]   ; 
    uint32_t w_data_arr[8]    ; 
} test_data_s;


int main(void) {

    UartStdOutInit();
    UartPuts("CRC 32 hal test\n");
 
    //Variable to store tb & dut crc values
    uint32_t tb_crc_32 = 0;
    uint32_t dut_crc_32 = 0;

    //variable to print
    uint32_t i_seed= 0;
    int failed = 0;

    //variable declaration
    uint32_t config_val = 0x00000001; 
    uint32_t length = 8;
    uint8_t i_bit_rev, o_bit_rev, in_big_en, o_big_en, seed_rev; 

    //config struct
    crc_cfg_s crc_config_struct = CRC_CFG_DEFAULT;

    //structure - int type input data sample
    test_data_s td_s1;
    td_s1.byte_data = 0xA5;
    td_s1.hw_data   = 0xABCD;
    td_s1.w_data    = 0xAABBCCDD;

    //------------------------------------------------------------------------
    //    PWR EN and RST CTRL programming 
    //------------------------------------------------------------------------
        //PWR_EN -addr: 0x40020000
        CRC_PWR_EN_WRITE(CRC_REGS, 1, CRC_PWR_EN_PWR_EN_KEY);

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
        crc_config_struct.poly_type = CRC_CRCCONFIG_POLY_TYPE_32_BIT;
        crc_cfg(CRC_REGS, &crc_config_struct);
    //________________________________________________________________________


    #if CRC_CHECK == 0
        crc_cfg_s rd_crc_cfg_struct;
    //-------------------------------------------------------------------------------------
    //input type:single WORD, Config:input big endian - seed little endian, seed:0xFFFF, Input_data:0xAABBCCDD 
    //-------------------------------------------------------------------------------------
        UartPuts("TEST-> input type:single WORD, Config:input big endian - seed little endian\n");
        UartPuts("TEST-> seed:0xAAFFBBFF, Input_data:0xAABBCCDD\n");

        //CRC_SEED -addr: 0x40020010
        i_seed = 0xAAFFBBFF;
        crc_set_seed(CRC_REGS, i_seed);

        //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
        crc_config_struct.in_is_big_endian = 1;
        crc_cfg(CRC_REGS, &crc_config_struct);
        
        crc_read_cfg(CRC_REGS,&rd_crc_cfg_struct);
        if(rd_crc_cfg_struct.in_is_big_endian == crc_config_struct.in_is_big_endian)
        {   
            UartPuts("config matched\n");
            UartPass();
        }
        else
        {
            UartPuts("config did not match\n");
            UartFail();
        }

        //CRC_INPUT -addr: 0x40020014
        #ifdef crc_byte_input
            crc_feed_8bit_data(CRC_REGS, &td_s1.byte_data ,1);
        #elif crc_hwrd_input
            crc_feed_16bit_data(CRC_REGS, &td_s1.hw_data ,1);
        #else
            crc_feed_32bit_data(CRC_REGS, &td_s1.w_data ,1);
        #endif
            
        dut_crc_32 = crc_get_result(CRC_REGS);

        #ifdef crc_byte_input
            tb_crc_32 = crc32_byte_features(&td_s1.byte_data, 1, i_seed, /*seed_rev*/0, /*input_bit_rev=*/0, /*output_bit_rev=*/0, /*in_is_big_endian=*/1, /*out_is_big_endian=*/0); 
        #elif crc_hwrd_input
            tb_crc_32 = crc32_hw_features(&td_s1.hw_data, 1, i_seed, /*seed_rev*/0, /*input_bit_rev=*/0, /*output_bit_rev=*/0, /*in_is_big_endian=*/1, /*out_is_big_endian=*/0); 
        #else
            tb_crc_32 = crc32_w_features(&td_s1.w_data, 1, i_seed, /*seed_rev*/0, /*input_bit_rev=*/0, /*output_bit_rev=*/0, /*in_is_big_endian=*/1, /*out_is_big_endian=*/0);
        #endif
            
            
        if(dut_crc_32 == tb_crc_32){
            UartPuts("CRC matched\n");
        }
        else {
            failed++;
            UartPuts("CRC NOT matched\n");
            print_int_var("TB CRC = ",tb_crc_32,1);
            print_int_var("DUT CRC = ", dut_crc_32,1);
        }
        
        dut_crc_32 = 0;
        tb_crc_32  = 0;
    //________________________________________________________________________


    #elif CRC_CHECK == 1
    //-------------------------------------------------------------------------------------
    //input type:single WORD, Config:all combinations, seed:random, Input_data:random 
    //-------------------------------------------------------------------------------------
        uint32_t random_i_num = 0;
        UartPuts("TEST-> input type:single WORD, Config:all combinations\n");
        UartPuts("TEST-> seed:random, Input_data:random\n");

        for(config_val = 0; config_val <= 0x1E; config_val = config_val+2){

            random_i_num = rand(); 
            config_val = config_val & 0x0000001E;
            i_bit_rev  = config_val & 0x00000002;
            o_bit_rev  = config_val & 0x00000004;
            in_big_en  = config_val & 0x00000008;
            o_big_en   = config_val & 0x00000010;

            if(in_big_en)
                seed_rev = 1;
            else
                seed_rev = 0;

            //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
            crc_config_struct.input_bit_rev = i_bit_rev>>1;
            crc_config_struct.output_bit_rev = o_bit_rev>>2;
            crc_config_struct.in_is_big_endian = in_big_en>>3;
            crc_config_struct.out_is_big_endian = o_big_en>>4;

            crc_cfg(CRC_REGS, &crc_config_struct);

            //CRC_SEED -addr: 0x40020010
            i_seed = rand();

            crc_set_seed(CRC_REGS, i_seed);


            //CRC_INPUT -addr: 0x40020014
            crc_feed_32bit_data(CRC_REGS, &random_i_num ,1);
            dut_crc_32 = crc_get_result(CRC_REGS);

            tb_crc_32 = crc32_w_features(&random_i_num, 1, i_seed, /*seed_rev*/seed_rev, /*input_bit_rev=*/i_bit_rev, /*output_bit_rev=*/o_bit_rev, /*in_is_big_endian=*/in_big_en, /*out_is_big_endian=*/o_big_en); 

            if(dut_crc_32 == tb_crc_32)
            {
                UartPuts("CRC matched\n");
            }
            else 
            {
                failed++;
                UartPuts("CRC NOT matched\n");
                print_int_var("TB CRC = ",tb_crc_32,1);
                print_int_var("DUT CRC = ", dut_crc_32,1);
            }

            dut_crc_32 = 0;
            tb_crc_32  = 0;
        }
    //________________________________________________________________________


    #elif CRC_CHECK == 2
    //-------------------------------------------------------------------------------------
    //input type:Multiple WORD, Config:all combinations, seed:random, Input_data:random 
    //-------------------------------------------------------------------------------------
        UartPuts("TEST-> input type:Multiple WORD, Config:all combinations\n");
        UartPuts("TEST-> seed:random, Input_data:random\n");
        
        for(config_val = 0; config_val <= 0x1E; config_val = config_val+2){

            config_val = config_val & 0x0000001E;
            i_bit_rev  = config_val & 0x00000002;
            o_bit_rev  = config_val & 0x00000004;
            in_big_en  = config_val & 0x00000008;
            o_big_en   = config_val & 0x00000010;

            if(in_big_en)
                seed_rev = 1;
            else
                seed_rev = 0;

            //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
            crc_config_struct.input_bit_rev = i_bit_rev>>1;
            crc_config_struct.output_bit_rev = o_bit_rev>>2;
            crc_config_struct.in_is_big_endian = in_big_en>>3;
            crc_config_struct.out_is_big_endian = o_big_en>>4;

            crc_cfg(CRC_REGS, &crc_config_struct);

            //CRC_SEED -addr: 0x40020010
            i_seed = rand();
            print_int_var("SEED = ",i_seed, 1);

            for(uint32_t i=0; i<length; i++){
                td_s1.w_data_arr[i] = rand(); 
            }
    
            //CRC_INPUT -addr: 0x40020014
            dut_crc_32=crc_compute_32bit_block(CRC_REGS, length, td_s1.w_data_arr, i_seed);

            tb_crc_32 = crc32_w_features(&td_s1.w_data_arr[0], length, i_seed, /*seed_rev*/seed_rev, /*input_bit_rev=*/i_bit_rev, /*output_bit_rev=*/o_bit_rev, /*in_is_big_endian=*/in_big_en, /*out_is_big_endian=*/o_big_en); 

            if(dut_crc_32 == tb_crc_32)
            {
                UartPuts("CRC matched\n");
            }
            else 
            {
                failed++;
                UartPuts("CRC NOT matched\n");
                print_int_var("DUT CRC = ",dut_crc_32,1);
                print_int_var("TB CRC = ",tb_crc_32,1);    
            }

            dut_crc_32 = 0;
            tb_crc_32  = 0;
        }
    //________________________________________________________________________


    #elif CRC_CHECK == 3
    //-------------------------------------------------------------------------------------
    //input type:Multiple HALF WORD, Config:all combinations, seed:random, Input_data:random 
    //-------------------------------------------------------------------------------------
        UartPuts("TEST-> input type:Multiple HALF WORD, Config:all combinations\n");
        UartPuts("TEST-> seed:random, Input_data:random\n");
        
        for(config_val = 0; config_val <= 0x1E; config_val = config_val+2){

            config_val = config_val & 0x0000001E;
            i_bit_rev  = config_val & 0x00000002;
            o_bit_rev  = config_val & 0x00000004;
            in_big_en  = config_val & 0x00000008;
            o_big_en   = config_val & 0x00000010;

            if(in_big_en)
                seed_rev = 1;
            else
                seed_rev = 0;

            //CRC_CONFIG -addr: 0x4002000C -- Normal configuration

            crc_config_struct.input_bit_rev = i_bit_rev>>1;
            crc_config_struct.output_bit_rev = o_bit_rev>>2;
            crc_config_struct.in_is_big_endian = in_big_en>>3;
            crc_config_struct.out_is_big_endian = o_big_en>>4;

            crc_cfg(CRC_REGS, &crc_config_struct);

            //CRC_SEED -addr: 0x40020010
            i_seed = rand();

            for(uint32_t i=0; i<length; i++){
                td_s1.hw_data_arr[i] = rand(); 
            }
            dut_crc_32=crc_compute_16bit_block(CRC_REGS, length, td_s1.hw_data_arr, i_seed);

            //CRC_INPUT -addr: 0x40020014
            
            tb_crc_32 = crc32_hw_features(&td_s1.hw_data_arr[0], length, i_seed, /*seed_rev*/seed_rev, /*input_bit_rev=*/i_bit_rev, /*output_bit_rev=*/o_bit_rev, /*in_is_big_endian=*/in_big_en, /*out_is_big_endian=*/o_big_en); 

            if(dut_crc_32 == tb_crc_32)
            {
                UartPuts("CRC matched\n");
            }
            else 
            {
                failed++;
                UartPuts("CRC NOT matched\n");
                print_int_var("DUT CRC = ",dut_crc_32,1);
                print_int_var("TB CRC = ",tb_crc_32,1);

            }

            dut_crc_32 = 0;
            tb_crc_32  = 0;
        }
    //________________________________________________________________________

    #elif CRC_CHECK == 4
    //-------------------------------------------------------------------------------------
    //input type:Multiple BYTE, Config:all combinations, seed:random, Input_data:random 
    //-------------------------------------------------------------------------------------
        UartPuts("TEST-> input type:Multiple BYTE, Config:all combinations\n");
        UartPuts("TEST-> seed:random, Input_data:random\n");
        
        for(config_val = 0; config_val <= 0x1E; config_val = config_val+2){

            config_val = config_val & 0x0000001E;
            i_bit_rev  = config_val & 0x00000002;
            o_bit_rev  = config_val & 0x00000004;
            in_big_en  = config_val & 0x00000008;
            o_big_en   = config_val & 0x00000010;

            if(in_big_en)
                seed_rev = 1;
            else
                seed_rev = 0;

            //CRC_CONFIG -addr: 0x4002000C -- Normal configuration
            crc_config_struct.input_bit_rev = i_bit_rev>>1;
            crc_config_struct.output_bit_rev = o_bit_rev>>2;
            crc_config_struct.in_is_big_endian = in_big_en>>3;
            crc_config_struct.out_is_big_endian = o_big_en>>4;

            crc_cfg(CRC_REGS, &crc_config_struct);


            //CRC_SEED -addr: 0x40020010
            i_seed = rand();

            for(uint32_t i=0; i<length; i++){
                td_s1.byte_data_arr[i] = rand(); 
            }
            
            dut_crc_32 = crc_compute_8bit_block(CRC_REGS, length, td_s1.byte_data_arr, i_seed);
            //CRC_INPUT -addr: 0x40020014
            
            tb_crc_32 = crc32_byte_features(&td_s1.byte_data_arr[0], length, i_seed, /*seed_rev*/seed_rev, /*input_bit_rev=*/i_bit_rev, /*output_bit_rev=*/o_bit_rev, /*in_is_big_endian=*/in_big_en, /*out_is_big_endian=*/o_big_en); 
            
            if(dut_crc_32 == tb_crc_32)
            {
                UartPuts("CRC matched\n");
            }
            else 
            {
                failed++;
                UartPuts("CRC NOT matched\n");
                print_int_var("DUT CRC = ",dut_crc_32,1);
                print_int_var("TB CRC = ",tb_crc_32,1);
            }

            dut_crc_32 = 0;
            tb_crc_32  = 0;
        }
    //________________________________________________________________________
    #endif


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
