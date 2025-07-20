
module top(clk,select_dir,st,select_ult,din,dout,shamt,segA,segB,led_high,led_low);

    input clk;//BTNU
    input [7:0] din;//SW 7:0
    input st;
    input select_dir,select_ult;//SW15 14
    input [2:0] shamt;//sw 11:9
    output reg [7:0] dout;
    output reg [6:0] segA,segB;//SEG
    output reg [3:0] led_high,led_low;//LD7:4 LD3:0

    assign led_high = dout[7:4];
    assign led_low = dout[3:0];

    berriel_shifter my_reg(
        .clk(clk),
        .din(din),
        .shamt(shamt),
        .st(st),
        .select_dir(select_dir),
        .select_ult(select_ult),
        .dout(dout)
    );

    bcd7seg seg0(.b(led_high),.h(segA));
    bcd7seg seg1(.b(led_low),.h(segB));


endmodule
