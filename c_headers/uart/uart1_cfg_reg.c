#include "UART_REGS.h"
#include "UART_RW_API.h"
#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"
#include <math.h>
#define IOMUX_REGS ((IOMUX_REGS_s *) 0x3FFC4000) //this should iomux address space 

//Uart Initialization
//inline void UartStdOutRegInit(inline void)
//{
//    UART_PWR_EN_WRITE(UART1_REGS, 1, 0x7D);
//
//    UART1_REGS->RST_CTRL.packed_w = 0x7D000001;
//    if((UART1_REGS->RST_STS.packed_w & UART_RST_STS_rst_sts_MASK) == 1){
//      //printf("deasserting the reset\n");
//      UART_RST_CTRL_WRITE(UART1_REGS, 0, 1, 0x7D);
//        }
//    #ifdef CLK_LF
//        UART1_REGS->CLK_SEL.packed_w = 0x00070002; //addr = 20
//    #elif CLK_4MHZ
//        UART1_REGS->CLK_SEL.packed_w = 0x00070001; //addr = 20
//    #else
//        UART1_REGS->CLK_SEL.packed_w = 0x00070000; //addr = 20
//    #endif
//    //UART1_REGS->CLK_SEL.packed_w = 0x00030000; //addr = 20
//    UART1_REGS->CLK_DIV.packed_w = 0x00070000; //addr = 24
//    UART_UART_CLKCFG_WRITE(UART1_REGS, 1, 0x13); //addr = 60
//    UART1_REGS->UART_GFCTL.packed_w = 0x00000000; //addr = 76
//    UART1_REGS->UART_BRDNUM.packed_w = 0x00000000;
//    UART1_REGS->UART_BRDDEN.packed_w = 0x00000000;
//    //UART1_REGS->CLK_CTRL.packed_w = 0x00000001;
//    #ifdef CLK_EN_0
//        UART1_REGS->CLK_CTRL.packed_w = 0x00000000;
//    #else
//        UART1_REGS->CLK_CTRL.packed_w = 0x00000001;
//    #endif
//}

//CLK_SEL configuration
//inline void UartClkSel(int clock_sel)
//{
//    UART1_REGS->CLK_SEL.CLK_SEL.clk_sel = clock_sel; //clk_sel=0 apb_clk, 1 = 4Mhz clk, 2 = Lf_clk
//}

//configuration of frame_length "wrd_len" reg
inline void CFG_UartFrameLength(int length)
{
    int word_length;
    if(length==5){
        word_length = 0;
    } else if(length==6){
        word_length = 1;
    } else if(length==7){
        word_length = 2;
    } else if(length==8){
        word_length = 3;
    }
    UART1_REGS->UART_CFG.UART_CFG.wrd_len = word_length;
}

//configuration of parity_en/dis, even/odd
//inline void CFG_UartParityen(int parity_en, int parity_type, int stick_parity)
//{
//    UART1_REGS->UART_CFG.UART_CFG.par_en = parity_en;
//    UART1_REGS->UART_CFG.UART_CFG.evn_par = parity_type; //parity_type =1 (even parity), parity_type=0(odd_parity)
//    UART1_REGS->UART_CFG.UART_CFG.stck_par = stick_parity; //parity is stick on single value if stck_par is high
//}
//
////configuration of stop bit, 1 or 2 bit stop
//inline void CFG_UartStopBit(int stop_bit)
//{
//    UART1_REGS->UART_CFG.UART_CFG.stop_bit = stop_bit;
//}

//Configure uart_en
inline void CFG_UartEn(int en)
{
    UART1_REGS->UART_CTRL.UART_CTRL.uart_en = en;
}

//configuration data trasfer, msb_first/lsb_first
//inline void CFG_UartMsbFirst(int msb_first)
//{
//    UART1_REGS->UART_CTRL.UART_CTRL.uart_msb = msb_first;
//}

