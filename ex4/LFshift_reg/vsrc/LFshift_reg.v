module LFshift_reg(clk,st,din,dout,rst);
    input clk;
    input st;
    input rst;
    input [7:0] din;
    output reg [7:0] dout;
    reg dcul;
    integer i;

    always @(posedge clk)begin
        case (st)
            //置数 且dcul置为0（以免置数时dcul还保留着原来的值）
            1:begin 
                dout <= din;
                dcul <= 0;
            end 
            //随机数生成
            default: begin
                dcul<=0;
                dout<={dcul,dout[7:1]};
                dcul<=dout[4]^dout[3]^dout[2]^dout[0];
            end
        endcase
    end
endmodule 
