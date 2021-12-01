`timescale 1ns / 1ps
`include "src.v"
module tb;
reg clk;
reg reset;
reg [7:0] char;
reg [15:0] freq;
reg finish;
wire [1:0] format_type;
wire [3:0] error_code;
always @(posedge clk) begin
   if (!reset && !finish) begin
       $display("%d %d", format_type, error_code);
   end
end
cpu_checker uut (
	.clk(clk),
	.reset(reset),
	.char(char), 
   .freq(16'd4096),
	.format_type(format_type),
   .error_code(error_code)
);
initial begin
	$dumpvars;
	clk = 0;
	reset = 1;
	char = 0;
	freq = 2;
	finish = 0;
   #10 reset = 0;
   #2 char = "^";
   #2 char = "2";
   #2 char = "@";
   #2 char = "e";
   #2 char = "e";
   #2 char = "2";
   #2 char = "a";
   #2 char = "8";
   #2 char = "e";
   #2 char = "e";
   #2 char = "8";
   #2 char = ":";
   #2 char = " ";
   #2 char = "*";
   #2 char = "1";
   #2 char = "6";
   #2 char = "4";
   #2 char = "3";
   #2 char = "b";
   #2 char = "6";
   #2 char = "2";
   #2 char = "9";
   #2 char = "<";
   #2 char = "=";
   #2 char = " ";
   #2 char = "7";
   #2 char = "9";
   #2 char = "f";
   #2 char = "d";
   #2 char = "1";
   #2 char = "d";
   #2 char = "f";
   #2 char = "4";
   #2 char = "#";
   #2 char = "^";
   #2 char = "9";
   #2 char = "@";
   #2 char = "8";
   #2 char = "8";
   #2 char = "b";
   #2 char = "7";
   #2 char = "6";
   #2 char = "2";
   #2 char = "1";
   #2 char = "a";
   #2 char = ":";
   #2 char = "*";
   #2 char = "0";
   #2 char = "d";
   #2 char = "a";
   #2 char = "c";
   #2 char = "a";
   #2 char = "7";
   #2 char = "a";
   #2 char = "e";
   #2 char = " ";
   #2 char = "<";
   #2 char = "=";
   #2 char = " ";
   #2 char = "0";
   #2 char = "a";
   #2 char = "8";
   #2 char = "a";
   #2 char = "4";
   #2 char = "6";
   #2 char = "3";
   #2 char = "0";
   #2 char = "#";
   #20; finish = 1; $finish;
end
always #1 clk = ~clk;
endmodule
