`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:17 11/08/2019 
// Design Name: 
// Module Name:    GRF 
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
module GRF(pc,A1,A2,A3,WD3,reset,clk,WE,RD1,RD2);
	input [31:0] pc;
	input [4:0] A1;
	input [4:0] A2;
	input [4:0] A3;
	input [31:0] WD3;
	input reset;
	input clk;
	input WE;
	output [31:0] RD1;
	output [31:0] RD2;
	reg [31:0] a [31:0];
	integer i;
	initial begin
		for(i=0;i<=31;i=i+1) begin
			a[i]=0;
		end
	end
	
	assign RD1=a[A1];
	assign RD2=a[A2];
	
	always@(posedge clk) begin
		if(reset==1) begin
			for(i=0;i<=31;i=i+1) a[i]<=0;
		end
		else begin
			if(WE==1) begin
				if(A3!=0) begin
					$display("@%h: $%d <= %h", pc, A3,WD3);
					a[A3]<=WD3;
				end
			end
		end
	end

endmodule
