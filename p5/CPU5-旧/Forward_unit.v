`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:35 11/15/2019 
// Design Name: 
// Module Name:    Forward_unit 
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
module Forward_unit(WriteRegM,RegWriteM,A,Forward);
		input [4:0] WriteRegM;
		input RegWriteM;
		input [4:0] A;
		output reg Forward;
		
		always@(*) begin
			if(RegWriteM==1&&WriteRegM==A&&A!=0) Forward<=1;
			else Forward<=0;
		end

endmodule
