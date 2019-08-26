`timescale 1ns / 1ps
`define MAX_PC 7
`define OUTPUT_REG 5
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:44:48 03/27/2019 
// Design Name: 
// Module Name:    processor 
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
module processor(clk,led);

input clk;
output [7:0] led;
reg [7:0] led;

reg [31:0] Preg[0:6];
reg [7:0] register[0:31];
reg [3:0] PC = 0;
reg [3:0] state = 0;


// Data on decode
reg [31:0] data;
reg [4:0] s1 = 0;
reg [4:0] s2 = 0;
reg [4:0] d = 0;
reg [5:0] opcode = 0;
reg [5:0] func = 0;
reg invalid = 0;
reg [7:0] value = 0;

reg [7:0] ans = 0;
reg [7:0] sval1 = 0;
reg [7:0] sval2 = 0;


initial begin
	Preg[0] <= 32'b00100100000000010000000000101101;
	Preg[1] <= 32'b00100100000000101111111111101100;
	Preg[2] <= 32'b00100100000000111111111111000100;
	Preg[3] <= 32'b00100100000001000000000000011110;
	Preg[4] <= 32'b00000000001000100010100000010101;
	Preg[5] <= 32'b00000000011001000011000000010101;
	Preg[6] <= 32'b00000000101001100010100000010111;
	
	register[0] <= 0; register[8] <= 0; register[16] <= 0; register[24] <= 0;
	register[1] <= 0; register[9] <= 0; register[17] <= 0; register[25] <= 0;
	register[2] <= 0; register[10] <= 0; register[18] <= 0; register[26] <= 0;
	register[3] <= 0; register[11] <= 0; register[19] <= 0; register[27] <= 0;
	register[4] <= 0; register[12] <= 0; register[20] <= 0; register[28] <= 0;
	register[5] <= 0; register[13] <= 0; register[21] <= 0; register[29] <= 0;
	register[6] <= 0; register[14] <= 0; register[22] <= 0; register[30] <= 0;
	register[7] <= 0; register[15] <= 0; register[23] <= 0; register[31] <= 0;
	
	
end

always @(posedge clk) begin
	case(state)
		0:	begin 
				data <= Preg[PC];	
				PC <= PC + 1;
				state <= state + 1;
			end
		1:	begin 
				opcode <=  data[31:26];
				func <= data[5:0];
				s1 <= 0;
				s2 <= 0;
				d <= 0;
				invalid <= 0;
				value <= 0;
				ans <= 0;
				sval1 <= 0;
				sval2 <= 0;
				
				state <= 2;
			end
		2:	begin 
				case(opcode)
					0:	begin
							s1 <= data[25:21];
							s2 <= data[20:16];
							d <= data[15:11];
							func <= data[5:0];
						end
					9: begin
							s1 <= data[25:21];
							d <= data[20:16];
							value <= data[7:0];
						end
					default: invalid <= 1;
				endcase
				
				state <= 3;
			end
		3:	begin 
				sval1 <= register[s1];
				sval2 <= register[s2];
				
				state <= 4;
			end
		4:	begin 
				case(opcode)
					0:	begin
							case(func)
								21: begin
										ans <= sval1 + sval2;
									 end
								23: begin
										ans <= sval1 - sval2;
									 end
							endcase
						end
					9: begin
							ans <= sval1 + value;
						end
					default: invalid <= 1;
				endcase
				state <= 5;
			end
		5:	begin 
				if(~invalid) begin
					if(d != 0) begin
						register[d] <= ans;
					end
				end
				if(PC < `MAX_PC) state <= 0;
				else state <= 6;
			end
		6:	begin 
				led <= register[`OUTPUT_REG];
			end
		
		
	endcase
end



endmodule
