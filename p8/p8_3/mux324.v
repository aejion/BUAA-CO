`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:24 11/15/2019 
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
	input[31:0] a,b,c,d;
	input [1:0] sel;
	output [31:0] out;
	
	reg [31:0] ans;
	assign out=ans;
	
	always@(*) begin
		if(sel==0) ans<=a;
		else if(sel==1) ans<=b;
		else if(sel==2) ans<=c;
		else if(sel==3) ans<=d;
	end


endmodule
