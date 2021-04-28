`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:00:55 11/08/2019 
// Design Name: 
// Module Name:    control 
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
module Control(opcode,funct,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite,npc_sel,ExtOp,ALUctr);
	input [5:0] opcode;
	input [5:0] funct;
	output [1:0] RegDst;
	output ALUSrc;
	output [1:0]MemtoReg;
	output RegWrite;
	output MemWrite;
	output [1:0] npc_sel;
	output[1:0]ExtOp;
	output [2:0]ALUctr;
	
	
	reg [1:0] regdst1;
	reg alusrc1;
	reg [1:0]memtoreg1;
	reg regwrite1;
	reg memwrite1;
	reg [1:0] pc1;
	reg [1:0] extop1;
	reg [2:0] aluctr1;
	initial begin
		regdst1=0;
		alusrc1=0;
		memtoreg1=0;
		regwrite1=0;
		memwrite1=0;
		pc1=0;
		extop1=0;
		aluctr1=0;
	end
	assign RegDst=regdst1;
	assign ALUSrc=alusrc1;
	assign MemtoReg= memtoreg1;
	assign RegWrite=regwrite1;
	assign MemWrite=memwrite1;
	assign npc_sel=pc1;
	assign ExtOp=extop1;
	assign ALUctr=aluctr1;
	
	always@(*) begin
		if(opcode==0) begin
			if(funct==33) begin //addu
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=1;
			end
			else if(funct==35) begin //subu
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=2;
			end
			else if(funct==8) begin //jr
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=3;
				extop1<=0;
				aluctr1<=0;
			end
			else begin //nop
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=0;
		end
		end
		
		else if(opcode==13) begin //ori
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=3;
		end
		else if(opcode==35) begin //lw
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=1;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
		end
		else if(opcode==43) begin //sw
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=1;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
		end
		else if(opcode==4) begin //beq
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=2;
		end
		else if(opcode==15) begin //lui
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=2;
				aluctr1<=4;
		end
		else if(opcode==3) begin //jal
				regdst1<=2;
				alusrc1<=0;
				memtoreg1<=2;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=2;
				extop1<=0;
				aluctr1<=0;
		end
		else if(opcode==2) begin//j
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=2;
				extop1<=0;
				aluctr1<=0;
		end
	end

endmodule
