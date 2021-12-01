`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:51:13 10/22/2021
// Design Name:   string
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/expression_tb.v
// Project Name:  P0_L0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module expression_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	always #1 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 1;
		in = 0;

		#2; clr = 0; in = "+";
		#2; in = "+";
		#2; in = "3";
		#2; in = "*";
		#2; in = "4";
		#2; in = "5";
		#2; in = "+";
		#2; in = "3";

		#2; clr = 1;
		#2; clr = 0; in = "2";
		#2; in = "+";
		#2; in = "3";
		#2; in = "*";
		#2; in = "+";
		#2; in = "8";
		#2;
		$finish;
	end
      
endmodule

