`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:54:44 10/10/2021
// Design Name:   Character_FSM
// Module Name:   G:/MyWorkspace/Computer_Organization/ISE_Project/FSM_Review/FSM_tb.v
// Project Name:  FSM_Review
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Character_FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_tb;

	// Inputs
	reg [7:0] in;
	reg [0:0] clk;
	reg [0:0] reset;

	// Outputs
	wire [7:0] cnt;
	
	reg [31:0] test_cnt, ans1, ans2;

	// Instantiate the Unit Under Test (UUT)
	Character_FSM uut (
		.in(in), 
		.cnt(cnt), 
		.clk(clk), 
		.reset(reset)
	);
	
	wire [3:0] a;
   wire [4:7] b;
   wire [8:11] c;
   reg [3:0] o1;
   reg [4:7] o2;
	
	always @(*) begin
			o1[3:0] = b[7:4];
	end
	
	always #10 test_cnt = test_cnt+1;

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		reset = 1;
		test_cnt = 0;
		$display("%d\n", test_cnt);
		ans1 = 0;
		ans2 = 0;
		#15;
		$display("%d\n", test_cnt);
		ans1 = test_cnt;
		#20;
		$display("%d\n", test_cnt);
		ans2 = test_cnt;
		#25;
		$display("%d %d\n", ans1, ans2);

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
		// Add stimulus here
		#2 in = "#";
		#2 in = "B";
		#2 in = "U";
		#2 in = "A";
		#2 in = "A";
		#2 in = "X";
		#2 in = " ";
		#2 in = "B";
		#2 in = "U";
		#2 in = "A";		
		#2 in = "?";
		
		//Finish
		#6; 
		$finish;
	end
	
	always #1 clk = ~clk;
      
endmodule

