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
	input [11:0] add,
	input exc,
	output [31:0] Instr
    );
	reg [31:0] ROM [4095:0];
	integer i;
	initial  begin
		for(i=0;i<4096;i=i+1) 
			ROM[i]=0;
		$readmemh("code.txt",ROM);
		$readmemh("code_handler.txt",ROM,1120,2047);
	end
	assign Instr=(exc==0)?ROM[add]:
							0;
endmodule
