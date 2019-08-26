`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:15 02/27/2019 
// Design Name: 
// Module Name:    rotor 
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
module rotor(rota, rotb, clk, rot_event);

input rota, rotb, clk;
output  rot_event;
reg rot_event = 0;

always @(posedge clk) begin
	if(rota & rotb)
		rot_event <= 1;
	else if(~rota & ~rotb)
		rot_event <= 0;
end

endmodule