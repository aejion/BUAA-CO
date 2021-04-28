`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:32 11/18/2019 
// Design Name: 
// Module Name:    Forward_unit_3 
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
module Forward_unit_3(WriteRegW,RegWriteW,A,Forward);
		input [4:0] WriteRegW;
		input RegWriteW;
		input [4:0] A;
		output reg [1:0] Forward;
		
		always@(*) begin
			if(RegWriteW==1&&WriteRegW==A&&A!=0)Forward<=1;
			else Forward<=0;
		end
endmodule
