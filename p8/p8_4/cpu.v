`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:10:19 12/06/2019 
// Design Name: 
// Module Name:    cpu 
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
module cpu(clk,reset,PrAddr,PrRD,PrWD,PrWe,HWInt,clk2,DM_addr,DM_we,DM_WD);
	input clk;
	input clk2;
	input reset;
	output [31:0] PrAddr;
	input [31:0] PrRD;
	output [31:0] PrWD;
	output PrWe;
	output [31:0] DM_addr,DM_WD;
	output DM_we;
	input [5:0] HWInt;
	
	wire [31:0] pc,Instr,pc4,InstrD,pc4D,npc,pcD,ALUoutM,ResultW,pcW;
	wire [31:0] pc_jal,pc_beq,pc_jr,EPC_outM;
	wire [1:0] npc_sel;
	wire RegWriteW,MemWiteM,IntReq;
	wire [4:0] WriteRegW;
	wire [2:0]ForwardAD,ForwardBD;
	wire [1:0] ForwardAE,ForwardBE,ForwardAM;
	wire En,stall,clr;
	wire [31:0] pcc;
	wire [15:0] IMMD;
	wire [4:0] A1D,A2D,A3D;
	wire [5:0] opcodeD,functD;
	wire [31:0] RD1,RD2,Data1D,Data2D,EXTIMMD,offoutD,offoutE,offoutD1;
	wire [1:0]ALUSrcD,RegDstD;
	wire [2:0]MemtoRegD;
	wire RegWriteD,MemWriteD,EqualD;
	wire [1:0] npc_sel1D;
	wire [1:0] ExtOpD;
	wire [3:0] ALUctrD;
	wire [3:0] ALU_2selD;
	wire startD;
	wire [31:0] ALUoutW,EXTIMME;
	wire [1:0] ALUSrcE,RegDstE;
	wire [2:0] MemtoRegE;
	wire RegWriteE,MemWriteE,EqualE,startE;
	wire [3:0] ALUctrE;
	wire [4:0] A1E,A2E,A3E;
	wire [31:0] Data1E,Data2E,pcE;
	wire [5:0] opcodeE,functE;
	wire [3:0] ALU_2selE;
	wire [4:0] WriteRegE;
	wire [31:0] ALU_2outE;
	wire [31:0] ALU1E,ALU2E,WriteDataE,ALUoutE;
	wire busyE;
	wire [31:0] WriteDataM;
	wire [4:0] WriteRegM,A2M;
	wire [2:0] MemtoRegM;
	wire RegWriteM;
	wire [5:0] opcodeM,functM;
	wire [31:0] pcM,DMoutM,ALU_2outM;
	wire [31:0] WriteDataFM;
	wire [31:0] DMoutW,ALU_2outW;
	wire [2:0]MemtoRegW;
	wire [5:0] opcodeW,functW;
	wire [31:0] temp;
	wire [1:0] Tnew_E;
	wire [1:0] Tuse_rs,Tuse_rt;
	wire [1:0] Tnew_M;
	wire [31:0] npcF,EPCoutM;
	wire sel_pc2D;
	wire stall_rs,stall_rt,stall_3;
	wire clrD,clrD1;
	wire clrM;
	wire clrE;
	wire BDD,BDE,BDM,BD;
	assign clrM=(IntReq==1);
	assign clrE=(IntReq==1);
	assign clrD=(IntReq==1);
	assign clrD1=(opcodeD==16&&functD==24)&~stall;
	assign En=~stall&~reset;
	assign pc4=pc+4;
	wire [31:0] npc1;
	mux324 mux3241(.a(pc4),.b(pc_beq),.c(pc_jal),.d(pc_jr),.sel(npc_sel),.out(npc1));
	mux322 mux3222(.a(npc1),.b(EPCoutM),.sel(sel_pc2D),.c(npc));
	mux322 mux3221(.a(npc),.b(32'h0000_4180),.sel(IntReq),.c(npcF));
	GetNpc GetNpc(.npc(npcF),.reset(reset),.En(En),.clk(clk),.PC(pc));
	
	wire [5:0] EXC_F,EXC_D;
	assign EXC_F=(pc[1:0]!=0)?6'b100100:
					 (pc<32'h0000_3000|pc>32'h0000_4ffc)?6'b100100:
					 0;
	assign pcc=pc-32'h3000;
	
	IM IM1(.clk(clk2),.add(pcc[14:2]),.Instr(Instr),.exc(EXC_F[5]));	
						
	DReg DReg1(.clk(clk),.Instr(Instr),.En(En),.pc4(pc4),.InstrD(InstrD),.pc4D(pc4D),.pcD(pcD),.EXC_F(EXC_F),.EXC_D(EXC_D),.clr(clrE),.clr1(clrD1),.BD(BD),.BDD(BDD));
	
	assign pc_jal={pcD[31:28],InstrD[25:0],2'b0};
	assign pc_beq=pc4D+(EXTIMMD<<2);
	assign pc_jr=Data1D;
	assign IMMD=InstrD[15:0];
	assign A1D=InstrD[25:21];
	assign A2D=InstrD[20:16];
	assign A3D=InstrD[15:11];
	assign opcodeD=InstrD[31:26];
	assign functD=InstrD[5:0];
	assign clrD=(opcodeD==16&&functD==24);
	assign offoutD=(opcodeD==0&&functD==0)?(Data2D<<(InstrD[10:6])): //sll
						(opcodeD==0&&functD==4)?(Data2D<<(Data1D[4:0])):  //sllv
						(opcodeD==0&&functD==2)?(Data2D>>(InstrD[10:6])): //srl
						(opcodeD==0&&functD==6)?(Data2D>>(Data1D[4:0])):  //srlv
						(opcodeD==0&&(functD==3))?$signed($signed(Data2D)>>>{InstrD[10:6]}): //sra
						(opcodeD==0&&(functD==7))?$signed($signed(Data2D)>>>{Data1D[4:0]}):  //srav
							0;
	assign startD=((ALU_2selD<=4&&ALU_2selD>=1)||(ALU_2selD<=8&&ALU_2selD>=7));
	assign npc_sel= npc_sel1D==0?0:
						 npc_sel1D==1&&EqualD==1&&opcodeD==4?1: //beq
						 npc_sel1D==1&&EqualD==0&&opcodeD==5?1: //bne
						 npc_sel1D==1&&($signed(Data1D)<=0)&&opcodeD==6?1: //blez
						 npc_sel1D==1&&($signed(Data1D)>0)&&opcodeD==7?1:  //bgtz
						 npc_sel1D==1&&($signed(Data1D)<0)&&opcodeD==1&&A2D==0?1: //bltz
						 npc_sel1D==1&&($signed(Data1D)>=0)&&opcodeD==1&&A2D==1?1://bgez
						 npc_sel1D==2?2: //jal j 
						 npc_sel1D==3?3: //jalr
						 0;
	assign EqualD=(Data1D==Data2D);
	wire [5:0] EXC_D1;
	wire Write_cp0D;
	assign BD=(opcodeD==0&&functD>=8&&functD<=9)|(opcodeD>=1&&opcodeD<=7);
	Control Control1(.opcode(opcodeD),.funct(functD),.rs(A1D),.RegDst(RegDstD),.pc2(sel_pc2D),
							.ALUSrc(ALUSrcD),.MemtoReg(MemtoRegD),.RegWrite(RegWriteD),
							.MemWrite(MemWriteD),.npc_sel(npc_sel1D),.ExtOp(ExtOpD),
							.ALUctr(ALUctrD),.ALU_2sel(ALU_2selD),.EXC_D(EXC_D),.EXC_D1(EXC_D1),.Write_cp0(Write_cp0D));

	GRF GRF1(.pc(pcW),.A1(A1D),.A2(A2D),.A3(WriteRegW),
				.WD3(ResultW),.reset(reset),.clk(clk),
				.WE(RegWriteW),.RD1(RD1),.RD2(RD2));
	
	mux328 mux3285(.a(RD1),.b(EXTIMME),.c(ALUoutM),.d(ResultW),.e(offoutE),.sel(ForwardAD),.out(Data1D));
	mux328 mux3286(.a(RD2),.b(EXTIMME),.c(ALUoutM),.d(ResultW),.e(offoutE),.sel(ForwardBD),.out(Data2D));
	
	EXT EXTD(.IMM(IMMD),.ExtOp(ExtOpD),.ExtIMM(EXTIMMD));
	wire [5:0] EXC_E,EXC_E1;
	wire Write_cp0E;
	EReg EReg1(.clk(clk),.A1D(A1D),.A2D(A2D),.A3D(A3D),
					.Data1D(Data1D),.Data2D(Data2D),.EXTIMMD(EXTIMMD),
					.RegDstD(RegDstD),.ALUSrcD(ALUSrcD),.MemtoRegD(MemtoRegD),.offoutD(offoutD),
					.RegWriteD(RegWriteD),.MemWriteD(MemWriteD),.ALUctrD(ALUctrD),.opcodeD(opcodeD),.functD(functD),.pcD(pcD),.ALU_2selD(ALU_2selD),.startD(startD),
					.A1E(A1E),.A2E(A2E),.A3E(A3E),.BDD(BDD),.BDE(BDE),
					.Data1E(Data1E),.Data2E(Data2E),.EXTIMME(EXTIMME),.offoutE(offoutE),
					.RegDstE(RegDstE),.ALUSrcE(ALUSrcE),.MemtoRegE(MemtoRegE),
					.RegWriteE(RegWriteE),.MemWriteE(MemWriteE),.ALUctrE(ALUctrE),.opcodeE(opcodeE),.functE(functE),.pcE(pcE),.En(En),.ALU_2selE(ALU_2selE),.startE(startE),
					.EXC_D(EXC_D1),.EXC_E(EXC_E),.Write_cp0D(Write_cp0D),.Write_cp0E(Write_cp0E),.clr(clrE));
	
	assign WriteRegE= RegDstE==0?A2E:
							RegDstE==1?A3E:
							RegDstE==2?5'b11111:
							0;
	
	mux324 mux3242(.a(Data1E),.b(ALUoutM),.c(ResultW),.sel(ForwardAE),.out(ALU1E));
	mux324 mux3243(.a(Data2E),.b(ALUoutM),.c(ResultW),.sel(ForwardBE),.out(WriteDataE));
	mux324 mux3245(.a(WriteDataE),.b(EXTIMME),.c(offoutE),.d(ALU_2outE),.sel(ALUSrcE),.out(ALU2E));

	ALU ALU1(.opcode(opcodeE),.funct(functE),.EXC_E(EXC_E),.EXC_E1(EXC_E1),.A(ALU1E),.B(ALU2E),.ALUctr(ALUctrE),.ALUresult(ALUoutE));
	
	wire [5:0] EXC_M,EXC_M1;
	wire [4:0] A3M,A1M;
	wire Write_cp0M;
	MReg MReg1(.clk(clk),.WriteDataE(WriteDataE),.WriteRegE(WriteRegE),.MemtoRegE(MemtoRegE),.A2E(A2E),.A3E(A3E),.A1E(A1E),
					.RegWriteE(RegWriteE),.MemWriteE(MemWriteE),.opcodeE(opcodeE),.functE(functE),.pcE(pcE),.ALUoutE(ALUoutE),.ALU_2outE(ALU_2outE),
					.WriteDataM(WriteDataM),.WriteRegM(WriteRegM),.MemtoRegM(MemtoRegM),.A2M(A2M),.A3M(A3M),.A1M(A1M),
					.RegWriteM(RegWriteM),.MemWriteM(MemWriteM),.opcodeM(opcodeM),.functM(functM),.pcM(pcM),.ALUoutM(ALUoutM),.ALU_2outM(ALU_2outM),
					.EXC_E(EXC_E1),.EXC_M(EXC_M),.Write_cp0E(Write_cp0E),.Write_cp0M(Write_cp0M),.clr(clrM),.BDE(BDE),.BDM(BDM));
					
	mux324 mux3244(.a(WriteDataM),.b(ResultW),.sel(ForwardAM),.out(WriteDataFM));
	
	EXC_OP_M EXC_OP_M1(.EXC_M(EXC_M),.ALUout(ALUoutM),.EXC_M1(EXC_M1),.opcode(opcodeM),.funct(functM));
	wire MemWriteM1;
	wire HitDMM;
	assign HitDMM=(ALUoutM<=32'h0000_2fff);
	assign MemWriteM1=(MemWriteM==1&&IntReq==0&&(ALUoutM<=32'h0000_1fff));
	assign PrWe=(MemWriteM==1&&IntReq==0);
	assign PrAddr=ALUoutM;
	assign PrWD=WriteDataFM;
	
	DM DM1(.opcode(opcodeM),.byteM(ALUoutM[1:0]),.pc(pcM),.clk(clk2),.reset(reset),
			 .MemWrite(MemWriteM1),.addr(ALUoutM[14:2]),.din(WriteDataFM),.dout(DMoutM));
	wire [31:0] CP0_outM;
	wire EXLclrW;
	assign DM_addr={17'b0,ALUoutM[14:2],2'b0};
	assign DM_we=MemWriteM1;
	assign DM_WD=DMoutM;
	
	//module cp0(A1,DIn,PC,ExcCode,HWInt,WE,BD,EXLclr,clk,reset,IntReq,EPCout,Dout);
	cp0 cp0M(.A1(A3M),.DIn(ALUoutM),.PC(pcM),.ExcCode(EXC_M1),.WE(Write_cp0M),.BD(BDM),.EXLclr(EXLclrW),.clk(clk),.reset(reset),
				.IntReq(IntReq),.EPCout(EPCoutM),.Dout(CP0_outM),.HWInt(HWInt));
	wire [31:0] CP0_outW,PrRDW;
	WReg WReg1(.clk(clk),.WriteRegM(WriteRegM),.MemtoRegM(MemtoRegM),.RegWriteM(RegWriteM),.CP0_outM(CP0_outM),.HitDMM(HitDMM),
					.opcodeM(opcodeM),.functM(functM),.pcM(pcM),.ALUoutM(ALUoutM),.DMoutM(DMoutM),.ALU_2outM(ALU_2outM),
					.ALUoutW(ALUoutW),.DMoutW(DMoutW),.pcW(pcW),.MemtoRegW(MemtoRegW),.CP0_outW(CP0_outW),.HitDMW(HitDMW),.PrRDW(PrRDW),
					.RegWriteW(RegWriteW),.opcodeW(opcodeW),.functW(functW),.WriteRegW(WriteRegW),.ALU_2outW(ALU_2outW),.clr(clrM),.PrRD(PrRD));
	
	opt optW(.opcodeW(opcodeW),.addr(ALUoutW[1:0]),.DMoutW(DMoutW),.out(temp));
	assign ResultW= MemtoRegW==0?ALUoutW:
						 MemtoRegW==1&&HitDMW==1?DMoutW:
						 MemtoRegW==1&&HitDMW==0?PrRDW:
						 MemtoRegW==2?pcW+8:
						 MemtoRegW==3&&HitDMW?temp:
						 MemtoRegW==4?ALU_2outW:
						 MemtoRegW==5?CP0_outW:
						 0;
	assign EXLclrW=(opcodeW==16&&functW==24);
	Forward_unit_1 forword1(.opcodeE(opcodeE),.functE(functE),.WriteRegE(WriteRegE),.RegWriteE(RegWriteE),
									.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),
									.RegWriteW(RegWriteW),.A(A1D),.Forward(ForwardAD));
	Forward_unit_1 forword2(.opcodeE(opcodeE),.functE(functE),.WriteRegE(WriteRegE),.RegWriteE(RegWriteE),
									.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),
									.RegWriteW(RegWriteW),.A(A2D),.Forward(ForwardBD));
	Forward_unit_2 forword3(.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A1E),.Forward(ForwardAE));
	Forward_unit_2 forword4(.WriteRegM(WriteRegM),.RegWriteM(RegWriteM),.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A2E),.Forward(ForwardBE));
	Forward_unit_3 forward5(.WriteRegW(WriteRegW),.RegWriteW(RegWriteW),.A(A2M),.Forward(ForwardAM));
	
	
	
	assign Tuse_rs=(opcodeD==0&&functD==33)?1: //addu
						(opcodeD==0&&functD==34)?1: //sub
						(opcodeD==0&&functD==32)?1: //add
						(opcodeD==0&&functD==35)?1: //subu
						(opcodeD==0&&functD==36)?1: //and
						(opcodeD==0&&functD==37)?1: //or
						(opcodeD==0&&functD==38)?1: //xor
						(opcodeD==0&&functD==39)?1: //nor
						(opcodeD==0&&functD==42)?1: //slt
						(opcodeD==0&&functD==43)?1: //sltu
						(opcodeD==13)?1: //ori
						(opcodeD==8)?1:  //addi
						(opcodeD==9)?1:  //addiu
						(opcodeD==12)?1: //andi
						(opcodeD==14)?1: //xori
						(opcodeD==35)?1: //lw
						(opcodeD==33)?1: //lh
						(opcodeD==32)?1: //lb
						(opcodeD==36)?1: //lbu
						(opcodeD==37)?1: //lhu
						(opcodeD==43)?1: //sw
						(opcodeD==40)?1: //sb
						(opcodeD==41)?1: //sh
						(opcodeD==10)?1: //slti
						(opcodeD==11)?1: //sltiu
						(opcodeD==4)?0: //beq
						(opcodeD==5)?0: //bne
						(opcodeD==6)?0: //blez
						(opcodeD==7)?0: //bgtz
						(opcodeD==1)?0: //bltz bgtz
						(opcodeD==0&&functD==4)?0: //sllv
						(opcodeD==0&&functD==6)?0: //srlv
						(opcodeD==0&&functD==7)?0: //srav
						(opcodeD==0&&functD==8)?0: //jr
						(opcodeD==0&&functD==9)?0: //jalr
						2;
	assign Tuse_rt=(opcodeD==0&&functD==33)?1: //addu
						(opcodeD==0&&functD==34)?1: //sub
						(opcodeD==0&&functD==32)?1: //add
						(opcodeD==0&&functD==35)?1: //subu
						(opcodeD==0&&functD==36)?1: //and
						(opcodeD==0&&functD==37)?1: //or
						(opcodeD==0&&functD==38)?1: //xor
						(opcodeD==0&&functD==39)?1: //nor
						(opcodeD==0&&functD==42)?1: //slt
						(opcodeD==0&&functD==43)?1: //sltu
						(opcodeD==0&&functD==0)?0: //sll
						(opcodeD==0&&functD==4)?0: //sllv
						(opcodeD==0&&functD==6)?0: //srlv
						(opcodeD==0&&functD==2)?0:	//srl
						(opcodeD==0&&functD==3)?0:	//sra
						(opcodeD==0&&functD==7)?0: //srav
						(opcodeD==4)?0: //beq
						(opcodeD==5)?0: //bne
						(opcodeD==16&&A1D==4)?1: //mtc0
						2;			
						
	assign Tnew_E= (opcodeE==0&&functE==33)?1: //addu
						(opcodeE==0&&functE==34)?1: //sub
						(opcodeE==0&&functE==32)?1: //add
						(opcodeE==0&&functE==35)?1: //subu
						(opcodeE==0&&functE==36)?1: //and
						(opcodeE==0&&functE==37)?1: //or
						(opcodeE==0&&functE==38)?1: //xor
						(opcodeE==0&&functE==39)?1: //nor
						(opcodeE==0&&functE==42)?1: //slt
						(opcodeE==0&&functE==43)?1: //sltu
						(opcodeE==13)?1: //ori
						(opcodeE==8)?1:  //addi
						(opcodeE==9)?1:  //addiu
						(opcodeE==10)?1: //slt
						(opcodeE==12)?1: //andi
						(opcodeE==14)?1: //xori
						(opcodeE==11)?1: //sltiu
						(opcodeE==35)?2: //lw
						(opcodeE==32)?2: //lbl
						(opcodeE==36)?2: //lbu
						(opcodeE==33)?2: //lh
						(opcodeE==37)?2: //lhu
						(opcodeE==3)?2:  //jal
						(opcodeE==16&&A1E==0)?2:  //mfc0
						(opcodeE==0&&functE==9)?2: //jalr
						0;

	assign Tnew_M=(opcodeM==35)?1: //lw
					  (opcodeM==36)?1: //lbu
					  (opcodeM==33)?1: //lh
					  (opcodeM==37)?1: //lhu
					  (opcodeM==32)?1: //lb
					  (opcodeM==3)?1:  //jal
					  (opcodeM==16&&A1M==0)?1:  //mfc0
					  (opcodeM==0&&functM==9)?1: //jalr
						0;

	assign stall_rs=(A1D==0)?0:
						 (A1D==WriteRegE&&RegWriteE==1&&Tuse_rs<Tnew_E)?1:
						 (A1D==WriteRegE&&RegWriteE==1&&Tuse_rs>=Tnew_E)?0:
						 (A1D==WriteRegM&&RegWriteM==1&&Tuse_rs<Tnew_M)?1:
						 0;
						 
	assign stall_rt=(A2D==0)?0:
						 (A2D==WriteRegE&&RegWriteE==1&&Tuse_rt<Tnew_E)?1:
						 (A2D==WriteRegE&&RegWriteE==1&&Tuse_rt>=Tnew_E)?0:
						 (A2D==WriteRegM&&RegWriteM==1&&Tuse_rt<Tnew_M)?1:
						 0;

	wire stall_4;
	assign stall_4=(opcodeD==16&&functD==24&&((opcodeE==16&&A1E==4)||(opcodeM==16&&A1M==4)));
	assign stall=stall_rs|stall_rt|stall_4;


endmodule
