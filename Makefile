GNG_CC      = arm-none-eabi-gcc
GNU_OBJDUMP = arm-none-eabi-objdump
GNU_OBJCOPY = arm-none-eabi-objcopy
GNU_CC_FLAGS= -g -O3 -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks -fms-extensions -Wall -Wextra -Wwrite-strings
GNU_CC_FLAGS_BOOTLOADER = -g -O -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks

DEADCODESTRIP = -Wl,-static  -fdata-sections -ffunction-sections -Wl,--gc-sections 

PRJ_DIR = ./

SOFTWARE_DIR= $(PRJ_DIR)

TOOLS_DIR = ./tools

FLASHTOOL = $(TOOLS_DIR)/bootstrap_loader/flash_prog.py

PYTHON_PATH ?= C:/Users/deepe/Documents/GitHub/fd32m0p/venv/Scripts/python

FD32M0P_UART_COM_PORT ?= COM10
FD32M0P_UART_BAUD_RATE ?= 9600

PRJ_CHEADER_DIR = $(SOFTWARE_DIR)/c_headers
PRJ_HAL_DIR = $(SOFTWARE_DIR)/hal

CMSIS_DIR   = $(SOFTWARE_DIR)/cmsis
CORE_DIR    = $(CMSIS_DIR)/CMSIS/Include
DEVICE_DIR  = $(CMSIS_DIR)/Device/FD32M0P
STARTUP_DIR = $(DEVICE_DIR)/Source
STARTUP_FILE= startup_FD32M0P
SYSTEM_FILE = system_FD32M0P

USER_DEFINE = -DCORTEX_M0PLUS
TEST_DEFINE ?= 

$(info TEST_DEFINE: $(TEST_DEFINE))

LINKER_SCRIPT_PATH	= $(SOFTWARE_DIR)/common/scripts
LINKER_SCRIPT		= $(LINKER_SCRIPT_PATH)/fd32m0p.ld

LINKER_SCRIPT_BOOTLOADER = $(LINKER_SCRIPT_PATH)/fd32m0p_bootloader.ld


TB_TOP = tb_dtop
SIM_OPTS ?= 
COVERAGE ?= 0
TINYUSB_LIB ?= 0

C_COMPILE_DIR = build

C_HEADER_INCDIR = -I $(PRJ_CHEADER_DIR)/crc/ \
				  -I $(PRJ_CHEADER_DIR)/dma/ \
				  -I $(PRJ_CHEADER_DIR)/pl230/ \
				  -I $(PRJ_CHEADER_DIR)/otp/ \
				  -I $(PRJ_CHEADER_DIR)/spi/ \
				  -I $(PRJ_CHEADER_DIR)/event_fabric/ \
				  -I $(PRJ_CHEADER_DIR)/i2c/ \
				  -I $(PRJ_CHEADER_DIR)/timer/ \
				  -I $(PRJ_CHEADER_DIR)/timer_timg_num_input2 \
				  -I $(PRJ_CHEADER_DIR)/timer_tima_num_input2 \
				  -I $(PRJ_CHEADER_DIR)/watchdog/ \
				  -I $(PRJ_CHEADER_DIR)/rtc/ \
				  -I $(PRJ_CHEADER_DIR)/uart/ \
				  -I $(PRJ_CHEADER_DIR)/analog_clkm/ \
				  -I $(PRJ_CHEADER_DIR)/adc/ \
				  -I $(PRJ_CHEADER_DIR)/dac/ \
				  -I $(PRJ_CHEADER_DIR)/gpio/ \
				  -I $(PRJ_CHEADER_DIR)/comp/ \
				  -I $(PRJ_CHEADER_DIR)/opamp/ \
				  -I $(PRJ_CHEADER_DIR)/vref/ \
				  -I $(PRJ_CHEADER_DIR)/mcu_lf_clk/ \
				  -I $(PRJ_CHEADER_DIR)/top/ \
				  -I $(PRJ_CHEADER_DIR)/iomux/ \
				  -I $(PRJ_CHEADER_DIR)/mcu_ctrl/ \
				  -I $(PRJ_CHEADER_DIR)/flash/ \
				  -I $(PRJ_CHEADER_DIR)/vultan_flash/ \
				  -I $(PRJ_CHEADER_DIR)/usb2/ \
				  -I $(PRJ_CHEADER_DIR)/common/ 

HAL_SRC_FILES := $(wildcard $(PRJ_HAL_DIR)/*/*.c)
INCLUDE_DIRS := $(wildcard $(PRJ_HAL_DIR)/*/)
HAL_INCDIR := $(addprefix -I,$(INCLUDE_DIRS))

test:
ifeq ($(TESTFOLDER),)
	$(error Syntax: make test TESTFOLDER=<path to test> TESTNAME=<testname>) 
else
	$(info Test Folder: $(TESTFOLDER))
endif
ifeq ($(TESTNAME),)
	$(error Syntax: make test TESTFOLDER=<path to test> TESTNAME=<testname>) 
else
	$(info Test: $(TESTNAME))
endif
	$(GNG_CC) $(GNU_CC_FLAGS) $(STARTUP_DIR)/$(STARTUP_FILE).s \
	$(DEADCODESTRIP) \
	-I $(TESTFOLDER)/ \
	$(SOFTWARE_DIR)/common/retarget/retarget.c \
	$(SOFTWARE_DIR)/common/retarget/uart_stdout_mcu.c \
	$(DEVICE_DIR)/Source/$(SYSTEM_FILE).c \
	$(HAL_SRC_FILES) \
	-I $(DEVICE_DIR)/Include -I $(CORE_DIR) \
	$(C_HEADER_INCDIR) \
	$(HAL_INCDIR) \
	-I $(SOFTWARE_DIR)/common/retarget \
	-L $(LINKER_SCRIPT_PATH) \
	$(TESTFOLDER)/$(TESTNAME).c \
	-D__STACK_SIZE=0x200 \
	-D__HEAP_SIZE=0x1000 \
	$(USER_DEFINE) $(TEST_DEFINE) -T $(LINKER_SCRIPT) -o ${C_COMPILE_DIR}/$(TESTNAME).o
	$(GNU_OBJDUMP) -S ${C_COMPILE_DIR}/$(TESTNAME).o > ${C_COMPILE_DIR}/$(TESTNAME).lst
	$(GNU_OBJCOPY) -S ${C_COMPILE_DIR}/$(TESTNAME).o -O binary ${C_COMPILE_DIR}/$(TESTNAME).bin
	$(GNU_OBJCOPY) -S ${C_COMPILE_DIR}/$(TESTNAME).o --pad-to 32768 -O binary ${C_COMPILE_DIR}/$(TESTNAME)_32KB.bin
	$(GNU_OBJCOPY) -S ${C_COMPILE_DIR}/$(TESTNAME).o -O verilog ${C_COMPILE_DIR}/$(TESTNAME).hex

flash: 
	$(PYTHON_PATH) $(FLASHTOOL) -b $(C_COMPILE_DIR)/$(TESTNAME)_32KB.bin -p 1 -c $(FD32M0P_UART_COM_PORT) -r $(FD32M0P_UART_BAUD_RATE) 

test_flash: test flash
