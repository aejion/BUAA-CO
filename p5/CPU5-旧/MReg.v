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
module MReg(clk,WriteDataE,WriteRegE,MemtoRegE,RegWriteE,MemWriteE,opcodeE,functE,pcE,ALUoutE,
				WriteDataM,WriteRegM,MemtoRegM,RegWriteM,MemWriteM,opcodeM,functM,pcM,ALUoutM);
		input clk;
		input [31:0] WriteDataE;
		input [4:0] WriteRegE;
		input [1:0] MemtoRegE;
		input RegWriteE,MemWriteE;
		input [5:0] opcodeE,functE;
		input [31:0] pcE;
		input [31:0] ALUoutE;
		
		output reg [31:0] WriteDataM;
		output reg [4:0] WriteRegM;
		output reg [1:0] MemtoRegM;
		output reg RegWriteM,MemWriteM;
		output reg [5:0] opcodeM,functM;
		output reg [31:0] pcM,ALUoutM;
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
		end

endmodule
