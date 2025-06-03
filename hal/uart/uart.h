#ifndef uart_h_include
#define uart_h_include

#include "UART_REGS.h"
#include "UART_RW_API.h"
#include <stdbool.h>

/*!
 *  @brief  UART Configuration Struct
 */
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

/*!
 *  @brief  Default Initializer for UART Configuration Struct
 */
#define UART_CFG_DEFAULT { \
   .clk_sel         = UART_CLK_SEL_CLK_APB, \
   .clk_div         = 0, \
   .oversampling    = UART_CTRL_OS_FACTOR_16, \
   .word_length     = UART_CFG_WRD_LEN_8_BITS, \
   .num_stop_bits   = UART_CFG_STOP_BIT_ONE, \
   .msb_first       = UART_CTRL_UART_MSB_LAST, \
   .tx_en           = UART_CTRL_TX_EN_HW, \
   .rx_timeout_val  = 10 \
}

/*!
 *  @brief  UART Fifo Configuration Struct
 */
typedef struct 
{
    UART_FIFOLS_TX_FIFO_LS_E    tx_fifo_lvl_sel;
    UART_FIFOLS_RX_FIFO_LS_E    rx_fifo_lvl_sel;
    uint32_t                    fifo_en;
} uart_fifo_cfg_s;

/*!
 *  @brief  Default Initializer for UART Fifo Configuration Struct
 */
#define UART_FIFO_CFG_DEFAULT { \
    .tx_fifo_lvl_sel = UART_FIFOLS_TX_FIFO_LS_EMPTY, \
    .rx_fifo_lvl_sel = UART_FIFOLS_RX_FIFO_LS_ALMOST_EMPTY, \
    .fifo_en = 1 \
}

/**
 * @brief   This function initalizes the UART, enables power, resets the peripheral,
 *          and does reset status clear,
 *          blocks asynchronous fast clock requests
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  void
 */
void uart_init(UART_REGS_s *regs);

/**
 * @brief   This function configures the UART, data frame, clock, baud rate configurations,
 *          transmission and reception enables
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   uart_cfg_struct : UART configuration struct
 *
 * @retval  void
 */
void uart_cfg(UART_REGS_s *regs, const uart_cfg_s *cfg);

/**
 * @brief   This function calculates the UART baud rate, based on the inputs provided
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   baud_rate : any of the standard UART baud rates
 * @param   clk_freq : clock_frequency
 * @param   oversampling : UART oversampling rate
 *
 * @retval  void
 */
void uart_baud_cfg(UART_REGS_s *regs, uint32_t baud_rate, uint32_t clk_freq, uint32_t oversampling);

/**
 * @brief   This function enables the UART clk
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  void
 */
void uart_clk_en(UART_REGS_s *regs);

/**
 * @brief   This function disables the UART clk
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  void
 */
void uart_clk_dis(UART_REGS_s *regs);

/**
 * @brief   This function enables the UART clock and UART peripheral
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  void
 */
void uart_en(UART_REGS_s *regs);

/**
 * @brief   This function disables the UART peripheral
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  void
 */
void uart_dis(UART_REGS_s *regs);

/**
 * @brief   This function configures the UART transmit and receive fifos, 
 *          does fifo enable or disable
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   uart_fifo_cfg_struct : Uart Fifo Configuration Struct
 *
 * @retval  void
 */
void uart_fifo_cfg(UART_REGS_s *regs, const uart_fifo_cfg_s *fifo_cfg);

/**
 * @brief   This non blocking function fills the UART transmit fifo,
 *          user needs to update the buffer pointer and number of data bytes to be written,
 *          returns number of data bytes written
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be written to the transmit fifo
 *
 * @retval  num_bytes_written
 */
uint32_t uart_txfifo_fill_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes);

/**
 * @brief   This non blocking static function fills the UART transmit fifo,
 *          auto updates the buffer pointer and number of bytes to be written,
 *          returns a boolean for transaction done
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be written to the transmit fifo
 * @param   rst_int_ctr : reset the internal counter once transaction is done
 *
 * @retval  txn_done status 
 */
bool uart_txfifo_fill_static_nonblocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr);

/**
 * @brief   This blocking function fills the UART transmit fifo
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be written to the transmit fifo
 *
 * @retval  void
 */
void uart_txfifo_fill_blocking(UART_REGS_s *regs, const uint8_t *buffer, uint32_t num_bytes);

/**
 * @brief   This blocking function puts a string in the UART transmit fifo
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   data_char_arr : string input
 *
 * @retval  void
 */
void uart_puts(UART_REGS_s *regs, const char * data_char_arr);

/**
 * @brief   This static inline function puts a charcter in UART transmit fifo,
 *          returns the character written
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   data_char_arr: character input
 *
 * @retval  written charcter
 */
static inline uint8_t uart_putc(UART_REGS_s *regs, const unsigned char data_char)
{
    regs->TXDATA[0].packed_w = data_char;
    return(data_char);
}

/**
 * @brief   This non blocking function drains the UART receive fifo,
 *          user needs to update the buffer pointer and number of data bytes to be read,
 *          returns number of data bytes read
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be read from receive fifo
 *
 * @retval  num_bytes_read
 */
uint32_t uart_rxfifo_drain_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes);

/**
 * @brief   This non blocking static function drains the UART receive fifo,
 *          auto updates the buffer pointer and number of data bytes to be read
 *          returns a boolean for transaction done
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be read from receive fifo
 * @param   rst_int_ctr : reset the internal counter once transaction is done
 *
 * @retval  txn_done status
 */
bool uart_rxfifo_drain_static_nonblocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes, uint32_t rst_int_ctr);

/**
 * @brief   This blocking function drains the UART receive fifo
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   buffer : pointer to the data buffer
 * @param   num_bytes : number of bytes to be read from receive fifo
 *
 * @retval  void
 */
void uart_rxfifo_drain_blocking(UART_REGS_s *regs, uint8_t *buffer, uint32_t num_bytes);

/**
 * @brief   This static inline function returns a charcter from the UART receive fifo
 *
 * @param   uart_regs : pointer to the UART register space
 *
 * @retval  charcter to be read
 */
static inline uint8_t uart_getc(UART_REGS_s *regs)
{
    return(regs->RXDATA->uart_result);
} 

/**
 * @brief   This function reads the UART configurations from the register space,
 *          puts them in the configuration struct provided in the input
 *
 * @param   uart_regs : pointer to the UART register space
 * @param   uart_cfg_struct : pointer to a uart configuration struct
 *
 * @retval  void
 */
void uart_read_cfg(UART_REGS_s *regs, uart_cfg_s *rd_cfg);

#endif

