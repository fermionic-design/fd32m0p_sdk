typedef struct RTC_REF_DATA_s {
    volatile unsigned int rtc_time_sec; //'h300
    volatile unsigned int rtc_time_min; //'h301
    volatile unsigned int rtc_time_hr; //'h302
    volatile unsigned int rtc_time_dow; //'h303
    volatile unsigned int rtc_time_dom; //'h304
    volatile unsigned int rtc_time_mon; //'h305
    volatile unsigned int rtc_time_year; //'306
    volatile unsigned int rtc_exp_sec; //'h307
    volatile unsigned int rtc_exp_min; //'h308
    volatile unsigned int rtc_exp_hr; //'h309
    volatile unsigned int rtc_exp_dow; //'h30A
    volatile unsigned int rtc_exp_dom; //'h30B
    volatile unsigned int rtc_exp_mon; //'h30C
    volatile unsigned int rtc_exp_year; //'30D
    volatile unsigned int rtc_clk_cal; //'30E
    volatile unsigned int rtc_cal_sign; //'30F
    volatile unsigned int rtc_temp_cal; //'310
    volatile unsigned int rtc_temp_sign; //'311
} RTC_REF_DATA_s;


