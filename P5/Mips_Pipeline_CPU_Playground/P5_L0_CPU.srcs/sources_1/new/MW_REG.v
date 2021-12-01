`timescale 1ns / 1ps
`include "def.v"

module MW_REG(
    input clk,
    input reset,

    input [31:0] MW_PC,
    input [31:0] MW_Instr,

    input [31:0] MW_GRFA3,
    input [31:0] MW_GRFWD,

    output reg [31:0] W_PC,
    output reg [31:0] W_Instr,

    output reg [31:0] W_GRFA3,
    output reg [31:0] W_GRFWD
    );

    always @(posedge clk) begin
        if(reset) begin
            W_PC <= 32'd0;
            W_Instr <= 32'd0;
            W_GRFA3 <= 32'd0;
            W_GRFWD <= 32'd0;
        end else begin
            W_PC <= MW_PC;
            W_Instr <= MW_Instr;
            W_GRFA3 <= MW_GRFA3;
            W_GRFWD <= MW_GRFWD;
        end
    end

endmodule
