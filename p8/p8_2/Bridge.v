`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:47 12/06/2019 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(PrAddr,Dout0,Dout1,,Dout2,PrWe,WE1,WE0,PrRD,Dout3,WE3);
	input [31:0] PrAddr;
	input [31:0] Dout0,Dout2,Dout1,Dout3;
	input PrWe;
	output WE1,WE0,WE3;
	output [31:0] PrRD;
	
	wire [31:0] addr;
	assign addr={PrAddr[31:2],2'b0};
	assign PrRD=   addr>=32'h7f00 && addr<=32'h7f0B ? Dout0 :
						addr>=32'h7f2c && addr<=32'h7f33 ? Dout1 : 
						addr>=32'h7f40 && addr<=32'h7f43 ? Dout2 : 
						addr>=32'h7f10 && addr<=32'h7f2B ? Dout3 : 0 ;
	assign WE0=addr>=32'h7f00 && addr<=32'h7f0B&&PrWe?1:0;
	assign WE1=addr>=32'h7f44 && addr<=32'h7f47&&PrWe?1:0;
	assign WE3=addr>=32'h7f10 && addr<=32'h7f2B&&PrWe?1:0;

endmodule
