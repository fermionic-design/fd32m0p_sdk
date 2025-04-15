typedef struct I2C_TX_FIFO_REF_DATA_s{
    volatile int      burst_len;
    volatile uint32_t  tx_data[20];
    volatile uint32_t  rx_data[20];
    volatile uint32_t   unexpected_stop;
    volatile uint32_t   slv_en;
    volatile uint32_t   mst_en;
} I2C_TX_FIFO_REF_DATA_s;
