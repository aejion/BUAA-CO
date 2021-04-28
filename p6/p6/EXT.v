`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:41 11/08/2019 
// Design Name: 
// Module Name:    EXT 
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
module EXT(IMM,ExtOp,ExtIMM);
	input [15:0] IMM;
	input [1:0] ExtOp;
	output [31:0] ExtIMM;
	
	reg [31:0] ans;
	integer i;
	initial  begin
	ans=0;
	end
	assign ExtIMM=ans;
	always@(*) begin
		if(ExtOp==0) begin
			for(i=31;i>=0;i=i-1) begin
				if(i>=16) begin
					ans[i]<=0;
				end
				else ans[i]<=IMM[i];
			end
		end
		else if(ExtOp==1) begin
			for(i=31;i>=0;i=i-1) begin
				if(i>=16) begin
					ans[i]<=IMM[15];
				end
				else ans[i]<=IMM[i];
			end
		end
		else if(ExtOp==2) begin
			for(i=31;i>=0;i=i-1) begin
				if(i>=16) begin
					ans[i]<=IMM[i-16];
				end
				else ans[i]<=0;
			end
		end
	end


endmodule
