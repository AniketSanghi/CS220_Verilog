`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:13 01/28/2019 
// Design Name: 
// Module Name:    eight_bit_comparator 
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
module eight_bit_comparator(PB,Y,gf,lf,ef);

	input [3:0] PB;
	input [3:0] Y;
	output gf,lf,ef;
	wire gf,lf,ef;
	wire [6:0] g;
	wire [6:0] l;
	wire [6:0] e;
	reg [7:0] A;
	reg [7:0] B;
	
	always @(posedge PB[0])
		A[3:0] <= Y;
	always @(posedge PB[1])
		A[7:4] <= Y;
	always @(posedge PB[2])
		B[3:0] <= Y;
	always @(posedge PB[3])
		B[7:4] <= Y;
		
		comparator C0(A[7],B[7],1'b0,1'b0,1'b1,g[6],l[6],e[6]);
		comparator C1(A[6],B[6],g[6],l[6],e[6],g[5],l[5],e[5]);
		comparator C2(A[5],B[5],g[5],l[5],e[5],g[4],l[4],e[4]);
		comparator C3(A[4],B[4],g[4],l[4],e[4],g[3],l[3],e[3]);
		comparator C4(A[3],B[3],g[3],l[3],e[3],g[2],l[2],e[2]);
		comparator C5(A[2],B[2],g[2],l[2],e[2],g[1],l[1],e[1]);
		comparator C6(A[1],B[1],g[1],l[1],e[1],g[0],l[0],e[0]);
		comparator C7(A[0],B[0],g[0],l[0],e[0],gf,lf,ef);
endmodule
