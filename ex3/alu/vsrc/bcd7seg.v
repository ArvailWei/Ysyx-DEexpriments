module bcd7seg(
    input [3:0] b,
    output reg [6:0] h//编译结果(发光的数码管)
);

//共阳极
    always @(b) begin
        case(b[3:0])
            4'b0000:h=7'b0000001;
            4'b0001:h=7'b1001111;
            4'b0010:h=7'b0010010;
            4'b0011:h=7'b0000110;
            4'b0100:h=7'b1001100;
            4'b0101:h=7'b0100100;
            4'b0110:h=7'b0100000;
            4'b0111:h=7'b0001111;
            4'b1000:h=7'b0000000;
            4'b1001:h=7'b0000100;
            default:h=7'b0000001;
        endcase
    end 
endmodule
