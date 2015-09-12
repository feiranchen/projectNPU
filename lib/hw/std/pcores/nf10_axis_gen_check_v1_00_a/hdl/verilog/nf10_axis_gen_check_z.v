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
//  Description:
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
	ACLK,
	ARESETN,

	// axi streaming data interface
	M_AXIS_TDATA,
	M_AXIS_TSTRB,
	M_AXIS_TUSER,
	M_AXIS_TVALID,
	M_AXIS_TREADY,
	M_AXIS_TLAST,
	S_AXIS_TDATA,
	S_AXIS_TSTRB,
	S_AXIS_TUSER,
	S_AXIS_TVALID,
	S_AXIS_TREADY,
	S_AXIS_TLAST,

	// axi lite control/status interface
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

parameter [31:0] C_BASEADDR              = 32'h0; // base address exposed to embedded
parameter [31:0] C_HIGHADDR              = 32'h2; // highest address exposed to embedded
parameter        C_M_AXIS_DATA_WIDTH     = 64;
parameter        C_S_AXIS_DATA_WIDTH     = 64;
parameter        C_S_AXIS_TUSER_WIDTH    = 128;
parameter        C_M_AXIS_TUSER_WIDTH    = 128;
parameter        C_GEN_PKT_SIZE          = 16;
parameter        C_CHECK_PKT_SIZE        = 16;
parameter        C_IFG_SIZE              = 5;
parameter        C_S_AXI_ADDR_WIDTH      = 32;
parameter        C_S_AXI_DATA_WIDTH      = 32;
input wire       ACLK;
input wire       ARESETN;

// axi streaming data interface
// MASTER connects to the data output unit
output reg  [C_M_AXIS_DATA_WIDTH-1:0]    M_AXIS_TDATA;	// 64 bits
output reg  [C_M_AXIS_DATA_WIDTH/8-1:0]  M_AXIS_TSTRB;  // 8 bits, one to represent each byte in tdata
output wire [C_M_AXIS_TUSER_WIDTH-1:0]   M_AXIS_TUSER;	// 128 bits
output reg                               M_AXIS_TVALID; // valid bit indicates this module ready
input  wire                              M_AXIS_TREADY; // ready bit means reader module is done
output wire                              M_AXIS_TLAST;  // last bit means no more data after this

// SLAVE connects from the data input unit
input  wire [C_S_AXIS_DATA_WIDTH-1:0]    S_AXIS_TDATA;  // 64 bits
input  wire [C_S_AXIS_DATA_WIDTH/8-1:0]  S_AXIS_TSTRB;  // 8 bits, one to represent each bye in data
input  wire [C_S_AXIS_TUSER_WIDTH-1:0]   S_AXIS_TUSER;  // 128 bits
input  wire                              S_AXIS_TVALID;
output wire                              S_AXIS_TREADY;
input  wire                              S_AXIS_TLAST;

