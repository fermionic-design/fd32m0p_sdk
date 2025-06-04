#include "FD32M0P.h"
#include"uart_stdout_mcu.h"
#include "spi.h"
#include "timer.h"
#include "gpio.h"

#define TIMER_BASE_ADDRESS  0x3FFD4000 
#define TIMER_REGS ((TIMER_REGS_s *) TIMER_BASE_ADDRESS) 

void spi_flash_wr_en() {
    uint8_t rx_rdata;
    bool rx_rdata_status;

    spi_disable(SPI_REGS);
    spi_transmit_byte_blocking(SPI_REGS, 0x06);
    spi_start_transaction(SPI_REGS);
    
    while(!(spi_is_idle(SPI_REGS)));
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);
    
    rx_rdata_status = spi_receive_byte_non_blocking(SPI_REGS, &rx_rdata);
    spi_disable(SPI_REGS);
}

void sector_erase(uint32_t addr) {
    uint8_t rx_rdata;
    bool rx_rdata_status;
    
    spi_disable(SPI_REGS);
    spi_transmit_byte_blocking(SPI_REGS, 0x20);
    for(int i=2; i>=0; i--) {
        spi_transmit_byte_blocking(SPI_REGS, addr >> (i*8));
    }
    spi_start_transaction(SPI_REGS);
    
    while(!(spi_is_idle(SPI_REGS)));
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);

    for(int i=0; i<4; i++) {
        rx_rdata_status = spi_receive_byte_non_blocking(SPI_REGS, &rx_rdata);
    }
    spi_disable(SPI_REGS);
}

void spi_flash_wr_data(uint32_t addr, uint32_t len, uint8_t *data) {
    uint8_t rx_rdata;
    bool rx_rdata_status;
    
    spi_disable(SPI_REGS);
    spi_transmit_byte_blocking(SPI_REGS, 0x02);
    for(int i=2; i>=0; i--) {
        spi_transmit_byte_blocking(SPI_REGS, addr >> (i*8));
    }
    for(uint32_t i=0; i<len; i++) {
        spi_transmit_byte_blocking(SPI_REGS, data[i]);
    }
    spi_start_transaction(SPI_REGS);
    
    while(!(spi_is_idle(SPI_REGS)));
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);

    for(uint32_t i=0; i<(4+len); i++) {
        rx_rdata_status = spi_receive_byte_non_blocking(SPI_REGS, &rx_rdata);
    }
    spi_disable(SPI_REGS);
}

void spi_flash_rd_data(uint32_t addr, uint32_t len, uint8_t *data) {
    uint8_t rx_rdata;
    bool rx_rdata_status;
 
    spi_disable(SPI_REGS);
    spi_transmit_byte_blocking(SPI_REGS, 0x03);
    for(int i=2; i>=0; i--) {
        spi_transmit_byte_blocking(SPI_REGS, addr >> (i*8));
    }
    spi_transmit_byte_blocking(SPI_REGS, 0x00);
    spi_start_transaction(SPI_REGS);
    
    while(!(spi_is_idle(SPI_REGS)));
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);   
 
    for(uint32_t i=0; i<(4+len); i++) {
        rx_rdata_status = spi_receive_byte_non_blocking(SPI_REGS, &rx_rdata);
        if(i>=4) {
            data[i-4] = rx_rdata;
        }
    }   
    spi_disable(SPI_REGS);
}

bool compare_data(uint32_t len, uint8_t *tx_data, uint8_t *rx_data) {
    for(uint32_t i=0; i<len; i++) {
        if(tx_data[i]!=rx_data[i]) {
            return false;
        }
    }
    return true;
}

void timer_a0_disable(void){
    //disable timer
    timer_stop(TIMER_REGS);
    timer_clk_disable(TIMER_REGS);
    
    //clear all interrupts
    for(int i=0; i<19; i++){
        TIMER_INTR_EVENT_CLEAR(TIMER_REGS, i);
    }

    //disable all interrupts
    for(int i=0; i<19; i++){
        TIMER_INTR_EVENT_DIS(TIMER_REGS, i); 
    }
    
    //pwr_disable
    TIMER_PWR_EN_WRITE(TIMER_REGS, 0, TIMER_PWR_EN_PWR_EN_KEY);
}

