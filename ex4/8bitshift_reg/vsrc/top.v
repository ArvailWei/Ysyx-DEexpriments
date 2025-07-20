
module top(clk,date,q,select,decide,segA,segB,led_high,led_low);

    input clk;
    input [7:0] date;
    input [2:0] select;
    input decide;
    output reg [7:0] q;
    output reg [6:0] segA,segB;
    output reg [3:0] led_high,led_low;

    assign led_high = q[7:4];
    assign led_low = q[3:0];

    mv_reg my_reg(
        .clk(clk),
        .in_date(date),
        .select(select),
        .decide(decide),
        .out_date(q)
    );

    bcd7seg seg0(.b(led_high),.h(segA));
    bcd7seg seg1(.b(led_low),.h(segB));


endmodule
