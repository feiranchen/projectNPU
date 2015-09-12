//-----------------------------------------------------------------------------
// system_stub.v
//-----------------------------------------------------------------------------

module system_stub
  (
    RESET,
    RS232_Uart_1_sout,
    RS232_Uart_1_sin,
    CLK,
    nf10_10g_interface_0_xaui_tx_l0_p_pin,
    nf10_10g_interface_0_xaui_tx_l0_n_pin,
    nf10_10g_interface_0_xaui_tx_l1_p_pin,
    nf10_10g_interface_0_xaui_tx_l1_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_p_pin,
    nf10_10g_interface_0_xaui_tx_l3_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_n_pin,
    nf10_10g_interface_0_xaui_tx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l0_n_pin,
    nf10_10g_interface_0_xaui_rx_l1_p_pin,
    nf10_10g_interface_0_xaui_rx_l1_n_pin,
    nf10_10g_interface_0_xaui_rx_l2_p_pin,
    nf10_10g_interface_0_xaui_rx_l2_n_pin,
    nf10_10g_interface_0_xaui_rx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l3_n_pin,
    nf10_10g_interface_0_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_n_pin,
    nf10_10g_interface_1_xaui_tx_l3_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_p_pin,
    nf10_10g_interface_1_xaui_tx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_rx_l0_n_pin,
    nf10_10g_interface_1_xaui_rx_l1_p_pin,
    nf10_10g_interface_1_xaui_rx_l1_n_pin,
    nf10_10g_interface_1_xaui_rx_l2_p_pin,
    nf10_10g_interface_1_xaui_rx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l3_p_pin,
    nf10_10g_interface_1_xaui_rx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l0_p_pin,
    nf10_10g_interface_2_xaui_tx_l0_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l0_p_pin,
    nf10_10g_interface_2_xaui_rx_l0_n_pin,
    nf10_10g_interface_2_xaui_rx_l1_p_pin,
    nf10_10g_interface_2_xaui_rx_l1_n_pin,
    nf10_10g_interface_2_xaui_rx_l2_p_pin,
    nf10_10g_interface_2_xaui_rx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l3_p_pin,
    nf10_10g_interface_2_xaui_rx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_n_pin,
    nf10_10g_interface_3_xaui_tx_l3_p_pin,
    nf10_10g_interface_3_xaui_tx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l0_p_pin,
    nf10_10g_interface_3_xaui_tx_l0_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l0_p_pin,
    nf10_10g_interface_3_xaui_rx_l0_n_pin,
    nf10_10g_interface_3_xaui_rx_l1_p_pin,
    nf10_10g_interface_3_xaui_rx_l1_n_pin,
    nf10_10g_interface_3_xaui_rx_l2_p_pin,
    nf10_10g_interface_3_xaui_rx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l3_p_pin,
    nf10_10g_interface_3_xaui_rx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_n_pin,
    refclk_A_p,
    refclk_A_n,
    refclk_B_p,
    refclk_B_n,
    refclk_C_p,
    refclk_C_n,
    refclk_D_p,
    refclk_D_n,
    MDC,
    MDIO,
    PHY_RST_N
  );
  input RESET;
  output RS232_Uart_1_sout;
  input RS232_Uart_1_sin;
  input CLK;
  output nf10_10g_interface_0_xaui_tx_l0_p_pin;
  output nf10_10g_interface_0_xaui_tx_l0_n_pin;
  output nf10_10g_interface_0_xaui_tx_l1_p_pin;
  output nf10_10g_interface_0_xaui_tx_l1_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_p_pin;
  output nf10_10g_interface_0_xaui_tx_l3_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_n_pin;
  output nf10_10g_interface_0_xaui_tx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l0_n_pin;
  input nf10_10g_interface_0_xaui_rx_l1_p_pin;
  input nf10_10g_interface_0_xaui_rx_l1_n_pin;
  input nf10_10g_interface_0_xaui_rx_l2_p_pin;
  input nf10_10g_interface_0_xaui_rx_l2_n_pin;
  input nf10_10g_interface_0_xaui_rx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l3_n_pin;
  input nf10_10g_interface_0_xaui_rx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_n_pin;
  output nf10_10g_interface_1_xaui_tx_l3_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_p_pin;
  output nf10_10g_interface_1_xaui_tx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l0_p_pin;
  input nf10_10g_interface_1_xaui_rx_l0_n_pin;
  input nf10_10g_interface_1_xaui_rx_l1_p_pin;
  input nf10_10g_interface_1_xaui_rx_l1_n_pin;
  input nf10_10g_interface_1_xaui_rx_l2_p_pin;
  input nf10_10g_interface_1_xaui_rx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l3_p_pin;
  input nf10_10g_interface_1_xaui_rx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l0_p_pin;
  output nf10_10g_interface_2_xaui_tx_l0_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l0_p_pin;
  input nf10_10g_interface_2_xaui_rx_l0_n_pin;
  input nf10_10g_interface_2_xaui_rx_l1_p_pin;
  input nf10_10g_interface_2_xaui_rx_l1_n_pin;
  input nf10_10g_interface_2_xaui_rx_l2_p_pin;
  input nf10_10g_interface_2_xaui_rx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l3_p_pin;
  input nf10_10g_interface_2_xaui_rx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_n_pin;
  output nf10_10g_interface_3_xaui_tx_l3_p_pin;
  output nf10_10g_interface_3_xaui_tx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l0_p_pin;
  output nf10_10g_interface_3_xaui_tx_l0_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l0_p_pin;
  input nf10_10g_interface_3_xaui_rx_l0_n_pin;
  input nf10_10g_interface_3_xaui_rx_l1_p_pin;
  input nf10_10g_interface_3_xaui_rx_l1_n_pin;
  input nf10_10g_interface_3_xaui_rx_l2_p_pin;
  input nf10_10g_interface_3_xaui_rx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l3_p_pin;
  input nf10_10g_interface_3_xaui_rx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_n_pin;
  input refclk_A_p;
  input refclk_A_n;
  input refclk_B_p;
  input refclk_B_n;
  input refclk_C_p;
  input refclk_C_n;
  input refclk_D_p;
  input refclk_D_n;
  output MDC;
  inout MDIO;
  output PHY_RST_N;

  (* BOX_TYPE = "user_black_box" *)
  system
    system_i (
      .RESET ( RESET ),
      .RS232_Uart_1_sout ( RS232_Uart_1_sout ),
      .RS232_Uart_1_sin ( RS232_Uart_1_sin ),
      .CLK ( CLK ),
      .nf10_10g_interface_0_xaui_tx_l0_p_pin ( nf10_10g_interface_0_xaui_tx_l0_p_pin ),
      .nf10_10g_interface_0_xaui_tx_l0_n_pin ( nf10_10g_interface_0_xaui_tx_l0_n_pin ),
      .nf10_10g_interface_0_xaui_tx_l1_p_pin ( nf10_10g_interface_0_xaui_tx_l1_p_pin ),
      .nf10_10g_interface_0_xaui_tx_l1_n_pin ( nf10_10g_interface_0_xaui_tx_l1_n_pin ),
      .nf10_10g_interface_0_xaui_tx_l2_p_pin ( nf10_10g_interface_0_xaui_tx_l2_p_pin ),
      .nf10_10g_interface_0_xaui_tx_l3_n_pin ( nf10_10g_interface_0_xaui_tx_l3_n_pin ),
      .nf10_10g_interface_0_xaui_tx_l2_n_pin ( nf10_10g_interface_0_xaui_tx_l2_n_pin ),
      .nf10_10g_interface_0_xaui_tx_l3_p_pin ( nf10_10g_interface_0_xaui_tx_l3_p_pin ),
      .nf10_10g_interface_0_xaui_rx_l0_n_pin ( nf10_10g_interface_0_xaui_rx_l0_n_pin ),
      .nf10_10g_interface_0_xaui_rx_l1_p_pin ( nf10_10g_interface_0_xaui_rx_l1_p_pin ),
      .nf10_10g_interface_0_xaui_rx_l1_n_pin ( nf10_10g_interface_0_xaui_rx_l1_n_pin ),
      .nf10_10g_interface_0_xaui_rx_l2_p_pin ( nf10_10g_interface_0_xaui_rx_l2_p_pin ),
      .nf10_10g_interface_0_xaui_rx_l2_n_pin ( nf10_10g_interface_0_xaui_rx_l2_n_pin ),
      .nf10_10g_interface_0_xaui_rx_l3_p_pin ( nf10_10g_interface_0_xaui_rx_l3_p_pin ),
      .nf10_10g_interface_0_xaui_rx_l3_n_pin ( nf10_10g_interface_0_xaui_rx_l3_n_pin ),
      .nf10_10g_interface_0_xaui_rx_l0_p_pin ( nf10_10g_interface_0_xaui_rx_l0_p_pin ),
      .nf10_10g_interface_1_xaui_tx_l3_n_pin ( nf10_10g_interface_1_xaui_tx_l3_n_pin ),
      .nf10_10g_interface_1_xaui_tx_l1_n_pin ( nf10_10g_interface_1_xaui_tx_l1_n_pin ),
      .nf10_10g_interface_1_xaui_tx_l3_p_pin ( nf10_10g_interface_1_xaui_tx_l3_p_pin ),
      .nf10_10g_interface_1_xaui_tx_l0_p_pin ( nf10_10g_interface_1_xaui_tx_l0_p_pin ),
      .nf10_10g_interface_1_xaui_tx_l0_n_pin ( nf10_10g_interface_1_xaui_tx_l0_n_pin ),
      .nf10_10g_interface_1_xaui_tx_l1_p_pin ( nf10_10g_interface_1_xaui_tx_l1_p_pin ),
      .nf10_10g_interface_1_xaui_tx_l2_n_pin ( nf10_10g_interface_1_xaui_tx_l2_n_pin ),
      .nf10_10g_interface_1_xaui_rx_l0_p_pin ( nf10_10g_interface_1_xaui_rx_l0_p_pin ),
      .nf10_10g_interface_1_xaui_rx_l0_n_pin ( nf10_10g_interface_1_xaui_rx_l0_n_pin ),
      .nf10_10g_interface_1_xaui_rx_l1_p_pin ( nf10_10g_interface_1_xaui_rx_l1_p_pin ),
      .nf10_10g_interface_1_xaui_rx_l1_n_pin ( nf10_10g_interface_1_xaui_rx_l1_n_pin ),
      .nf10_10g_interface_1_xaui_rx_l2_p_pin ( nf10_10g_interface_1_xaui_rx_l2_p_pin ),
      .nf10_10g_interface_1_xaui_rx_l2_n_pin ( nf10_10g_interface_1_xaui_rx_l2_n_pin ),
      .nf10_10g_interface_1_xaui_rx_l3_p_pin ( nf10_10g_interface_1_xaui_rx_l3_p_pin ),
      .nf10_10g_interface_1_xaui_rx_l3_n_pin ( nf10_10g_interface_1_xaui_rx_l3_n_pin ),
      .nf10_10g_interface_1_xaui_tx_l2_p_pin ( nf10_10g_interface_1_xaui_tx_l2_p_pin ),
      .nf10_10g_interface_2_xaui_tx_l3_p_pin ( nf10_10g_interface_2_xaui_tx_l3_p_pin ),
      .nf10_10g_interface_2_xaui_tx_l3_n_pin ( nf10_10g_interface_2_xaui_tx_l3_n_pin ),
      .nf10_10g_interface_2_xaui_tx_l0_p_pin ( nf10_10g_interface_2_xaui_tx_l0_p_pin ),
      .nf10_10g_interface_2_xaui_tx_l0_n_pin ( nf10_10g_interface_2_xaui_tx_l0_n_pin ),
      .nf10_10g_interface_2_xaui_tx_l1_p_pin ( nf10_10g_interface_2_xaui_tx_l1_p_pin ),
      .nf10_10g_interface_2_xaui_tx_l2_p_pin ( nf10_10g_interface_2_xaui_tx_l2_p_pin ),
      .nf10_10g_interface_2_xaui_tx_l2_n_pin ( nf10_10g_interface_2_xaui_tx_l2_n_pin ),
      .nf10_10g_interface_2_xaui_rx_l0_p_pin ( nf10_10g_interface_2_xaui_rx_l0_p_pin ),
      .nf10_10g_interface_2_xaui_rx_l0_n_pin ( nf10_10g_interface_2_xaui_rx_l0_n_pin ),
      .nf10_10g_interface_2_xaui_rx_l1_p_pin ( nf10_10g_interface_2_xaui_rx_l1_p_pin ),
      .nf10_10g_interface_2_xaui_rx_l1_n_pin ( nf10_10g_interface_2_xaui_rx_l1_n_pin ),
      .nf10_10g_interface_2_xaui_rx_l2_p_pin ( nf10_10g_interface_2_xaui_rx_l2_p_pin ),
      .nf10_10g_interface_2_xaui_rx_l2_n_pin ( nf10_10g_interface_2_xaui_rx_l2_n_pin ),
      .nf10_10g_interface_2_xaui_rx_l3_p_pin ( nf10_10g_interface_2_xaui_rx_l3_p_pin ),
      .nf10_10g_interface_2_xaui_rx_l3_n_pin ( nf10_10g_interface_2_xaui_rx_l3_n_pin ),
      .nf10_10g_interface_2_xaui_tx_l1_n_pin ( nf10_10g_interface_2_xaui_tx_l1_n_pin ),
      .nf10_10g_interface_3_xaui_tx_l3_p_pin ( nf10_10g_interface_3_xaui_tx_l3_p_pin ),
      .nf10_10g_interface_3_xaui_tx_l3_n_pin ( nf10_10g_interface_3_xaui_tx_l3_n_pin ),
      .nf10_10g_interface_3_xaui_tx_l0_p_pin ( nf10_10g_interface_3_xaui_tx_l0_p_pin ),
      .nf10_10g_interface_3_xaui_tx_l0_n_pin ( nf10_10g_interface_3_xaui_tx_l0_n_pin ),
      .nf10_10g_interface_3_xaui_tx_l1_p_pin ( nf10_10g_interface_3_xaui_tx_l1_p_pin ),
      .nf10_10g_interface_3_xaui_tx_l2_p_pin ( nf10_10g_interface_3_xaui_tx_l2_p_pin ),
      .nf10_10g_interface_3_xaui_tx_l2_n_pin ( nf10_10g_interface_3_xaui_tx_l2_n_pin ),
      .nf10_10g_interface_3_xaui_rx_l0_p_pin ( nf10_10g_interface_3_xaui_rx_l0_p_pin ),
      .nf10_10g_interface_3_xaui_rx_l0_n_pin ( nf10_10g_interface_3_xaui_rx_l0_n_pin ),
      .nf10_10g_interface_3_xaui_rx_l1_p_pin ( nf10_10g_interface_3_xaui_rx_l1_p_pin ),
      .nf10_10g_interface_3_xaui_rx_l1_n_pin ( nf10_10g_interface_3_xaui_rx_l1_n_pin ),
      .nf10_10g_interface_3_xaui_rx_l2_p_pin ( nf10_10g_interface_3_xaui_rx_l2_p_pin ),
      .nf10_10g_interface_3_xaui_rx_l2_n_pin ( nf10_10g_interface_3_xaui_rx_l2_n_pin ),
      .nf10_10g_interface_3_xaui_rx_l3_p_pin ( nf10_10g_interface_3_xaui_rx_l3_p_pin ),
      .nf10_10g_interface_3_xaui_rx_l3_n_pin ( nf10_10g_interface_3_xaui_rx_l3_n_pin ),
      .nf10_10g_interface_3_xaui_tx_l1_n_pin ( nf10_10g_interface_3_xaui_tx_l1_n_pin ),
      .refclk_A_p ( refclk_A_p ),
      .refclk_A_n ( refclk_A_n ),
      .refclk_B_p ( refclk_B_p ),
      .refclk_B_n ( refclk_B_n ),
      .refclk_C_p ( refclk_C_p ),
      .refclk_C_n ( refclk_C_n ),
      .refclk_D_p ( refclk_D_p ),
      .refclk_D_n ( refclk_D_n ),
      .MDC ( MDC ),
      .MDIO ( MDIO ),
      .PHY_RST_N ( PHY_RST_N )
    );

