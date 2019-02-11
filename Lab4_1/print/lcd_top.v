`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:59 02/06/2019 
// Design Name: 
// Module Name:    lcd_top 
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
module lcd_top(clk, lcd_rs, lcd_w, lcd_e, data);

input clk;
output lcd_rs, lcd_w, lcd_e;
wire lcd_rs, lcd_w, lcd_e;
output [3:0] data;
wire [3:0] data;

lcd_driver lcd("WELCOME TO CSE, ","IIT KANPUR      ",clk, lcd_rs, lcd_w, lcd_e, data);

endmodule
