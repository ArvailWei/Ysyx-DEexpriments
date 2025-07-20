module top(sw,en,led_out,seg_out);
    input [7:0] sw;
    input en;

    output [3:0] led_out;
    output [6:0] seg_out;

    wire indicate;
    wire [2:0] result;

    //encode83模块实例化
    encode83 ecd83(
        .x(sw[7:0]),
        .en(en),
        .indicate(indicate),
        .y(result)
    );

    assign led_out={indicate,result};

    //bcd7seg模块实例化
    bcd7seg hex0(
        .b(led_out),
        .h(seg_out)
    );
endmodule

