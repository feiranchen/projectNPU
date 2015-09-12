// File ../test1 translated with vhd2vl v2.0 VHDL to Verilog RTL translator
// Copyright (C) 2001 Vincenzo Liguori - Ocean Logic Pty Ltd - http://www.ocean-logic.com
// Modifications (C) 2006 Mark Gonzales - PMC Sierra Inc
// 
// vhd2vl comes with ABSOLUTELY NO WARRANTY
// ALWAYS RUN A FORMAL VERIFICATION TOOL TO COMPARE VHDL INPUT TO VERILOG OUTPUT 
// 
// This is free software, and you are welcome to redistribute it under certain conditions.
// See the license file license.txt included with the source for details.

//----------------------------------------------------------------------------
//
//  NetFPGA-10G http://www.netfpga.org
//
//  File:
//        nf10_axis_gen_check.vhd
//
//  Library:
//        hw/std/pcores/nf10_axis_gen_check_v1_00_a
//
//  Author:
//        Michaela Blott
//
//  Description:a
//                Hardware component that generates and checks packets.
//        Currently the generator generates bit-wise shifted pattern. No valid
//        packet pattern and/or higher layer structure is programmed.
//
//  Copyright notice:
//        Copyright (C) 2010, 2011 Xilinx, Inc.
//
//  Licence:
//        This file is part of the NetFPGA 10G development base package.
//
//        This file is free code: you can redistribute it and/or modify it under
//        the terms of the GNU Lesser General Public License version 2.1 as
//        published by the Free Software Foundation.
//
//        This package is distributed in the hope that it will be useful, but
//        WITHOUT ANY WARRANTY; without even the implied warranty of
//        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//        Lesser General Public License for more details.
//
//        You should have received a copy of the GNU Lesser General Public
//        License along with the NetFPGA source package.  If not, see
//        http://www.gnu.org/licenses/.
//
//

module nf10_axis_gen_check(
  aclk,
  aresetn,
  m_axis_tdata,
  m_axis_tstrb,
  m_axis_tuser,
  m_axis_tvalid,
  m_axis_tready,
  m_axis_tlast,
  s_axis_tdata,
  s_axis_tstrb,
  s_axis_tuser,
  s_axis_tvalid,
  s_axis_tready,
  s_axis_tlast,
  S_AXI_ACLK,
  S_AXI_ARESETN,
  S_AXI_AWADDR,
  S_AXI_AWVALID,
  S_AXI_AWREADY,
  S_AXI_WDATA,
  S_AXI_WSTRB,
  S_AXI_WVALID,
  S_AXI_WREADY,
  S_AXI_BRESP,
  S_AXI_BVALID,
  S_AXI_BREADY,
  S_AXI_ARADDR,
  S_AXI_ARVALID,
  S_AXI_ARREADY,
  S_AXI_RDATA,
  S_AXI_RRESP,
  S_AXI_RVALID,
  S_AXI_RREADY
);

