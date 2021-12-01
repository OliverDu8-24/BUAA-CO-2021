`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:50:20 10/13/2021
// Design Name:   cscore
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/Pre_CharFSM/Pre_CharFSM_tb.v
// Project Name:  Pre_CharFSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cscore
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pre_CharFSM_tb;

	// Inputs
	reg [0:0] clk;
	reg [0:0] reset;
	reg [7:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	cscore uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		in = 0;

		// Wait 100 ns for global reset to finish
		#4;
		reset = 0;
        
		// Add stimulus here

	end
      
endmodule

