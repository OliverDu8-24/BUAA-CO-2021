`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:42 10/13/2021 
// Design Name: 
// Module Name:    cscore 
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
module cscore(
    input [0:0] clk,
    input [0:0] reset,
    input [7:0] in,
    output reg [7:0] out
    );
	 
	 parameter None = 0, C = 1, CS = 2, CSC = 3, CSCO = 4, CSCOR = 5, CSCORE = 6, Error = 7, Error_C = 8, Error_S = 9, Space = 10;
	 
	 reg [7:0] state, next_state;
	 reg [7:0] cnt;
	 
	 always @(*) begin
	     case (state) 
				None: begin
					if(in == "C" || in == "c") next_state = C;
					else next_state = None;
				end
				C: begin
					if(in == "S" || in == "s") next_state = CS;
					else if(in == "C" || in == "c") next_state = Error_C;
					else next_state =  Error;
				end
				CS: begin
					if(in == "C" || in == "c") next_state = CSC;
					else next_state = Error;
				end
				CSC: begin
					if(in == "O" || in == "o") next_state = CSCO;
					else if(in == "S" || in == "s") next_state = Error_S;
					else if(in == "C" || in == "c") next_state = Error_C;
					else next_state = Error;
				end
				CSCO: begin
					if(in == "R" || in == "r") next_state = CSCOR;
					else if(in == "C" || in == "c") next_state = Error_C;
					else next_state = Error;
				end
				CSCOR: begin
					if(in == "E" || in == "e") next_state = CSCORE;
					else if(in == "C" || in == "c") next_state = Error_C;
					else next_state = Error;
				end
				CSCORE: begin
					if(in == "C" || in == "c") next_state = C;
					else if(in == " ") next_state = Space;
					else next_state = Error;
				end
				Error: begin
					if(in == "C" || in == "c") next_state = C;
					else next_state = Error;
				end
				Space: begin
					if(in == " ") next_state = Space;
					else if(in == "C" || in == "c") next_state = C;
					else next_state = Error;
				end
				Error_C: begin
					if(in == "C" || in == "c") next_state = Error_C;
					else if(in == "S" || in == "s") next_state = CS;
					else next_state = Error;
				end
				Error_S: begin
					if(in == "C" || in == "c") next_state = CSC;
					else next_state = Error;
				end
			endcase
		end
		
		always @(posedge clk, posedge reset) begin
			if(reset) begin
				state <= None;
				cnt <= 0;
				out <= 0;
			end
			else state <= next_state;
		end
		
		always @(*) begin
			if(state == CSCORE) cnt = cnt + 1;
			else if(state == Error_C || state == Error_S || state == Error) cnt = 0;
			out = (out > cnt) ? out : cnt;
		end
endmodule