parameter[31:0] C_BASEADDR=0;
parameter[31:0] C_HIGHADDR=2;
parameter C_M_AXIS_DATA_WIDTH=64;
parameter C_S_AXIS_DATA_WIDTH=64;
parameter C_S_AXIS_TUSER_WIDTH=128;
parameter C_M_AXIS_TUSER_WIDTH=128;
parameter C_GEN_PKT_SIZE=16;
parameter C_CHECK_PKT_SIZE=16;
parameter C_IFG_SIZE=5;
parameter C_S_AXI_ADDR_WIDTH=32;
parameter C_S_AXI_DATA_WIDTH=32;
input aclk;
input aresetn;
// axi streaming data interface
output[C_M_AXIS_DATA_WIDTH - 1:0] m_axis_tdata;
output[C_M_AXIS_DATA_WIDTH / 8 - 1:0] m_axis_tstrb;
output[C_M_AXIS_TUSER_WIDTH - 1:0] m_axis_tuser;
output m_axis_tvalid;
input m_axis_tready;
output m_axis_tlast;
input[C_S_AXIS_DATA_WIDTH - 1:0] s_axis_tdata;
input[C_S_AXIS_DATA_WIDTH / 8 - 1:0] s_axis_tstrb;
input[C_S_AXIS_TUSER_WIDTH - 1:0] s_axis_tuser;
input s_axis_tvalid;
output s_axis_tready;
input s_axis_tlast;
// axi lite control/status interface
input S_AXI_ACLK;
input S_AXI_ARESETN;
input[C_S_AXI_ADDR_WIDTH - 1:0] S_AXI_AWADDR;
input S_AXI_AWVALID;
output S_AXI_AWREADY;
input[C_S_AXI_DATA_WIDTH - 1:0] S_AXI_WDATA;
input[((C_S_AXI_DATA_WIDTH / 8)) - 1:0] S_AXI_WSTRB;
input S_AXI_WVALID;
output S_AXI_WREADY;
output[1:0] S_AXI_BRESP;
output S_AXI_BVALID;
input S_AXI_BREADY;
input[C_S_AXI_ADDR_WIDTH - 1:0] S_AXI_ARADDR;
input S_AXI_ARVALID;
output S_AXI_ARREADY;
output[C_S_AXI_DATA_WIDTH - 1:0] S_AXI_RDATA;
output[1:0] S_AXI_RRESP;
output S_AXI_RVALID;
input S_AXI_RREADY;

wire   aclk;
wire   aresetn;
reg  [C_M_AXIS_DATA_WIDTH - 1:0] m_axis_tdata;
reg  [C_M_AXIS_DATA_WIDTH / 8 - 1:0] m_axis_tstrb;
wire  [(C_M_AXIS_TUSER_WIDTH - 1):0] m_axis_tuser;
reg   m_axis_tvalid;
wire   m_axis_tready;
wire   m_axis_tlast;
wire  [C_S_AXIS_DATA_WIDTH - 1:0] s_axis_tdata;
wire  [C_S_AXIS_DATA_WIDTH / 8 - 1:0] s_axis_tstrb;
wire  [C_S_AXIS_TUSER_WIDTH - 1:0] s_axis_tuser;
wire   s_axis_tvalid;
wire   s_axis_tready;
wire   s_axis_tlast;
wire   S_AXI_ACLK;
wire   S_AXI_ARESETN;
wire  [C_S_AXI_ADDR_WIDTH - 1:0] S_AXI_AWADDR;
wire   S_AXI_AWVALID;
wire   S_AXI_AWREADY;
wire  [C_S_AXI_DATA_WIDTH - 1:0] S_AXI_WDATA;
wire  [((C_S_AXI_DATA_WIDTH / 8)) - 1:0] S_AXI_WSTRB;
wire   S_AXI_WVALID;
wire   S_AXI_WREADY;
wire  [1:0] S_AXI_BRESP;
wire   S_AXI_BVALID;
wire   S_AXI_BREADY;
wire  [C_S_AXI_ADDR_WIDTH - 1:0] S_AXI_ARADDR;
wire   S_AXI_ARVALID;
wire   S_AXI_ARREADY;
wire  [C_S_AXI_DATA_WIDTH - 1:0] S_AXI_RDATA;
wire  [1:0] S_AXI_RRESP;
wire   S_AXI_RVALID;
wire   S_AXI_RREADY;


