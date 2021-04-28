`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:13:52 11/08/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(clk,reset);
	input clk;
	input reset;
	wire [31:0] Instr,npc1,npc2,nPC,ALUresult,
					RD,RegData,RD1,RD2,ExtIMM,ALU2,npc3,npc4,npc5;
	wire [15:0] IMM;
	wire [25:0] IMM1;
	wire [1:0] RegDst,MemtoReg;
	wire ALUSrc,RegWrite,
		  MemWrite,npc_sel,npc_sel2,npc_sel4,npc_sel5;
	wire [1:0] ExtOp;
	wire [2:0] ALUctr;
	wire [5:0] funct,opcode;
	wire [4:0] shamt,A3,A2,A1,A4,RegAddr;
	
	assign funct=Instr[5:0];
	assign shamt=Instr[10:6];
	assign A4=31;
	assign A3=Instr[15:11];
	assign A2=Instr[20:16];
	assign A1=Instr[25:21];
	assign opcode=Instr[31:26];
	assign IMM=Instr[15:0];
	assign IMM1=Instr[25:0];
	assign npc1=nPC+4;
	assign npc2=nPC+4+(ExtIMM<<2);
	assign npc_sel2=(ALUresult==0?1:0)&npc_sel;
	assign npc3={nPC[31:28],Instr[25:0],2'b00};
	
	GetNpc get(.npc1(npc1),
				  .npc2(npc4),
				  .npc_sel2(npc_sel2),
				  .reset(reset),
				  .clk(clk),
				  .nPC(nPC));
				  
	IM getInstr(.add(nPC[11:2]),.Instr(Instr));
	
	Control getControl(.opcode(opcode),
							 .funct(funct),
							 .RegDst(RegDst),
							 .ALUSrc(ALUSrc),
							 .MemtoReg(MemtoReg),
							 .RegWrite(RegWrite),
							 .MemWrite(MemWrite),
							 .npc_sel(npc_sel),
							 .ExtOp(ExtOp),
							 .ALUctr(ALUctr),
							 .npc_sel3(npc_sel4),
							 .npc_sel4(npc_sel5));
	
	mux324 mux2(.a(ALUresult),.b(RD),.c(npc1),.sel(MemtoReg),.out(RegData));
	
	mux322 mux3(.a(RD2),.b(ExtIMM),.sel(ALUSrc),.c(ALU2));
	
	mux322 mux5(.a(npc3),.b(RD1),.sel(npc_sel5),.c(npc5));
	
	mux322 mux4(.a(npc2),.b(npc5),.sel(npc_sel4),.c(npc4));
	
	mux54 mux1(.a(A2),.b(A3),.c(A4),.sel(RegDst),.out(RegAddr));
	
	GRF getGRF(.pc(nPC),
				  .A1(A1),
				  .A2(A2),
				  .A3(RegAddr),
				  .WD3(RegData),
				  .reset(reset),
				  .clk(clk),
				  .WE(RegWrite),
				  .RD1(RD1),
				  .RD2(RD2));
				
	EXT getExt(.IMM(IMM),.ExtOp(ExtOp),.ExtIMM(ExtIMM));
	
	ALU getAlu(.A(RD1),.B(ALU2),.ALUctr(ALUctr),.ALUresult(ALUresult));
	
	DM getDm(.pc(nPC),
				.clk(clk),
				.reset(reset),
				.MemWrite(MemWrite),
				.addr(ALUresult[11:2]),
				.din(RD2),
				.dout(RD));
endmodule
