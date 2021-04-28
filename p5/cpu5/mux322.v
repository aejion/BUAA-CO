`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:18 11/08/2019 
// Design Name: 
// Module Name:    mux322 
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
module mux322(a,b,sel,c);
	input [31:0] a;
	input [31:0] b;
	input sel;
	output [31:0] c;
	reg [31:0] C1;
	assign c=C1;
	always@(*) begin
		if(sel==1) C1<=b;
		else C1<=a;
	end


endmodule
