`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:16 11/15/2019 
// Design Name: 
// Module Name:    DReg 
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
module DReg(clk,En,Instr,pc4,InstrD,pc4D,pcD);
	input clk;
	input En;
	input [31:0] Instr;
	input [31:0] pc4;
	output [31:0] InstrD;
	output reg [31:0] pc4D;
	output reg [31:0] pcD;
	
	reg [31:0] Instr1;
	
	initial begin 
	Instr1=0;
	pc4D=0;
	pcD=0;
	end
	
	assign InstrD=Instr1;
	
	always@(posedge clk) begin
		if(En==1)begin 
			Instr1<=Instr;
			pc4D<=pc4;
			pcD<=pc4-4;
		end
	end

endmodule
