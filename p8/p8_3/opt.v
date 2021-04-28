`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:02 11/22/2019 
// Design Name: 
// Module Name:    opt 
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
module opt(opcodeW,addr,DMoutW,out);
	input [5:0] opcodeW;
	input [1:0] addr;
	input [31:0]  DMoutW;
	output reg [31:0] out;
	integer i;
	always @(*) begin
		if(opcodeW==32) begin
				if(addr==0) out={{24{DMoutW[7]}},DMoutW[7:0]};
				else if(addr==1) out={{24{DMoutW[15]}},DMoutW[15:8]};
				else if(addr==2) out={{24{DMoutW[23]}},DMoutW[23:16]};
				else if(addr==3) out={{24{DMoutW[31]}},DMoutW[31:24]};
		end
		else if(opcodeW==36)begin
			if(addr==0) out={{24'b0},DMoutW[7:0]};
			else if(addr==1) out={{24'b0},DMoutW[15:8]};
			else if(addr==2) out={{24'b0},DMoutW[23:16]};
			else if(addr==3) out={{24'b0},DMoutW[31:24]};
		end
		else if(opcodeW==33) begin
			if(addr==0) out={{16{DMoutW[15]}},DMoutW[15:0]};
			else if(addr==2) out={{16{DMoutW[31]}},DMoutW[31:16]};
		end
		else if(opcodeW==37) begin
			if(addr==0) out={{16'b0},DMoutW[15:0]};
			else if(addr==2) out={{16'b0},DMoutW[31:16]};
		end
	end
endmodule
