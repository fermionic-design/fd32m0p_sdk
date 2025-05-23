#ifndef uart_h_include
#define uart_h_include

#include "UART_REGS.h"
#include "UART_RW_API.h"
#include <stdbool.h>

//structs
//TODO:add comments
typedef struct 
{
    UART_CLK_SEL_E          clk_sel;
    uint8_t                 clk_div;
    uint32_t                baud_rate;
    uint32_t                clk_freq;
    UART_CTRL_OS_E          oversampling;
    UART_CFG_WRD_LEN_E      word_length;
    bool                    parity_en;
    bool                    even_parity;
    UART_CFG_STCK_PAR_E     stick_parity;
    UART_CFG_STOP_BIT_E     num_stop_bits;
    UART_CTRL_UART_MSB_E    msb_first;
    bool                    majority_voting_en;
    bool                    loopback_en;
    UART_CTRL_TX_EN_E       tx_en;
    bool                    rx_en;
    UART_CTRL_TX_OUT_EN_E   tx_out_en;
    UART_CTRL_TX_OUT_CTRL_E tx_out_ctrl;    
    bool                    cts_en;
    bool                    rts_en;
    bool                    rts_val;
    uint8_t                 glitch_filter_width;
    uint8_t                rx_timeout_val;
} uart_cfg_s;

#define UART_CFG_DEFAULT { \
   .clk_sel = UART_CLK_SEL_CLK_APB, \
   .clk_div = 0, \
   .oversampling = 16, \
   .word_length = UART_CFG_WRD_LEN_8_BITS, \
   .num_stop_bits = UART_CFG_STOP_BIT_ONE, \
   .msb_first = UART_CTRL_UART_MSB_LAST, \
   .tx_en = UART_CTRL_TX_EN_HW, \
   .rx_timeout_val = 10 \
}

//TODO:add comments
typedef struct 
{
    UART_FIFOLS_TX_FIFO_LS_E    tx_fifo_lvl_sel;
    UART_FIFOLS_RX_FIFO_LS_E    rx_fifo_lvl_sel;
    uint32_t                    fifo_en;
} uart_fifo_cfg_s;

#define UART_FIFO_CFG_DEFAULT { \
    .tx_fifo_lvl_sel = UART_FIFOLS_TX_FIFO_LS_EMPTY, \
    .rx_fifo_lvl_sel = UART_FIFOLS_RX_FIFO_LS_ALMOST_EMPTY, \
    .fifo_en = 1 \
}
/*function definitions*/

//uart initialization
void uart_init(UART_REGS_s *regs);

//uart configurations
void uart_cfg(UART_REGS_s *regs, const uart_cfg_s *cfg);

//uart_baud rate calculation function
void uart_baud_cfg(UART_REGS_s *regs, uint32_t baud_rate, uint32_t clk_freq, uint32_t oversampling);

//clk enabling
void uart_clk_en(UART_REGS_s *regs);

//clk disabling
void uart_clk_dis(UART_REGS_s *regs);

//uart enabling
void uart_en(UART_REGS_s *regs);

//uart disabling
void uart_dis(UART_REGS_s *regs);

//uart fifo configurations
void uart_fifo_cfg(UART_REGS_s *regs, const uart_fifo_cfg_s *fifo_cfg);

//uart tx fifo fill non blocking
uint32_t uart_txfifo_fill_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes);

//uart txfifo fill non blocking static
bool uart_txfifo_fill_static_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr);

//uart txfifo fill blocking
void uart_txfifo_fill_blocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes);

//uart puts(blocking)
void uart_puts(UART_REGS_s *regs, const unsigned char * data_char_arr);

//uart put character
static inline uint8_t uart_putc(UART_REGS_s *regs, const unsigned char data_char)
{
    regs->TXDATA->uart_data = data_char;
    return(data_char);
}

//uart rx fifo drain non blocking
uint32_t uart_rxfifo_drain_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes);

//uart rx fifo drain static non blocking
bool uart_rxfifo_drain_static_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr);

//rxfifo drain blocking
void uart_rxfifo_drain_blocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes);

//uart rx fifo get character
static inline uint8_t uart_getc(UART_REGS_s *regs)
{
    return(regs->RXDATA->uart_result);
}    

//read uart cfg
void uart_read_cfg(UART_REGS_s *regs, uart_cfg_s *rd_cfg);

#endif


