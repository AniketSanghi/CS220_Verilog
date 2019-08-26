`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:09:28 02/13/2019 
// Design Name: 
// Module Name:    led_ripple 
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
module led_ripple(clk, rot_event, rot_direction, led);

input clk, rot_event, rot_direction;
output [7:0] led;
reg [7:0] led = 8'b00010000;
reg prev_rot_event = 1;

always @(posedge clk) begin
	if(~prev_rot_event & rot_event) begin
		case(rot_direction) 
		0: begin
				led[0] <= led[1];
				led[1] <= led[2];
				led[2] <= led[3];
				led[3] <= led[4];
				led[4] <= led[5];
				led[5] <= led[6];
				led[6] <= led[7];
				led[7] <= led[0];
			end
		1: begin
				led[1] <= led[0];
				led[2] <= led[1];
				led[3] <= led[2];
				led[4] <= led[3];
				led[5] <= led[4];
				led[6] <= led[5];
				led[7] <= led[6];
				led[0] <= led[7];
			end
		endcase	
	end
	prev_rot_event <= rot_event;
	
end


endmodule
