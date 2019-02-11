`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:09:52 01/30/2019
// Design Name:   ledripple
// Module Name:   /users/btech/sanghi/CS220/Lab3_2/ledripple/ledripple_top.v
// Project Name:  ledripple
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ledripple
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ledripple_top;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	ledripple uut (
		.clk(clk), 
		.led(led)
	);
	
	always @(led)
		$display("time %d: %8b",$time,led);

	initial begin
		forever begin
		 clk <= 1;
		 #0.001
		 clk <= 0;
		 #0.001
		 clk <= 1;
		 end
	end
      
		initial begin
			#100000
			$finish;
		end
endmodule

