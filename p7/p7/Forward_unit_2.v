`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:47 11/15/2019 
// Design Name: 
// Module Name:    Forward_unit_2 
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
module Forward_unit_2(WriteRegM,RegWriteM,WriteRegW,RegWriteW,A,Forward);
		input [4:0] WriteRegM;
		input RegWriteM;
		input [4:0] WriteRegW;
		input RegWriteW;
		input [4:0] A;
		output reg [1:0] Forward;
		
		always@(*) begin
			if(RegWriteM==1&&WriteRegM==A&&A!=0) Forward<=1;
			else if(RegWriteW==1&&WriteRegW==A&&A!=0)Forward<=2;
			else Forward<=0;
		end

endmodule