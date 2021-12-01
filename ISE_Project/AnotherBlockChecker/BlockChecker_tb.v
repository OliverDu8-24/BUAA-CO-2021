`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:19:39 10/23/2021
// Design Name:   BlockChecker
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/AnotherBlockChecker/BlockChecker_tb.v
// Project Name:  AnotherBlockChecker
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

	reg [0:1023] data;
	integer i = 0;
	
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
		data = "begin enDbegin xyzz eNd BeGin begin end endbegin end ";
		while(!data[0:7]) data = data << 8;
		#2;
		reset = 0;
		for(i = 0; i < 53; i=i+1) begin
			in[7:0] = data[0:7];
			data = data << 8;
			#2;
		end
		$finish;

	end
      
endmodule

