class DESC:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.module_type = 0
		self.modue_subtype = 0
		self.major_rev = 0
		self.minor_rev = 0
	def write(self):
		val = 0
		val |= self.module_type << 0
		val |= self.modue_subtype << 8
		val |= self.major_rev << 16
		val |= self.minor_rev << 20
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.module_type = (val & 0xFF) >> 0
		self.modue_subtype = (val & 0xFF00) >> 8
		self.major_rev = (val & 0xF0000) >> 16
		self.minor_rev = (val & 0xF00000) >> 20
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PWR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.pwr_en = 0
		self.pwr_en_key = 0
	def write(self):
		val = 0
		val |= self.pwr_en << 0
		val |= self.pwr_en_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pwr_en = (val & 0x01) >> 0
		self.pwr_en_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.rst = 0
		self.rst_sts_clr = 0
		self.rst_key = 0
	def write(self):
		val = 0
		val |= self.rst << 0
		val |= self.rst_sts_clr << 1
		val |= self.rst_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst = (val & 0x01) >> 0
		self.rst_sts_clr = (val & 0x02) >> 1
		self.rst_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.rst_sts = 0
	def write(self):
		val = 0
		val |= self.rst_sts << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst_sts = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.time_prd_exp = 0
		self.restart_in_closed_window = 0
		self.restart_reg_incorrect_data = 0
		self.wr_to_ctl_regs_after_wwdt_en = 0
		self.wrg_pwd_or_access_to_ctrl_regs = 0
	def write(self):
		val = 0
		val |= self.time_prd_exp << 0
		val |= self.restart_in_closed_window << 1
		val |= self.restart_reg_incorrect_data << 2
		val |= self.wr_to_ctl_regs_after_wwdt_en << 3
		val |= self.wrg_pwd_or_access_to_ctrl_regs << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.time_prd_exp = (val & 0x01) >> 0
		self.restart_in_closed_window = (val & 0x02) >> 1
		self.restart_reg_incorrect_data = (val & 0x04) >> 2
		self.wr_to_ctl_regs_after_wwdt_en = (val & 0x08) >> 3
		self.wrg_pwd_or_access_to_ctrl_regs = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.time_prd_exp_en = 0
		self.restart_in_closed_window_en = 0
		self.restart_reg_incorrect_data_en = 0
		self.wr_to_ctl_regs_after_wwdt_en_en = 0
		self.wrg_pwd_or_access_to_ctrl_regs_en = 0
	def write(self):
		val = 0
		val |= self.time_prd_exp_en << 0
		val |= self.restart_in_closed_window_en << 1
		val |= self.restart_reg_incorrect_data_en << 2
		val |= self.wr_to_ctl_regs_after_wwdt_en_en << 3
		val |= self.wrg_pwd_or_access_to_ctrl_regs_en << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.time_prd_exp_en = (val & 0x01) >> 0
		self.restart_in_closed_window_en = (val & 0x02) >> 1
		self.restart_reg_incorrect_data_en = (val & 0x04) >> 2
		self.wr_to_ctl_regs_after_wwdt_en_en = (val & 0x08) >> 3
		self.wrg_pwd_or_access_to_ctrl_regs_en = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.time_prd_exp_nmi_en = 0
		self.restart_within_closed_window_nmi_en = 0
		self.restart_reg_incorrect_data_nmi_en = 0
		self.wr_to_ctl_regs_after_wwdt_en_nmi_en = 0
		self.wrg_pwd_or_access_to_ctrl_regs_nmi_en = 0
	def write(self):
		val = 0
		val |= self.time_prd_exp_nmi_en << 0
		val |= self.restart_within_closed_window_nmi_en << 1
		val |= self.restart_reg_incorrect_data_nmi_en << 2
		val |= self.wr_to_ctl_regs_after_wwdt_en_nmi_en << 3
		val |= self.wrg_pwd_or_access_to_ctrl_regs_nmi_en << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.time_prd_exp_nmi_en = (val & 0x01) >> 0
		self.restart_within_closed_window_nmi_en = (val & 0x02) >> 1
		self.restart_reg_incorrect_data_nmi_en = (val & 0x04) >> 2
		self.wr_to_ctl_regs_after_wwdt_en_nmi_en = (val & 0x08) >> 3
		self.wrg_pwd_or_access_to_ctrl_regs_nmi_en = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.time_prd_exp_event_en = 0
	def write(self):
		val = 0
		val |= self.time_prd_exp_event_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.time_prd_exp_event_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.time_prd_exp_sw_set = 0
		self.restart_within_closed_window_sw_set = 0
		self.restart_reg_incorrect_data_sw_set = 0
		self.wr_to_ctl_regs_after_wwdt_en_sw_set = 0
		self.wrg_pwd_or_access_to_ctrl_regs_sw_set = 0
	def write(self):
		val = 0
		val |= self.time_prd_exp_sw_set << 0
		val |= self.restart_within_closed_window_sw_set << 1
		val |= self.restart_reg_incorrect_data_sw_set << 2
		val |= self.wr_to_ctl_regs_after_wwdt_en_sw_set << 3
		val |= self.wrg_pwd_or_access_to_ctrl_regs_sw_set << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.time_prd_exp_sw_set = (val & 0x01) >> 0
		self.restart_within_closed_window_sw_set = (val & 0x02) >> 1
		self.restart_reg_incorrect_data_sw_set = (val & 0x04) >> 2
		self.wr_to_ctl_regs_after_wwdt_en_sw_set = (val & 0x08) >> 3
		self.wrg_pwd_or_access_to_ctrl_regs_sw_set = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HALT_MODE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.run_in_halt_mode = 0
	def write(self):
		val = 0
		val |= self.run_in_halt_mode << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.run_in_halt_mode = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WWDT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.wwdt_en = 0
		self.wwdt_en_key = 0
	def write(self):
		val = 0
		val |= self.wwdt_en << 0
		val |= self.wwdt_en_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.wwdt_en = (val & 0x01) >> 0
		self.wwdt_en_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WWDT_CTL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.clk_div = 0
		self.total_time_period = 0
		self.closed_window = 0
		self.is_timer_mode = 0
		self.timer_repeat = 0
		self.stop_in_sleep_mode = 0
		self.sleep_policy_rst = 0
		self.violation_gen = 0
		self.wwdt_ctl0_key = 0
	def write(self):
		val = 0
		val |= self.clk_div << 0
		val |= self.total_time_period << 3
		val |= self.closed_window << 6
		val |= self.is_timer_mode << 9
		val |= self.timer_repeat << 10
		val |= self.stop_in_sleep_mode << 11
		val |= self.sleep_policy_rst << 12
		val |= self.violation_gen << 13
		val |= self.wwdt_ctl0_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_div = (val & 0x07) >> 0
		self.total_time_period = (val & 0x38) >> 3
		self.closed_window = (val & 0x1C0) >> 6
		self.is_timer_mode = (val & 0x200) >> 9
		self.timer_repeat = (val & 0x400) >> 10
		self.stop_in_sleep_mode = (val & 0x800) >> 11
		self.sleep_policy_rst = (val & 0x1000) >> 12
		self.violation_gen = (val & 0x2000) >> 13
		self.wwdt_ctl0_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WWDT_CTL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.total_wait_time_after_violation = 0
		self.wwdt_enabled_after_violation = 0
		self.wwdt_ctl1_key = 0
	def write(self):
		val = 0
		val |= self.total_wait_time_after_violation << 0
		val |= self.wwdt_enabled_after_violation << 16
		val |= self.wwdt_ctl1_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.total_wait_time_after_violation = (val & 0xFFFF) >> 0
		self.wwdt_enabled_after_violation = (val & 0x10000) >> 16
		self.wwdt_ctl1_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WWDT_RESTART:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.restart = 0
	def write(self):
		val = 0
		val |= self.restart << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.restart = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class WWDT_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.run = 0
	def write(self):
		val = 0
		val |= self.run << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.run = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class fd_watchdog:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_NMI_EN = INTR_NMI_EN(dev,base_addr)
		self.EVENT_EN = EVENT_EN(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.HALT_MODE = HALT_MODE(dev,base_addr)
		self.WWDT_EN = WWDT_EN(dev,base_addr)
		self.WWDT_CTL0 = WWDT_CTL0(dev,base_addr)
		self.WWDT_CTL1 = WWDT_CTL1(dev,base_addr)
		self.WWDT_RESTART = WWDT_RESTART(dev,base_addr)
		self.WWDT_STS = WWDT_STS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
