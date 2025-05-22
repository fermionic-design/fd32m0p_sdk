# """ command line arguments:
# baud rate, main clk frequency/1000
# usage:
# python system\utils\baud_cal.py 921600 6250 16
# """

import sys
import math

baud_rate = int(sys.argv[1])
clk_uart = int(sys.argv[2])
ovs = int(sys.argv[3])

def baud_rate_cal(baud_rate, clk_uart, ovs):
    num_den_frac = float((baud_rate * ovs)/clk_uart)
    found_valid_prog = 0
    assert num_den_frac<1, "baud rate out of range"
    if clk_uart == 32:
        error = 0.03
    else:
        error = 0.02
    for i in range(12,-1, -1):
        den_pow = pow(2,i)
        num_init = den_pow * num_den_frac
        num_val = math.ceil(num_init)
        frac_val = (num_val/den_pow)
        diff = abs(1-(frac_val/num_den_frac))
        if(diff <= error and num_val <= 255 ):
            baud_num = num_val
            baud_den = i
            found_valid_prog = 1
            print('error=',diff*100,"%")
            break
    assert found_valid_prog==1, "Baud rate out of range"
    return baud_num, baud_den


def main():
    print('numerator, denominator')
    print(baud_rate_cal(baud_rate, clk_uart*1000, ovs))

if __name__ =="__main__":
    main()



