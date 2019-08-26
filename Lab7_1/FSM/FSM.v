`timescale 1ns / 1ps
`define MAX 100000000
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:43 03/06/2019 
// Design Name: 
// Module Name:    FSM 
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
module FSM(clk, RPB, y, led);

input clk, RPB;
input [1:0] y;
output [3:0] led;
reg [3:0] led = 0;
reg [31:0] counter = 0;
reg [1:0] inp = 0;
reg [2:0] microcode[0:12];
reg [3:0] DROM1[0:3];
reg [3:0] DROM2[0:3];


initial begin
	microcode[0] <= 0;
	microcode[1] <= 0;
	microcode[2] <= 0;	
	microcode[3] <= 1;
	microcode[4] <= 3;
	microcode[5] <= 3;
	microcode[6] <= 3;
	microcode[7] <= 0;
	microcode[8] <= 0;
	microcode[9] <= 0;
	microcode[10] <= 2;
	microcode[11] <= 4;
	microcode[12] <= 4;
	
	DROM1[0] <= 4;
	DROM1[1] <= 5;
	DROM1[2] <= 6;
	DROM1[3] <= 6;
	
	DROM2[0] <= 11;
	DROM2[1] <= 12;
	DROM2[2] <= 12;
	DROM2[3] <= 12;
	
end







always @(posedge RPB)
	inp <= y[1:0];
	
always @(posedge clk) begin
	counter <= counter + 1;
	if(counter == `MAX) begin
		case(microcode[led])
		0: led <= led + 1;
		1: led <= DROM1[inp];
		2: led <= DROM2[inp];
		3: led <= 7;
		4: led <= 0;
		endcase
		counter <= 0;
	end
end


endmodule
