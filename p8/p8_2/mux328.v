`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:13 11/22/2019 
// Design Name: 
// Module Name:    mux328 
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
module mux328(a,b,c,d,e,f,g,h,sel,out);
	input [31:0] a,b,c,d,e,f,g,h;
	input [2:0] sel;
	output reg [31:0] out ;
	always @(*) begin
		if(sel==0) out<=a;
		else if(sel==1) out<=b;
		else if(sel==2) out<=c;
		else if(sel==3) out<=d;
		else if(sel==4) out<=e;
		else if(sel==5) out<=f;
		else if(sel==6) out<=g;
		else if(sel==7) out<=h;
	end


endmodule
