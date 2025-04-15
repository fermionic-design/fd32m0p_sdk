import mcu_ctrl
import dma
import event_fabric
import iomux
import otp
import comp
import opamp
import i2c
import uart
import rtc
import fd_watchdog
import dac
import vref
import fd_timer
import timer_tima_num_input2
import timer_timg_num_input2
import flash
import secure_ip_cpu
import gpio
import crc
import spi
import adc

class fd32m0p:
	def __init__(self,dev):
		self.mcu_ctrl = mcu_ctrl.mcu_ctrl(dev,0x3FFC0000)
		self.dma = dma.dma(dev,0x3FFC2000)
		self.event_fabric = event_fabric.event_fabric(dev,0x3FFC3000)
		self.iomux = iomux.iomux(dev,0x3FFC4000)
		self.otp = otp.otp(dev,0x3FFC5000)
		self.comp_0 = comp.comp(dev,0x3FFC6000)
		self.comp_1 = comp.comp(dev,0x3FFC7000)
		self.comp_2 = comp.comp(dev,0x3FFC8000)
		self.opa_0 = opamp.opamp(dev,0x3FFC9000)
		self.i2c_0 = i2c.i2c(dev,0x3FFCA000)
		self.i2c_1 = i2c.i2c(dev,0x3FFCB000)
		self.uart_0 = uart.uart(dev,0x3FFCC000)
		self.rtc = rtc.rtc(dev,0x3FFCD000)
		self.wdog_0 = fd_watchdog.fd_watchdog(dev,0x3FFCE000)
		self.wdog_1 = fd_watchdog.fd_watchdog(dev,0x3FFCF000)
		self.dac = dac.dac(dev,0x3FFD1000)
		self.vref = vref.vref(dev,0x3FFD2000)
		self.uart_1 = uart.uart(dev,0x3FFD3000)
		self.timer_a0 = fd_timer.fd_timer(dev,0x3FFD4000)
		self.timer_a1 = timer_tima_num_input2.timer_tima_num_input2(dev,0x3FFD5000)
		self.timer_g0 = timer_timg_num_input2.timer_timg_num_input2(dev,0x3FFD6000)
		self.timer_g1 = timer_timg_num_input2.timer_timg_num_input2(dev,0x3FFD7000)
		self.flash = flash.flash(dev,0x3FFDC000)
		self.opa_1 = opamp.opamp(dev,0x3FFDD000)
		self.secure_ip_cpu = secure_ip_cpu.secure_ip_cpu(dev,0x3FFDE000)
		self.gpio = gpio.gpio(dev,0x4001_0000)
		self.crc = crc.crc(dev,0x4002_0000)
		self.spi = spi.spi(dev,0x4003_0000)
		self.adc_0 = adc.adc(dev,0x4004_0000)
		self.adc_1 = adc.adc(dev,0x4005_0000)
		self.gpio_dma = gpio.gpio(dev,0x4006_0000)

# End of Class