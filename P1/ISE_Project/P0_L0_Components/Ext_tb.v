`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:25:23 10/22/2021
// Design Name:   ext
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/Ext_tb.v
// Project Name:  P0_L0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ext_tb;

	// Inputs
	reg [15:0] imm;
	reg [1:0] EOp;

	// Outputs
	wire [31:0] ext;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.EOp(EOp), 
		.ext(ext)
	);

	initial begin
		// Initialize Inputs
		imm = 0;
		EOp = 0;

		// Wait 100 ns for global reset to finish
		#1;
		imm = 16'b1000_0000_0000_0000; EOp = 2'b00;
		#1;
		imm = 16'b1000_0000_0000_0000; EOp = 2'b01;
		#1;
		imm = 16'b1000_0000_0000_0000; EOp = 2'b10;
		#1;
		imm = 16'b1000_0000_0000_0000; EOp = 2'b11;
		$finish;
        
		// Add stimulus here

	end
      
endmodule

