`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/11/19 20:58:55
// Design Name: 
// Module Name: Level_Fetch
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


module Level_Fetch(
    input clk,
    input reset,
    input [31:0] NPC,
    input PCWrEn,
    output [31:0] FD_PC,
    output [31:0] FD_Instr
    );

    F_IFU _ifu(
        // Input
        .clk(clk),
        .reset(reset),
        .PCWrEn(PCWrEn),
        .NPC(NPC),

        // Output
        .Instr(FD_Instr),
        .PC(FD_PC)
    );

endmodule
