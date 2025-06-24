# Detect OS

ifeq ($(OS),Windows_NT)
	MKDIR_P = if not exist "$(subst /,\,$(@D))" mkdir "$(subst /,\,$(@D))"
	PYTHON_CMD = python
	SLASH = \\
else
	MKDIR_P = mkdir -p $(@D)
	PYTHON_CMD = python3
	SLASH = /
endif

GNU_CC        = arm-none-eabi-gcc
GNU_OBJDUMP   = arm-none-eabi-objdump
GNU_OBJCOPY   = arm-none-eabi-objcopy
GNU_CC_FLAGS  = -g -O3 -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks -fms-extensions -Wall -Wextra -Wwrite-strings
GNU_CC_FLAGS_BOOTLOADER = -g -O -mthumb -mcpu=cortex-m0plus -fno-delete-null-pointer-checks

DEADCODESTRIP = -Wl,-static -fdata-sections -ffunction-sections -Wl,--gc-sections 

PRJ_DIR = ./
SOFTWARE_DIR = $(PRJ_DIR)
TOOLS_DIR = ./tools
FLASHTOOL = $(TOOLS_DIR)/bootstrap_loader/flash_prog.py

PYTHON_PATH ?= .
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

LINKER_SCRIPT_PATH = $(SOFTWARE_DIR)/common/scripts
LINKER_SCRIPT = $(LINKER_SCRIPT_PATH)/fd32m0p.ld
LINKER_SCRIPT_BOOTLOADER = $(LINKER_SCRIPT_PATH)/fd32m0p_bootloader.ld

BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)

# Include directories
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

# HAL sources and includes
HAL_SRC_FILES := $(wildcard $(PRJ_HAL_DIR)/*/*.c)
HAL_OBJ_FILES := $(patsubst $(PRJ_HAL_DIR)/%.c,$(OBJ_DIR)/%.o,$(HAL_SRC_FILES))
INCLUDE_DIRS := $(wildcard $(PRJ_HAL_DIR)/*/)
HAL_INCDIR := $(addprefix -I,$(INCLUDE_DIRS))

# Common sources
COMMON_SRC_FILES := $(SOFTWARE_DIR)/common/retarget/retarget.c \
                   $(SOFTWARE_DIR)/common/retarget/uart_stdout_mcu.c \
                   $(DEVICE_DIR)/Source/$(SYSTEM_FILE).c
COMMON_OBJ_FILES := $(patsubst $(SOFTWARE_DIR)/%.c,$(OBJ_DIR)/%.o,$(COMMON_SRC_FILES))

# Startup file
STARTUP_OBJ := $(OBJ_DIR)/$(STARTUP_FILE).o

# Compiler flags
CFLAGS = $(GNU_CC_FLAGS) $(USER_DEFINE) $(TEST_DEFINE) $(DEADCODESTRIP) \
         -I $(DEVICE_DIR)/Include -I $(CORE_DIR) \
         $(C_HEADER_INCDIR) $(HAL_INCDIR) \
         -I $(SOFTWARE_DIR)/common/retarget \
         -D__STACK_SIZE=0x200 -D__HEAP_SIZE=0x1000

# Linker flags
LDFLAGS = $(DEADCODESTRIP) -T $(LINKER_SCRIPT) -L $(LINKER_SCRIPT_PATH) -Wl,--print-memory-usage

# Rule to compile .c files to .o files
$(OBJ_DIR)/%.o: $(PRJ_HAL_DIR)/%.c
	$(MKDIR_P)
	$(GNU_CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SOFTWARE_DIR)/%.c
	$(MKDIR_P)
	$(GNU_CC) $(CFLAGS) -c $< -o $@

# Rule to assemble startup file
$(STARTUP_OBJ): $(STARTUP_DIR)/$(STARTUP_FILE).s
	$(MKDIR_P)
	$(GNU_CC) $(CFLAGS) -c $< -o $@

test:
ifeq ($(TESTFOLDER),)
	$(error Syntax: make test TESTFOLDER=<path to test> TESTNAME=<testname>) 
endif
ifeq ($(TESTNAME),)
	$(error Syntax: make test TESTFOLDER=<path to test> TESTNAME=<testname>) 
endif
	@echo "Test Folder: $(TESTFOLDER)"
	@echo "Test: $(TESTNAME)"
	$(MAKE) $(BIN_DIR)/$(TESTNAME).bin TESTFOLDER=$(TESTFOLDER) TESTNAME=$(TESTNAME)

# Main target
$(BIN_DIR)/$(TESTNAME).bin: $(STARTUP_OBJ) $(COMMON_OBJ_FILES) $(HAL_OBJ_FILES) $(OBJ_DIR)/$(TESTNAME).o
	$(GNU_CC) $(CFLAGS) $(LDFLAGS) $^ -o $(BIN_DIR)/$(TESTNAME).o
	$(GNU_OBJDUMP) -S $(BIN_DIR)/$(TESTNAME).o > $(BIN_DIR)/$(TESTNAME).lst
	$(GNU_OBJCOPY) -S $(BIN_DIR)/$(TESTNAME).o -O binary $(BIN_DIR)/$(TESTNAME).bin
	$(GNU_OBJCOPY) -S $(BIN_DIR)/$(TESTNAME).o --pad-to 32768 -O binary $(BIN_DIR)/$(TESTNAME)_32KB.bin
	$(GNU_OBJCOPY) -S $(BIN_DIR)/$(TESTNAME).o -O verilog $(BIN_DIR)/$(TESTNAME).hex

# Rule to compile test file
$(OBJ_DIR)/$(TESTNAME).o: $(TESTFOLDER)/$(TESTNAME).c
	$(MKDIR_P)
	$(GNU_CC) $(CFLAGS) -I $(TESTFOLDER) -c $< -o $@

flash: 
	$(PYTHON_CMD) $(FLASHTOOL) -b $(BIN_DIR)/$(TESTNAME)_32KB.bin -p 1 -c $(FD32M0P_UART_COM_PORT) -r $(FD32M0P_UART_BAUD_RATE)

test_flash: $(BIN_DIR)/$(TESTNAME).bin flash

.PHONY: test flash test_flash
