/*
 *-----------------------------------------------------------------------------
 * The confidential and proprietary information contained in this file may
 * only be used by a person authorised under and to the extent permitted
 * by a subsisting licensing agreement from Arm Limited or its affiliates.
 *
 *            (C) COPYRIGHT 2010-2013 Arm Limited or its affiliates.
 *                ALL RIGHTS RESERVED
 *
 * This entire notice must be reproduced on all copies of this file
 * and copies of this file may only be made by a person if such person is
 * permitted to do so under the terms of a subsisting license agreement
 * from Arm Limited or its affiliates.
 *
 *      SVN Information
 *
 *      Checked In          : $Date: 2024/01/30 10:58:32 GMT $
 *
 *      Revision            : $Revision: 2 $
 *
 *      Release Information : Cortex-M System Design Kit-r1p1-00rel0
 *-----------------------------------------------------------------------------
 */

#include "mcu_debugtester_interface.h" // For definition of interface to the debug tester
#include "MCUSDK_driver.c"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)

void EnableDebugTester(void)
{
  uint32_t i;


  //
  // Initialise GPIO from MCU to Debug Tester
  //

  GPIO_REGS->PWR_EN.packed_w = 0xAB000001;

  //Initialize the GPIO0 higher 8 bits output value, set to 0
  GPIO_REGS->DOUT.packed_w = (0x00000000);
  //GPIO_REGS->DIN.packed_wOUT =  (0x00000000);    //set GPIO output to 0 for default value, disable the function strobe
  GPIO_REGS->DOUT_EN.packed_w = DEBUG_CMD;    // set specified bit in out enable register
  //MCUSDK_gpio_SetOutEnable (GPIO_REGS, DEBUG_CMD);    // set specified bit in out enable register


  //
  // Enable the Debug Tester in the testbench
  //

  // send command to enable the connection to debug tester
  UartPutc((char) DBG_ESCAPE); //send ESCAPE code
  UartPutc((char) DBG_CONNECT_ENABLE); //send debug test enable command
  puts("\nEnabling debug tester...\n");
  // If debug tester is not present,
  if((GPIO_REGS->DIN.packed_w & DEBUG_ERROR) != 0)
    {
      puts("DBGERROR bit (debug error) asserted.\n");
      puts("Debug tester not available:\n");
      puts("1: The ARM_MCUSDK_INCLUDE_DEBUG_TESTER macro is not defined, or\n");
      puts("2: Cortex-M0 DesignStart is used\n");
      puts("** TEST SKIPPED **\n");
      // End simulation
      UartEndSimulation();
    }


  //
  // Initialise the Communication Region
  // (Zero the 4 words above Stack Top)
  //

  for(i=0; i<4 ; i++)
    {
      DEBUGTESTERDATA[i] = 0;
    }
}


void DisableDebugTester(void)
{
  //send command to disable the connection to debug tester
  UartPutc((char) DBG_ESCAPE); //send debug test disable command,
  UartPutc((char) DBG_CONNECT_DISABLE); //send debug test disable command,
  UartEndSimulation();  //stop simulation
}


//===========================================================================
// Start a function running on the debug tester
//===========================================================================
void StartDebugTester(uint32_t Function)
{
  // Write function onto function select pins
  GPIO_REGS->DOUT_EN.packed_w = DEBUG_CMD;    // set specified bit in out enable register

  //setup function select and function strobe
  MCUSDK_gpio_MaskedWrite(GPIO_REGS, Function<<DEBUG_BIT_LOC, DEBUG_CMD);
  GPIO_REGS->DOUT_15_12.DOUT_15_12.dout_13 = 1;
  //MCUSDK_gpio_MaskedWrite(GPIO_REGS, DEBUG_STROBE, DEBUG_STROBE);

  // Wait to see Running asserted
  while((GPIO_REGS->DIN.packed_w & DEBUG_RUNNING) == 0);

  // Clear strobe
  //MCUSDK_gpio_MaskedWrite(GPIO_REGS, 0x0, DEBUG_STROBE);
  //GPIO_REGS->DOUT_15_12.packed_w = 0x00000000;
  GPIO_REGS->DOUT_15_12.DOUT_15_12.dout_13 = 0;
}


//===========================================================================
// Check that a debug tester function completed
// Return pass/fail accordingly
//===========================================================================
uint32_t CheckDebugTester(void)
{
  // Wait to see Running deasserted
  while((GPIO_REGS->DIN.packed_w & DEBUG_RUNNING)!= 0);

  // Return status, check ERROR bit
  if((GPIO_REGS->DIN.packed_w & DEBUG_ERROR) == 0)
    {
      return TEST_PASS;
    }
  else
    {
      return TEST_FAIL;
    }
}


//===========================================================================
// Execute a debug tester function
//===========================================================================
uint32_t CallDebugTester(uint32_t Function)
{
  StartDebugTester(Function);
  return CheckDebugTester();
}

