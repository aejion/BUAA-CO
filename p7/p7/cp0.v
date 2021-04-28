`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:14:20 12/06/2019 
// Design Name: 
// Module Name:    cp0 
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
module cp0(A1,DIn,PC,ExcCode,HWInt,WE,BD,EXLclr,clk,reset,IntReq,EPCout,Dout);
	input [4:0] A1;
	input [31:0] DIn;
	input [31:0] PC;
	input [5:0] ExcCode;
	input [5:0] HWInt;
	input BD,WE,clk,reset;
	input EXLclr;
	output  IntReq;
	output [31:0] EPCout;
	output [31:0] Dout;
	
	reg [31:0] SR,Cause,EPC,PRID;
	wire IntReq1;
	assign IntReq1=|(HWInt[5:0]&SR[15:10])&SR[0]&~SR[1];
	initial begin
		SR=0;
		Cause=0;
		EPC= 32'h0000_3000;
		PRID=0;
	end
	assign Dout=(A1==12)?SR:
					(A1==13)?Cause:
					(A1==14)?EPC:
					(A1==15)?PRID:
					0;
	assign EPCout=EPC;
	assign IntReq=(|(HWInt[5:0]&SR[15:10])&SR[0]&~SR[1])|(ExcCode[5]);//SR[1]ΪEXL;
	reg [31:0] SR1;
	always@(posedge clk) begin
		SR1=SR;
		if(reset) begin 
		SR<=0;
		Cause<=0;
		EPC<= 32'h0000_3000;
		PRID<=0;
		end
		else begin
			if(WE&IntReq==0) begin
				if(A1==12) SR<=DIn;
				else if(A1==13) Cause<=DIn;
				else if(A1==14) EPC<=DIn;
				else if(A1==15) PRID<=DIn;
				//$display("@%h:$cp0_%d<=%h",PC, A1,DIn);
			end
			if(EXLclr) SR[1]<=0;
			if(IntReq==1) SR[1]<=1;
			Cause[15:10]<=HWInt;
			end
		if(IntReq) begin
			EPC={PC[31:2],2'b0};
			if(BD==1) EPC=EPC-4;
			if(IntReq1==1) begin
					Cause[6:2]<=0;
			end
			else
			Cause[6:2]<=ExcCode[4:0];
			Cause[31]<=BD;
			//$display("@%h:$(%d %h)",PC,BD,ExcCode[4:0]);
		end
	end
	
endmodule
