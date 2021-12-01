`timescale 1ns / 1ps
`include "def.v"

module Level_Execute(
    input clk,
    input reset,

    input [31:0] E_Instr,
    input [31:0] E_imm32,
    
    input [31:0] E_GRFWD,
    input [31:0] E_FWD_rsData,
    input [31:0] E_FWD_rtData,

    output [31:0] EM_GRFWD,
    output [31:0] EM_ALUAns,
    output [31:0] EM_rtData
    );

    wire[3:0] ALUOp;
    wire ALUBSel, E_GRFWDSel;
    wire[4:0] shamt;
    control E_CTRL(
        .Instr(E_Instr),
        .ALUOp(ALUOp),
        .ALUBSel(ALUBSel),
        .shamt(shamt),
        .GRFWDSel(E_GRFWDSel)
    );

    assign E_ALUB = (ALUBSel == `BSel_imm) ? E_imm32 :
                  E_FWD_rtData;
    
    E_ALU _alu(
        .A(E_FWD_rtData),
        .B(E_ALUB),
        .ALUOp(ALUOp),
        .shamt(shamt),
        .C(EM_ALUAns)
    );

    assign EM_GRFWD = (E_GRFWDSel == `WDSel_pc4) ? E_GRFWD :
                      (E_GRFWDSel == `WDSel_aluans) ? EM_ALUAns :
                      32'bz;
    
    assign EM_rtData = E_FWD_rtData;

endmodule
