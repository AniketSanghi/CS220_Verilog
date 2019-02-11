`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:04:21 01/29/2019
// Design Name:   ledblink
// Module Name:   /users/btech/sanghi/CS220/Lab3_1/ledblink/ledblinktop.v
// Project Name:  ledblink
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ledblink
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ledblinktop;

	// Inputs
	reg clk;

	// Outputs
wire led0;

	// Instantiate the Unit Under Test (UUT)
	ledblink uut (
		.clk(clk), 
		.led0(led0)
	);
	
	//initial begin 
		//clk <= 1;
	//end
	
	

	initial 
		begin
		forever begin
		clk <= 0;
		#0.001
		clk <= 1;
		#0.001
		clk <= 0;
		end
	end
	
	initial begin
		#1000000
		$finish;
	end
      
endmodule

