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
module GetNpc(npc1,npc2,npc_sel2,reset,clk,nPC);
	input [31:0]npc1;
	input  [31:0] npc2;
	input npc_sel2;
	input reset;
	input clk;
	output reg [31:0] nPC ;
	initial nPC=32'h00003000;
	
	always@(posedge clk) begin
		if(reset==1) nPC<=32'h00003000;
		else begin
			if(npc_sel2==1) nPC<=npc2;
			else nPC<=npc1;
		end
	end


endmodule
