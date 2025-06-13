# Bootstrap Loader
`bsl.py` contains all the functions for the commands of bootstrap loader, i.e connecting, programming the flash, erasing the flash, writing to and reading from flash, memory and register, crc verification and starting application code. Function arguments and return values are added in comments before each function definition.
`flash_prog.py` is a standalone script to program 32KB flash memory with the path to the bin file provided in command line input or as script parameter.
 
## LIBRARIES TO INSTALL
1. pyserial
2. numpy
3. sympy
4. i2cdriver

## COMMAND TO PROGRAM FLASH

python flash_prog.py <1 for uart, 0 for i2c> <path_to_the_bin_file.bin> <baud rate for uart>

## CREATING MAIN FUNCTION

To create any script that uses the functions in bsl.py, import bsl and call the functions with their respective arguments and command line inputs.
For programming flash and crc verification specify path to the bin file in system argument and import sys as well.

Example code:

    import sys
    import bsl
    import i2cdriver

    def main():

        bsl.BSL_IS_UART = sys.argv[1] #1 for uart, 0 for i2c
        if bsl.BSL_IS_UART == '1':
            # bsl_info.ser.close()
            bsl.ser = bsl.serial.Serial("COM4", int(sys.argv[2]))   #send baud rate in cmd line as arg2
        elif bsl.BSL_IS_UART == '0':
            bsl.i2c = i2cdriver.I2CDriver("COM8")
        bsl.connect_phase()
        bsl.write_to_reg(0x7D, 0x3ffd307c) #uart1_addr register
        bsl.read_from_reg(0x3ffd307c)
        bsl.start_app()



    if __name__ =="__main__":
        main()

