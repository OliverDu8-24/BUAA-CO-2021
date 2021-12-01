`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/11/19 17:47:45
// Design Name: 
// Module Name: mips
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mips(
    input clk,
    input reset
    );

    // 需要参与流水的各级信息
    wire [31:0] NPC;
    wire [31:0] F_PC, D_PC, E_PC, W_PC, M_PC;
    //wire [31:0] FD_PC, DE_PC, EM_PC, MW_PC;

    wire [31:0] F_Instr, D_Instr, E_Instr, W_Instr, M_Instr;
    //wire [31:0] FD_Instr, DE_Instr, EM_Instr, MW_Instr;

    wire [31:0] E_imm32, DE_imm32;

    wire [31:0] D_GRF_rsData, DE_GRF_rsData, E_GRF_rsData;
    wire [31:0] D_GRF_rtData, DE_GRF_rtData, E_GRF_rtData, EM_rtData, M_rtData;

    wire [31:0] EM_ALUAns, M_ALUAns;

    wire [4:0] D_GRFA3, E_GRFA3, M_GRFA3, W_GRFA3;
    wire [31:0] DE_GRFWD, E_GRFWD, EM_GRFWD, M_GRFWD, MW_GRFWD, W_GRFWD;

    // 处理Forward的wire
    wire[31:0] D_FWD_rsData, D_FWD_rtData;
    wire[31:0] E_FWD_rsData, E_FWD_rtData;
    wire[31:0] M_FWD_rtData;

    // 控制Stall的信息
    wire DE_REG_WrEn, FD_REG_WrEn, PCWrEn;    //写使能
    wire DE_REG_Flush, EM_REG_Flush;          //插入nop的flush控制信号

    // 取指令Fetch级
    Level_Fetch F(
        .clk(clk),
        .reset(reset),
        .PCWrEn(PCWrEn),

        .FD_Instr(F_Instr)
    );

    // Fetch-Decode中间的流水线寄存器
    FD_REG _fd_reg(
        .clk(clk),
        .FD_REG_WrEn(FD_REG_WrEn),
        .reset(reset),

        .FD_PC(F_PC),
        .FD_Instr(F_Instr),

        .D_PC(D_PC),
        .D_Instr(D_Instr)
    );

    // 译码Decode级
    Level_Decode D(
        .clk(clk),
        .reset(reset),

        .F_PC(F_PC),
        .D_PC(D_PC),
        .D_Instr(D_Instr),
        .D_FWD_rsData(D_FWD_rsData),
        .D_FWD_rtData(D_FWD_rtData),

        .W_GRFWD(W_GRFWD),
        .W_GRFA3(W_GRFA3),
        .W_PC(W_PC),

        .DE_GRF_rsData(DE_GRF_rsData),
        .DE_GRF_rtData(DE_GRF_rtData),
        .DE_ext32(DE_ext32),
        .DE_GRFWD(DE_GRFWD),
        .DE_GRFA3(D_GRFA3),

        .NPC(NPC)
    );

    // Decode-Execute中间的流水线寄存器
    DE_REG _de_reg(
        .clk(clk),
        .reset(reset),
        .DE_REG_WrEn(DE_REG_WrEn),
        .DE_REG_Flush(DE_REG_Flush),

        .DE_PC(D_PC),
        .DE_Instr(D_Instr),
        .DE_GRF_rsData(DE_GRF_rsData),
        .DE_GRF_rtData(DE_GRF_rtData),
        .DE_ext32(DE_ext32),
        .DE_GRFA3(D_GRFA3),
        .DE_GRFWD(DE_GRFWD),

        .E_PC(E_PC),
        .E_Instr(E_Instr),
        .E_GRF_rsData(E_GRF_rsData),
        .E_GRF_rtData(E_GRF_rtData),
        .E_ext32(E_ext32),
        .E_GRFA3(E_GRFA3),
        .E_GRFWD(E_GRFWD)
    );

    // 运算Execute级
    Level_Execute E(
        .clk(clk),
        .reset(reset),
        
        .E_Instr(E_Instr),
        .E_ext32(E_ext32),
        .E_GRFWD(E_GRFWD),

        .E_FWD_rsData(E_FWD_rsData),
        .E_FWD_rtData(E_FWD_rtData),

        .EM_GRFWD(EM_GRFWD),
        .EM_ALUAns(EM_ALUAns),
        .EM_rtData(EM_rtData)
    );

    // Execute-Memory中间的流水线寄存器
    EM_REG _em_reg(
        .clk(clk),
        .reset(reset),

        .EM_PC(E_PC),
        .EM_Instr(E_Instr),
        .EM_GRFA3(E_GRFA3),
        .EM_ALUAns(EM_ALUAns),
        .EM_rtData(EM_rtData),

        .M_PC(M_PC),
        .M_Instr(M_Instr),
        .M_GRFA3(M_GRFA3),
        .M_GRFWD(M_GRFWD),
        .M_ALUAns(M_ALUAns),
        .M_rtData(M_rtData)
    );

    // 访存Memory级
    Level_Memory M(
        .clk(clk),
        .reset(reset),
        
        .M_PC(M_PC),
        .M_Instr(M_Instr),
        .M_ALUAns(M_ALUAns),
        .M_GRFWD(M_GRFWD),

        .M_FWD_rtData(M_FWD_rtData),

        .MW_GRFWD(MW_GRFWD)
    );

    // Memory-WriteBack之间的流水线寄存器
    MW_REG _mw_reg(
        .clk(clk),
        .reset(reset),
        
        .MW_PC(M_PC),
        .MW_Instr(M_Instr),
        .MW_GRFA3(M_GRFA3),
        .MW_GRFWD(MW_GRFWD),

        .W_PC(W_PC),
        .W_Instr(W_Instr),
        .W_GRFA3(W_GRFA3),
        .W_GRFWD(W_GRFWD)
    );

endmodule
