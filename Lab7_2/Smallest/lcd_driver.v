`timescale 1ns / 1ps
`define MAX 1000000
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:09 02/06/2019 
// Design Name: 
// Module Name:    lcd_driver 
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
module lcd_driver(line1, line2, clk, lcd_rs, lcd_w, lcd_e, data);

	input [127:0] line1;
	input [127:0] line2;
	input clk;
	output lcd_rs, lcd_w, lcd_e;
	output [3:0] data;
	reg lcd_rs, lcd_w, lcd_e;
	reg [3:0] data;
	reg [20:0] counter = 21'b0;
	reg [1:0] step = 2'b01;
	reg [4:0] state = 5'b0;
	reg [1:0] linechange = 2'b0;
	reg [7:0] pos = 127;
	reg [3:0] db;
	
	always @(posedge clk) begin
		if((counter == `MAX)) begin
				if(step == 2'b01) begin
					lcd_e <= 1'b0;
					step <= step + 1;
				end
				else if(step == 2'b11) begin
					lcd_e <= 1'b1;
					step <= 2'b01;
				end
				else if(step == 2'b10) begin
					case(state)
					0: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h3;
						state <= state + 1;
						end
					1: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h3;
						state <= state + 1;
						end
					2: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h3;
						state <= state + 1;
						end
					3: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h2;
						state <= state + 1;
						end
					4: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h2;
						state <= state + 1;
						end
					5: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h8;
						state <= state + 1;
						end
					6: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h0;
						state <= state + 1;
						end
					7: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h6;
						state <= state + 1;
						end						
					8:	begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h0;
						state <= state + 1;
						end
					9: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'hC;
						state <= state + 1;
						end
					10: begin 
						 lcd_rs <= 1'b0;
						 lcd_w <= 1'b0;
						 data <= 4'h0;
						 state <= state + 1;
						 end
					11: begin 
						 lcd_rs <= 1'b0;
						 lcd_w <= 1'b0;
						 data <= 4'h1;
						 state <= state + 1;
						 end
					12: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h8;
						state <= state + 1;
						end
					13: begin
						lcd_rs <= 1'b0;
						lcd_w <= 1'b0;
						data <= 4'h0;
						state <= state + 1;
						end
					14: begin
						 if(linechange == 0) begin
							db = line1[pos-:4];
							lcd_rs <= 1'b1;
							lcd_w <= 1'b0;
							data <= db[3:0];
							if(pos == 3) begin
								pos <= 127;
								linechange <= linechange + 1;
							end
							else	pos <= pos - 4;
						 end
						 
						 if(linechange == 1) begin
							lcd_rs <= 1'b0;
							lcd_w <= 1'b0;
							data <= 4'hC;
							linechange <= linechange + 1;
						 
						 end
						 
						 if(linechange == 2) begin
							lcd_rs <= 1'b0;
							lcd_w <= 1'b0;
							data <= 4'h0;
							linechange <= linechange + 1;
						 
						 end
						 
						 if(linechange == 3) begin
							db = line2[pos-:4];
							lcd_rs <= 1'b1;
							lcd_w <= 1'b0;
							data <= db[3:0];
							if(pos == 3) begin
								state <= 0;
								step <= 1;
								linechange <= 0;
								counter <= 0;
								pos <= 127;
								
							end
							else	pos <= pos - 4;
						 end
						 
						end
					endcase
					
					
					step <= step + 1;
				end
				counter <= 21'b0;
		end
		else
			counter <= counter + 1;
	end
	
	


endmodule
