#include "string.h"
#include "math.h"
#include <sys/types.h> 

void print_int_var(char prefix[10], int var, int is_hex) {
    char c[16]="",final[50]="";
 

    if(is_hex)
        itoa(var,c,16);
    else
        itoa(var, c, 10); //convert int to char in base 10

    strcat(final,prefix);
    if(!is_hex)
        strcat(final," ");
    else 
        strcat(final," 0x");
    strcat(final,c);
    strcat(final,"\n");

    UartPuts(final);
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
