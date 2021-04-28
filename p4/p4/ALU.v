`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:39:50 11/08/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A,B,ALUctr,ALUresult);
	input [31:0] A;
	input [31:0] B;
	input [2:0] ALUctr;
	output [31:0] ALUresult;
	assign ALUresult= ALUctr==0?0:
							ALUctr==1?A+B:
							ALUctr==2?A-B:
							ALUctr==3?A|B:
							ALUctr==4?B:
							0;
endmodule
