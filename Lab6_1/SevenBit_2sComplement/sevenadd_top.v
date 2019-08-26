`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:14 02/27/2019 
// Design Name: 
// Module Name:    sevenadd_top 
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
module sevenadd_top(clk, rota, rotb, y, led);

input clk, rota, rotb;
input [3:0] y;
output [7:0] led;
wire [7:0] led;
wire rot_event, rot_dir;

rotor R1(rota, rotb, clk, rot_dir, rot_event);
sevenbitadder A1(clk, rot_event, rot_dir, y, led);


endmodule
