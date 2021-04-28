`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:35 11/15/2019 
// Design Name: 
// Module Name:    Forward_unit_1
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
module Forward_unit_1(opcodeE,functE,WriteRegE,RegWriteE,WriteRegM,RegWriteM,WriteRegW,RegWriteW,A,Forward);
		input [4:0] WriteRegM;
		input RegWriteM;
		input [4:0] WriteRegW;
		input RegWriteW;
		input [4:0] WriteRegE;
		input RegWriteE;
		input [5:0] opcodeE,functE;
		input [4:0] A;
		output reg [2:0] Forward;
		
		always@(*) begin
			if(opcodeE==15&&RegWriteE==1&&WriteRegE==A&&A!=0)	Forward<=1;
			else if(opcodeE==0&&(functE==0||functE==4||functE==2||functE==6||functE==7||functE==3)&&RegWriteE==1&&WriteRegE==A&&A!=0) Forward<=4;
			else if(RegWriteM==1&&WriteRegM==A&&A!=0) Forward<=2;
			else if(RegWriteW==1&&WriteRegW==A&&A!=0)Forward<=3;
			else Forward<=0;
		end

endmodule
