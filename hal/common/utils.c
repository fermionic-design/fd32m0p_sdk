//#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include "math.h"
//#include <sys/types.h> 
#include "uart_stdout_mcu.h"

void print_int_var(char *prefix, int var, int is_hex) {
    char c[16]="";//,final[50]="";
 

    UartPuts(prefix);

    if(is_hex) { 
        UartPuts("0x");
        itoa(var,c,16);
    } else {
        itoa(var, c, 10); //convert int to char in base 10
    }

    UartPuts(c);
    UartPuts("\n");
}

// // Function to round and saturate an unsigned fixed-point number
// uint16_t adc_rns(int input, int in_frac_bits, int out_frac_bits) {
    
//     float input_in_frac;
    
//     input_in_frac = (float)(input * pow(2,-in_frac_bits));
    
//     // Scale the floating-point number to fixed-point representation
//     int32_t scaled_value = (int32_t)(input_in_frac * pow(2,out_frac_bits));
//     //print_int_var("** Scaled Value,**\n", scaled_value, 0);
//     return (int32_t)scaled_value;
// }
