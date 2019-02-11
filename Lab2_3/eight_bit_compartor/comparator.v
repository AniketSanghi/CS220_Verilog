`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:45 01/28/2019 
// Design Name: 
// Module Name:    comparator 
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
module comparator(a,b,gprev,lprev,eprev,g,l,e);

	input a,b,gprev,lprev,eprev;
	output g,l,e;
	wire g,l,e;
	
	assign l = lprev | (eprev & ~a & b);
	assign g = gprev | (eprev & a & ~b);
	assign e = eprev & (~(a^b));


endmodule
