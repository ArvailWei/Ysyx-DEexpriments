module berriel_shifter(st,clk,select_dir,din,shamt,select_ult,dout);
    input clk;
    input [7:0] din;
    input st;//置数
    input select_dir;//移位方向 1左0右
    input select_ult;//运算/逻辑 1运算0逻辑
    input [2:0] shamt;//移位位数 
    output reg [7:0] dout;
    integer i;
    
    initial begin
        dout = din;
    end
    
    always @(posedge clk)
    //运算
    case(st)
        1:dout<=din;
        0:begin
    if (select_ult) begin
        //左移
        if(select_dir) begin
            case (shamt)
                3'b001:dout<={dout[6:0],1'b0};
                3'b011:dout<={dout[5:0],2'b0};
                3'b111:dout<={dout[4:0],3'b0}; 
                default:dout<=dout;
            endcase
        end
        //右移
        else begin
            case (shamt)
                3'b001:dout<={dout[7],dout[7:1]};
                3'b011:dout<={dout[7],dout[7],dout[7:2]};
                3'b111:dout<={dout[7],dout[7],dout[7],dout[7:3]}; 
                default:dout<=dout;
            endcase
        end
    end
    //逻辑
    else begin
        //左移
        if(select_dir) begin
            case (shamt)
                3'b001:dout<={dout[6:0],1'b0};
                3'b011:dout<={dout[5:0],2'b0};
                3'b111:dout<={dout[4:0],3'b0}; 
                default:dout<=dout;
            endcase
        end
        //右移
        else begin
            case (shamt)
                3'b001:dout<={1'b0,dout[7:1]};
                3'b011:dout<={2'b0,dout[7:2]};
                3'b111:dout<={3'b0,dout[7:3]}; 
                default:dout<=dout;
            endcase
        end
    end
        
    end
    endcase

endmodule
