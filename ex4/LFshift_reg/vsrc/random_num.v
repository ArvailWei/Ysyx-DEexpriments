module random_num(st,din,clk,dout,led,seg0,seg1,rst);
    input st;//置数
    input [7:0] din;
    input clk;
    input rst;
    output reg [7:0] dout;
    output reg [7:0] led;
    output reg [6:0] seg0,seg1; 

    assign led=dout;
    wire i;

    //实例化
    LFshift_reg myreg(
        .st(st),
        .clk(i),
        .din(din),
        .dout(dout),
        .rst(rst)
    );

    o_clk myclk(
        .clk(clk),
        .o_clk(i),
        .rst(rst)
    );

    bcd7seg segA(.b(dout[7:4]),.h(seg1));
    bcd7seg segB(.b(dout[3:0]),.h(seg0));
    

endmodule
