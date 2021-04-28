`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:37 11/08/2019 
// Design Name: 
// Module Name:    GetNpc 
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
module GetNpc(npc,reset,clk,En,PC);
	input [31:0]npc;
	input reset,clk,En;
	output reg [31:0] PC ;
	initial PC=32'h00003000;
	
	always@(posedge clk) begin
		if(reset==1) PC<=32'h00003000;
		if(En==1||npc==32'h0000_4180) begin
			PC<=npc;
		end
	end


endmodule
