`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:15:07 11/08/2019 
// Design Name: 
// Module Name:    mux54 
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
module mux54(a,b,c,d,sel,out);
	input [4:0] a;
	input [4:0] b;
	input [4:0] c;
	input [4:0] d;
	input [1:0] sel;
	output [4:0] out;
	
	assign out=(sel==0?a:
					sel==1?b:
					sel==2?c:
					sel==3?d:
					5'b0);


endmodule
