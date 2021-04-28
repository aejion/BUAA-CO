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
module mips(clk,reset,interrupt,addr);
	input clk,reset;
	input interrupt;
	output [31:0] addr;
	
	wire [31:0] PrAddr;
	wire [31:0] Dout0,Dout1;
	wire [31:0] PrRD,PrWD,temp_pc;
	wire PrWe,WE_0,WE_1,IRQ0,IRQ1;
	wire [7:2] HWInt;
	assign addr=temp_pc;
	assign HWInt={3'b0,interrupt,IRQ1,IRQ0};
	cpu cpu1(.clk(clk),.reset(reset),.PrAddr(PrAddr),
				.PrRD(PrRD),.PrWD(PrWD),.PrWe(PrWe),.HWInt(HWInt),.temp_pc(temp_pc));
	Bridge bridge(.PrAddr(PrAddr),.Dout0(Dout0),.Dout1(Dout1),
					  .PrWe(PrWe),.WE1(WE_1),.WE0(WE_0),.PrRD(PrRD));

	TC Timer0(.clk(clk),.reset(reset),.Addr(PrAddr[31:2]),.WE(WE_0),.Din(PrWD),
				 .Dout(Dout0),.IRQ(IRQ0));
	TC Timer1(.clk(clk),.reset(reset),.Addr(PrAddr[31:2]),.WE(WE_1),.Din(PrWD),
				 .Dout(Dout1),.IRQ(IRQ1));


endmodule
