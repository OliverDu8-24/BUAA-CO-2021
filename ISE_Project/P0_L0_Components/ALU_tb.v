`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:24 10/22/2021
// Design Name:   ALU
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/ALU_tb.v
// Project Name:  P0_L0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALUOp = 0;

		#1;
		A = 1; B = 1; ALUOp = 3'b000;
		#1;
		A = 1; B = 2; ALUOp = 3'b001;
		#1;
		B = 3; A = 32'b1000_0000_0000_0000_0000_0000_0000_0000; ALUOp = 3'b101;
		#1;
		A = 32'b1000_0000_0000_0000_0000_0000_0000_0000; B = 3; ALUOp = 3'b100;
        $finish;

	end
      
endmodule

