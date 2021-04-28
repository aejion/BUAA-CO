`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:10 11/22/2019 
// Design Name: 
// Module Name:    ALU_2 
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
module ALU_2(clk,reset,busy,A,B,out,sel,start);
	input clk,reset,start;
	input [31:0] A,B;
	input [3:0] sel;
	output [31:0] out;
	output busy;
	
	reg [31:0] HI,LO,TEMP_HI,TEMP_LO;
	integer Busy;
	assign busy=(Busy>=1)?1:
					0;
	assign out=(sel==5)?HI:
				  (sel==6)?LO:
					0;
	initial begin
		HI=0;
		LO=0;
		TEMP_HI=0;
		TEMP_LO=0;
		Busy=0;
	end
	always @(*) begin
		if(start==1) begin
			if(sel==1) begin	{TEMP_HI,TEMP_LO}=$signed($signed({{32{A[31]}},A[31:0]})*$signed({{32{B[31]}},B[31:0]})); Busy=6;end
			else if(sel==2) begin	{TEMP_HI,TEMP_LO}=A*B; Busy=6;end
			else if(sel==3) begin	 TEMP_LO=$signed(A)/$signed(B); TEMP_HI=$signed(A)%$signed(B); Busy=11; end
			else if(sel==4) begin	TEMP_LO=A/B; TEMP_HI=A%B; Busy=11; end
		end
		if(sel==7) begin
			HI<=A;
		end
		if(sel==8) begin
			LO<=A;
		end
	end
	always@(posedge clk) begin
		if(reset==1) begin
			HI<=0;
			LO<=0;
		end
		else begin
			if(Busy) begin Busy=Busy-1;
			if(Busy==0) begin
				HI<=TEMP_HI;
				LO<=TEMP_LO;
			end
			end
		end
	end
endmodule
