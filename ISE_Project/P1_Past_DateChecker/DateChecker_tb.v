`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:56:07 10/24/2021
// Design Name:   DateChecker
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/P1_Past_DateChecker/DateChecker_tb.v
// Project Name:  P1_Past_DateChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DateChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DateChecker_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;

	// Outputs
	wire valid;

	reg [0:1023] data;

	// Instantiate the Unit Under Test (UUT)
	DateChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.valid(valid)
	);

	always #1 clk = ~clk;
	integer i;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		in = 0;
		data = "2012-02222-12-2521-12-12";
		#4;
		reset = 0;
		while(!data[0:7]) data = data << 8;
		// Wait 100 ns for global reset to finish
		
		for(i=0; i<80; i=i+1) begin
			in = data[0:7];
			data = data << 8;
			#2;
		end

		$finish;
        
		// Add stimulus here

	end
      
endmodule

