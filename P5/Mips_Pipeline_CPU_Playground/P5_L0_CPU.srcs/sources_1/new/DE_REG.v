`timescale 1ns / 1ps
`include "def.v"

module DE_REG(
    input clk,
    input reset,
    input DE_REG_Flush,
    input DE_REG_WrEn,
    
    input [31:0] DE_PC,
    input [31:0] DE_Instr,
    input [31:0] DE_rsData,
    input [31:0] DE_rtData,
    input [31:0] DE_ext32,

    input [4:0] DE_GRFA3,
    input [31:0] DE_GRFWD,

    output reg [31:0] E_PC,
    output reg [31:0] E_Instr,
    output reg [31:0] E_rsData,
    output reg [31:0] E_rtData,
    output reg [31:0] E_ext32,

    output reg [4:0] E_GRFA3,
    output reg [31:0] E_GRFWD
    );

    always @(posedge clk) begin
        if(DE_REG_Flush || reset) begin
            E_PC <= 32'd0;
            E_Instr <= 32'd0;
            E_rsData <= 32'd0;
            E_rtData <= 32'd0;
            E_ext32 <= 32'd0;
            E_GRFA3 <= 5'd0;
            E_GRFWD <= 32'd0;
        end else if(DE_REG_WrEn) begin
            E_PC <= DE_PC;
            E_Instr <= DE_Instr;
            E_rsData <= DE_rsData;
            E_rtData <= DE_rtData;
            E_ext32 <= DE_ext32;
            E_GRFA3 <= DE_GRFA3;
            E_GRFWD <= DE_GRFWD;
        end
    end

endmodule
