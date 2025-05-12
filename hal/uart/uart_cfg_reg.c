#include "UART_REGS.h"
#include "UART_RW_API.h"
#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"
#include <math.h>
#define UART_REGS ((UART_REGS_s *) 0x3ffd3000) //this should be uart address space
#define UART0_REGS ((UART_REGS_s *) 0x3ffcc000) //this should be uart address space
#define IOMUX_REGS ((IOMUX_REGS_s *) 0x3FFC4000) //this should iomux address space 

//Uart Initialization
void UartStdOutRegInit(void)
{
    //UART0_CONFIGURATION
    UART_PWR_EN_WRITE(UART0_REGS, 1, 0x7D);

    UART0_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART0_REGS->RST_STS.packed_w & UART_RST_STS_rst_sts_MASK) == 1){
      //printf("deasserting the reset\n");
      UART_RST_CTRL_WRITE(UART0_REGS, 0, 1, 0x7D);
        }
    UART0_REGS->CLK_SEL.packed_w = 0x00030000; //addr = 20
    UART0_REGS->CLK_DIV.packed_w = 0x00070000; //addr = 24
    UART_UART_CLKCFG_WRITE(UART0_REGS, 1, 0x13); //addr = 60
    UART0_REGS->UART_CFG.packed_w = 0x00000003;  //addr = 72
    UART0_REGS->UART_GFCTL.packed_w = 0x00000000; //addr = 76
    // UART0_REGS->UART_BRDNUM.packed_w = 0x00000000;
    // UART0_REGS->UART_BRDDEN.packed_w = 0x00000000;
    UART0_REGS->UART_CTRL.packed_w = 0x00001101;
    UART0_REGS->CLK_CTRL.packed_w = 0x00000001;

    //UART1_CONFIGURATION
    UART_PWR_EN_WRITE(UART_REGS, 1, 0x7D);
    #ifdef RTS_STS
        UART_REGS->RST_CTRL.packed_w = 0x7D000010;
        if((UART_REGS->RST_STS.packed_w & UART_RST_STS_rst_sts_MASK) == 1){
        //printf("deasserting the reset\n");
            UART_RST_CTRL_WRITE(UART_REGS, 0, 1, 0x7D);
        }
    #endif
    UART_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART_REGS->RST_STS.packed_w & UART_RST_STS_rst_sts_MASK) == 1){
      //printf("deasserting the reset\n");
      UART_RST_CTRL_WRITE(UART_REGS, 0, 1, 0x7D);
        }
    #ifdef CLK_LF
        UART_REGS->CLK_SEL.packed_w = 0x00070002; //addr = 20
    #elif CLK_4MHZ
        UART_REGS->CLK_SEL.packed_w = 0x00070001; //addr = 20
    #else
        UART_REGS->CLK_SEL.packed_w = 0x00070000; //addr = 20
    #endif
    //UART_REGS->CLK_SEL.packed_w = 0x00030000; //addr = 20
    #ifdef CLK_DIV_1
        UART_REGS->CLK_DIV.packed_w = 0x000F0001; 
    #elif CLK_DIV_2
        UART_REGS->CLK_DIV.packed_w = 0x000F0002; 
    #else
        #ifdef CLK_DIVby2
            UART_REGS->CLK_DIV.packed_w = 0x00070002; //addr = 24
        #else
            UART_REGS->CLK_DIV.packed_w = 0x00070000;
        #endif
    #endif
    UART_UART_CLKCFG_WRITE(UART_REGS, 1, 0x13); //addr = 60
    UART_REGS->UART_GFCTL.packed_w = 0x00000000; //addr = 76
    UART_REGS->UART_BRDNUM.packed_w = 0x00000000;
    UART_REGS->UART_BRDDEN.packed_w = 0x00000000;
    //UART_REGS->CLK_CTRL.packed_w = 0x00000001;
    #ifdef CLK_EN_0
        UART_REGS->CLK_CTRL.packed_w = 0x00010000;
    #else
        UART_REGS->CLK_CTRL.packed_w = 0x00010001;
    #endif
}

