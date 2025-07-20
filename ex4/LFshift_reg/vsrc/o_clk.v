module o_clk(clk,rst,o_clk);
    input clk;
    input rst;
    output reg o_clk;

    reg [31:0] count;

    //调节clk的周期
    always@(posedge clk)begin
        if (count == 32'd5000000) begin
            count <= 0;
            o_clk <=1;
        end
        else begin
            count <= count +1;
            o_clk <= 0;
        end
    end
endmodule
