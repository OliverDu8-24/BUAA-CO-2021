`timescale 1ns / 1ps
`include "def.v"

/// D级流水线寄存器
/// 按照教程里面的写法应该是F/D级寄存器
/// 以下所有的流水线寄存器的首字母表示其为哪一级开头的寄存器
/// 例如: D_REG为D级开头的寄存器

module FD_REG(
    input clk,
    input reset,
    //input FD_REG_Flush,           // 表示该级流水线寄存器需要清空
    input FD_REG_WrEn,            // 表示是否冻结，即是否写入新的值

    input [31:0] FD_Instr,
    input [31:0] FD_PC,

    output reg [31:0] D_Instr,
    output reg [31:0] D_PC
    );

    always @(posedge clk) begin
        if(reset) begin
            D_Instr <= 32'd0;
            D_PC <= 32'd0;
        end else if(FD_REG_WrEn) begin
            D_Instr <= FD_Instr;
            D_PC <= FD_PC;
        end
    end

endmodule
