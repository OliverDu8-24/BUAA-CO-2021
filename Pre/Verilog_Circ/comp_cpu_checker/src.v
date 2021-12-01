`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:02 09/22/2021 
// Design Name: 
// Module Name:    cup_checker2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cpu_checker(
    input clk,
    input reset,
    input [7:0] char,
    input [15:0] freq,
    output [1:0] format_type,
    output [3:0] error_code
    );
    function isnum;
		 input [7:0] c;
		 begin
		 isnum = (c >= "0" && c <= "9");
	 end
	 endfunction
	 
	 function isx;
		 input [7:0] x;
		 begin
		 isx = ((x >= "0" && x <= "9")||(x >= "a" && x <= "f"));
	 end
	 endfunction
	 
	 function [3:0] xtoh;
		input [7:0] a;
		begin
		xtoh = (a >= "0" && a <= "9") ? (a - "0") : (a - "a" + 10);
		end
	 endfunction
	 
	 reg [4:0] s;
	 reg [3:0] times;
	 reg [20:0] T;
	 reg [20:0] gref;
	 reg [32:0] pc;
	 reg [32:0] addr;
	 reg e_time;
	 reg e_pc;
	 reg e_gref;
	 reg e_addr;
	 //wire [15:0] h_freq;
	 
	 initial begin
		s = 0;
		times = 0;
		T = 0;
		gref = 0;
		e_time = 0;
		e_pc = 0;
		e_gref = 0;
		e_addr = 0;
		pc = 0;
		addr = 0;
	 end
	 
	 always@(posedge clk) begin
		if(reset == 1) begin
			s <= 0;
			times <= 0;
			T <= 0;
			gref <= 0;
			e_time <= 0;
			e_pc <= 0;
			e_gref <= 0;
			e_addr <= 0;
			pc <= 0;
		   addr <= 0;
		end
		else begin
			case(s)
			0 : begin
			    times <= 0;
				 T <= 0;
				 gref <= 0;
				 e_time <= 0;
				 e_pc <= 0;
				 e_gref <= 0;
				 e_addr <= 0;
				 pc <= 0;
				 addr <= 0;
			    if(char == "^") s <= 1;
			    else s <= 0;
				 end
			1 : begin
			    gref <= 0;
				 pc <= 0;
		       addr <= 0;
				 e_pc <= 0;
				 e_gref <= 0;
				 e_addr <= 0;
			    if(isnum(char) && (times < 4)) begin     //time 10
					times <= times + 1;
					T <= (T << 3) + (T << 1) + char - "0";
					s <= 1;
					e_time <= 0;
				 end
			    else if(char == "@" && (times <= 4) && (times >= 1)) begin
					times <= 0;
					s <= 2;
					e_time <= ((T & ((freq >> 1) - 1)) != 0 ) ? 1 : 0;    //e_time
					//$display("fuck %d %b", e_time, T);
				 end
				 else begin
				   s <= 0;
					times <= 0;
				 end
				 end
			2 : if(isx(char) && (times < 8)) begin   //pc 16
					times <= times + 1;
					s <= 2;
					pc <= (pc << 4) + xtoh(char);
					end
				 else if((char == ":") && (times == 8)) begin
					times <= 0;
					s <= 3;
					e_pc = ~((pc >= 16'h3000) && (pc <= 16'h4fff) && ((pc & 2'b11) == 0));   //e_pc
				 end
 				 else begin
					 times <= 0;
					 s <= 0;
				 end
			3 : if(char == "0" || char == " ") s <= 3;
			    else if(char == "$") s <= 4;
				 else if(char ==8'd42) s<= 10;
				 else s <= 0;
			4 : if(isnum(char) && (times < 4)) begin     //grf 10
					times <= times + 1;
					s <= 4;
					gref <= (gref << 3) + (gref << 1) + char - "0";
				 end
				 else if((char == "0" || char == " ") && (times >= 1) && (times <= 4)) begin
					times <= 0;
					s <= 5;
				 end
				 else if((char == "<") && (times >= 1) && (times <= 4)) begin
					times <= 0;
					s <= 6;
				 end
				 else begin
					times <= 0;
					s <= 0;
				 end
			5 : if(char == "0" || char == " ") s <= 5;
			    else if(char == "<") s <=6;
				 else s <= 0;
			6 : begin
			    e_gref <= ~((gref <= 31) && (gref >= 0));   //e_gref
			    if(char == "=") s <= 7;
			    else s <= 0;
				 end
			7 : if(char == "0" || char == " ") s <= 7;
			    else if(isx(char)) begin
					times <= times + 1;
					s <= 8;
				 end
				 else s <= 0;
			8 : if(isx(char) && (times < 8)) begin
					times <= times + 1;
					s <= 8;
				 end
			    else if(char == "#" && times == 8) begin
					times <= 0;
					s <=9;
             end
             else begin
					times <=0;
					s <= 0;
				 end
			9 : begin
			    T<= 0;
			    if(char == "^") s <= 1;
			    else s<= 0;
				 end
			10 : if(isx(char) && (times < 8)) begin     //addr 16
					times <= times + 1;
					s <= 10;
					addr <= (addr << 4) + xtoh(char);
				  end
				  else if((char == "0" || char == " ") && times == 8) begin
					times <= 0;
					s <= 11;
				  end
				  else if(char == "<" && times == 8) begin
					times <= 0;
					s <= 12;
				  end
				  else begin
				  times <= 0;
				  s <= 0;
				  end
			11 : if(char == "0" || char == " ") s <= 11;
			     else if(char == "<") s <= 12;
				  else s <= 0;
			12 : begin
			     e_addr <= ~((addr >= 0) && (addr <= 16'h2fff) && (pc & 2'b11 == 0));   //e_addr
			     if(char == "=") s <= 13;
			     else s <= 0;
				  end
			13 : if(char == "0" || char == " ") s <= 13;
			     else if(isx(char)) begin
					  times <= times + 1;
					  s <= 14;
				  end
			14 : if(isx(char) && times < 8) begin     
					times <= times + 1;
					s <= 14;
				  end
				  else if(char == "#" && times == 8) begin
					times <= 0;
					s <= 15;
				  end
				  else begin
					  times <= 0;
					  s <= 0;
				  end
			15 : begin
			     T<=0;
			     if(char == "^") s <= 1;
			     else s<= 0;
				  end
			endcase
		end
	end
		assign format_type = (s == 9) ? 2'b01 :
		                     (s == 15) ? 2'b10 :
									2'b00;
		//assign h_freq = (freq >> 1) -1;
      assign error_code = (~(s == 9 || s == 15)) ? 4'b0000 : {e_gref,e_addr,e_pc,e_time};		

endmodule
