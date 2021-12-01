`timescale 1ns / 1ps
`include "def.v"

module EM_REG(
    input clk,
    input reset,
    //input M_REG_Flush,

    input [31:0] EM_PC,
    input [31:0] EM_Instr,
    input [31:0] EM_ALUAns,
    input [31:0] EM_rtData,

    input [31:0] EM_GRFA3,
    input [31:0] EM_GRFWD,

    output reg [31:0] M_PC,
    output reg [31:0] M_Instr,
    output reg [31:0] M_ALUAns,
    output reg [31:0] M_rtData,

    output reg [31:0] M_GRFA3,
    output reg [31:0] M_GRFWD
    );

    always @(posedge clk) begin
        if(reset) begin
            M_PC <= 32'd0;
            M_Instr <= 32'd0;
            M_ALUAns <= 32'd0;
            M_rtData <= 32'd0;
            M_GRFA3 <= 5'd0;
            M_GRFWD <= 32'd0;
        end else begin
            M_PC <= EM_PC;
            M_Instr <= EM_Instr;
            M_ALUAns <= EM_ALUAns;
            M_rtData <= EM_rtData;
            M_GRFA3 <= EM_GRFA3;
            M_GRFWD <= EM_GRFWD;
        end
    end

endmodule
