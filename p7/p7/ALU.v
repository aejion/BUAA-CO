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
module ALU(A,B,ALUctr,ALUresult,opcode,funct,EXC_E,EXC_E1);
	input [31:0] A;
	input [31:0] B;
	input [5:0] funct,opcode;
	input [5:0] EXC_E;
	output reg [5:0] EXC_E1;
	input [3:0] ALUctr;
	output reg [31:0] ALUresult;
	integer i;
	reg [32:0] temp; 
	wire load,store;
	assign load=(opcode==32)|(opcode==36)|(opcode==33)|(opcode==37)|(opcode==35);
	assign store=(opcode==40)|(opcode==41)|(opcode==43);
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
	always @(*) begin
		if((opcode==0&&funct==32)||opcode==8) begin
			temp={A[31],A[31:0]}+{B[31],B[31:0]};
			if(temp[32]!=temp[31]) begin
				EXC_E1<=6'b1_01100;
			end
			else EXC_E1<=EXC_E;
		end
		else if(opcode==0&&funct==34) begin
			temp={A[31],A[31:0]}-{B[31],B[31:0]};
			if(temp[32]!=temp[31]) begin
				EXC_E1<=6'b1_01100;
			end
			else EXC_E1<=EXC_E;
		end
		else if(load) begin
			temp={A[31],A[31:0]}+{B[31],B[31:0]};
			if(temp[32]!=temp[31]) begin
				EXC_E1<=6'b1_00100;
			end
			else EXC_E1<=EXC_E;
		end
		else if(store) begin
			temp={A[31],A[31:0]}+{B[31],B[31:0]};
			if(temp[32]!=temp[31]) begin
				EXC_E1<=6'b1_00101;
			end
			else EXC_E1<=EXC_E;
		end
		else begin
			EXC_E1<=EXC_E;
		end
	end
endmodule
