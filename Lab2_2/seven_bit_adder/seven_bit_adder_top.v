`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:27 01/24/2019
// Design Name:   seven_bit_adder
// Module Name:   /users/btech/sanghi/Lab2_2/seven_bit_adder/seven_bit_adder_top.v
// Project Name:  seven_bit_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seven_bit_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module seven_bit_adder_top;

	// Inputs
	reg [3:0] PB;
	reg [3:0] Y;

	// Outputs
	wire [6:0] sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	seven_bit_adder uut (
		.PB(PB), 
		.Y(Y), 
		.sum(sum), 
		.carry(carry)
	);
	
	reg [6:0] A;
	reg [6:0] B;
	
	always @(posedge PB[0]) begin
		A[3:0] <= Y;
	end
	always @(posedge PB[1]) begin
		A[6:4] <= Y[2:0];
	end
	always @(posedge PB[2]) begin
		B[3:0] <= Y;
	end
	always @(posedge PB[3]) begin
		B[6:4] <= Y[2:0];
	end
	
	always @(sum or carry) begin
		$display("time = %d: %7b + %7b = %b%7b",$time,A,B,carry,sum);
	end

	initial begin
		PB = 4'b0000; Y = 4'b0000;
		#5
		PB = 4'b0001; Y = 4'b1101;
		#5
		PB = 4'b0010; Y = 4'b1101;
		#5
		PB = 4'b0100; Y = 4'b1101;
		#5
		PB = 4'b1000; Y = 4'b1101;
		#5
		PB = 4'b0000; Y = 4'b0000;
		#5
		PB = 4'b0001; Y = 4'b1001;
		#5
		PB = 4'b0010; Y = 4'b1001;
		#5
		PB = 4'b0100; Y = 4'b1001;
		#5
		PB = 4'b1000; Y = 4'b1001;
		#5
		$finish;

	end
      
endmodule

