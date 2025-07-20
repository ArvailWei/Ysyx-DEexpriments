module full_adder(a,b,in_c,out_c,out_s);
    input a;
    input b;
    input in_c;
    output reg out_s;
    output reg out_c;


    always @(a or b or in_c)begin
       {out_c,out_s}=a+b+in_c; 

    end
endmodule
