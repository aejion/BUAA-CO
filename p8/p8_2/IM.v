`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:44 11/08/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
	input clk,
	input [12:0] add,
	input exc,
	output [31:0] Instr
    );
	wire [31:0] out;
	
	IMM IP_IM (
  .clka(clk), // input clka
  .wea(4'b0000), // input [3 : 0] wea
  .addra(add), // input [12 : 0] addra
  .dina(32'b0), // input [31 : 0] dina
  .douta(out) // output [31 : 0] douta
);
	assign Instr=(exc==0)?out:
							0;
endmodule
