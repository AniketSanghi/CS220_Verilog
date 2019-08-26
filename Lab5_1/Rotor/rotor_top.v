`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:36 02/13/2019 
// Design Name: 
// Module Name:    rotor_top 
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
module rotor_top(clk, rota, rotb, led);

input clk, rota, rotb;
output [7:0] led;
wire [7:0] led;
wire rot_event, rot_direction;

Rotor R0(clk, rota, rotb, rot_event, rot_direction);
led_ripple L0(clk, rot_event, rot_direction, led);




endmodule
