import sys
import time
import bsl
import i2cdriver
from serial.serialutil import EIGHTBITS, PARITY_EVEN, STOPBITS_ONE, SEVENBITS, PARITY_ODD, PARITY_NONE, PARITY_SPACE, PARITY_MARK
import argparse

#arg1 is mode:uart(1) or i2c(0), arg2 is path to bin file, arg3 is baud rate for uart only, arg4 is com port
#usage: python .\system\bootstrap_loader\flash_prog.py 1 .\system\bootstrap_loader\bin\bsl_hello_i2c__32KB.bin 57600 COM1
def main():
    # Command-Line Argument Parsing#{{{
    nl="\n"
    __version__ = "1.0.1"
    parser = argparse.ArgumentParser(
        prog='Boot Strap Loader',
        description='This Utility is used to load FD MCU with a specified bin file using UART or I2C',
        epilog='©FermionIC Design Pvt Ltd')

    parser.add_argument('-p', '--prog_is_uart', type=str, default=1,
                        help='Specify the programmer device - 0:i2c, 1:uart')
    parser.add_argument('-b', '--bin', required=True, type=str,
                        help='Specify the path of the binary file to be programmed (must be 32KB padded)')
    parser.add_argument('-c', '--com_port', required=True, type=str,
                        help='Specify the COM Port of the programmer device')
    parser.add_argument('-r', '--baud_rate', type=int, default=9600,
                        help='Specify the baud rate to be used by the programmer device (Only valid if prog_is_uart = 1')
    parser.add_argument('-d', '--debug', action='store_true', help='Print Debug Logs')
    parser.add_argument('-v', '--version', action='version', version=f'%(prog)s{nl}{__version__}{nl}{parser.epilog}')

    args = parser.parse_args()
    # }}}
    print(args)
    bsl.BSL_IS_UART = args.prog_is_uart       #1 for uart, 0 for i2c
    com_port = args.com_port
    if bsl.BSL_IS_UART == '1': #uart
        print("UART")
        bsl.ser = bsl.serial.Serial(com_port, int(args.baud_rate))
    elif bsl.BSL_IS_UART == '0': #i2c
        print("I2C")
        bsl.i2c = bsl.i2cdriver.I2CDriver(com_port)

    # bsl.connect_phase()
    # hex_file= args.bin
    # start_time = time.time()
    # bsl.program_flash(hex_file)
    # end_time = time.time()
    # print("Execution Time : ", (end_time - start_time))
    # bsl.crc_verify(0, 32768, hex_file)
    # bsl.start_app()

    ## Optimized with Sectors
    bsl.connect_phase()
    hex_file= args.bin
    start_time = time.time()
    end_sector = bsl.program_flash_optimized(hex_file)
    end_time = time.time()
    print("Execution Time : ", (end_time - start_time))
    bsl.crc_verify(0, end_sector*4096, hex_file)
    bsl.start_app()

if __name__ =="__main__":
    main()