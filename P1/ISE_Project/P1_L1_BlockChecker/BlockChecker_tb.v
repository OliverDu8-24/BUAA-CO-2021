`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:44:36 10/22/2021
// Design Name:   BlockChecker
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P1_L1_BlockChecker/BlockChecker_tb.v
// Project Name:  P1_L1_BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BlockChecker_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result)
	);

	always #1 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		in = 0;

		// Wait 100 ns for global reset to finish
		#2; reset = 0; in = "B";
		#2; in = "e";
		#2; in = "g";
		#2; in = "I";
		#2; in = "n";
		#2; in = " ";
		#2; in = " ";
		#2; in = "e";
		#2; in = "n";
		#2; in = "d";
		#2; in = "b";
		#2; in = "e";
		#2; in = "g";
		#2; in = "i";
		#2; in = "n";
		#2; in = "e";
		#2; in = "n";
		#2; in = "d";
		#2; in = " ";
		#2; in = "e";
		#2; in = "n";
		#2; in = "d";
		#2;
		$finish;
        
		// Add stimulus here

	end
      
endmodule

