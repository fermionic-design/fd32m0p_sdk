# FD32M0P Microcontroller SDK
\mainpage Getting Started

## Overview
This SDK provides development tools, libraries, and examples for the FD32M0P microcontroller.

## Prerequisites

### Hardware Requirements
- FD32M0P development board
- Power Supply or USB Cable (for power)
- 1 x UART Probe for Flash Programmming (In Boot Strap Loader mode)
- 1 x UART Probe for Standard Input/Output (STDIO/prints)
- 1 x SWD Probe (for Serial Wire Debug: [ARM Debug Interface v5 Architecture Specification](https://developer.arm.com/documentation/ihi0031/a/The-Serial-Wire-Debug-Port--SW-DP-/Introduction-to-the-ARM-Serial-Wire-Debug--SWD--protocol))

### Software Requirements
- [GNU Arm Embedded Toolchain 10-2020-q4-major](https://developer.arm.com/downloads/-/gnu-rm)
- [GNU Make](https://www.gnu.org/software/make/) (for building projects)
- [GNU Make: Windows](https://gnuwin32.sourceforge.net/packages/make.htm) (for building projects)
- [OpenOCD](http://openocd.org/) (for flashing and debugging)
- [VSCode](https://code.visualstudio.com/) (Optional, but recommended for development)

## Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/fermionic-design/fd32m0p_sdk.git
   cd fd32m0p_sdk
   ```

2. **Set up environment variables**:
   ```bash
   export PYTHON_PATH=/path/to/python
   export FD32M0P_UART_COM_PORT=COMXX # Replace COMXX with your actual COM port to Flash the microcontroller
   export FD32M0P_UART_BAUD_RATE=9600 # Replace with your desired baud rate
   ```

## Getting Started

### Basic Project Setup

1. **Create a new project**:\
    Take a look at the `examples/` directory for existing projects. You can copy one of these as a starting point for your own project.

2. **Configure the project**:\
    If using VSCode, update the `vscode/settings.json` file to add the necessary configurations for your project. Refer to the example configurations in the same file.

3. **Build the project**:\
    If using VSCode, you can use Makefile Tools to build your project. Select the required `Configuration` and set `Build Target` as `test`, then run the build.\
    If not using VSCode, you can use the provided Makefile and construct a make command as follows:
    ```bash
    make test TESTFOLDER=examples/hal/bringup TESTNAME=helloworld
    ```

4. **Flash the microcontroller**:\
    If using VSCode, you can use Makefile Tools to flash your project. Select the required `Configuration` and set `Build Target` as `flash`, then run the build.\
    If not using VSCode, you can use the provided Makefile and construct a make command as follows:
    ```bash
    make flash TESTFOLDER=examples/hal/bringup TESTNAME=helloworld
    ```
    Note: Make sure your UART probe is connected to the correct COM port specified in the environment variable `FD32M0P_UART_COM_PORT` and that the baud rate is set correctly in `FD32M0P_UART_BAUD_RATE`.

### Running Examples

The SDK includes several example projects located in the `examples/` directory. Each example demonstrates different features of the FD32M0P microcontroller. Each example can be built and flashed to the microcontroller using the provided Makefile by selecting the relevant `Configuration` and `Build Target` in VSCode, or by using the command line.

To compile and flash an example:
```bash
make test_flash TESTFOLDER=examples/hal/bringup TESTNAME=helloworld
```

## Documentation

- [API Reference](docs/html/index.html)
- [Hardware Reference Manual]()
- [Application Notes]()

## Support

For issues and support:
- Contact: [support@fermionic.design](mailto:support@fermionic.design)

## License

[Specify license, e.g., MIT, Apache, etc.]

## Contributing

[Brief contribution guidelines if applicable]
