`timescale 1ns / 1ps
`include "def.v"

module Level_Decode(
    input clk,
    input reset,

    // 正常跳转时PC+4需要用，注意这里是**现在**的F_PC
    input [31:0] F_PC,          

    // 从上一级继承的数据
    input [31:0] D_PC,
    input [31:0] D_Instr,

    // 转发来的数据，给CMP使用
    input D_FWD_rsData,
    input D_FWD_rtData,

    // W级的写入数据
    // 如果不写入那么W_GRFA3的值就是0
    input W_GRFWD,
    input [4:0] W_GRFA3,
    input [31:0] W_PC,

    output [31:0] DE_Instr,
    output [31:0] DE_rsData,
    output [31:0] DE_rtData,
    output [31:0] DE_ext32,
    output [4:0] DE_GRFA3,
    output [31:0] DE_GRFWD,

    // 回写给F级PC的NPC
    output [31:0] NPC
    );
    wire [4:0] D_rs_addr, D_rt_addr, D_rd_addr;
    wire [15:0] D_imm16;
    wire [25:0] D_imm26;
    wire D_EXTOp, D_GRFA3Sel, D_GRFWDSel;
    wire [2:0] D_NPCOp, D_CMPOp;

    control D_CTRL(
        // 输入Instr，进行译码
        .Instr(D_Instr),

        // 译码得到三个地址
        .rt(D_rt_addr),
        .rs(D_rs_addr),
        .rd(D_rd_addr),
        
        //译码得到两个立即数
        .imm16(D_imm16),    // 交给EXT符号扩展，同时是beq的offset
        .imm26(D_imm26),    // 不继续流水，是j/jal的地址

        // 生成控制信号
        .EXTOp(D_EXTOp),
        .NPCOp(D_NPCOp),
        .CMPOp(D_CMPOp),
        .GRFA3Sel(D_GRFA3Sel),
        .GRFWDSel(D_GRFWDSel)
    );

    D_GRF _grf(
        // 必须的数据
        .clk(clk),
        .reset(reset),

        // W级写入的数据
        .PC(W_PC),
        .A3(W_GRFA3),
        .WD(W_GRFWD),

        // D级需要读出来的数据
        .A1(D_rs_addr),         // CTRL同时承担了译码的功能
        .A2(D_rt_addr),
        .RD1(DE_rsData),            // 读出来的两个数据继续流水
        .RD2(DE_rtData)
    );

    D_EXT _ext(
        .imm16(D_imm16),
        .EXTOp(D_EXTOp),
        .ext32(DM_ext32)        //扩展后的数据ext32继续流水
    );

    D_CMP _cmp(
        // 注意这里需要拿转发的数据直接比
        .rs(D_FWD_rsData),
        .rt(D_FWD_rtData),
        .CMPOp(D_CMPOp),
        .b_jump(D_b_jump)
    );

    D_NPC _npc(
        .D_PC(D_PC),
        .F_PC(F_PC),
        .imm26(D_imm26),
        .rs(D_FWD_rs),
        .b_jump(D_b_jump),
        .NPCOp(D_NPCOp),
        .NPC(NPC)
    );


    assign D_GRFWD = (D_GRFWDSel == `WDSel_pc4) ? D_PC + 8 : 32'hz;
    assign D_GRFA3 = (D_GRFA3Sel == `A3Sel_none) ? 5'b00000 :
                     (D_GRFA3Sel == `A3Sel_ra) ? 5'd31 :
                     (D_GRFA3Sel == `A3Sel_rt) ? D_rt_addr : D_rd_addr;

endmodule
