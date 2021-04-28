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
module DM(opcode,byteM,pc,clk,reset,MemWrite,addr,din,dout);
	input [31:0] pc;
	input clk;
	input reset;
	input MemWrite;
	input [11:0] addr;
	input [31:0] din;
	input [5:0] opcode;
	input [1:0] byteM;
	output [31:0] dout;
	integer i;
	reg [31:0] a [4095:0];
	wire [31:0] ans;
	initial begin
		for(i=0;i<=4095;i=i+1) a[i]=0;
	end
	assign dout=a[addr];
	assign ans={18'b0,addr[11:0],2'b0};
	always@(posedge clk) begin
		if(reset==1) begin
			for(i=0;i<=4095;i=i+1) a[i]<=0;
		end
		else begin
			if(MemWrite==1&&opcode==43) begin
				$display("%d@%h: *%h <= %h",$time,pc, ans,din);
				a[addr]<=din;
			end
			else if(MemWrite==1&&opcode==40) begin //sb
				if(byteM==0) a[addr][7:0]=din[7:0];
				else if(byteM==1) a[addr][15:8]=din[7:0];
				else if(byteM==2) a[addr][23:16]=din[7:0];
				else if(byteM==3) a[addr][31:24]=din[7:0];
				$display("%d@%h: *%h <= %h",$time,pc, ans,a[addr]);
			end
			else if(MemWrite==1&&opcode==41) begin //sh
				if(byteM==0) a[addr][15:0]=din[15:0];
				else if(byteM==2) a[addr][31:16]=din[15:0];
				$display("%d@%h: *%h <= %h",$time,pc, ans,a[addr]);
			end
		end
	end


endmodule