// ROM should be inferred as BRAM during XST
parameter CHECK_IDLE = 2'b 00;
parameter CHECK_FINISH = 2'b 01;
parameter CHECK_COMPARE = 2'b 11;
parameter CHECK_WAIT_LAST = 2'b 10;
parameter GEN_PKT = 2'b 00;
parameter GEN_IFG = 2'b 01;
parameter GEN_FINISH = 2'b 11;
reg [15:0] gen_word_num;
reg [1:0] gen_state;
reg [1:0] check_state;
reg [15:0] check_word_num;
reg [31:0] tx_count;
reg [31:0] rx_count;
reg [31:0] err_count;
wire  count_reset;
reg  ok;
reg [C_M_AXIS_DATA_WIDTH - 1:0] pkt_tx_buf;
reg [C_S_AXIS_DATA_WIDTH - 1:0] pkt_rx_buf;
wire [255:0] seed;

  assign seed = 256'hCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEFCAFEBEEF;
  axi4_lite_regs #(
    .ADDR_WIDTH(C_S_AXI_ADDR_WIDTH),
    .DATA_WIDTH(C_S_AXI_DATA_WIDTH)
    )
  regs(
    .tx_count(tx_count),
    .rx_count(rx_count),
    .err_count(err_count),
    .count_reset(count_reset),
    .AXIS_ACLK(aclk),
    .ACLK(S_AXI_ACLK),
    .ARESETN(S_AXI_ARESETN),
    .AWADDR(S_AXI_AWADDR),
    .AWVALID(S_AXI_AWVALID),
    .AWREADY(S_AXI_AWREADY),
    .WDATA(S_AXI_WDATA),
    .WSTRB(S_AXI_WSTRB),
    .WVALID(S_AXI_WVALID),
    .WREADY(S_AXI_WREADY),
    .BRESP(S_AXI_BRESP),
    .BVALID(S_AXI_BVALID),
    .BREADY(S_AXI_BREADY),
    .ARADDR(S_AXI_ARADDR),
    .ARVALID(S_AXI_ARVALID),
    .ARREADY(S_AXI_ARREADY),
    .RDATA(S_AXI_RDATA),
    .RRESP(S_AXI_RRESP),
    .RVALID(S_AXI_RVALID),
    .RREADY(S_AXI_RREADY)
    );

  assign m_axis_tlast = (gen_word_num == (C_GEN_PKT_SIZE - 1)) ? 1'b 1 : 1'b 0;
  assign m_axis_tuser = {C_M_AXIS_TUSER_WIDTH{1'b0}};
  // Dummy TUSER
  always @(posedge aclk or negedge aresetn) begin

    // on reset, set m_axis_tstrb to 8 bits of 0
    //           set m_axis_tvalid to 0
    //           set gen_word_num to 16 bits of 0
    //           set tx_count to 32 bits of 0
    //           go to GEN_IFG state (inter frame gap)
    //           note: C_M_AXIS_DATA_WIDTH = 64 bits
    if(aresetn == 1'b0) begin
      m_axis_tstrb <= {C_M_AXIS_DATA_WIDTH / 8 {1'b0}};
      m_axis_tvalid <= 1'b 0;
      gen_word_num <= {16{1'b0}};
      tx_count <= 32'h333;//{32{1'b0}};
      gen_state <= GEN_IFG;

      // initiate to between frames
    end else begin
      //feiran 
      tx_count <= 32'h234;
      if(gen_state == GEN_PKT) begin
        //feiran
        tx_count <= 32'h444;
        m_axis_tstrb <= {C_M_AXIS_DATA_WIDTH / 8 {1'b1}};
        m_axis_tvalid <= 1'b 1;
        if((m_axis_tready == 1'b 1)) begin
          //feiran
          tx_count <= 32'h555;
          gen_word_num <= gen_word_num + 1;
          if((gen_word_num == (C_GEN_PKT_SIZE - 1))) begin
            m_axis_tstrb <= {C_M_AXIS_DATA_WIDTH / 8 {1'b0}};
            m_axis_tvalid <= 1'b 0;
            tx_count <= tx_count + 1;
            //feiran commented
            // gen_state <= GEN_IFG;
          end
          else begin
            pkt_tx_buf <= {pkt_tx_buf[0] ,pkt_tx_buf[C_M_AXIS_DATA_WIDTH - 1:1] };
            m_axis_tdata <= {pkt_tx_buf[0] ,pkt_tx_buf[C_M_AXIS_DATA_WIDTH - 1:1] };
          end
        end
      end

      // during the inter frame gap, set m_axis_tstrb to 8 bits of 0
      //                             set valid to 0
      //                             
      // note: C_GEN_PKT_SIZE = 16
      //       C_IFG_SIZE = 5
      else if(gen_state == GEN_IFG) begin
        //feiran
        tx_count <= 32'h666;
        m_axis_tstrb <= {C_M_AXIS_DATA_WIDTH / 8 {1'b0}};
        m_axis_tvalid <= 1'b 0;
        //feiran
        // if((m_axis_tready == 1'b 1)) begin
        //   gen_word_num <= gen_word_num + 1;
        //   if(gen_word_num == (C_GEN_PKT_SIZE + C_IFG_SIZE - 1)) begin
        //     if((count_reset == 1'b 1)) begin
        //       gen_state <= GEN_IFG;
        //       // Hold state at GEN_IFG gently...
        //       tx_count <= 32'h3334;//32'b0;
        //     end
        //     else begin
        //       gen_state <= GEN_FINISH;
        //     end
        //   end
        // end
      end


      else if(gen_state == GEN_FINISH) begin
        //feiran
        tx_count <= 32'h777;
        m_axis_tstrb <= {(((C_M_AXIS_DATA_WIDTH / 8 - 1))-((0))+1){1'b1}};
        m_axis_tvalid <= 1'b 1;
        m_axis_tdata <= seed[C_M_AXIS_DATA_WIDTH - 1:0] ;
        pkt_tx_buf <= seed[C_M_AXIS_DATA_WIDTH - 1:0] ;
        gen_word_num <= 16'b0;
        //feiran commented
        // gen_state <= GEN_PKT;
      end
    end
  end

  assign s_axis_tready = 1'b 1;
  always @(posedge aclk or negedge aresetn) begin
    if(aresetn == 1'b0) begin
      check_state <= CHECK_IDLE;
      rx_count <= 32'h133; //b'0
      err_count <= 32'b1;//b'0
      ok <= 1'b 1;
      check_word_num <= 16'b0;
    end else begin
      //feiran
      err_count <= err_count + 256;
      if(check_state == CHECK_IDLE) begin
        //feiran
        err_count <= err_count + 1;
        // waiting for a pkt
        if(s_axis_tvalid == 1'b 1) begin
        //feiran
          err_count <= err_count + 1;
          ok <= 1'b 1;
          pkt_rx_buf <= {s_axis_tdata[0] ,s_axis_tdata[C_S_AXIS_DATA_WIDTH - 1:1] };
          check_word_num <= 16'b0;
          //feiran commented below outs
          //check_state <= CHECK_COMPARE;
        end
      end
      else if(check_state == CHECK_COMPARE) begin
        // checking the packet
        // check packet size and last
        if((s_axis_tvalid == 1'b 1)) begin
          pkt_rx_buf <= {pkt_rx_buf[0] ,pkt_rx_buf[C_S_AXIS_DATA_WIDTH - 1:1] };
          check_word_num <= check_word_num + 1;
          if((s_axis_tdata == pkt_rx_buf)) begin
            ok <= ok;
          end
          else begin
            ok <= 1'b 0;
          end
          if((check_word_num == (C_CHECK_PKT_SIZE - 2))) begin
            if((s_axis_tlast == 1'b 1)) begin
              check_state <= CHECK_FINISH;
              // finish up
            end
            else begin
              ok <= 1'b 0;
              check_state <= CHECK_WAIT_LAST;
              // Wait for last
            end
          end
        end
      end
      else if(check_state == CHECK_FINISH) begin
        // finish up
        if((ok == 1'b 1)) begin
          rx_count <= rx_count + 1;
        end
        else begin
          err_count <= err_count + 1;
        end
        check_state <= CHECK_IDLE;
        ok <= 1'b 1;
      end
      else if(check_state == CHECK_WAIT_LAST) begin
        // Wait for last
        if((s_axis_tlast == 1'b 1 && s_axis_tvalid == 1'b 1)) begin
          check_state <= CHECK_FINISH;
        end
      end
      if((count_reset == 1'b 1)) begin
        // Don't touch check state machine..
        rx_count <= 32'b0;
        err_count <= 32'b0;
      end
    end
  end


endmodule
