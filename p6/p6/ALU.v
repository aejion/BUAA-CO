`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:39:50 11/08/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A,B,ALUctr,ALUresult);
	input [31:0] A;
	input [31:0] B;
	input [3:0] ALUctr;
	output reg [31:0] ALUresult;
	integer i;
	always@(*) begin
		if(ALUctr==0) begin
			ALUresult<=0;
		end
		else if(ALUctr==1) ALUresult<=A+B;
		else if(ALUctr==2) ALUresult<=A-B;
		else if(ALUctr==3) ALUresult<=A|B;
		else if(ALUctr==4) ALUresult<=B;
		else if(ALUctr==5) ALUresult<=A&B;
		else if(ALUctr==6) ALUresult<=A^B;
		else if(ALUctr==7) begin
			ALUresult<=~(A|B);
		end
		else if(ALUctr==8) begin
			if($signed(A)<$signed(B)) ALUresult<=1;
			else ALUresult<=0;
		end
		else if(ALUctr==9) begin
			if((A)<(B)) ALUresult<=1;
			else ALUresult<=0;
		end
		else ALUresult<=0;
	end
endmodule
