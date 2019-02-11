`timescale 1ns / 1ps
`define SHIFT_TIME 50000000
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:51 01/30/2019 
// Design Name: 
// Module Name:    ledripple 
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
module ledripple(clk, led);

	input clk;
	output [7:0] led;
	reg [7:0] led;
	reg [31:0] counter = 32'b0;
	initial begin
		led = 8'b00000001;
	end
	always @(posedge clk) begin
	counter <= counter  + 1;
		if(counter == `SHIFT_TIME) begin
			led[1] <= led[0];
			led[2] <= led[1];
			led[3] <= led[2];
			led[4] <= led[3];
			led[5] <= led[4];
			led[6] <= led[5];
			led[7] <= led[6];
			led[0] <= led[7];
			counter <= 32'b0;
		end
	
	end

endmodule
