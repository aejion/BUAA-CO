`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:34 11/15/2019 
// Design Name: 
// Module Name:    WReg 
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
module WReg(clk,WriteRegM,MemtoRegM,RegWriteM,opcodeM,functM,pcM,ALUoutM,DMoutM,ALU_2outM,
					ALUoutW,DMoutW,pcW,MemtoRegW,RegWriteW,opcodeW,functW,WriteRegW,ALU_2outW,
					CP0_outM,CP0_outW,clr,HitDMM,HitDMW,PrRDW,PrRD);
		input clk;
		input [4:0] WriteRegM;
		input [2:0]MemtoRegM;
		input RegWriteM;
		input [5:0] opcodeM,functM;
		input [31:0] pcM,ALUoutM,DMoutM,ALU_2outM,CP0_outM;
		input clr;
		input HitDMM;
		input [31:0] PrRD;
		output reg [4:0] WriteRegW;
		output reg [2:0]MemtoRegW;
		output reg RegWriteW;
		output reg [5:0] opcodeW,functW;
		output reg [31:0] pcW,ALUoutW,DMoutW,ALU_2outW,CP0_outW,PrRDW;
		output reg HitDMW;
		initial begin
			ALUoutW=0;
			DMoutW=0;
			pcW=32'h0000_3000;
			MemtoRegW=0;
			RegWriteW=0;
			opcodeW=0;
			functW=0;
			WriteRegW=0;
			ALU_2outW=0;
			CP0_outW=0;
			HitDMW=0;
			PrRDW=0;
		end
		always@(posedge clk) begin
		if(clr==1) begin
			ALUoutW=0;
			DMoutW=0;
			pcW=pcM;
			MemtoRegW=0;
			RegWriteW=0;
			opcodeW=0;
			functW=0;
			WriteRegW=0;
			ALU_2outW=0;
			CP0_outW=0;
			HitDMW=0;
			PrRDW=0;
		end
		else if(clr==0)begin
			ALUoutW<=ALUoutM;
			DMoutW<=DMoutM;
			pcW<=pcM;
			MemtoRegW<=MemtoRegM;
			RegWriteW<=RegWriteM;
			opcodeW<=opcodeM;
			functW<=functM;
			WriteRegW<=WriteRegM;
			ALU_2outW<=ALU_2outM;
			CP0_outW<=CP0_outM;
			HitDMW<=HitDMM;
			PrRDW<=PrRD;
			end
		end

endmodule
