`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:42:39 11/15/2019 
// Design Name: 
// Module Name:    EReg 
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
module EReg(clk,A1D,A2D,A3D,Data1D,Data2D,EXTIMMD,RegDstD,ALUSrcD,MemtoRegD,RegWriteD,MemWriteD,ALUctrD,opcodeD,functD,pcD,
				A1E,A2E,A3E,Data1E,Data2E,EXTIMME,RegDstE,ALUSrcE,MemtoRegE,RegWriteE,MemWriteE,ALUctrE,opcodeE,functE,pcE,En);
		input clk;
		input [4:0] A1D,A2D,A3D;
		input [31:0] Data1D,Data2D,EXTIMMD;
		input [1:0] RegDstD;
		input ALUSrcD;
		input [1:0] MemtoRegD;
		input RegWriteD,MemWriteD;
		input [2:0] ALUctrD;
		input [5:0] opcodeD,functD;
		input [31:0] pcD;
		input En;
		output reg [4:0] A1E,A2E,A3E;
		output reg [31:0] Data1E,Data2E,EXTIMME;
		output reg [1:0] RegDstE;
		output reg ALUSrcE;
		output reg [1:0] MemtoRegE;
		output reg RegWriteE,MemWriteE;
		output reg [2:0] ALUctrE;
		output reg [5:0] opcodeE,functE;
		output reg [31:0]  pcE;
		
		initial begin
			A1E=0;
			A2E=0;
			A3E=0;
			Data1E=0;
			Data2E=0;
			EXTIMME=0;
			RegDstE=0;
			ALUSrcE=0;
			MemtoRegE=0;
			RegWriteE=0;
			MemWriteE=0;
			ALUctrE=0;
			opcodeE=0;
			functE=0;
			pcE=0;
		end
		always@(posedge clk) begin
		if(En==0) begin
			A1E<=0;
			A2E<=0;
			A3E<=0;
			Data1E<=0;
			Data2E<=0;
			EXTIMME<=0;
			RegDstE<=0;
			ALUSrcE<=0;
			MemtoRegE<=0;
			RegWriteE<=0;
			MemWriteE<=0;
			ALUctrE<=0;
			opcodeE<=0;
			functE<=0;
			pcE<=0;
		end
		else begin
			A1E<=A1D;
			A2E<=A2D;
			A3E<=A3D;
			Data1E<=Data1D;
			Data2E<=Data2D;
			EXTIMME<=EXTIMMD;
			RegDstE<=RegDstD;
			ALUSrcE<=ALUSrcD;
			MemtoRegE<=MemtoRegD;
			RegWriteE<=RegWriteD;
			MemWriteE<=MemWriteD;
			ALUctrE<=ALUctrD;
			opcodeE<=opcodeD;
			functE<=functD;
			pcE<=pcD;
			end
		end

endmodule
