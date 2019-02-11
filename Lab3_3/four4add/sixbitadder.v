`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:14 01/30/2019 
// Design Name: 
// Module Name:    sixbitadder 
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
module sixbitadder(A,B,C);

	input [5:0] A;
	input [5:0] B;
	output [6:0] C;
	wire [6:0] C;
	wire [4:0] carry;
	
	full_adder F0(A[0],B[0],1'b0,C[0],carry[0]);
	full_adder F1(A[1],B[1],carry[0],C[1],carry[1]);
	full_adder F2(A[2],B[2],carry[1],C[2],carry[2]);
	full_adder F3(A[3],B[3],carry[2],C[3],carry[3]);
	full_adder F4(A[4],B[4],carry[3],C[4],carry[4]);
	full_adder F5(A[5],B[5],carry[4],C[5],C[6]);
	
endmodule
