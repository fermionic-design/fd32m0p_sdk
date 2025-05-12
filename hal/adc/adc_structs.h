typedef struct ADC_REF_DATA_s{
    unsigned int adc_result_reg_read;
    unsigned int adc_triggered;
    unsigned int adc_intr;
    unsigned int result_reg_which_is_read;
    unsigned int trig_w_hw;
    unsigned int start_addr;
    unsigned int end_addr;
    unsigned int addr_req;
    unsigned int addr_ack;
    unsigned int accu_out[16];

} ADC_REF_DATA_s;
