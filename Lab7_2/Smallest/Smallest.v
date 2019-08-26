`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:11 03/06/2019 
// Design Name: 
// Module Name:    Smallest 
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
module Smallest(clk, lcd_rs, lcd_w, lcd_e, data, PB, y);

input clk;
input [2:0] y;
input [3:0] PB;
output lcd_rs, lcd_w, lcd_e;
wire lcd_rs, lcd_w, lcd_e;
output [3:0] data;
wire [3:0] data;

reg [7:0] a;
reg [7:0] b;
reg [7:0] c;
reg [7:0] d;
reg [127:0] line1;
reg [127:0] line2;

initial begin

	line1 = "0, 0, 0, 0,     ";
	line2 = "0               ";
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	
end

always @(posedge PB[0]) begin
	a <= {5'b00000,y};

end
always @(posedge PB[1]) begin
	b <= {5'b00000,y};

end
always @(posedge PB[2]) begin
	c <= {5'b00000,y};

end
always @(posedge PB[3]) begin
	d <= {5'b00000,y};
end

always @(posedge clk) begin
	line1[127:120] <= a + 48;
	line1[103:96] <= b + 48;
	line1[79:72] <= c + 48;
	line1[55:48] <= d + 48;
	line2[127:120] <= a + 48;
	if(a <= b && a <= c && a <= d)
		line2[127:120] <= 1 + 48;
	else if(b <= a && b <= c && b <= d)
		line2[127:120] <= 2 + 48;
	else if(c <= b && c <= a && c <= d)
		line2[127:120] <= 3 + 48;
	else if(d <= b && d <= c && d <= a)
		line2[127:120] <= 4 + 48;
		
end



lcd_driver lcd(line1,line2,clk, lcd_rs, lcd_w, lcd_e, data);

endmodule
