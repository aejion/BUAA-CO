`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:20:08 11/08/2019 
// Design Name: 
// Module Name:    mux324 
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
module mux324(a,b,c,d,sel,out);
	input [31:0] a;
	input [31:0] b;
	input [31:0] c;
	input [31:0] d;
	input [1:0] sel;
	output [31:0] out;
	
	assign out=(sel==0?a:
					sel==1?b:
					sel==2?c:
					sel==3?d:
					32'b0);


endmodule
