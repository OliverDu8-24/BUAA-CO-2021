`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:45 10/23/2021 
// Design Name: 
// Module Name:    BlockChecker 
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
module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output reg result
    );

    function [7:0] lower;
    input [7:0] in;
        if(in >= "a" && in <= "z") lower = in;
        else if(in >= "A" && in <= "Z") lower[7:0] = in[7:0] + ("a" - "A");
        else lower = in;
    endfunction

    reg [127:0] buffer;
    reg [31:0] mismatch_cnt;
    reg fail;

    initial begin
        buffer = " ";
        mismatch_cnt = 0;
        fail = 0;
        result = 1;
    end

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            buffer <= " ";
            result <= 1;
            fail <= 0;
            mismatch_cnt <= 0;
        end else begin
            buffer <= {buffer[119:0], lower(in)};
        end
    end

    always @(*) begin
        if(!fail) begin
            if(buffer[47:0] == " begin") mismatch_cnt = mismatch_cnt + 1;
            else if(buffer[55:8] == " begin" && buffer[7:0] != " ") mismatch_cnt = mismatch_cnt - 1;
            else if(buffer[31:0] == " end") mismatch_cnt = mismatch_cnt - 1;
            else if(buffer[39:8] == " end" && buffer[7:0] != " ") mismatch_cnt = mismatch_cnt + 1;
            else if(buffer[39:8] == " end" && buffer[7:0] == " " && $signed(mismatch_cnt) < 0) fail = 1;
            else mismatch_cnt = mismatch_cnt;
        end
    end

    always @(*) begin
        result = ~fail && (mismatch_cnt == 0);
    end


endmodule
