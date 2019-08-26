`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:19 02/27/2019 
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
module rotor(rota, rotb, clk, rot_dir, rot_event);

input rota, rotb, clk;
output rot_dir, rot_event;
reg rot_dir = 0, rot_event = 0;

always @(posedge clk) begin
	if(rota & rotb)
		rot_event <= 1;
	else if(~rota & ~rotb)
		rot_event <= 0;
	else if(rota & ~rotb)
		rot_dir <= 0;
	else 
		rot_dir <= 1;
end

endmodule
