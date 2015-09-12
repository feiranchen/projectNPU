#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Tue Sep  8 14:54:38 2015)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}CLK -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_0_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_1_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_2_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l0_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l0_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l1_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l1_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l2_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l2_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l3_p_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_rx_l3_n_pin -into $id 
wave add $tbpath${ps}nf10_10g_interface_3_xaui_tx_l1_n_pin -into $id 
wave add $tbpath${ps}refclk_A_p -into $id 
wave add $tbpath${ps}refclk_A_n -into $id 
wave add $tbpath${ps}refclk_B_p -into $id 
wave add $tbpath${ps}refclk_B_n -into $id 
wave add $tbpath${ps}refclk_C_p -into $id 
wave add $tbpath${ps}refclk_C_n -into $id 
wave add $tbpath${ps}refclk_D_p -into $id 
wave add $tbpath${ps}refclk_D_n -into $id 
wave add $tbpath${ps}MDC -into $id 
wave add $tbpath${ps}MDIO -into $id 
wave add $tbpath${ps}PHY_RST_N -into $id 

