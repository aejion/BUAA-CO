`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:11:49 11/15/2019 
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
	wire [31:0] pc,Instr,pc4,InstrD,pc4D,npc,pcD,ALUoutM,ResultW,pcW;
	wire [31:0] pc_jal,pc_beq,pc_jr;
	wire [1:0] npc_sel;
	wire RegWriteW,MemWiteM;
	wire [4:0] WriteRegW;
	wire [1:0]ForwardAD,ForwardBD;
	wire [1:0] ForwardAE,ForwardBE,ForwardAM;
	wire En,stall,clr;
	assign En=~stall&~reset;
	assign pc4=pc+4;
	assign clr=(npc_sel==1);
	mux324 mux3241(.a(pc4),.b(pc_beq),.c(pc_jal),.d(pc_jr),.sel(npc_sel),.out(npc));
	
	//module GetNpc(npc,reset,clk,PC);
	GetNpc GetNpc(.npc(npc),.reset(reset),.En(En),.clk(clk),.PC(pc));
	
	IM IM1(.add(pc[11:2]),.Instr(Instr));	
						
						
	//module DReg(clk,En,Instr,pc4,clr,InstrD,pc4D);
	DReg DReg1(.clk(clk),.Instr(Instr),.En(En),.pc4(pc4),.InstrD(InstrD),.pc4D(pc4D),.pcD(pcD));
	
	
	wire [15:0] IMMD;
	wire [4:0] A1D,A2D,A3D;
	wire [5:0] opcodeD,functD;
	wire [31:0] RD1,RD2,Data1D,Data2D,EXTIMMD;

	assign pc_jal={pcD[31:28],InstrD[25:0],2'b0};
	assign pc_beq=pc4D+(EXTIMMD<<2);
	assign pc_jr=Data1D;
	assign IMMD=InstrD[15:0];
	assign A1D=InstrD[25:21];
	assign A2D=InstrD[20:16];
	assign A3D=InstrD[15:11];
	assign opcodeD=InstrD[31:26];
	assign functD=InstrD[5:0];
	
	wire [1:0]RegDstD,MemtoRegD;
	wire ALUSrcD,RegWriteD,MemWriteD,EqualD;
	wire [1:0] npc_sel1D;
	wire [1:0] ExtOpD;
	wire [2:0] ALUctrD;
	
	assign npc_sel= npc_sel1D==0?0:
						 npc_sel1D==1&&EqualD==1?1:
						 npc_sel1D==1&&EqualD==0?0:
						 npc_sel1D==2?2:
						 npc_sel1D==3?3:
						 0;
	assign EqualD=(Data1D==Data2D);
	//module Control(opcode,funct,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite,npc_sel,ExtOp,ALUctr,npc_sel3,npc_sel4);
	Control Control1(.opcode(opcodeD),.funct(functD),.RegDst(RegDstD),
							.ALUSrc(ALUSrcD),.MemtoReg(MemtoRegD),.RegWrite(RegWriteD),
							.MemWrite(MemWriteD),.npc_sel(npc_sel1D),.ExtOp(ExtOpD),
							.ALUctr(ALUctrD));
	//module GRF(pc,A1,A2,A3,WD3,reset,clk,WE,RD1,RD2);
	GRF GRF1(.pc(pcW),.A1(A1D),.A2(A2D),.A3(WriteRegW),
				.WD3(ResultW),.reset(reset),.clk(clk),
				.WE(RegWriteW),.RD1(RD1),.RD2(RD2));
	
	wire [31:0] ALUoutW,EXTIMME;
	//module mux322(a,b,sel,c);
	mux324 mux3245(.a(RD1),.b(EXTIMME),.c(ALUoutM),.d(ResultW),.sel(ForwardAD),.out(Data1D));
	mux324 mux3246(.a(RD2),.b(EXTIMME),.c(ALUoutM),.d(ResultW),.sel(ForwardBD),.out(Data2D));
	
	//module EXT(IMM,ExtOp,ExtIMM);
	EXT EXTD(.IMM(IMMD),.ExtOp(ExtOpD),.ExtIMM(EXTIMMD));
	
	wire [1:0]RegDstE,MemtoRegE;
	wire ALUSrcE,RegWriteE,MemWriteE,EqualE;
	wire [2:0] ALUctrE;
	wire [4:0] A1E,A2E,A3E;
	wire [31:0] Data1E,Data2E,pcE;
	wire [5:0] opcodeE,functE;
	//module EReg(clk,A1D,A2D,A3D,Data1D,Data2D,EXTIMMD,RegDstD,ALUSrcD,MemtoRegD,RegWriteD,MemWriteD,ALUctrD,opcodeD,functD,
				//A1E,A2E,A3E,Data1E,Data2E,EXTIMME,RegDstE,ALUSrcE,MemtoRegE,RegWriteE,MemWriteE,ALUctrE,opcodeE,functE)
	EReg EReg1(.clk(clk),.A1D(A1D),.A2D(A2D),.A3D(A3D),
					.Data1D(Data1D),.Data2D(Data2D),.EXTIMMD(EXTIMMD),
					.RegDstD(RegDstD),.ALUSrcD(ALUSrcD),.MemtoRegD(MemtoRegD),
					.RegWriteD(RegWriteD),.MemWriteD(MemWriteD),.ALUctrD(ALUctrD),.opcodeD(opcodeD),.functD(functD),.pcD(pcD),
					.A1E(A1E),.A2E(A2E),.A3E(A3E),
					.Data1E(Data1E),.Data2E(Data2E),.EXTIMME(EXTIMME),
					.RegDstE(RegDstE),.ALUSrcE(ALUSrcE),.MemtoRegE(MemtoRegE),
					.RegWriteE(RegWriteE),.MemWriteE(MemWriteE),.ALUctrE(ALUctrE),.opcodeE(opcodeE),.functE(functE),.pcE(pcE),.En(En));
	
	wire [4:0] WriteRegE;
	
	assign WriteRegE= RegDstE==0?A2E:
							RegDstE==1?A3E:
							RegDstE==2?5'b11111:
							0;
	
	wire [31:0] ALU1E,ALU2E,WriteDataE,ALUoutE;
	
	mux324 mux3242(.a(Data1E),.b(ALUoutM),.c(ResultW),.sel(ForwardAE),.out(ALU1E));
	mux324 mux3243(.a(Data2E),.b(ALUoutM),.c(ResultW),.sel(ForwardBE),.out(WriteDataE));
	mux322 mux3223(.a(WriteDataE),.b(EXTIMME),.sel(ALUSrcE),.c(ALU2E));
	
	//module ALU(A,B,ALUctr,ALUresult);
	ALU ALU1(.A(ALU1E),.B(ALU2E),.ALUctr(ALUctrE),.ALUresult(ALUoutE));
	
	wire [31:0] WriteDataM;
	wire [4:0] WriteRegM,A2M;
	wire [1:0] MemtoRegM;
	wire RegWriteM;
	wire [5:0] opcodeM,functM;
	wire [31:0] pcM,DMoutM;
	//module MReg(clk,WriteDataE,WriteRegE,MemtoRegE,RegWriteE,MemWriteE,opcodeE,functE,pcE,ALUoutE,
				//WriteDataM,WriteRegM,MemtoRegM,RegWriteM,MemWriteM,opcodeM,functM,pcM,ALUoutM);
	MReg MReg1(.clk(clk),.WriteDataE(WriteDataE),.WriteRegE(WriteRegE),.MemtoRegE(MemtoRegE),.A2E(A2E),
					.RegWriteE(RegWriteE),.MemWriteE(MemWriteE),.opcodeE(opcodeE),.functE(functE),.pcE(pcE),.ALUoutE(ALUoutE),
					.WriteDataM(WriteDataM),.WriteRegM(WriteRegM),.MemtoRegM(MemtoRegM),.A2M(A2M),
					.RegWriteM(RegWriteM),.MemWriteM(MemWriteM),.opcodeM(opcodeM),.functM(functM),.pcM(pcM),.ALUoutM(ALUoutM));
	wire [31:0] WriteDataFM;
	mux324 mux3244(.a(WriteDataM),.b(ResultW),.sel(ForwardAM),.out(WriteDataFM));
	//module DM(pc,clk,reset,MemWrite,addr,din,dout);
	DM DM1(.pc(pcM),.clk(clk),.reset(reset),.MemWrite(MemWriteM),.addr(ALUoutM[11:2]),.din(WriteDataFM),.dout(DMoutM));
	
	wire [31:0] DMoutW;
	wire [1:0]MemtoRegW;
	wire [5:0] opcodeW,functW;
	//module WReg(clk,WriteRegM,MemtoRegM,RegWriteM,opcodeM,functM,pcM,ALUoutM,DMoutM,
					//ALUoutW,DMoutW,pcW,MemtoRegW,RegWriteW,opcodeW,functW,WriteRegW);
	WReg WReg1(.clk(clk),.WriteRegM(WriteRegM),.MemtoRegM(MemtoRegM),.RegWriteM(RegWriteM),
					.opcodeM(opcodeM),.functM(functM),.pcM(pcM),.ALUoutM(ALUoutM),.DMoutM(DMoutM),
					.ALUoutW(ALUoutW),.DMoutW(DMoutW),.pcW(pcW),.MemtoRegW(MemtoRegW),
					.RegWriteW(RegWriteW),.opcodeW(opcodeW),.functW(functW),.WriteRegW(WriteRegW));
	
	assign ResultW= MemtoRegW==0?ALUoutW:
						 MemtoRegW==1?DMoutW:
						 MemtoRegW==2?pcW+8:
						 0;
	Forward_unit_1 forword1(.opcodeE(opcodeE),.WriteRegE(WriteRegE),.RegWriteE(RegWriteE),
									.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),
									.RegWriteW(RegWriteW),.A(A1D),.Forward(ForwardAD));
	Forward_unit_1 forword2(.opcodeE(opcodeE),.WriteRegE(WriteRegE),.RegWriteE(RegWriteE),
									.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),
									.RegWriteW(RegWriteW),.A(A2D),.Forward(ForwardBD));
	Forward_unit_2 forword3(.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A1E),.Forward(ForwardAE));
	Forward_unit_2 forword4(.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A2E),.Forward(ForwardBE));
	Forward_unit_3 forward5(.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A2M),.Forward(ForwardAM));
	
	wire [1:0] Tuse_rs,Tuse_rt;
	assign Tuse_rs=(opcodeD==0&&functD==33)?1:
						(opcodeD==0&&functD==35)?1:
						(opcodeD==13)?1:
						(opcodeD==35)?1:
						(opcodeD==43)?1:
						(opcodeD==4)?0:
						(opcodeD==0&&functD==8)?0:
						2;
	assign Tuse_rt=(opcodeD==0&&functD==33)?1:
						(opcodeD==0&&functD==35)?1:
						(opcodeD==43)?2:
						(opcodeD==4)?0:
						2;			
	wire [1:0] Tnew_E;
	assign Tnew_E=(opcodeE==0&&functE==33)?1:
						(opcodeE==0&&functE==35)?1:
						(opcodeE==13)?1:
						(opcodeE==35)?2:
						(opcodeE==3)?2:
						0;
	wire [1:0] Tnew_M;
	assign Tnew_M=(opcodeM==35)?1:
					  (opcodeM==3)?1:
						0;
	wire stall_rs;
	assign stall_rs=(A1D==0)?0:
						 (A1D==WriteRegE&&RegWriteE==1&&Tuse_rs<Tnew_E)?1:
						 (A1D==WriteRegE&&RegWriteE==1&&Tuse_rs>=Tnew_E)?0:
						 (A1D==WriteRegM&&RegWriteM==1&&Tuse_rs<Tnew_M)?1:
						 0;
	wire stall_rt;
	assign stall_rt=(A2D==0)?0:
						 (A2D==WriteRegE&&RegWriteE==1&&Tuse_rt<Tnew_E)?1:
						 (A2D==WriteRegE&&RegWriteE==1&&Tuse_rt>=Tnew_E)?0:
						 (A2D==WriteRegM&&RegWriteM==1&&Tuse_rt<Tnew_M)?1:
						 0;
	assign stall=stall_rs|stall_rt;
			
endmodule
