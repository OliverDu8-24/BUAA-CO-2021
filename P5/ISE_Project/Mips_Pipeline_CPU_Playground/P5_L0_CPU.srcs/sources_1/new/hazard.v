`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/11/20 15:46:21
// Design Name: 
// Module Name: hazard
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


module hazard(
    input clk,
    input reset,

    input [31:0] D_Instr,
    input [4:0] D_rs_addr,
    input [4:0] D_rt_addr,
    input [31:0] D_GRF_rsData,
    input [31:0] D_GRF_rtData,

    input [31:0] E_Instr,
    input [4:0] E_rs_addr,
    input [4:0] E_rt_addr,
    input [31:0] E_GRF_rsData,
    input [31:0] E_GRF_rtData,
    input [4:0] E_GRFA3,
    input [31:0] E_GRFWD,

    input [31:0] M_Instr,
    input [4:0] M_rt_addr,
    input [31:0] M_rtData,
    input [4:0] M_GRFA3,
    input [31:0] M_GRFWD,

    input [4:0] W_GRFA3,
    input [31:0] W_GRFWD,

    output [31:0] D_FWD_rsData, 
    output [31:0] D_FWD_rtData,
    output [31:0] E_FWD_rsData, 
    output [31:0] E_FWD_rtData,
    output [31:0] M_FWD_rtData,
    
    output DE_REG_WrEn, 
    output FD_REG_WrEn, 
    output PCWrEn,
    output DE_REG_Flush, 
    output EM_REG_Flush
    );

    // 转发部分
    assign D_FWD_rsData = (D_rs_addr == E_GRFA3 && E_GRFA3 != 0) ? E_GRFWD :
                          (D_rs_addr == M_GRFA3 && M_GRFA3 != 0) ? M_GRFWD :
                          D_GRF_rsData;
    assign D_FWD_rtData = (D_rt_addr == E_GRFA3 && E_GRFA3 != 0) ? E_GRFWD :
                          (D_rt_addr == M_GRFA3 && M_GRFA3 != 0) ? M_GRFWD :
                          D_GRF_rtData;  

    assign E_FWD_rsData = (E_rs_addr == M_GRFA3 && M_GRFA3 != 0) ? M_GRFWD :
                          (E_rs_addr == W_GRFA3 && W_GRFA3 != 0) ? W_GRFWD :
                          E_GRF_rsData;      
    assign E_FWD_rtData = (E_rt_addr == M_GRFA3 && M_GRFA3 != 0) ? M_GRFWD :
                          (E_rt_addr == W_GRFA3 && W_GRFA3 != 0) ? W_GRFWD :
                          E_GRF_rtData;

    assign M_FWD_rtData = (M_rt_addr == W_GRFA3 && W_GRFA3 != 0) ? W_GRFWD :
                          M_rtData;

    // 阻塞部分
    wire D_calc_r, D_calc_i, D_load, D_store, D_j_r ,D_j_                 
endmodule
