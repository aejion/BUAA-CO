`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:16 12/06/2019 
// Design Name: 
// Module Name:    EXC_OP_M 
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
module EXC_OP_M(EXC_M,EXC_M1,ALUout,opcode,funct);
	input [5:0] EXC_M;
	output reg [5:0] EXC_M1;
	input [31:0] ALUout;
	input [5:0] opcode,funct;
	initial begin
		EXC_M1=0;
	end
	always @(*) begin
		if(opcode==35) begin
			if(ALUout[1:0]!=0||(ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00100;
			end
			else EXC_M1<=EXC_M;
		end
		else if(opcode==33||opcode==37) begin
			if(ALUout[1:0]!=2&&ALUout[1:0]!=0) begin
				EXC_M1<=6'b1_00100;
			end
			else if((ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00100;
			end
			else if(ALUout>=32'h0000_7f00&&ALUout<=32'h0000_7f47)begin
				EXC_M1<=6'b1_00100;
			end
			else EXC_M1<=EXC_M;
		end
		else if(opcode==32||opcode==36) begin
			if(ALUout>=32'h0000_7f00&&ALUout<=32'h0000_7f47)begin
				EXC_M1<=6'b1_00100;
			end
			else if((ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00100;
			end
			else EXC_M1<=EXC_M;
		end
		else if(opcode==43) begin
			if(ALUout[1:0]!=0||(ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00101;
			end
			else if(ALUout[3:2]==2&&ALUout>=32'h0000_7f00&&ALUout<=32'h0000_7f47) begin
				EXC_M1<=6'b1_00101;
			end
			else EXC_M1<=EXC_M;
		end
		else if(opcode==41) begin
			if(ALUout[1:0]!=2&&ALUout[1:0]!=0) begin
				EXC_M1<=6'b1_00101;
			end
			else if((ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00101;
			end
			else if(ALUout>=32'h0000_7f00&&ALUout<=32'h0000_7f47)begin
				EXC_M1<=6'b1_00101;
			end
			else EXC_M1<=EXC_M;
		end
		else if(opcode==40) begin
			if(ALUout>=32'h0000_7f00&&ALUout<=32'h0000_7f47)begin
				EXC_M1<=6'b1_00101;
			end
			else if((ALUout>32'h0000_1fff&&ALUout<32'h0000_7f00)||(ALUout>32'h0000_7f47))begin
				EXC_M1<=6'b1_00101;
			end
			else EXC_M1<=EXC_M;
		end
		else EXC_M1<=EXC_M;
	end


endmodule
