`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:36:57 11/15/2019 
// Design Name: 
// Module Name:    MReg 
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
module MReg(clk,WriteDataE,WriteRegE,MemtoRegE,RegWriteE,MemWriteE,opcodeE,functE,pcE,ALUoutE,A2E,ALU_2outE,
				WriteDataM,WriteRegM,MemtoRegM,RegWriteM,MemWriteM,opcodeM,functM,pcM,ALUoutM,A2M,ALU_2outM);
		input clk;
		input [4:0]A2E;
		input [31:0] WriteDataE;
		input [4:0] WriteRegE;
		input [2:0] MemtoRegE;
		input RegWriteE,MemWriteE;
		input [5:0] opcodeE,functE;
		input [31:0] pcE;
		input [31:0] ALUoutE,ALU_2outE;
		
		output reg [31:0] WriteDataM;
		output reg [4:0] WriteRegM;
		output reg [2:0] MemtoRegM;
		output reg RegWriteM,MemWriteM;
		output reg [5:0] opcodeM,functM;
		output reg [31:0] pcM,ALUoutM,ALU_2outM;
		output reg [4:0] A2M;
		initial begin
			WriteDataM=0;
			WriteRegM=0;
			MemtoRegM=0;
			RegWriteM=0;
			MemWriteM=0;
			opcodeM=0;
			functM=0;
			pcM=0;
			ALUoutM=0;
			A2M=0;
		end
		
		always@(posedge clk) begin
			WriteDataM<=WriteDataE;
			WriteRegM<=WriteRegE;
			MemtoRegM<=MemtoRegE;
			RegWriteM<=RegWriteE;
			MemWriteM<=MemWriteE;
			opcodeM<=opcodeE;
			functM<=functE;
			pcM<=pcE;
			ALUoutM<=ALUoutE;
			A2M<=A2E;
			ALU_2outM<=ALU_2outE;
		end

endmodule
