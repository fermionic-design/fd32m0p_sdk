#include "uart_stdout_mcu.h"

void UartStdOutInit(void) {

    //configuring UART_STDIO for printing
    uart_cfg_s uart_stdio_cfg = { .clk_sel = UART_CLK_SEL_CLK_APB, 
                                  .clk_div = 0, 
                                  .baud_rate = 0,//Change this to required baud rate 
                                  .clk_freq = 32000,//Change this to actual clk freq on chip
                                  .oversampling = UART_CTRL_OS_FACTOR_3, //OS Factor 
                                  .word_length = UART_CFG_WRD_LEN_8_BITS, 
                                  .num_stop_bits = UART_CFG_STOP_BIT_ONE, 
                                  .msb_first = UART_CTRL_UART_MSB_LAST, 
                                  .tx_en = UART_CTRL_TX_EN_HW, 
                                  .rx_timeout_val = 10 
                                };

    UART_PWR_EN_WRITE(UART_STDIO, 1, UART_PWR_EN_PWR_EN_KEY);
    UART_RST_CTRL_WRITE(UART_STDIO, 1, 0, UART_RST_CTRL_RST_KEY);    
    if((UART_STDIO->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1)
    {
      UART_RST_CTRL_WRITE(UART_STDIO, 0, 1, UART_RST_CTRL_RST_STS_CLR_KEY); //TODO: put key define
    }

    UART_CLKCFG_WRITE(UART_STDIO, 1, UART_CLKCFG_BLCK_ASYNC_KEY);

    uart_cfg(UART_STDIO, &uart_stdio_cfg);

    uart_en(UART_STDIO);
    uart_clk_en(UART_STDIO);

    return;
}

//end of simulation
void UartEndSimulation(void) {
  uart_putc(UART_STDIO, (char) 0x4); // End of simulation
  while(1);
}

void UartPass(void) {
  uart_putc(UART_STDIO, (char) 0x6); 
}

void UartFail(void) {
  uart_putc(UART_STDIO, (char) 0x15); 
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

void itoa(int value, char* str, int base) {
    // Handle invalid base
    if (base != 10 && base != 16) {
        *str = '\0';
        return;
    }

    char* ptr = str;
    char* ptr1 = str;
    bool is_negative = false;
    
    // Handle 0 explicitly
    if (value == 0) {
        *ptr++ = '0';
        *ptr = '\0';
        return;
    }
    
    // Handle negative values for base 10 only
    if (value < 0 && base == 10) {
        is_negative = true;
        value = -value;
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
    
    // Add negative sign if needed
    if (is_negative) {
        *ptr++ = '-';
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

    uart_puts(UART_STDIO, prefix);

    if(is_hex) { 
        uart_puts(UART_STDIO, "0x");
        itoa(var, c, 16);
    } else {
        itoa(var, c, 10); //convert int to char in base 10
    }

    uart_puts(UART_STDIO, c);
    uart_puts(UART_STDIO, "\n");
    return;
}

    
