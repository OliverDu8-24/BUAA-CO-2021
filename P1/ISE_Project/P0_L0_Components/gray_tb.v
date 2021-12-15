`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:45:52 10/22/2021
// Design Name:   gray
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/gray_tb.v
// Project Name:  P0_L0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gray_tb;

	// Inputs
	reg [0:0] Clk;
	reg [0:0] Reset;
	reg [0:0] En;

	// Outputs
	wire [2:0] Output;
	wire [0:0] Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

	always #1 Clk = ~Clk;

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 1;
		En = 1;
		#2;
		// Wait 100 ns for global reset to finish
		Reset = 0;
		#20;
		Reset = 1;
		#2
		Reset = 0;
		#20;
		$finish;
        
		// Add stimulus here

	end
      
endmodule

