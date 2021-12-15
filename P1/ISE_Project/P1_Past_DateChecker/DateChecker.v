`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:29:47 10/24/2021 
// Design Name: 
// Module Name:    DateChecker 
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
module DateChecker(
    input clk,
    input reset,
    input [7:0] in,
    output reg valid
    );

    reg [31:0] state, next_state;
    reg [7:0] split;
    reg match;

    function isNumber(input [7:0] in);
        if(in >= "0" && in <= "9") isNumber = 1'b1;
        else isNumber = 1'b0;
    endfunction

    function isSplit(input [7:0] in);
        if(in == "." || in == "/" || in == "-") isSplit = 1'b1;
        else isSplit = 1'b0;
    endfunction

    always @(*) begin
        case(state)
        0: begin
            match = 0;
            if(isNumber(in) && in != 0) next_state = 1;
            else next_state = 0;
        end
        1: begin
            match = 0;
            if(isNumber(in)) next_state = 2;
            else next_state = 0;
        end
        2: begin
            match = 0;
            if(isNumber(in)) next_state = 3;
            else next_state = 0;
        end
        3: begin
            match = 0;
            if(isNumber(in)) next_state = 4;
            else next_state = 0;
        end
        4: begin
            if(isSplit(in)) begin
                next_state = 5;
                split = in;
            end else if(isNumber(in)) begin
                next_state = 4;
            end else next_state = 0;
        end
        5:
            if(in == "0") next_state = 0;
            else if(in == "1") next_state = 6;
            else if(isNumber(in)) next_state = 7;
            else next_state = 0;
        6:
            if(in == "0" || in == "1" || in == "2") next_state = 7;
            else if(isNumber(in)) next_state = 2;
            else next_state = 0;
        7:
            if(in == split) next_state = 8;
            else if(isNumber(in)) next_state = 3;
            else next_state = 0;
        8: begin
            match = 0;
            if(in == "0") next_state = 0;
            else if(in == "1" || in == "2") begin
                next_state = 10;
                match = 1;
            end
            else if(in == "3") begin
                next_state = 9;
                match = 1;
            end
            else if(isNumber(in)) begin
                next_state = 1;
                match = 1;
            end 
            else next_state = 0;
        end
        9: begin
            match = 0;
            if(in == "0" || in == "1" || in == "2") begin
                next_state = 2;
                match = 1;
            end
            else if(isNumber(in)) next_state = 3;
            else next_state = 0;
        end
        10: begin
            match = 0;
            if(isNumber(in)) begin
                next_state = 2;
                match = 1;
            end else next_state = 0;
        end
        endcase
    end

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            valid <= 0;
            state <= 0;
            match <= 0;
            split <= "";
        end else state <= next_state;
    end

    always @(*) begin
        valid = match == 1 ? 1 : 0;
    end
endmodule
