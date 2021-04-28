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
module DReg(clk,En,Instr,pc4,InstrD,pc4D,pcD,EXC_F,EXC_D,clr,clr1,BD,BDD);
	input clk;
	input clr,clr1;
	input En;
	input [31:0] Instr;
	input [31:0] pc4;
	input [5:0] EXC_F;
	input BD;
	output reg BDD;
	output [31:0] InstrD;
	output reg [31:0] pc4D;
	output reg [31:0] pcD;
	output reg [5:0] EXC_D;
	
	reg [31:0] Instr1;
	
	initial begin 
	Instr1=0;
	pc4D=0;
	pcD=32'h0000_3000;
	EXC_D=0;
	BDD=0;
	end
	
	assign InstrD=Instr1;
	
	always@(posedge clk) begin
		if(clr==1||clr1==1) begin
			Instr1<=0;
			pc4D<=0;
			pcD<=pc4-4;
			EXC_D<=0;
			BDD<=BD;
		end
		else if(En==1)begin 
			Instr1<=Instr;
			pc4D<=pc4;
			EXC_D<=EXC_F;
			pcD<=pc4-4;
			BDD<=BD;
		end
	end

endmodule
