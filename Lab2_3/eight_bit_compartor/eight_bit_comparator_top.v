`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:06:04 01/28/2019
// Design Name:   eight_bit_comparator
// Module Name:   /users/btech/sanghi/CS220/Lab2_3/eight_bit_compartor/eight_bit_comparator_top.v
// Project Name:  eight_bit_compartor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: eight_bit_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module eight_bit_comparator_top;

	// Inputs
	reg [3:0] PB;
	reg [3:0] Y;

	// Outputs
	wire gf;
	wire lf;
	wire ef;

	// Instantiate the Unit Under Test (UUT)
	eight_bit_comparator uut (
		.PB(PB), 
		.Y(Y), 
		.gf(gf), 
		.lf(lf), 
		.ef(ef)
	);
	
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
		
	always @(A or B or ef or gf or lf)
		$display("time %d: %8b %8b %b %b %b",$time,A,B,lf,gf,ef);

	initial begin
		PB = 4'b0000; Y = 4'b1001;
		#5;
		PB = 4'b0001; Y = 4'b0000;
		#5;
		PB = 4'b0010; Y = 4'b0000;
		#5;
		PB = 4'b0100; Y = 4'b0110;
		#5;
		PB = 4'b1000; Y = 4'b1001;
		#5;
		PB = 4'b0001; Y = 4'b0110;
		#5;
		$finish;

	end
      
endmodule