uint32_t ext_flash_addr = 0x1;

int main() {
    // Initializing UART
    UartStdOutInit();
    UartPuts("SPI Master Test\n");
    
    // IO Mux Setting for SPI as a master 
    IOMUX_PA_REG_s iomux_cfg_struct;
    
    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA2_SPI0_CS0;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 2);
    
    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA6_SPI0_SCK;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 6);
    
    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA5_SPI0_MOSI;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 5);
    
    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA4_SPI0_MISO;
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 4);

    // Timer Configuration
    NVIC_ClearPendingIRQ(17);
    NVIC_EnableIRQ(17);
    
    timer_a0_disable();
    //pwr_en
    TIMER_PWR_EN_WRITE(TIMER_REGS, 1, TIMER_PWR_EN_PWR_EN_KEY);
    
    //soft reset
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 1, 0, TIMER_RST_CTRL_RST_KEY);
    TIMER_RST_CTRL_WRITE(TIMER_REGS, 0, 0, TIMER_RST_CTRL_RST_KEY);
    
    // SPI Power Enable
    SPI_PWR_EN_WRITE(SPI_REGS, 1, SPI_PWR_EN_PWR_EN_KEY);

    // Clock Settings
    spi_set_clk_cfg(SPI_REGS, SPI_CLKSEL_CLK_SEL_CLK_SPI,8);

    // SPI Configuration
    spi_cfg_t default_spi_cfg = SPI_CFG_DEFAULT;
    spi_cfg_t *spi_cfg = &default_spi_cfg;
    
    spi_cfg->frame_format  = SPI_MODE_CTRL_FRAME_FORMAT_MOTOROLA;
    spi_cfg->data_size_sel = 8;                                        
    spi_cfg->msb_first     = 1;                                        
    spi_cfg->clk_polarity  = SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_LOW;
    spi_cfg->clk_phase     = SPI_MOT_MOD_CNTRL_CLOCK_PHASE_LEADING;    
    spi_cfg->parity_en     = 0;    
    spi_cfg->even_partiy   = 0;                                        
    spi_cfg->mode          = SPI_MODE_CTRL_PERIPHERAL_MODE_CONTROLLER;

    spi_init(SPI_REGS, spi_cfg);

    // SPI RX Control Setting
    spi_set_rx_ctrl(SPI_REGS, 0xFF, 0, 0);
    
    // Interrupt Enables
    SPI_INTR_EVENT_EN(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);
    SPI_INTR_EVENT_CLEAR(SPI_REGS, SPI_INTR_EVENT_IDLE_IDX);

    // W25 Flash
    UartPuts("SPI Master Test1\n");
    spi_flash_wr_en();
    UartPuts("SPI Master Test2\n");
    sector_erase(ext_flash_addr);
    UartPuts("SPI Master Test3\n");

    //intr_en(ctr_ccu0)
    TIMER_INTR_EVENT_EN(TIMER_REGS, TIMER_INTR_EVENT_CCU_0_IDX);

    //delay_in_ms
    timer_delay_in_ms(TIMER_REGS,500);  
    UartPuts("timer\n");

    while(1);

    return 0;
}

void TIMER_A0_IRQ_Handler(void){
    uint8_t  intr_first;
    intr_first = TIMER_REGS->INTR_STS.intr_first;

    if(intr_first == TIMER_INTR_EVENT_CCU_0_IDX+1){
        TIMER_INTR_EVENT_CLEAR(TIMER_REGS, TIMER_INTR_EVENT_CCU_0_IDX);
        // Write and Read to the SPI Flash
        UartPuts("SPI Master Test4\n");
        spi_flash_wr_en();
        uint8_t tx_data = 0xDE;
        uint8_t rx_data;
        spi_flash_wr_data(ext_flash_addr, 1, &tx_data);
        spi_flash_rd_data(ext_flash_addr, 1, &rx_data);

        bool compare_sts;
        compare_sts =  compare_data(1, &tx_data, &rx_data);

        if(compare_sts==true) {
            UartPuts("test passed\n");
        }
        else {
            UartPuts("test failed\n");
        }
        UartEndSimulation();
    }
}
