GNG_CC      = arm-none-eabi-gcc
GNU_OBJDUMP = arm-none-eabi-objdump
GNU_OBJCOPY = arm-none-eabi-objcopy
GNU_CC_FLAGS= -g -O3 -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks -fms-extensions -Wall -Wextra -Wwrite-strings
GNU_CC_FLAGS_BOOTLOADER = -g -O -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks

DEADCODESTRIP = -Wl,-static  -fdata-sections -ffunction-sections -Wl,--gc-sections 

PRJ_DIR = ./

SOFTWARE_DIR= $(PRJ_DIR)/

PRJ_CHEADER_DIR = $(SOFTWARE_DIR)/c_headers/
PRJ_HAL_DIR = $(SOFTWARE_DIR)/hal/

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
				  -I $(PRJ_CHEADER_DIR)/usb2/ \
				  -I $(PRJ_CHEADER_DIR)/common/ 

HAL_SRC_FILES = $(PRJ_HAL_DIR)/gpio/gpio.c \
				$(PRJ_HAL_DIR)/adc/adc.c \
				$(PRJ_HAL_DIR)/vref/vref.c \
				$(PRJ_HAL_DIR)/dac/dac.c \
				$(PRJ_HAL_DIR)/dma/dma.c \
				$(PRJ_HAL_DIR)/event_fabric/event_fabric.c \
				$(PRJ_HAL_DIR)/uart/uart.c \
				$(PRJ_HAL_DIR)/timer/timer.c \
				$(PRJ_HAL_DIR)/flash/flash.c \
				$(PRJ_HAL_DIR)/crc/crc.c \
				$(PRJ_HAL_DIR)/i2c/i2c.c

HAL_INCDIR =-I $(PRJ_HAL_DIR)/common/ \
			-I $(PRJ_HAL_DIR)/gpio/ \
			-I $(PRJ_HAL_DIR)/dma/ \
			-I $(PRJ_HAL_DIR)/adc/ \
			-I $(PRJ_HAL_DIR)/vref/ \
			-I $(PRJ_HAL_DIR)/dac/ \
			-I $(PRJ_HAL_DIR)/event_fabric/ \
			-I $(PRJ_HAL_DIR)/uart/ \
			-I $(PRJ_HAL_DIR)/timer/ \
			-I $(PRJ_HAL_DIR)/crc/ \
			-I $(PRJ_HAL_DIR)/flash/ \
			-I $(PRJ_HAL_DIR)/i2c/

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
	$(PRJ_HAL_DIR)/mcu_ctrl/mcu_ctrl_cfg_reg.c \
	$(PRJ_HAL_DIR)/common/utils.c \
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
