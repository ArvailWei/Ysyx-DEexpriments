module bcd7seg(
    input [3:0] b,//b[3]指示位 b[2:0]编码结果
    output reg [6:0] h//编译结果(发光的数码管)
);

//共阳极
    always @(b) begin
        if (b[3]==0) h=7'b1111111;
        else begin
            case(b[2:0])
                3'd0:h=7'b0000001;
                3'd1:h=7'b1001111;
                3'd2:h=7'b0010010;
                3'd3:h=7'b0000110;
                3'd4:h=7'b1001100;
                3'd5:h=7'b0100100;
                3'd6:h=7'b0100000;
                3'd7:h=7'b0001111;
                default:h=7'b0000000;
            endcase
        end 
    end
endmodule
