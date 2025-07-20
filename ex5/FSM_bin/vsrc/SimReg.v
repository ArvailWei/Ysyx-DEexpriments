module SimReg#(DATE_LEN=2,)
    input clk;
    input rst;
    input [DATE_LEN-1:0] state_din;
    input state_wen;
    output reg [DATE_LEN-1:0] state_dout;

    always@(posedge clk or posedge rst)begin
        if (rst) begin
            state_dout <= 0;
        end  
        else begin
            if(state_wen) state_din <= state_dout;
        end

    end


endmodule
