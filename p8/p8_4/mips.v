`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:49 12/06/2019 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
	input clk_in,
	input sys_rstn,
	input uart_rxd,
	input uart_rxd2,
	output uart_txd2,
	output uart_txd,
	input [7:0] dip_switch0,
	input [7:0] dip_switch1,
	input [7:0] dip_switch2,
	input [7:0] dip_switch3,
	input [7:0] dip_switch4,
	input [7:0] dip_switch5,
	input [7:0] dip_switch6,
	input [7:0] dip_switch7,
	input [7:0] user_key,
	output [31:0] led_light,
	output [7:0] digital_tube2,
	output digital_tube_sel2,
	output [7:0] digital_tube1,
	output [3:0] digital_tube_sel1,
	output [7:0] digital_tube0,
	output [3:0] digital_tube_sel0
	);
	wire clk,clk2;
	wire [31:0] PrAddr;
	wire [31:0] Dout0,Dout1,Dout3;
	wire [31:0] PrRD,PrWD;
	wire PrWe,WE_0,IRQ0,WE_1,WE_3,IRQ1;
	wire [7:2] HWInt;
	wire reset;
	wire [31:0] A,B,DM_addr,DM_WD;
	wire DM_we;
	
	reg [31:0] user;
	
	assign A={dip_switch7[7:0],dip_switch6[7:0],dip_switch5[7:0],dip_switch4[7:0]};
	assign B={dip_switch3[7:0],dip_switch2[7:0],dip_switch1[7:0],dip_switch0[7:0]};
	assign reset=~sys_rstn;
	
	CLOCK clkclk
   (// Clock in ports
    .CLK_IN1(clk_in),      // IN
    // Clock out ports
    .CLK_OUT1(clk),     // OUT
    .CLK_OUT2(clk2));    // OUT
	 wire IRQ2;
	 assign IRQ2=|(user_key[7:0]^8'b11111111);
	assign HWInt={3'b0,IRQ2,IRQ1,IRQ0};
	cpu cpu1(.clk(clk),.clk2(clk2),.reset(reset),.PrAddr(PrAddr),
				.PrRD(PrRD),.PrWD(PrWD),.PrWe(PrWe),.HWInt(HWInt),.DM_addr(DM_addr),.DM_we(DM_we),.DM_WD(DM_WD));
				
	Bridge bridge(.PrAddr(PrAddr),.Dout0(Dout0),.Dout1(Dout1),.Dout2(user),.WE1(WE_1),.WE3(WE_3),.Dout3(Dout3),
					  .PrWe(PrWe),.WE0(WE_0),.PrRD(PrRD));

	TC Timer0(.clk(clk),.reset(reset),.Addr(PrAddr[31:2]),.WE(WE_0),.Din(PrWD),
				 .Dout(Dout0),.IRQ(IRQ0),.B(B));
				 
	//assign led_light={dip_switch3[7:0],dip_switch2[7:0],dip_switch1[7:0],dip_switch0[6:0],IRQ1};
	reg [31:0] light;
	assign led_light=light;
	always @(posedge clk) begin
		if(reset) begin
			light<=0;
		end
		else begin
			if(IRQ1==1) begin
				light[31]<=1'b1;
			end
		end
	end
	//module Digital_User(clk,reset,A,B,Addr,dout,dig0,dig1,dig2,dig0_sel,dig1_sel,dig2_sel,WE,din);
	Digital_User digital(.clk(clk),.reset(reset),.A(A),.B(B),.Addr(PrAddr[2]),.dout(Dout1),.dig0(digital_tube0),.dig1(digital_tube1),
					 .dig2(digital_tube2),.dig0_sel(digital_tube_sel0),.dig1_sel(digital_tube_sel1),.dig2_sel(digital_tube_sel2),
					 .WE(WE_1),.din(PrWD));
	
	//module  MiniUART( ADD_I, DAT_I, DAT_O, STB_I, WE_I, CLK_I, RST_I, ACK_O, RxD, TxD ) ;
	MiniUART uart(.ADD_I(PrAddr[5:2]),.DAT_I(PrWD),.DAT_O(Dout3),.WE_I(WE_3),.CLK_I(clk),.RST_I(reset),.RxD(uart_rxd),.STB_I(1'b1),
					  .TxD(uart_txd),.IRQ(IRQ1));
					  
	always @(posedge clk) begin
		user<={24'b0,user_key[7:0]};
	end
	
	wire [31:0] user_F_addr,user_F_instr,user_M_addr,user_M_WData,user_M_RData;
	wire [7:0] txd_buffer;
	wire user_M_WE,user_M_RE;
	
	wrapper Wra(.rxd(uart_rxd2),.TxD(uart_txd2),.clk(clk),.F_addr(32'b0),.F_instr(32'b0),
					.M_RE(1'b0),.M_RData(32'b0),.user_F_addr(user_F_addr),.user_F_instr(user_F_instr),.user_M_addr(user_M_addr),
					.user_M_WE(user_M_WE),.user_M_RE(user_M_RE),.user_M_WData(user_M_WData),.user_M_RData(user_M_RData),.txd_buffer(txd_buffer),
					.reset(reset),.M_addr(DM_addr),.M_WData(DM_WD),.M_WE(DM_we));
endmodule
