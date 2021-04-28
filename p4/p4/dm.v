`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:33 11/08/2019 
// Design Name: 
// Module Name:    DM
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
module DM(pc,clk,reset,MemWrite,addr,din,dout);
	input [31:0] pc;
	input clk;
	input reset;
	input MemWrite;
	input [9:0] addr;
	input [31:0] din;
	output [31:0] dout;
	
	reg [31:0] a [1023:0];
	wire [31:0] ans;
	integer i;
	initial begin
		for(i=0;i<=1023;i=i+1) a[i]=0;
	end
	assign dout=a[addr];
	assign ans={20'b0,addr[9:0],2'b0};
	always@(posedge clk) begin
		if(reset==1) begin
			for(i=0;i<=1023;i=i+1) a[i]<=0;
		end
		else begin
			if(MemWrite==1) begin
				$display("@%h: *%h <= %h",pc, ans,din);
				a[addr]<=din;
			end
		end
	end


endmodule
