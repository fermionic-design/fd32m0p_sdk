#include "uart_stdout_mcu.h"

void UartStdOutInit(void) {

    //configuring UART_STDIO for printing
    uart_cfg_s uart_stdio_cfg = { .clk_sel = UART_CLK_SEL_CLK_APB, 
                                  .clk_div = 0, 
                                  .baud_rate = STDIO_BAUD_RATE,//Change this to required baud rate 
                                  .clk_freq = SystemFrequency/1000,//Change this to actual clk freq on chip define XTAL in system_FD32M0P.c
                                  .oversampling = UART_CTRL_OS_FACTOR_3, //OS Factor 
                                  .word_length = UART_CFG_WRD_LEN_8_BITS, 
                                  .num_stop_bits = UART_CFG_STOP_BIT_ONE, 
                                  .msb_first = UART_CTRL_UART_MSB_LAST, 
                                  .tx_en = UART_CTRL_TX_EN_HW, 
                                  .rx_timeout_val = 10 
                                };

    uart_init(UART_STDIO);

    uart_cfg(UART_STDIO, &uart_stdio_cfg);

    uart_en(UART_STDIO);

    return;
}

void UartPuts(const unsigned char * data_char_arr){

    UART_FIFOSTS_u fifosts;
    unsigned char curr_char;
    int num_transfers;
    int trf_count;
    do
    {
        do {
            fifosts =  UART_STDIO->FIFOSTS;        
        } while(fifosts.tx_fifo_full_sts);

        if(fifosts.tx_fifo_empty_sts) {
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
        } else if (fifosts.tx_fifo_almost_empty_sts) {
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
        } else if (fifosts.tx_fifo_almost_full_sts) {
            UartPutc(*data_char_arr++);
        } else { //half full
            UartPutc(*data_char_arr++);
            if(*data_char_arr == 0) break;
            UartPutc(*data_char_arr++);
        }
    } while(*data_char_arr != 0);
    return;
}
//end of simulation
void UartEndSimulation(void) {
  UartPutc((char) 0x4); // End of simulation
  while(1);
}

void UartPass(void) {
  UartPutc((char) 0x6); 
}

void UartFail(void) {
  UartPutc((char) 0x15); 
}
#include <stdbool.h>

/**
 * Lightweight itoa implementation
 * Converts an integer to a null-terminated string
 * 
 * @param value The integer value to convert
 * @param str   Pointer to buffer that receives the result (must be large enough)
 * @param base  Numerical base for conversion (16, 10)
 */

void itoa_mcu(uint32_t value, char* str, int base) {
    // Handle invalid base
    if (base != 10 && base != 16) {
        *str = '\0';
        return;
    }

    char* ptr = str;
    char* ptr1 = str;
    
    // Handle 0 explicitly
    if (value == 0) {
        *ptr++ = '0';
        *ptr = '\0';
        return;
    }
    
    // Convert number to string (backwards)
    while (value != 0) {
        if (base == 16) {
            uint8_t digit = value & 0xF;
            value >>= 4;            
            *ptr++ = "0123456789abcdef"[digit];
        } else { // base 10
            uint8_t digit = value % base;
            value /= base;
            *ptr++ = '0' + digit;
        }
    }
    
    // Terminate string
    *ptr-- = '\0';
    
    // Reverse the string
    while (ptr1 < ptr) {
        char tmp_char = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp_char;
    }
    
    return;
}

void print_int_var(char *prefix, int var, bool is_hex) {
    char c[16]="";//,final[50]="";

    UartPuts(prefix);

    if(is_hex) { 
        UartPuts("0x");
        itoa_mcu((uint32_t) var, c, 16);
    } else {
        if(var < 0) {
            var = -var;
            UartPuts("-");
        }
        itoa_mcu((uint32_t) var, c, 10); //convert int to char in base 10
    }

    UartPuts(c);
    UartPuts("\n");
    return;
}

    
