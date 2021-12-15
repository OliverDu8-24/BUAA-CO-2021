`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:14:29 10/10/2021 
// Design Name: 
// Module Name:    Character_FSM 
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
module Character_FSM(
    input [7:0] in,
    output [7:0] cnt,
    input [0:0] clk,
	 input [0:0] reset
    );
	 
	 reg[3:0] state;
	 reg[3:0] next_state;
	 reg[7:0] ans;
	 
	 parameter NONE = 0, START = 1, B = 2, BU = 3, BUA = 4, SUCCESS = 5, ERROR = 6, FINISH = 7;
	 
	 
	 always @(*) begin
	     case(state)
				NONE: begin
					if(in == "#") next_state = START;
					else next_state = state;
				end
				START: begin
					if(in == "B") next_state = B;
					else if(in == "?") next_state = FINISH;
					else next_state = ERROR;
				end
				B: begin
					if(in == "U") next_state = BU;
					else if(in == "?") next_state = FINISH;
					else if(in == " ") next_state = START;
					else next_state = ERROR;
				end
				BU: begin
					if(in == "A") next_state = BUA;
					else if(in == "?") next_state = FINISH;
					else if(in == " ") next_state = START;
					else next_state = ERROR;
				end
				BUA: begin
					if(in == "A") begin
						next_state = state;
					end
					else if(in == " ") begin
						next_state = START;
						ans = ans + 1;
					end
					else if(in == "?") begin
						next_state = FINISH;
						ans = ans + 1;
					end
					else next_state = ERROR;
				end
				ERROR: begin
					if(in == " ") next_state = START;
					else if(in == "?") next_state = FINISH;
					else next_state = state;
				end
				FINISH: begin
					if(in == "#") next_state = START;
					else next_state = NONE;
				end
			endcase
		end
		
		always@(posedge clk) begin
			if(reset) begin
				state <= NONE;
				next_state <= NONE;
				ans <= 0;
			end
			else begin
				state <= next_state;
			end
		end
		
		assign cnt = (state == FINISH) ? ans : 0;

endmodule