//CLK_SEL configuration
void UartClkSel(int clock_sel)
{
    UART_REGS->CLK_SEL.CLK_SEL.clk_sel = clock_sel; //clk_sel=0 apb_clk, 1 = 4Mhz clk, 2 = Lf_clk
}

//configuration of frame_length "wrd_len" reg
void CFG_UartFrameLength(int length)
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
    UART_REGS->UART_CFG.UART_CFG.wrd_len = word_length;
}

//configuration of parity_en/dis, even/odd
void CFG_UartParityen(int parity_en, int parity_type, int stick_parity)
{
    UART_REGS->UART_CFG.UART_CFG.par_en = parity_en;
    UART_REGS->UART_CFG.UART_CFG.evn_par = parity_type; //parity_type =1 (even parity), parity_type=0(odd_parity)
    UART_REGS->UART_CFG.UART_CFG.stck_par = stick_parity; //parity is stick on single value if stck_par is high
}

//configuration of stop bit, 1 or 2 bit stop
void CFG_UartStopBit(int stop_bit)
{
    UART_REGS->UART_CFG.UART_CFG.stop_bit = stop_bit;
}

//Configure uart_en
void CFG_UartEn(int en)
{
    UART_REGS->UART_CTRL.UART_CTRL.uart_en = en;
}

//configuration data trasfer, msb_first/lsb_first
void CFG_UartMsbFirst(int msb_first)
{
    UART_REGS->UART_CTRL.UART_CTRL.uart_msb = msb_first;
}

//configuration of UART port with IOMUX
void CFG_UartIOMux()
{
   // //PA8[2]-Tx_port
   // IOMUX_REGS->PA_8.PA_8.output_en = 1;
   // IOMUX_REGS->PA_8.PA_8.input_en  = 0;
   // IOMUX_REGS->PA_8.PA_8.sel       = 2;
   // 
   // //PA9[2]-Rx_port 
   // IOMUX_REGS->PA_9.PA_9.output_en = 0;
   // IOMUX_REGS->PA_9.PA_9.input_en  = 1;
   // IOMUX_REGS->PA_9.PA_9.sel       = 2;

   // //PA12[2]-CTS
   // IOMUX_REGS->PA_12.PA_12.output_en = 0;
   // IOMUX_REGS->PA_12.PA_12.input_en  = 1;
   // IOMUX_REGS->PA_12.PA_12.sel       = 2;

   // //PA13[2]-RTS
   // IOMUX_REGS->PA_13.PA_13.output_en = 1;
   // IOMUX_REGS->PA_13.PA_13.input_en  = 0;
   // IOMUX_REGS->PA_13.PA_13.sel       = 2;
    //PA8[2]-Tx_port
  //  IOMUX_REGS->PA_10.PA_10.output_en = 1;
  //  IOMUX_REGS->PA_10.PA_10.input_en  = 0;
  //  IOMUX_REGS->PA_10.PA_10.sel       = 2;
    #ifdef FPGA
    IOMUX_REGS->PA_23.PA_23.output_en = 1;
    IOMUX_REGS->PA_23.PA_23.input_en  = 0;
    IOMUX_REGS->PA_23.PA_23.sel       = 6;
    #else
    IOMUX_REGS->PA_10.PA_10.output_en = 1;
    IOMUX_REGS->PA_10.PA_10.input_en  = 0;
    IOMUX_REGS->PA_10.PA_10.sel       = 2;
    #endif
    // IOMUX_REGS->PA_0.PA_0.output_en = 1;
    // IOMUX_REGS->PA_0.PA_0.input_en  = 0;
    // IOMUX_REGS->PA_0.PA_0.sel       = 2;
    
    // IOMUX_REGS->PA_1.PA_11.output_en = 0;
    // IOMUX_REGS->PA_1.PA_11.input_en  = 1;
    // IOMUX_REGS->PA_1.PA_11.sel       = 2;


    
    //PA9[2]-Rx_port 
   // IOMUX_REGS->PA_11.PA_11.output_en = 0;
   // IOMUX_REGS->PA_11.PA_11.input_en  = 1;
   // IOMUX_REGS->PA_11.PA_11.sel       = 2;
    #ifndef FPGA
    IOMUX_REGS->PA_22.PA_22.output_en = 0;
    IOMUX_REGS->PA_22.PA_22.input_en  = 1;
    IOMUX_REGS->PA_22.PA_22.sel       = 6;
    #else
    IOMUX_REGS->PA_11.PA_11.output_en = 0;
    IOMUX_REGS->PA_11.PA_11.input_en  = 1;
    IOMUX_REGS->PA_11.PA_11.sel       = 2;
    #endif



    //PA12[2]-CTS
    IOMUX_REGS->PA_14.PA_14.output_en = 0;
    IOMUX_REGS->PA_14.PA_14.input_en  = 1;
    IOMUX_REGS->PA_14.PA_14.sel       = 2;

    //PA13[2]-RTS
    IOMUX_REGS->PA_15.PA_15.output_en = 1;
    IOMUX_REGS->PA_15.PA_15.input_en  = 0;
    IOMUX_REGS->PA_15.PA_15.sel       = 2;
}

