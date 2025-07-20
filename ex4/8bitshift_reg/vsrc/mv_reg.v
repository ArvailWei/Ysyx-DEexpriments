module mv_reg(clk,in_date,out_date,select,decide);
    input clk;
    input decide;//串行输入选择
    input [7:0] in_date;
    input [2:0] select;//功能选择
    output reg [7:0] out_date;
    
    always @(posedge clk) begin
        case(select)
            //清零
            0:out_date<=0;
            //置数
            1:begin
                out_date <= in_date;
            end
            //逻辑右
            2:begin
                out_date <= {1'b0,out_date[7:1]};
            end
            //逻辑左
            3:begin
                out_date <= {out_date[6:0],1'b0};
            end
            //算术右
            4:begin
                out_date <= {out_date[7],out_date[7:1]};
            end
            //左端串行输入1位值，并行输出八位值
            5:begin
                if(decide) out_date <= {1'b1,out_date[6:0]};
                else out_date <= {1'b0,out_date[6:0]};
            end
            //循环右移
            6:begin
                out_date <= {out_date[0],out_date[7:1]};
            end
            //循环左移
            7:begin
                out_date <= {out_date[6:0],out_date[7]};
            end
        endcase

        /*if (clr) 
            out_date <= 0;

        else
            out_date <= {out_date[6:0],in_date};*/
    end
endmodule