// axi lite control/status interface (connects to embedded memory mapper)
input  wire                              S_AXI_ACLK;
input  wire                              S_AXI_ARESETN;
input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_AWADDR;
input  wire                              S_AXI_AWVALID;
output wire                              S_AXI_AWREADY;
input  wire [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_WDATA;
input  wire [C_S_AXI_DATA_WIDTH/8-1:0]   S_AXI_WSTRB;
input  wire                              S_AXI_WVALID;
output wire                              S_AXI_WREADY;
output wire [1:0]                        S_AXI_BRESP;
output wire                              S_AXI_BVALID;
input  wire                              S_AXI_BREADY;
input  wire [C_S_AXI_ADDR_WIDTH-1:0]     S_AXI_ARADDR;
input  wire                              S_AXI_ARVALID;
output wire                              S_AXI_ARREADY;
output wire [C_S_AXI_DATA_WIDTH-1:0]     S_AXI_RDATA;
output wire [1:0]                        S_AXI_RRESP;
output wire                              S_AXI_RVALID;
input  wire                              S_AXI_RREADY;

// entity;
// ROM should be inferred as BRAM during XST
parameter CHECK_IDLE = 2'b00;
parameter CHECK_FINISH = 2'b01;
parameter CHECK_COMPARE = 2'b11;
parameter CHECK_WAIT_LAST = 2'b10;

parameter GEN_PKT = 2'b00;
parameter GEN_IFG = 2'b01;
parameter GEN_FINISH = 2'b11;

reg  [15:0] gen_word_num;
reg  [1:0]  gen_state;
reg  [1:0]  check_state;
reg  [15:0] check_word_num;
reg  [31:0] tx_count;
reg  [31:0] rx_count;
reg  [31:0] err_count;
wire        count_reset;
reg         ok;
reg  [C_M_AXIS_DATA_WIDTH-1:0] pkt_tx_buf;
reg  [C_S_AXIS_DATA_WIDTH-1:0] pkt_rx_buf;
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
    .AXIS_ACLK(ACLK),
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
    .RREADY(S_AXI_RREADY));

  assign M_AXIS_TLAST = (gen_word_num == (C_GEN_PKT_SIZE - 1)) ? 1'b1 : 1'b0;

	// dummy TUSER
  assign M_AXIS_TUSER = {(C_M_AXIS_TUSER_WIDTH){1'b0}};

	// this section of the code acts as master and handles interaction with the slave unit
  always @(posedge ACLK) begin

		// on reset signal, clear everything and wait at least 1 interframe gap
		// period
    if(ARESETN == 1'b0) begin
      M_AXIS_TSTRB <= {(C_M_AXIS_DATA_WIDTH/8){1'b0}};
      M_AXIS_TVALID <= 1'b0;
      gen_word_num <= 16'd0;
      tx_count <= 32'd0;
      gen_state <= GEN_IFG; // initiate to between frames

    end
		else begin

			// generate packet state. creates 16 fragments of 8 bytes
      if(gen_state == GEN_PKT) begin
        M_AXIS_TSTRB <= {(C_M_AXIS_DATA_WIDTH/8){1'b1}};  // all bytes are valid
        M_AXIS_TVALID <= 1'b1;                            // signify that all bytes are ready to read
        if((M_AXIS_TREADY == 1'b1)) begin
          gen_word_num <= gen_word_num + 1;               // increment number of pkt frags generated
          if(gen_word_num == C_GEN_PKT_SIZE-1) begin
            M_AXIS_TSTRB <= {(C_M_AXIS_DATA_WIDTH/8){1'b0}}; // no more valid bytes
            M_AXIS_TVALID <= 1'b0;                           // no more valid data
            tx_count <= tx_count + 1;                     // increment total packets tx'ed
            gen_state <= GEN_IFG;                         // wait 1 inter frame gap period
          end
          else begin
            pkt_tx_buf <= {pkt_tx_buf[0] ,pkt_tx_buf[C_M_AXIS_DATA_WIDTH-1:1] }; // rotate buffer
            M_AXIS_TDATA <= {pkt_tx_buf[0] ,pkt_tx_buf[C_M_AXIS_DATA_WIDTH-1:1] };
          end
        end
      end

			// generate interframe gap
      else if(gen_state == GEN_IFG) begin
        M_AXIS_TSTRB <= {(C_M_AXIS_DATA_WIDTH/8){1'b0}}; // no valid bytes
        M_AXIS_TVALID <= 1'b0;                           // no valid data
        if((M_AXIS_TREADY == 1'b1)) begin
          gen_word_num <= gen_word_num + 1;

          // generate an additional C_IFG_SIZE empty frames for the interfame
          // gap
          if(gen_word_num == (C_GEN_PKT_SIZE + C_IFG_SIZE - 1)) begin

						// if a counter reset is done, wait until the current interframe
						// gap is done
            if(count_reset == 1'b1) begin 
              gen_state <= GEN_IFG;
              tx_count <= 32'd0;
            end
            else begin
              gen_state <= GEN_FINISH;
            end
          end
        end
      end

			// done generating frame and frame gap
      else if(gen_state == GEN_FINISH) begin
        M_AXIS_TSTRB <= {(C_M_AXIS_DATA_WIDTH/8){1'b1}};
        M_AXIS_TVALID <= 1'b1;
        M_AXIS_TDATA <= seed[C_M_AXIS_DATA_WIDTH-1:0];
        pkt_tx_buf <= seed[C_M_AXIS_DATA_WIDTH-1:0];
        gen_word_num <= 16'd0;
        gen_state <= GEN_PKT;
      end
    end
  end

	// this section of code acts as slave and handles interaction with the
	// master unit
  assign S_AXIS_TREADY = 1'b1;
  always @(posedge ACLK) begin
    if(ARESETN == 1'b 0) begin
      check_state <= CHECK_IDLE;
      rx_count <= 32'd0;
      err_count <= 32'd0;
      ok <= 1'b1;
      check_word_num <= 16'd0;
    end
		else begin

			// waiting for a packet from the master
      if(check_state == CHECK_IDLE) begin
        if(S_AXIS_TVALID == 1'b1) begin
          ok <= 1'b1;
          pkt_rx_buf <= { S_AXIS_TDATA[0], S_AXIS_TDATA[C_S_AXIS_DATA_WIDTH-1:1] };
          check_word_num <= 16'd0;
          check_state <= CHECK_COMPARE;
        end
      end
      else if(check_state == CHECK_COMPARE) begin
        // checking the packet
        // check packet size and last
        if(S_AXIS_TVALID == 1'b1) begin
          pkt_rx_buf <= { pkt_rx_buf[0] ,pkt_rx_buf[C_S_AXIS_DATA_WIDTH-1:1] };
          check_word_num <= check_word_num + 1;
          if(S_AXIS_TDATA == pkt_rx_buf) begin
            ok <= ok;
          end
          else begin
            ok <= 1'b0;
          end
          if(check_word_num == (C_CHECK_PKT_SIZE-2)) begin
            if(S_AXIS_TLAST == 1'b1) begin
              check_state <= CHECK_FINISH;
              // finish up
            end
            else begin
              ok <= 1'b0;
              check_state <= CHECK_WAIT_LAST;
              // Wait for last
            end
          end
        end
      end
      else if(check_state == CHECK_FINISH) begin
        // finish up
        if(ok == 1'b1) begin
          rx_count <= rx_count + 1;
        end
        else begin
          err_count <= err_count + 1;
        end
        check_state <= CHECK_IDLE;
        ok <= 1'b1;
      end
      else if(check_state == CHECK_WAIT_LAST) begin
        // Wait for last
        if((S_AXIS_TLAST == 1'b1 && S_AXIS_TVALID == 1'b1)) begin
          check_state <= CHECK_FINISH;
        end
      end
      if((count_reset == 1'b1)) begin
        // Don't touch check state machine..
        rx_count <= 32'd0;
        err_count <= 32'd0;
      end
    end
  end


endmodule
