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
module Control(opcode,funct,rs,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite,npc_sel,ExtOp,ALUctr,ALU_2sel,EXC_D,EXC_D1,Write_cp0,pc2);
	input [5:0] opcode;
	input [5:0] funct;
	input [4:0] rs;
	input [5:0] EXC_D;
	output [1:0] RegDst;
	output [1:0] ALUSrc;
	output [2:0]MemtoReg;
	output RegWrite;
	output MemWrite;
	output [1:0] npc_sel;
	output[1:0]ExtOp;
	output [3:0]ALUctr;
	output reg [3:0] ALU_2sel;
	output reg [5:0] EXC_D1;
	output reg Write_cp0;
	output reg pc2;
	
	reg [1:0] regdst1;
	reg [1:0] alusrc1;
	reg [2:0]memtoreg1;
	reg regwrite1;
	reg memwrite1;
	reg [1:0] pc1;
	reg [1:0] extop1;
	reg [3:0] aluctr1;
	
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
			if(funct==33||funct==32) begin //addu or add
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==35||funct==34) begin //subu or sub
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=2;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==9) begin //jalr
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=2;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=3;
				extop1<=0;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==0) begin //sll
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==4)begin//sllv
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==2)begin//srl
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==6)begin//srlv
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==3) begin //sra
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==7) begin //srav
				regdst1<=1;
				alusrc1<=2;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==36) begin //and
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=5;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==37) begin //or
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=3;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==38) begin //xor
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=6;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==39) begin //nor
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=7;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==42) begin //slt
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=8;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else if(funct==43) begin //sltu
				regdst1<=1;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=9;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
			else begin //Î´¶¨Òå
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=0;
				ALU_2sel<=0;
				EXC_D1<=6'b1_01010;
				Write_cp0<=0;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==10) begin //slti
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=8;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
		else if(opcode==11) begin //sltiu
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=9;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
			end
		else if(opcode==8) begin //addi
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==12) begin //andi
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=5;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==14) begin //xori
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=6;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==9) begin //addiu
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==32) begin //lb
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=3;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==36) begin //lbu
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=3;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==33) begin //lh
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=3;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==37) begin //lhu
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=3;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==40) begin //sb
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=1;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
				ALU_2sel<=0;
		end
		else if(opcode==41) begin //sh
				regdst1<=0;
				alusrc1<=1;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=1;
				pc1<=0;
				extop1<=1;
				aluctr1<=1;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==4) begin //beq
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==5) begin //bne
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==6) begin //blez
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==7) begin //bgtz
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==1) begin //bltz or bgez
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=1;
				extop1<=1;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
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
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==16&&rs==4) begin//mtco
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=4;
				ALU_2sel<=0;
				Write_cp0<=1;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==16&&rs==0) begin//mfc0
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=5;
				regwrite1<=1;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=EXC_D;
				pc2<=0;
		end
		else if(opcode==16&&funct==24) begin//eret
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				pc2<=1;
				EXC_D1<=EXC_D;
		end
		else begin
				regdst1<=0;
				alusrc1<=0;
				memtoreg1<=0;
				regwrite1<=0;
				memwrite1<=0;
				pc1<=0;
				extop1<=0;
				aluctr1<=0;
				ALU_2sel<=0;
				Write_cp0<=0;
				EXC_D1<=6'b1_01010;
		end
	end

endmodule
