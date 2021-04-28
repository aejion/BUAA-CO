`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:20 12/20/2019 
// Design Name: 
// Module Name:    Digital_User 
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
module Digital_User(clk,reset,A,B,Addr,dout,dig0,dig1,dig2,dig0_sel,dig1_sel,dig2_sel,WE,din);
	input [31:0] A,B;
	input clk,reset,WE;
	input Addr;
	input [31:0] din;
	output [31:0] dout;
	output [7:0] dig0,dig1,dig2;
	output [3:0] dig0_sel,dig1_sel;
	output dig2_sel;
	integer count;
	wire [7:0] show_dig [15:0];
	assign dig2_sel=0;
	assign dig2=show_dig[0];
	assign show_dig[0]=8'b10000001;
	assign show_dig[1]=8'b11001111;
	assign show_dig[2]=8'b10010010;
	assign show_dig[3]=8'b10000110;
	assign show_dig[4]=8'b11001100;
	assign show_dig[5]=8'b10100100;
	assign show_dig[6]=8'b10100000;
	assign show_dig[7]=8'b10001101;
	assign show_dig[8]=8'b10000000;
	assign show_dig[9]=8'b10000100;
	assign show_dig[10]=8'b10001000;
	assign show_dig[11]=8'b11100000;
	assign show_dig[12]=8'b10110001;
	assign show_dig[13]=8'b11000010;
	assign show_dig[14]=8'b10110000;
	assign show_dig[15]=8'b10111000;
	
	reg [3:0] temp;
	reg [31:0] mem [2:0] ;

	assign dig0=(dig0_sel==4'b0001)?show_dig[{mem[2][3:0]}]:
					(dig0_sel==4'b0010)?show_dig[{mem[2][7:4]}]:
					(dig0_sel==4'b0100)?show_dig[{mem[2][11:8]}]:
					(dig1_sel==4'b1000)?show_dig[{mem[2][15:12]}]:0;
	assign dig1=(dig1_sel==4'b0001)?show_dig[{mem[2][19:16]}]:
					(dig1_sel==4'b0010)?show_dig[{mem[2][23:20]}]:
					(dig1_sel==4'b0100)?show_dig[{mem[2][27:24]}]:
					(dig1_sel==4'b1000)?show_dig[{mem[2][31:28]}]:0;
	assign dig0_sel=temp;
	assign dig1_sel=temp;
	assign dout=mem[Addr] ;
	assign out_to_TC=mem[0];
	always@(posedge clk) begin
		if(reset) begin
			count<=200000;
			mem[0]<=0;
			temp<=4'b0001;
			mem[1]<=0;
			mem[2]<=0;
		end
		else begin
		if(WE==1) begin
			mem[2]<=din;
		end
		mem[1]<=A;//7-4
		mem[0]<=B;//3-0
		if(count>0) count<=count-1;
		else if(count==0) count<=200000;
		if(count==0) begin
			if(temp==4'b0001) begin
				temp<=4'b0010;
			end
			else if(temp==4'b0010) begin
				temp<=4'b0100;
			end
			else if(temp==4'b0100) begin
				temp<=4'b1000;
			end
			else if(temp==4'b1000) begin
				temp<=4'b0001;
			end
		end
		end
		
	end


endmodule