//Baud rate calculation
void UartBaudrate(int baud, int uart_clock, int oversampling)
{
    int den_value;
    double num_value;
    double num_init_value;
    double current_value;
    double current_num_cal;

    UART_REGS->UART_CTRL.UART_CTRL.os = oversampling;
    //UART_REGS->UART_BRDNUM.UART_BRDNUM.num_m = 29;
    //UART_REGS->UART_BRDDEN.UART_BRDDEN.den_n = 6;
    double num_den_ref_val;
    #ifdef CLK_LF
        float current_error = 0.003;
    #else
        float current_error = 0.002;
    #endif
   // if(baud<9600){
   //     UART1_REGS->CLK_DIV.packed_w = 0x000F0001;
   //     uart_clock=uart_clock/2;
   // }
    num_den_ref_val = (float)(baud * oversampling)/uart_clock;
    //print_int_var("num_den_ref_value is %f\n", num_den_ref_val);
    for(int deno=12; deno>=0;deno=deno-1) 
    {
        den_value = pow(2, deno);
        num_init_value = ((den_value * num_den_ref_val));
        num_value = ceil(num_init_value);
        current_num_cal = (num_value/den_value);
        current_value = fabs(current_num_cal - num_den_ref_val);
        //print_int_var("current_value is %f\n", current_value);
        if(current_value <= current_error && num_value <= 255) 
        {
            //print_int_var("current_error is %f\n", current_error);
            UART_REGS->UART_BRDNUM.UART_BRDNUM.num_m = (int)num_value;
            UART_REGS->UART_BRDDEN.UART_BRDDEN.den_n = deno;
            break;
        }          
    }
     print_int_var("num_val is ", (int)num_value, 0);
     print_int_var("deno is ", den_value, 0);
}

//FIFO Enable
void UartFifoEn()
{
    UART_REGS->UART_CTRL.UART_CTRL.fifo_en = 1;
}

//Loopback Enable
void UartLpbkEn()
{
    UART_REGS->UART_CTRL.UART_CTRL.loopback_en = 1;
}
//RX_EN
void Rx_en(int en)
{
  UART_REGS->UART_CTRL.UART_CTRL.rx_en = en;  
}

//CTS_EN
void CTS_En(int en)
{
  UART_REGS->UART_CTRL.UART_CTRL.cts_en = en;  
}

//RTS_EN
void uart_RTS_EN(int en)
{
  UART_REGS->UART_CTRL.UART_CTRL.rts_en = en;
}
void uart_tx_fifo_ls(int val)
{
    UART_REGS->UART_FIFOLS.UART_FIFOLS.tx_fifo_ls=val;
}
void uart_rx_fifo_ls(int val)
{
    UART_REGS->UART_FIFOLS.UART_FIFOLS.rx_fifo_ls=val;
}
void Majority_vote_en(int en)
{
  UART_REGS->UART_CTRL.UART_CTRL.majvote_en = en;  
}
void Glitch_Width(int glitch_width)
{
    UART_REGS->UART_GFCTL.UART_GFCTL.gf_width = glitch_width;
}
