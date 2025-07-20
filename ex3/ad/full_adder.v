module full_adder(a,b,in_c,out_s,out_c);
    input a;
    input b;
    input in_c;
    output reg out_s,out_c;

    wire s1,c1,c2;

    //实例化

    half_adder h1(
    .a(a),
    .b(b),
    .c(c1),
    .s(s1)
    );
    
    half_adder h2(
    .a(in_c),
    .b(s1),
    .c(c2),
    .s(out_s)
    );

    assign out_c = c2 || c1;
endmodule
