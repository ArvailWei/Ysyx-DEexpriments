//高位优先编码器
module encode83(x,en,y,indicate);
    input [7:0] x;
    input en;
    output reg [2:0] y;
    output reg indicate;
    integer i;

    always @(en or x) begin
        if(en)begin
            y=0;
            //全0指示器为0,存在1指示器为1
            if (x==0) indicate<=1'b0;
            else indicate <= 1'b1;
            for(i=0;i<=7;i=i+1)
                if(x[i]==1) y=i[2:0];
        end
        else y=0;
    end
endmodule

