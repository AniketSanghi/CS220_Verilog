`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:40:53 03/26/2019 
// Design Name: 
// Module Name:    processor_top 
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
module processor_top(clk, rota, rotb, y, PB, lcd_rs, lcd_w, lcd_e, data);

input clk, rota, rotb;
input [3:0] y;
input [2:0] PB;
output lcd_rs, lcd_w, lcd_e;
output [3:0] data;
wire lcd_rs, lcd_w, lcd_e;
wire [3:0] data;
wire rot_event;


rotor R1(rota, rotb, clk, rot_event);
processor P1(clk, rot_event, y, PB, lcd_rs, lcd_w, lcd_e, data);


endmodule