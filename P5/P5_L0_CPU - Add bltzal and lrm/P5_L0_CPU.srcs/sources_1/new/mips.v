`timescale 1ns / 1ps
`include "def.v"

////////////////////////////////////////////////////////////////////////////////
// Company: Beijing University of Aeronautic and Astronautic
// Engineer: Chen Junyi 
//
// Create Date:   19:25:35 11/12/2021
// Design Name:   mips
// Module Name:   G:/MyWorkspace/Computer_Organization/P4/P4_L0_CPU/mips_tb.v
// Project Name:  P4_L0_CPU
// Target Device:  None
// Tool versions:  Vivado 2020.1
// Description: MIPS Pipeline CPU Top Design Module
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips(
    input clk,
    input reset
    );

    // 控制Stall的信息
    wire Stall;
    //写使能
    wire FD_REG_WrEn, DE_REG_WrEn, EM_REG_WrEn, MW_REG_WrEn;
    wire PC_WrEn;    
    //插入nop的flush控制信号
    wire FD_REG_Flush, DE_REG_Flush, EM_REG_Flush, MW_REG_Flush;
    assign FD_REG_WrEn = !Stall;
    assign DE_REG_WrEn = 1'b1;
    assign EM_REG_WrEn = 1'b1;
    assign MW_REG_WrEn = 1'b1;

    assign PC_WrEn = !Stall;    

    assign FD_REG_Flush = (D_bltzall_check && !Stall);
    assign DE_REG_Flush = Stall;
    assign EM_REG_Flush = 1'b0;
    assign MW_REG_Flush = 1'b0;   

    stall stall_CTRL(
        .D_Instr(D_Instr),
        .E_Instr(E_Instr),
        .M_Instr(M_Instr),
        .Stall(Stall)
    );

    // 处理Forward的wire
    wire[31:0] D_FWD_rs_data, D_FWD_rt_data;
    wire[31:0] E_FWD_rs_data, E_FWD_rt_data;
    wire[31:0] M_FWD_rt_data;


    wire [31:0] NPC;
    wire [31:0] F_Instr, F_PC;

    // F级Fetch
    F_IFU _ifu(
        .clk(clk),
        .reset(reset),

        .PC_WrEn(PC_WrEn),
        .NPC(NPC),

        .Instr(F_Instr),
        .PC(F_PC)
    );

    wire [31:0] D_PC;
    wire [31:0] D_Instr;

    // FD级寄存器
    FD_REG _fd_reg(
        .clk(clk),
        .reset(reset),
        .flush(FD_REG_Flush),
        .WrEn(FD_REG_WrEn),
        
        .F_PC(F_PC),
        .F_Instr(F_Instr),

        .D_PC(D_PC),
        .D_Instr(D_Instr)
    );

    wire [4:0] D_rs_addr, D_rt_addr;
    wire [15:0] D_imm16;
    wire [25:0] D_imm26;

    wire [2:0] D_CMPOp;
    wire [2:0] D_NPCOp;
    wire D_EXTOp;
    
    wire D_b_jump;
    wire [31:0] D_rs_data, D_rt_data;
    wire [31:0] D_ext32;

    // D级Decode
    control D_CTRL(
        .Instr(D_Instr),
        .RD(32'b0),
        
        .rs(D_rs_addr),
        .rt(D_rt_addr),
        .imm16(D_imm16),
        .imm26(D_imm26),
        .CMPOp(D_CMPOp),
        .NPCOp(D_NPCOp),
        .EXTOp(D_EXTOp)
    );

    D_GRF _grf(
        .clk(clk),
        .reset(reset),
        
        .A1(D_rs_addr),
        .A2(D_rt_addr),

        .PC(W_PC),
        .A3(W_GRFA3),
        .WD(W_GRFWD),

        .RD1(D_rs_data),
        .RD2(D_rt_data)
    );

    D_EXT _ext(
        .imm16(D_imm16),
        .EXTOp(D_EXTOp),
        .ext32(D_ext32)
    );

    assign D_FWD_rs_data = (D_rs_addr == 0) ? 0 :
                           (D_rs_addr == E_GRFA3) ? E_GRFWD :
                           (D_rs_addr == M_GRFA3) ? M_GRFWD :
                           D_rs_data;
    
    assign D_FWD_rt_data = (D_rt_addr == 0) ? 0 :
                           (D_rt_addr == E_GRFA3) ? E_GRFWD :
                           (D_rt_addr == M_GRFA3) ? M_GRFWD :
                           D_rt_data;

    wire D_bltzall_check;

    D_CMP _cmp(
        .CMPOp(D_CMPOp),
        .rsData(D_FWD_rs_data),
        .rtData(D_FWD_rt_data),
        .jump(D_b_jump),
        .flush(D_bltzall_check)
    );

    D_NPC _npc(
        .NPCOp(D_NPCOp),
        .D_PC(D_PC),
        .F_PC(F_PC),
        .b_jump(D_b_jump),
        .imm26(D_imm26),
        .imm16(D_imm16),
        .rs(D_FWD_rs_data),
        .NPC(NPC)
    );

    wire [31:0] E_PC;
    wire [31:0] E_Instr;

    wire [31:0] E_rs_data, E_rt_data;
    wire [31:0] E_ext32;
    wire E_b_jump;

    // DE级寄存器
    DE_REG _de_reg(
        .clk(clk),
        .reset(reset),
        .flush(DE_REG_Flush),
        .WrEn(DE_REG_WrEn),

        .D_PC(D_PC),
        .D_Instr(D_Instr),
        .D_ext32(D_ext32),
        .D_rs_data(D_FWD_rs_data),
        .D_rt_data(D_FWD_rt_data),
        .D_b_jump(D_b_jump),

        .E_PC(E_PC),
        .E_Instr(E_Instr),
        .E_rs_data(E_rs_data),
        .E_rt_data(E_rt_data),
        .E_ext32(E_ext32),
        .E_b_jump(E_b_jump)
    );

    wire [3:0] E_ALUOp;
    wire [1:0] E_ALUASel, E_ALUBSel, E_GRFWDSel;
    wire [4:0] E_GRFA3, E_rs_addr, E_rt_addr;
    wire [31:0] E_GRFWD;
    wire [4:0] E_ALUshamt;

    // E级Execute
    control E_CTRL(
        .Instr(E_Instr),
        .b_jump(E_b_jump),
        .RD(32'b0),
        
        .rs(E_rs_addr),
        .rt(E_rt_addr),
        .shamt(E_ALUshamt),

        .ALUOp(E_ALUOp),
        .ALUASel(E_ALUASel),
        .ALUBSel(E_ALUBSel),
        .GRFA3(E_GRFA3),
        .GRFWDSel(E_GRFWDSel)
    );

    assign E_FWD_rs_data = (E_rs_addr == 0) ? 0 :
                           (E_rs_addr == M_GRFA3) ? M_GRFWD :
                           (E_rs_addr == W_GRFA3) ? W_GRFWD :
                           E_rs_data;

    assign E_FWD_rt_data = (E_rt_addr == 0) ? 0 :
                           (E_rt_addr == M_GRFA3) ? M_GRFWD :
                           (E_rt_addr == W_GRFA3) ? W_GRFWD :
                           E_rt_data;

    assign E_GRFWD = E_GRFWDSel == `WDSel_pc8 ? E_PC + 8 :
                     0;
    
    
    wire [31:0] E_ALUAns;

    wire [31:0] E_ALUA = (E_ALUASel == `ASel_rt) ? E_FWD_rt_data :
                  (E_ALUASel == `ASel_rs) ? E_FWD_rs_data :
                  0;
    
    wire [31:0] E_ALUB = (E_ALUBSel == `BSel_rt) ? E_FWD_rt_data :
                  (E_ALUBSel == `BSel_imm) ? E_ext32 :
                  (E_ALUBSel == `BSel_shamt) ? {27'b0, E_ALUshamt} :
                  (E_ALUBSel == `BSel_rs) ? {27'b0, E_FWD_rs_data[4:0]} :
                  0;
    
    E_ALU _alu(
        .A(E_ALUA),
        .B(E_ALUB),
        .ALUOp(E_ALUOp),
        .C(E_ALUAns)
    );

    wire [31:0] M_PC;
    wire [31:0] M_Instr;
    wire [31:0] M_ALUAns;
    wire [31:0] M_rt_data;
    wire [31:0] M_ext32;
    wire M_b_jump;

    // EM寄存器
    EM_REG _em_reg(
        .clk(clk),
        .reset(reset),
        .flush(EM_REG_Flush),
        .WrEn(EM_REG_WrEn),

        .E_PC(E_PC),
        .E_Instr(E_Instr),
        .E_ALUAns(E_ALUAns),
        .E_rt_data(E_FWD_rt_data),
        .E_ext32(E_ext32),
        .E_b_jump(E_b_jump),

        .M_PC(M_PC),
        .M_Instr(M_Instr),
        .M_ALUAns(M_ALUAns),
        .M_rt_data(M_rt_data),
        .M_ext32(M_ext32),
        .M_b_jump(M_b_jump)
    );

    // M级Memory
    wire [4:0] M_rt_addr;
    wire [2:0] M_DMOp;
    wire M_DMWrEn;
    wire [4:0] M_GRFA3;
    wire [1:0] M_GRFWDSel;
    wire [31:0] M_GRFWD;

    control M_CTRL(
        .Instr(M_Instr),
        .b_jump(M_b_jump),
        .RD(M_DMRD),

        .rt(M_rt_addr),
        .DMOp(M_DMOp),
        .DMWrEn(M_DMWrEn),
        .GRFA3(M_GRFA3),
        .GRFWDSel(M_GRFWDSel)
    );

    assign M_FWD_rt_data = (M_rt_addr == 0) ? 0 :
                           (M_rt_addr == W_GRFA3) ? W_GRFWD :
                           M_rt_data;

    assign M_GRFWD = M_GRFWDSel == `WDSel_pc8 ? M_PC + 8 :
                     M_GRFWDSel == `WDSel_aluans ? M_ALUAns :
                     0;
    
    wire [31:0] M_DMRD;

    M_DM _dm(
        .clk(clk),
        .reset(reset),

        .PC(M_PC),
        .Addr(M_ALUAns),
        .WD(M_FWD_rt_data),
        .DMWrEn(M_DMWrEn),
        .DMOp(M_DMOp),
        
        .RD(M_DMRD)
    );

    // M/W寄存器

    wire [31:0] W_PC;
    wire [31:0] W_Instr;
    wire [31:0] W_ALUAns;
    wire [31:0] W_DMRD;
    wire [31:0] W_rt_data;
    wire W_b_jump;

    MW_REG _mw_reg(
        .clk(clk),
        .reset(reset),
        .flush(MW_REG_Flush),
        .WrEn(MW_REG_WrEn),

        .M_PC(M_PC),
        .M_Instr(M_Instr),
        .M_ALUAns(M_ALUAns),
        .M_DMRD(M_DMRD),
        .M_b_jump(M_b_jump),
        .M_rt_data(M_rt_data),

        .W_PC(W_PC),
        .W_Instr(W_Instr),
        .W_ALUAns(W_ALUAns),
        .W_DMRD(W_DMRD),
        .W_b_jump(W_b_jump),
        .W_rt_data(W_rt_data)
    );

    wire [4:0] W_GRFA3;
    wire W_GRFWrEn;
    wire [1:0] W_GRFWDSel;
    wire [31:0] W_GRFWD;

    control W_CTRL(
        .Instr(W_Instr),
        .RD(W_DMRD),
        .b_jump(W_b_jump),
        
        .GRFA3(W_GRFA3),
        .GRFWDSel(W_GRFWDSel)
    );

    assign W_GRFWD = W_GRFWDSel == `WDSel_pc8 ? W_PC + 8 :
                     W_GRFWDSel == `WDSel_aluans ? W_ALUAns :
                     W_GRFWDSel == `WDSel_dmrd ? W_DMRD :
                     W_GRFWDSel == `WDSel_rt_data ? W_rt_data :
                     0;

endmodule