//configuration of UART port with IOMUX
//inline void CFG_UartIOMux()
//{
//   // //PA8[2]-Tx_port
//   // IOMUX_REGS->PA_8.PA_8.output_en = 1;
//   // IOMUX_REGS->PA_8.PA_8.input_en  = 0;
//   // IOMUX_REGS->PA_8.PA_8.sel       = 2;
//   // 
//   // //PA9[2]-Rx_port 
//   // IOMUX_REGS->PA_9.PA_9.output_en = 0;
//   // IOMUX_REGS->PA_9.PA_9.input_en  = 1;
//   // IOMUX_REGS->PA_9.PA_9.sel       = 2;
//
//   // //PA12[2]-CTS
//   // IOMUX_REGS->PA_12.PA_12.output_en = 0;
//   // IOMUX_REGS->PA_12.PA_12.input_en  = 1;
//   // IOMUX_REGS->PA_12.PA_12.sel       = 2;
//
//   // //PA13[2]-RTS
//   // IOMUX_REGS->PA_13.PA_13.output_en = 1;
//   // IOMUX_REGS->PA_13.PA_13.input_en  = 0;
//   // IOMUX_REGS->PA_13.PA_13.sel       = 2;
//    //PA8[2]-Tx_port
//    IOMUX_REGS->PA_23.PA_23.output_en = 1;
//    IOMUX_REGS->PA_23.PA_23.input_en  = 0;
//    IOMUX_REGS->PA_23.PA_23.sel       = 6;
//    
//    //PA9[2]-Rx_port 
//    IOMUX_REGS->PA_22.PA_22.output_en = 0;
//    IOMUX_REGS->PA_22.PA_22.input_en  = 1;
//    IOMUX_REGS->PA_22.PA_22.sel       = 6;
//
//    ////PA12[2]-CTS
//    //IOMUX_REGS->PA_14.PA_14.output_en = 0;
//    //IOMUX_REGS->PA_14.PA_14.input_en  = 1;
//    //IOMUX_REGS->PA_14.PA_14.sel       = 2;
//
//    ////PA13[2]-RTS
//    //IOMUX_REGS->PA_15.PA_15.output_en = 1;
//    //IOMUX_REGS->PA_15.PA_15.input_en  = 0;
//    //IOMUX_REGS->PA_15.PA_15.sel       = 2;
//}

//Baud rate calculation
//inline void UartBaudrate(int baud, int uart_clock, int oversampling)
//{
//    int den_value;
//    double num_value;
//    double num_init_value;
//    double current_value;
//    double current_num_cal;
//
//    UART1_REGS->UART_CTRL.UART_CTRL.os = oversampling;
//    //UART1_REGS->UART_BRDNUM.UART_BRDNUM.num_m = 29;
//    //UART1_REGS->UART_BRDDEN.UART_BRDDEN.den_n = 6;
//    double num_den_ref_val;
//    float current_error = 0.005;
//    num_den_ref_val = (float)(baud * oversampling)/uart_clock;
//    //print_int_var("num_den_ref_value is %f\n", num_den_ref_val);
//    for(int deno=1; deno<12;deno=deno+1) 
//    {
//        den_value = pow(2, deno);
//        num_init_value = ((den_value * num_den_ref_val));
//        num_value = ceil(num_init_value);
//        current_num_cal = (num_value/den_value);
//        current_value = fabs(current_num_cal - num_den_ref_val);
//        //print_int_var("current_value is %f\n", current_value);
//        if(current_value <= current_error) 
//        {
//            //print_int_var("current_error is %f\n", current_error);
//            UART1_REGS->UART_BRDNUM.UART_BRDNUM.num_m = (int)num_value;
//            UART1_REGS->UART_BRDDEN.UART_BRDDEN.den_n = deno;
//            break;
//        }          
//    }
//}

//FIFO Enable
inline void UartFifoEn()
{
    UART1_REGS->UART_CTRL.UART_CTRL.fifo_en = 1;
}

//Loopback Enable
//inline void UartLpbkEn()
//{
//    UART1_REGS->UART_CTRL.UART_CTRL.loopback_en = 1;
//}
//RX_EN
inline void Rx_en(int en)
{
  UART1_REGS->UART_CTRL.UART_CTRL.rx_en = en;  
}

//CTS_EN
inline void CTS_En(int en)
{
  UART1_REGS->UART_CTRL.UART_CTRL.cts_en = en;  
}

//RTS_EN
inline void uart_RTS_EN(int en)
{
  UART1_REGS->UART_CTRL.UART_CTRL.rts_en = en;
}
inline void uart_fifo_ls()
{
    UART1_REGS->UART_FIFOLS.UART_FIFOLS.tx_fifo_ls=3;
}
//inline void Majority_vote_en(int en)
//{
//  UART1_REGS->UART_CTRL.UART_CTRL.majvote_en = en;  
//}
//inline void Glitch_Width(int glitch_width)
//{
//    UART1_REGS->UART_GFCTL.UART_GFCTL.gf_width = glitch_width;
//}
