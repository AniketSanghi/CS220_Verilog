`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:18:39 01/30/2019
// Design Name:   five4add
// Module Name:   /users/btech/sanghi/CS220/Lab3_3/four4add/four4adder_top.v
// Project Name:  four4add
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: five4add
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four4adder_top;

	// Inputs
	reg [3:0] PB;
	reg RPB;
	reg [3:0] Y;

	// Outputs
	wire [6:0] sum;

	// Instantiate the Unit Under Test (UUT)
	five4add uut (
		.PB(PB), 
		.RPB(RPB), 
		.Y(Y), 
		.sum(sum)
	);
	
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
	
	always @(sum)
		$display("time %d: %4b + %4b + %4b + %4b +%4b = %7b ",$time,A,B,C,D,temp[3:0],sum);
		

	
	initial begin
	  PB = 4'b0000; RPB = 1'b0; Y = 4'b0000;
	  #5
	  PB = 4'b0001; RPB = 1'b0; Y = 4'b1001;
	  #5
	  PB = 4'b0010; RPB = 1'b0; Y = 4'b1001;
	  #5
	  PB = 4'b0100; RPB = 1'b0; Y = 4'b1001;
	  #5
	  PB = 4'b1000; RPB = 1'b0; Y = 4'b1001;
	  #5
	  PB = 4'b0000; RPB = 1'b1; Y = 4'b1001;
	  #5
	  PB = 4'b0000; RPB = 1'b0; Y = 4'b0000;
	  #5
	  
	  $finish;
	end
		
	
      
endmodule

