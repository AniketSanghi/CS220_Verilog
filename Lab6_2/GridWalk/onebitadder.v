`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:58:49 02/27/2019 
// Design Name: 
// Module Name:    onebitadder 
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
module onebitadder(a,b,cin,op,sum,cout);

input a,b,cin,op;
output sum,cout;
wire sum, cout;

assign sum = a^(b^op)^cin;
assign cout = (a&(b^op)) | ((b^op)&cin) | (cin&a);

endmodule