endmodule

module system
  (
    RESET,
    RS232_Uart_1_sout,
    RS232_Uart_1_sin,
    CLK,
    nf10_10g_interface_0_xaui_tx_l0_p_pin,
    nf10_10g_interface_0_xaui_tx_l0_n_pin,
    nf10_10g_interface_0_xaui_tx_l1_p_pin,
    nf10_10g_interface_0_xaui_tx_l1_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_p_pin,
    nf10_10g_interface_0_xaui_tx_l3_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_n_pin,
    nf10_10g_interface_0_xaui_tx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l0_n_pin,
    nf10_10g_interface_0_xaui_rx_l1_p_pin,
    nf10_10g_interface_0_xaui_rx_l1_n_pin,
    nf10_10g_interface_0_xaui_rx_l2_p_pin,
    nf10_10g_interface_0_xaui_rx_l2_n_pin,
    nf10_10g_interface_0_xaui_rx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l3_n_pin,
    nf10_10g_interface_0_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_n_pin,
    nf10_10g_interface_1_xaui_tx_l3_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_p_pin,
    nf10_10g_interface_1_xaui_tx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_rx_l0_n_pin,
    nf10_10g_interface_1_xaui_rx_l1_p_pin,
    nf10_10g_interface_1_xaui_rx_l1_n_pin,
    nf10_10g_interface_1_xaui_rx_l2_p_pin,
    nf10_10g_interface_1_xaui_rx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l3_p_pin,
    nf10_10g_interface_1_xaui_rx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l0_p_pin,
    nf10_10g_interface_2_xaui_tx_l0_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l0_p_pin,
    nf10_10g_interface_2_xaui_rx_l0_n_pin,
    nf10_10g_interface_2_xaui_rx_l1_p_pin,
    nf10_10g_interface_2_xaui_rx_l1_n_pin,
    nf10_10g_interface_2_xaui_rx_l2_p_pin,
    nf10_10g_interface_2_xaui_rx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l3_p_pin,
    nf10_10g_interface_2_xaui_rx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_n_pin,
    nf10_10g_interface_3_xaui_tx_l3_p_pin,
    nf10_10g_interface_3_xaui_tx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l0_p_pin,
    nf10_10g_interface_3_xaui_tx_l0_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l0_p_pin,
    nf10_10g_interface_3_xaui_rx_l0_n_pin,
    nf10_10g_interface_3_xaui_rx_l1_p_pin,
    nf10_10g_interface_3_xaui_rx_l1_n_pin,
    nf10_10g_interface_3_xaui_rx_l2_p_pin,
    nf10_10g_interface_3_xaui_rx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l3_p_pin,
    nf10_10g_interface_3_xaui_rx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_n_pin,
    refclk_A_p,
    refclk_A_n,
    refclk_B_p,
    refclk_B_n,
    refclk_C_p,
    refclk_C_n,
    refclk_D_p,
    refclk_D_n,
    MDC,
    MDIO,
    PHY_RST_N
  );
  input RESET;
  output RS232_Uart_1_sout;
  input RS232_Uart_1_sin;
  input CLK;
  output nf10_10g_interface_0_xaui_tx_l0_p_pin;
  output nf10_10g_interface_0_xaui_tx_l0_n_pin;
  output nf10_10g_interface_0_xaui_tx_l1_p_pin;
  output nf10_10g_interface_0_xaui_tx_l1_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_p_pin;
  output nf10_10g_interface_0_xaui_tx_l3_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_n_pin;
  output nf10_10g_interface_0_xaui_tx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l0_n_pin;
  input nf10_10g_interface_0_xaui_rx_l1_p_pin;
  input nf10_10g_interface_0_xaui_rx_l1_n_pin;
  input nf10_10g_interface_0_xaui_rx_l2_p_pin;
  input nf10_10g_interface_0_xaui_rx_l2_n_pin;
  input nf10_10g_interface_0_xaui_rx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l3_n_pin;
  input nf10_10g_interface_0_xaui_rx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_n_pin;
  output nf10_10g_interface_1_xaui_tx_l3_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_p_pin;
  output nf10_10g_interface_1_xaui_tx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l0_p_pin;
  input nf10_10g_interface_1_xaui_rx_l0_n_pin;
  input nf10_10g_interface_1_xaui_rx_l1_p_pin;
  input nf10_10g_interface_1_xaui_rx_l1_n_pin;
  input nf10_10g_interface_1_xaui_rx_l2_p_pin;
  input nf10_10g_interface_1_xaui_rx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l3_p_pin;
  input nf10_10g_interface_1_xaui_rx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l0_p_pin;
  output nf10_10g_interface_2_xaui_tx_l0_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l0_p_pin;
  input nf10_10g_interface_2_xaui_rx_l0_n_pin;
  input nf10_10g_interface_2_xaui_rx_l1_p_pin;
  input nf10_10g_interface_2_xaui_rx_l1_n_pin;
  input nf10_10g_interface_2_xaui_rx_l2_p_pin;
  input nf10_10g_interface_2_xaui_rx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l3_p_pin;
  input nf10_10g_interface_2_xaui_rx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_n_pin;
  output nf10_10g_interface_3_xaui_tx_l3_p_pin;
  output nf10_10g_interface_3_xaui_tx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l0_p_pin;
  output nf10_10g_interface_3_xaui_tx_l0_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l0_p_pin;
  input nf10_10g_interface_3_xaui_rx_l0_n_pin;
  input nf10_10g_interface_3_xaui_rx_l1_p_pin;
  input nf10_10g_interface_3_xaui_rx_l1_n_pin;
  input nf10_10g_interface_3_xaui_rx_l2_p_pin;
  input nf10_10g_interface_3_xaui_rx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l3_p_pin;
  input nf10_10g_interface_3_xaui_rx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_n_pin;
  input refclk_A_p;
  input refclk_A_n;
  input refclk_B_p;
  input refclk_B_n;
  input refclk_C_p;
  input refclk_C_n;
  input refclk_D_p;
  input refclk_D_n;
  output MDC;
  inout MDIO;
  output PHY_RST_N;
endmodule

