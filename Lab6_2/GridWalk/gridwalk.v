`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:25:12 02/27/2019 
// Design Name: 
// Module Name:    gridwalk 
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
module gridwalk(clk, rot_event, y, led);

input clk, rot_event;
input [3:0] y;
output [7:0] led;
wire [7:0] led;
reg prev_rot_event = 1;


wire [5:0] xsum;
wire [5:0] ysum;
wire [3:0] xcout;
wire [3:0] ycout;

reg opx = 0;
reg opy = 0;
reg [1:0] xval = 0;
reg [1:0] yval = 0;

reg [3:0] ledoldx = 0;
reg [3:0] ledoldy = 0;



always @(posedge clk) begin
		if(~prev_rot_event & rot_event) begin
			
			ledoldx <= led[3:0];
			ledoldy <= led[7:4];
			
			case(y[1:0])
			2'b00: begin
					opy <= 1'b0;
					opx <= 0;
					yval[1:0] <= y[3:2];
					xval[1:0] <= 0;
				end
			2'b01: begin
					opy <= 1'b1;
					opx <= 0;
					yval[1:0] <= y[3:2];
					xval[1:0] <= 0;
				end
			2'b10: begin
					opx <= 1'b0;
					opy <= 0;
					xval[1:0] <= y[3:2];
					yval[1:0] <= 0;
				end
			2'b11: begin
					opx <= 1'b1;
					opy <= 0;
					xval[1:0] <= y[3:2];
					yval[1:0] <= 0;
				end
			endcase
			
		end
		
		prev_rot_event <= rot_event;
end


onebitadder F11(ledoldx[0],xval[0],opx,opx,xsum[0],xcout[0]);
onebitadder F12(ledoldx[1],xval[1],xcout[0],opx,xsum[1],xcout[1]);
onebitadder F13(ledoldx[2],0,xcout[1],opx,xsum[2],xcout[2]);
onebitadder F14(ledoldx[3],0,xcout[2],opx,xsum[3],xcout[3]);
onebitadder F15(0,0,xcout[3],opx,xsum[4],xsum[5]);

onebitadder F21(ledoldy[0],yval[0],opy,opy,ysum[0],ycout[0]);
onebitadder F22(ledoldy[1],yval[1],ycout[0],opy,ysum[1],ycout[1]);
onebitadder F23(ledoldy[2],0,ycout[1],opy,ysum[2],ycout[2]);
onebitadder F24(ledoldy[3],0,ycout[2],opy,ysum[3],ycout[3]);
onebitadder F25(0,0,ycout[3],opy,ysum[4],ysum[5]);

assign led[0] = (xsum[0] & ~xsum[4]) | (xsum[4] & ~opx) ;
assign led[1] = (xsum[1] & ~xsum[4]) | (xsum[4] & ~opx) ;
assign led[2] = (xsum[2] & ~xsum[4]) | (xsum[4] & ~opx) ;
assign led[3] = (xsum[3] & ~xsum[4]) | (xsum[4] & ~opx) ;

assign led[4] = (ysum[0] & ~ysum[4]) | (ysum[4] & ~opy) ;
assign led[5] = (ysum[1] & ~ysum[4]) | (ysum[4] & ~opy) ;
assign led[6] = (ysum[2] & ~ysum[4]) | (ysum[4] & ~opy) ;
assign led[7] = (ysum[3] & ~ysum[4]) | (ysum[4] & ~opy) ;





				

endmodule
