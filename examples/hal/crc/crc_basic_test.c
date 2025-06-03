//////////////////////////////////////////////////////////////////////////////
////               CRC BASIC TEST                                         ////
////    DESCRIPTION:                                                      ////      
////        This is an example test which tests the crc for a 32 bit      ////
////        word with all default configurations using the HAL functions  ////                       
////                                                                      //// 
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "crc.h"
#include "uart_stdout_mcu.h"

//function to calculate crc in tb
uint32_t crc32_w_features(uint32_t* pData, int length, uint32_t i_seed) 
{
    uint32_t i;
    uint32_t  Crc_32 = i_seed;   
    uint32_t data_in_tmp;

    while (length--) { 
        data_in_tmp = *(uint32_t *)pData++;

        Crc_32 ^= data_in_tmp ; 
        for (i=0; i < 32; i++) {
             Crc_32 =  Crc_32 & 0x80000000 ? ( Crc_32 << 1) ^ 0x04C11DB7 :  Crc_32 << 1; 
        }
    }
    return  Crc_32 & 0xffffffff;   //return least 32 bits 
}


typedef struct test_data_s {
    uint32_t w_data     ; 
} test_data_s;

int main(void)
{
    UartStdOutInit();
    UartPuts("CRC 32 hal test\n");
 
    uint32_t tb_crc_32 = 0;
    uint32_t dut_crc_32 = 0;
    uint32_t i_seed= 0;

    //config struct
    crc_cfg_s crc_config_struct = CRC_CFG_DEFAULT;

    //structure - int type input data sample
    test_data_s td_s1;
    td_s1.w_data = 0xAABBCCDD;

    //------------------------------------------------------------------------
    //    PWR EN and RST CTRL programming 
    //------------------------------------------------------------------------
    CRC_PWR_EN_WRITE(CRC_REGS, 1, CRC_PWR_EN_PWR_EN_KEY);

    CRC_RST_CTRL_WRITE(CRC_REGS, 1, 0, CRC_RST_CTRL_RST_KEY);

    if((CRC_REGS->RST_STS.packed_w & CRC_RST_STS_RST_STS_MASK) == 1)
    {
        UartPuts("RST_STS reg = 1 : deasserting the reset\n");
        CRC_RST_CTRL_WRITE(CRC_REGS, 0,1,CRC_RST_CTRL_RST_STS_CLR_KEY);   //rst, rst_sts_clr, rst_key
    }
    //------------------------------------------------------------------------
    //    CRC_CONFIG reg programming(32 bit poly, default config) 
    //------------------------------------------------------------------------
    crc_cfg(CRC_REGS, &crc_config_struct);

    //-------------------------------------------------------------------------------------
    //input type:single WORD, Config:input big endian - seed little endian, seed:0xFFFF, Input_data:0xAABBCCDD 
    //-------------------------------------------------------------------------------------
    UartPuts("TEST-> input type:single WORD, Config:input little endian - seed little endian\n");
    UartPuts("TEST-> seed:0xAAFFBBFF, Input_data:0xAABBCCDD\n");

    i_seed = 0xAAFFBBFF;

    //set seed
    crc_set_seed(CRC_REGS, i_seed);

    //configure crc regs
    crc_cfg(CRC_REGS, &crc_config_struct);
   
    //feed 32 bit word into crc engine
    crc_feed_32bit_data(CRC_REGS, &td_s1.w_data ,1);
    
    //get result from dut
    dut_crc_32 = crc_get_result(CRC_REGS);

    //get crc calculated in test
    tb_crc_32 = crc32_w_features(&td_s1.w_data, 1, i_seed);
     
    //checker
    if(dut_crc_32 == tb_crc_32)
    {
        UartPuts("CRC matched\n");
        UartPuts("** TEST PASSED **\n");
        UartPass();
    }
    else 
    {
        UartPuts("CRC NOT matched\n");
        UartPuts("** TEST FAILED**\n");
        print_int_var("TB CRC = ",tb_crc_32,1);
        print_int_var("DUT CRC = ", dut_crc_32,1);
        UartFail();
    }
    UartEndSimulation();

    return 0;
}
