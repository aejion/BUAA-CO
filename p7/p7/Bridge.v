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
module Bridge(PrAddr,Dout0,Dout1,PrWe,WE1,WE0,PrRD);
	input [31:0] PrAddr;
	input [31:0] Dout0,Dout1;
	input PrWe;
	output WE1,WE0;
	output [31:0] PrRD;
	
	wire [31:0] addr;
	assign addr={PrAddr[31:2],2'b0};
	assign PrRD=   addr>=32'h7f00 && addr<=32'h7f0B ? Dout0 :
						addr>=32'h7f10 && addr<=32'h7f1B ? Dout1 : 0 ;
	assign WE0=addr>=32'h7f00 && addr<=32'h7f0B&&PrWe?1:0;
	assign WE1=addr>=32'h7f10 && addr<=32'h7f1B&&PrWe?1:0;

endmodule
