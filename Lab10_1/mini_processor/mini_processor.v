`timescale 1ns / 1ps
`define MAX_PC 11
`define OUTPUT_REG 4
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:04:53 04/03/2019 
// Design Name: 
// Module Name:    mini_processor 
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
module mini_processor(clk, led);

input clk;
output [7:0] led;
reg [7:0] led = 0;

reg [31:0] Preg[0:10];
reg [7:0] memory[0:2];
reg [7:0] register[0:31];
reg [2:0] state = 0;
reg [3:0] PC = 0;

reg [5:0] opcode = 0;
reg [4:0] rs = 0;
reg [4:0] rt = 0;
reg [4:0] rd = 0;
reg [4:0] sh = 0;
reg [5:0] func = 0;
reg [7:0] imm = 0;

reg [7:0] rval1 = 0;
reg [7:0] rval2 = 0;
reg [7:0] wval = 0;
reg [1:0] memaddress = 0;
reg invalid = 0;
reg [31:0] instruction = 0;


initial begin
	Preg[0] <= 32'b10001100000000010000000000000000;
	Preg[1] <= 32'b10001100000000100000000000000001;
	Preg[2] <= 32'b10001100000000110000000000000010;
	Preg[3] <= 32'b00100100000001000000000000000000;
	Preg[4] <= 32'b00100100001001010000000000000000;
	Preg[5] <= 32'b00000000101000100011000000101010;
	Preg[6] <= 32'b00010000110000000000000000000101;
	Preg[7] <= 32'b00000000100001010010000000100001;
	Preg[8] <= 32'b00000000101000110010100000100001;
	Preg[9] <= 32'b00000000101000100011000000101010;
	Preg[10] <= 32'b00010100110000001111111111111101;
	
	memory[0] <= -30;
	memory[1] <= -24;
	memory[2] <= 2;
	
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
	0: begin
			instruction <= Preg[PC];
			state <= 1;
		end
	1: begin
			opcode <= instruction[31:26];
			rs <= instruction[25:21];
			rt <= instruction[20:16];
			rd <= instruction[15:11];
			sh <= instruction[10:6];
			func <= instruction[5:0];
			imm <= instruction[7:0];
			state <= 2;
		end
	2: begin
			rval1 <= register[rs];
			rval2 <= register[rt];

			state <= 3;
		end
	3: begin
			case(opcode)
				0: begin
						PC <= PC + 1;
						case(func)
							6'h2a: begin
										if($signed(rval1) < $signed(rval2))
											wval <= 1;
										else wval <= 0;
									 end
							6'h21: begin
										wval <= rval1 + rval2;
									 end
							default: invalid <= 1;
						endcase
					end
				4: begin
						if(rval1 == rval2)
							PC <= PC + imm;
						else PC <= PC + 1;
					end
				5: begin
						if($signed(rval1) != $signed(rval2))
							PC <= PC + imm;
						else PC <= PC + 1;
					end
				9: begin
						wval <= rval1 + imm;
						PC <= PC + 1;
					end
				6'h23: begin
							memaddress <= imm + rval1;
							PC <= PC + 1;
						 end
				default: invalid <= 1;
			endcase
			state <= 4;
		end
	4: begin
			case(opcode)
				6'h23: begin
							wval <= memory[memaddress];
						 end
			endcase
			state <= 5;
		end
	5: begin
			if(~invalid) begin
				case(opcode)
					0: register[rd] <= wval;
					9: register[rt] <= wval;
					6'h23: register[rt] <= wval;
				endcase
				if(PC < `MAX_PC) state <= 0;
				else state <= 6;
			end
		end
	6: begin
			led <= register[`OUTPUT_REG];
		end
	endcase
end


endmodule
