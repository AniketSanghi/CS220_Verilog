`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:04:13 02/13/2019 
// Design Name: 
// Module Name:    Rotor 
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
module Rotor(clk, rota, rotb, rot_event, rot_direction);

input clk, rota, rotb;
output rot_event, rot_direction;
reg rot_event = 1, rot_direction = 0;

always @(posedge clk) begin
	if(rota & rotb) 
		rot_event <= 1;
	else if(~rota & ~rotb)
		rot_event <= 0;
	else if(~rota & rotb)
		rot_direction <= 1;
	else
		rot_direction <= 0;
end

endmodule
