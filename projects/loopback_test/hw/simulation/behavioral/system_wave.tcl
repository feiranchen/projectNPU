#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     system_wave.tcl (Tue Sep  8 14:54:38 2015)
#
#  ISE Simulator Trace Script File
#
#  Trace script files specify signals to save for later
#  display when viewing results of the simulation a graphic
#  format. Comment or uncomment commands to change the set of
#  signals viewed.
#
puts  "Setting up signal tracing ..."

if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

#
#  Trace top-level ports
#
set id [group add "Top level ports"]
source top_level_ports_wave.tcl


#
#  Trace Bus signal ports
#
set id [group add "Bus signal ports" ]
source microblaze_0_ilmb_wave.tcl

source microblaze_0_dlmb_wave.tcl

source axi_interconnect_memory_mapped_lite_0_wave.tcl

#
#  Trace Processor ports
#
set id [group add "Processor ports" ]
source microblaze_0_wave.tcl

#
#  Trace processor registers
#

set id [group add "Processor registers"]
#  Processor registers cannot be displayed for:
#  Module   microblaze_0_wrapper
#  Instance microblaze_0
#  Register display support will be added in a future EDK release

#
#  Trace IP and peripheral ports
#
set id [group add "IP and peripheral ports" ]
source reset_0_wave.tcl

source nf10_mdio_0_wave.tcl

source nf10_axis_gen_check_1_wave.tcl

source nf10_axis_gen_check_0_wave.tcl

source nf10_10g_interface_3_wave.tcl

source nf10_10g_interface_2_wave.tcl

source nf10_10g_interface_1_wave.tcl

source nf10_10g_interface_0_wave.tcl

source microblaze_0_i_bram_ctrl_wave.tcl

source microblaze_0_d_bram_ctrl_wave.tcl

source microblaze_0_bram_block_wave.tcl

source diff_input_buf_3_wave.tcl

source diff_input_buf_2_wave.tcl

source diff_input_buf_1_wave.tcl

source diff_input_buf_0_wave.tcl

source clock_generator_0_wave.tcl

source axi_timebase_wdt_0_wave.tcl

source RS232_Uart_1_wave.tcl

#
#  Trace setup complete. Start tracing the signals.
#

puts  "Signal tracing setup completed."

puts  "Simulate the design with the 'run' command."
