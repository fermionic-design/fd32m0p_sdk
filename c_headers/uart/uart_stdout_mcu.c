#include "UART_REGS.h"
#include "UART_RW_API.h"
#define UART_REGS ((UART_REGS_s *) 0x3ffcc000) //this should be uart address space

void UartStdOutInit(void)
{
    UART_PWR_EN_WRITE(UART_REGS, 1, 0x7D);

    UART_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART_REGS->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1){
      //printf("deasserting the reset\n");
      UART_RST_CTRL_WRITE(UART_REGS, 0, 1, 0x7D);
        }
    UART_REGS->CLK_SEL.packed_w = 0x00030000; //addr = 20
    UART_REGS->CLK_DIV.packed_w = 0x00070000; //addr = 24
    UART_UART_CLKCFG_WRITE(UART_REGS, 1, 0x13); //addr = 60
    UART_REGS->UART_CFG.packed_w = 0x00000003;  //addr = 72
    UART_REGS->UART_GFCTL.packed_w = 0x00000000; //addr = 76
    UART_REGS->UART_BRDNUM.packed_w = 0x00000000;
    UART_REGS->UART_BRDDEN.packed_w = 0x00000000;
    #ifdef FPGA
    UART_REGS->UART_BRDNUM.packed_w = 105;
    UART_REGS->UART_BRDDEN.packed_w = 11;
    #endif
    UART_REGS->UART_CTRL.packed_w = 0x00001101;
    UART_REGS->CLK_CTRL.packed_w = 0x00000001;
    return;
}
//output a character
unsigned char UartPutc(unsigned char my_ch)
{
    while((UART_REGS->UART_FIFOSTS.tx_fifo_full_sts) == 1);
    UART_REGS->UART_TXDATA[0].packed_w = my_ch;
    return(my_ch);
}
//get a charcter
unsigned char UartGetc(void)
{
    while(UART_REGS->UART_FIFOSTS.rx_fifo_empty_sts == 1);
    return (UART_REGS->UART_RXDATA[0].uart_result);
}

// Uart string output
void UartPuts(unsigned char * mytext)
{
  unsigned char CurrChar;
  do {
    CurrChar = *mytext;
    if (CurrChar != (char) 0x0) {
      UartPutc(CurrChar);  // Normal data
      }
    *mytext++;
  } while (CurrChar != 0);
  return;
}

//end of simulation
void UartEndSimulation(void)
{
  UartPutc((char) 0x4); // End of simulation
  while(1);
}

void UartPass(void)
{
  UartPutc((char) 0x6); // End of simulation
  //while(1);
}

void UartFail(void)
{
  UartPutc((char) 0x15); // End of simulation
  //while(1);
}
    
