`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:45:58 02/27/2019 
// Design Name: 
// Module Name:    gridwalk_top 
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
module gridwalk_top(clk, rota, rotb, y, led);

input clk, rota, rotb;
input [3:0] y;
output [7:0] led;
wire [7:0] led;
wire rot_event;

rotor R1(rota, rotb, clk, rot_event);
gridwalk G1(clk, rot_event, y, led);

endmodule
