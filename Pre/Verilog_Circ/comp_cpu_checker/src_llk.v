module cpu_checker (
    input clk,
    input reset,
    input [7:0] char,
    input [15:0]  freq,
    output [1:0] format_type,
    output [3:0] error_code
);

reg [2:0] count0;
reg [5:0] state;
reg [3:0] state1;
reg [31:0] tim;
reg [31:0] pc;
reg [31:0] grf;
reg [31:0] addr;
reg [31:0] data1;
reg [31:0] data2;


initial begin
    count0 = 0;
    state = 0;
    state1 = 0;
    tim = 0;
    pc = 0;
    grf = 0;
    addr = 0;
    data1 = 0;
    data2 = 0;
end

always @(posedge clk ) begin
    if (reset==1) begin
        count0 <= 0;
        state <= 0;
        state1 <= 0;
        tim <= 0;
        pc <= 0;
        grf <= 0;
        addr <= 0;
        data1 <= 0;
        data2 <= 0;
    end
    else begin
        case (state)
            0 : begin
                    state1 <= 0;
                    tim <= 0;
                    pc <= 0;
                    grf <= 0;
                    addr <= 0;
                    count0 <= 0;
                    data1 <= 0;
                    data2 <= 0;
                if (char == "^") begin                   
                    state <= 1;                   
                end
                else state <= 0;
            end
            1:begin
                if ((char >= "0") && (char <= "9")) begin
                    state <= 2; 
                    tim <= (tim << 3 + tim << 1) + char - "0";
                end 
                else state <= 0;
            end
            2:begin
                if ((char >= "0") && (char <= "9"))  begin
                    state <= 3;
                    tim <= (tim << 3 + tim << 1) + char - "0";
                end
                else if (char == "@") state <= 6;
                else state <= 0;
            end
            3:begin
                if ((char >= "0") && (char <= "9")) begin 
                    state <= 4;
                    tim <= (tim << 3 + tim << 1) + char - "0";
                end
                else if (char == "@") state <= 6;
                else state <= 0;
            end
            4:begin
                if ((char >= "0") && (char <= "9")) begin 
                    state <= 5;
                    tim <= (tim << 3 + tim << 1) + char - "0";
                end
                else if (char == "@") state <= 6;
                else state <= 0;
            end
            5:begin
                if (char == "@") begin
                    state <= 6;
                end
                else state <= 0;
            end
            //输入十进制，接下来是8位16进制
            6:begin
                if( (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 < 7))begin
                    state <= 6;
                    count0 <= count0 + 1;
                    if ((char >= "0") && (char <= "9"))begin
                        pc <= (pc << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        pc <= (pc << 4) + char -"a" + 10;
                    end
                end
                else if ( (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 == 7)) begin
                   state <= 7;
                   count0 <= 0;
                   if ((char >= "0") && (char <= "9"))begin
                        pc <= (pc << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        pc <= (pc << 4) + char -"a" + 10;
                    end
                end
                else state <= 0;
            end
            7 : begin
                if (char == ":") state <= 8;
                else state <= 0;
            end
            8:begin
                if (char == " ") state <= 8;
                else if (char == "$") begin
                    state <= 9;
                end    
                else if (char == 8'd42) begin
                    state <= 20;

                end               
                else state <= 0; 
            end
            9:begin//寄存器的情况
                if ((char >= "0") && (char <= "9")) begin
                    state <= 10;
                    grf <= (grf << 3 + grf << 1) + char - "0";
                end 
                else state <= 0;
            end
            10:begin
                if ((char >= "0") && (char <= "9")) begin
                    state <= 11;
                    grf <= (grf << 3 + grf << 1) + char - "0";
                end
                else if (char == " ") state <= 14;
                else if (char == "<") state <= 15;
                else state <= 0;
            end
            11:begin
                if ((char >= "0") && (char <= "9")) begin
                    state <= 12;
                    grf <= (grf << 3 + grf << 1) + char - "0";
                end
                else if (char == " ") state <= 14;
                else if (char == "<") state <= 15;
                else state <= 0;
            end
            12:begin
                if ((char >= "0") && (char <= "9")) begin
                    state <= 13;
                    grf <= (grf << 3 + grf << 1) + char - "0";
                end
                else if (char == " ") state <= 14;
                else if (char == "<") state <= 15;
                else state <= 0;
            end
            13:begin
                if (char == " ") state <= 14;
                else if (char == "<") state <= 15;
                else state <= 0;
            end
            14:begin
                if (char == " ") state <= 14;
                else if (char == "<") state <= 15;
                else state <= 0; 
            end
            15:begin
                if (char == "=") state <= 17;//情况16作为bug删掉了
                else state <= 0; 
            end
            17:begin
                if (char == " ") state <= 17;
                else if (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) begin
                    state <= 18;
                    count0 <= count0 + 1;
                    if ((char >= "0") && (char <= "9"))begin
                        data1 <= (data1 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data1 <= (data1 << 4) + char -"a" + 10;
                    end
                end
                else state <= 0;
            end
            18 : begin
                if ( (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 < 7))begin
                    state <= 18;
                    count0 <= count0 + 1;
                    if ((char >= "0") && (char <= "9"))begin
                        data1 <= (data1 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data1 <= (data1 << 4) + char -"a" + 10;
                    end 
                end
                else if ( (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 == 7)) begin
                    state <= 19;
                    count0 <= 0;
                    if ((char >= "0") && (char <= "9"))begin
                        data1 <= (data1 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data1 <= (data1 << 4) + char -"a" + 10;
                    end
                end
                else state <= 0; 
            end
            19:begin
                if (char == "#") state <=29; //29表示寄存器
                else state <= 0;
            end
           //寄存器判定结束            
            20:begin//数据存储器判定
                if ((((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 < 7)) begin
                    state <= 20;
                    count0 <= count0 +1;
                    if ((char >= "0") && (char <= "9"))begin
                        addr <= (addr << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        addr <= (addr << 4) + char -"a" + 10;
                    end
                end
                else if ((((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 == 7)) begin
                    state <= 22;
                    count0 <= 0;
                    if ((char >= "0") && (char <= "9"))begin
                        addr <= (addr << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        addr <= (addr << 4) + char -"a" + 10;
                    end
                end                  
                else state <= 0;
            end
            22:begin
                if (char == " ") state <= 22; //情况21作为bug删去
                else if (char == "<") state <= 23;
                else state <= 0;
            end
            23:begin
                if (char == "=") state <= 25;//情况24作为bug删去
                else state <= 0;
            end
            25:begin
                if (char == " ") state <= 25; 
                else if (((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) begin
                    state <= 26;
                    count0 <= count0 +1;
                    if ((char >= "0") && (char <= "9"))begin
                        data2 <= (data2 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data2 <= (data2 << 4) + char -"a" + 10;
                    end 
                end
            end
            26:begin
                if ((((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 < 7))begin
                    state <= 26;
                    count0 <= count0 + 1;
                    if ((char >= "0") && (char <= "9"))begin
                        data2 <= (data2 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data2 <= (data2 << 4) + char -"a" + 10;
                    end
                end
                else if ((((char >= "0") && (char <= "9")) || ((char >= "a") && (char <= "f"))) && (count0 == 7))begin
                    state <= 27;
                    count0 <= 0;
                    if ((char >= "0") && (char <= "9"))begin
                        data2 <= (data2 << 4) + char -"0";
                    end
                    else if ((char >= "a") && (char <= "f")) begin
                        data2 <= (data2 << 4) + char -"a" + 10;
                    end
                end
                else state <= 0;
            end
            27:begin
                if (char == "#") begin
                    state <= 28;
                end
                else state <= 0;
            end
            28: begin
                if (char == "^") state <= 1;
                else state <= 0;
            end
            29: begin
                if (char == "^") state <= 1;
                else state <= 0;
            end
        endcase
        
        if ((tim & (freq/2 - 1)) != 0 ) state1 <= state1 + 4'b0001;
        if ((pc & 32'd3 != 0) || (pc < 32'h3000) || (pc > 32'h4fff)) state1 <= state1 + 4'b0010;
        if ((addr & 32'd3 != 0) || (addr > 32'h2fff)) state1 <= state1 + 4'b0100;
        if (grf > 31) state1 <= state1 + 4'b1000;
    end
end

assign  format_type = (state == 29)? 2'b01:
                      (state == 28)? 2'b10:
                      2'b00;
assign error_code = (format_type == 2'b00)? 0: state1;

endmodule