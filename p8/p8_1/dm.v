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
	
	DMM IP_DM (
  .clka(clk), // input clka
  .wea(wea), // input [3 : 0] wea
  .addra(addr), // input [12 : 0] addra
  .dina(din), // input [31 : 0] dina
  .douta(dout) // output [31 : 0] douta
);

	always@(*) begin
		if(MemWrite==1) begin
			if(opcode==43) wea<=4'b1111;
			else if(opcode==41) begin
				if(byteM==0) begin
					wea<=4'b0011;
				end
				else if(byteM==2) begin
					wea<=4'b1100;
				end
			end
			else if(opcode==40) begin
				if(byteM==0) begin
					wea<=4'b0001;
				end
				else if(byteM==1) begin
					wea<=4'b0010;
				end
				else if(byteM==2) begin
					wea<=4'b0100;
				end
				else if(byteM==3) begin
					wea<=4'b1000;
				end
			end
		end
		else wea<=4'b0000;
	end
	
endmodule
