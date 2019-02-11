`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:02 01/30/2019 
// Design Name: 
// Module Name:    five4add 
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
module five4add(PB, RPB, Y, sum);

	input [3:0] PB;
	input RPB;
	input [3:0] Y;
	output [6:0] sum;
	wire [6:0] sum;
	wire [4:0] p;
	wire [4:0] q;
	wire [5:0] r;
	reg [5:0] temp;
	reg [3:0] A,B,C,D;
	
	always @(posedge PB[0])
		A <= Y;
	always @(posedge PB[1])
		B <= Y;
	always @(posedge PB[2])
		C <= Y;
	always @(posedge PB[3])
		D <= Y;
	always @(posedge RPB) begin
		
		temp[3:0] <=  Y;
		temp[5:4] <= 2'b00;
	end
	
	fourbitadder F41(A,B,p);
	fourbitadder F42(C,D,q);
	fivebitadder F51(p,q,r);
	sixbitadder  F61(r,temp,sum);
	
	
	


endmodule
