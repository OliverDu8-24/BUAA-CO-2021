`timescale 1ns / 1ps
`include "def.v"

module Level_Memory(
    input clk,
    input reset,

    input [31:0] M_PC,
    input [31:0] M_Instr,

    input [31:0] M_GRFWD,
    input [31:0] M_ALUAns,
    input [31:0] M_FWD_rtData,

    output [31:0] MW_GRFWD
    );

    wire M_DMWrEn;
    wire [2:0] DMOp;
    wire [1:0] M_GRFWDSel;
    wire [31:0] M_DMRD;

    control M_CTRL(
        .Instr(M_Instr),
        .DMWrEn(M_DMWrEn),
        .DMOp(M_DMOp),
        .GRFWDSel(M_GRFWDSel)
    );

    M_DM _dm(
        .PC(M_PC),
        .clk(clk),
        .reset(reset),

        .DMWrEn(M_DMWrEn),
        .DMOp(M_DMOp),
        .RD(M_DMRD),
        .WD(M_FWD_rtData),
        .Addr(M_ALUAns)
    );

    assign MW_GRFWD = (M_GRFWDSel == `WDSel_dmrd) ? M_DMRD :
                      (M_GRFWDSel == `WDSel_pc4) ? M_GRFWD :
                      (M_GRFWDSel == `WDSel_aluans) ? M_GRFWD :
                      32'bz;

endmodule
