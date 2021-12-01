`timescale 1ns / 1ps
`include "def.v"

module D_CMP(
    input [2:0] CMPOp,
    input [31:0] rsData,
    input [31:0] rdData,
    output jump
    );

    wire eq = (rsData == rdData);
    wire ne = !eq;
    wire le0 = (rsData < 0);
    wire ge0 = (rsData > 0);
    wire ne0 = (rsData != 0);
    wire eq0 = !ne0;

    assign jump = (CMPOp == `CMP_beq && eq) ? 1'b1 :
                  1'b0;

endmodule
