`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:49 02/27/2019 
// Design Name: 
// Module Name:    sevenbitadder 
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
module sevenbitadder(clk, rot_event, rot_dir, y, led);

input clk, rot_event, rot_dir;
input [3:0] y;
output [7:0] led;
wire [7:0] led;

reg prev_rot_event = 1;
reg [6:0] A;
reg [6:0] B;
reg op;
reg [2:0] step = 0;
wire [6:0] cout;

always @(posedge clk) begin
	if(~prev_rot_event & rot_event) begin
		case(step)
			0: begin
					A[3:0] <= y;
					step <= step + 1;
				end
			1: begin
					A[6:4] <= y[2:0];
					step <= step + 1;
				end
			2: begin
					B[3:0] <= y;
					step <= step + 1;
				end
			3: begin
					B[6:4] <= y[2:0];
					step <= step + 1;
				end
			4: begin
					op <= y[0];
					step <= 0;  
				end
			
		endcase
		
	end
	prev_rot_event <= rot_event;
end 

onebitadder FA1(A[0],B[0],op,op,led[0],cout[0]);
onebitadder FA2(A[1],B[1],cout[0],op,led[1],cout[1]);
onebitadder FA3(A[2],B[2],cout[1],op,led[2],cout[2]);
onebitadder FA4(A[3],B[3],cout[2],op,led[3],cout[3]);
onebitadder FA5(A[4],B[4],cout[3],op,led[4],cout[4]);
onebitadder FA6(A[5],B[5],cout[4],op,led[5],cout[5]);
onebitadder FA7(A[6],B[6],cout[5],op,led[6],cout[6]);

assign	led[7] = (cout[5]^cout[6]);


endmodule
