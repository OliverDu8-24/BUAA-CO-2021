module Test(
    input logic [3:0] a,b,
    output logic [3:0] y1, y2, y3, y4, y5
);
    
    always_ff @(posedge a) begin
        b <= y1;
    end

endmodule