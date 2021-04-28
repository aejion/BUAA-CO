`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:33 11/08/2019 
// Design Name: 
// Module Name:    DM
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
module DM(opcode,byteM,pc,clk,reset,MemWrite,addr,din,dout);
	input [31:0] pc;
	input clk;
	input reset;
	input MemWrite;
	input [12:0] addr;
	input [31:0] din;
	input [5:0] opcode;
	input [1:0] byteM;
	output [31:0] dout;
	
	reg [3:0] wea;
	reg [31:0] din1;
	
	DMM IP_DM (
  .clka(clk), // input clka
  .wea(wea), // input [3 : 0] wea
  .addra(addr), // input [12 : 0] addra
  .dina(din1), // input [31 : 0] dina
  .douta(dout) // output [31 : 0] douta
);

	always@(*) begin
		if(MemWrite==1) begin
			if(opcode==43) begin wea<=4'b1111;
				din1<=din;
			end
			else if(opcode==41) begin
				if(byteM==0) begin
					wea<=4'b0011;
					din1<=din;
				end
				else if(byteM==2) begin
					wea<=4'b1100;
					din1[31:16]<=din[15:0];
				end
			end
			else if(opcode==40) begin
				if(byteM==0) begin
					wea<=4'b0001;
					din1[7:0]<=din[7:0];
				end
				else if(byteM==1) begin
					wea<=4'b0010;
					din1[15:8]<=din[7:0];
				end
				else if(byteM==2) begin
					wea<=4'b0100;
					din1[23:16]<=din[7:0];
				end
				else if(byteM==3) begin
					wea<=4'b1000;
					din1[31:24]<=din[7:0];
				end
			end
		end
		else wea<=4'b0000;
	end
endmodule
