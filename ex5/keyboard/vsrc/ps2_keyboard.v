module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,ready,nextdata,overflow);
    input clk,clrn;              //时钟，复位时钟 
    input ps2_clk,ps2_data;     //键盘时钟，键盘数据
    input nextdata;             //用于是否读取下一个数据的信号
    output [7:0] data;          //fifo存储的扫描码数据
    output reg ready;           //fifo有可读数据标志 ，1有
    output reg overflow;        //fifo溢出标志，1溢出

    reg [9:0] buffer;            //ps2_data，包括dataBit(8),oddParityBit(1)
    reg [7:0] fifo[7:0] ;       //用于buffer_dateBit缓存数据
    reg [2:0] w_ptr,r_ptr;      //用于缓存数据的读写指针
    reg [3:0] count;            //计数器，用于统计 ps2_data数据
    reg [2:0] ps2_clk_sync;     //用于检测ps2_data的下降沿

    always @(posedge clk)begin
        //记录ps2_clk的历史时序数据 用于下降沿判断 [010] 1010..... -> 0 [101] 01010.....(这个就成了下降沿)
        ps2_clk_sync <= {ps2_clk_sync[1:0],ps2_clk}; 
    end

    //若为ps2_clk为下降沿时，sampling = 1；
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        //reset复位
        if (clrn == 0) begin
            count <= 0; w_ptr <= 0; r_ptr <= 0;overflow <= 0;ready <= 0;
        end

        else begin
            //fifo中有数据可以读取
            if (ready) begin
                //如果下一个数据为低电平，则读取下一个数据
                if (nextdata == 1'b0)
                begin 
                    r_ptr <= r_ptr + 3'b1;

                    //如果没数据可读，读操作结束()
                    if (w_ptr == (r_ptr +1'b1))
                        ready <= 1'b0;
                end
            end
            //下降沿触发，写入数据
            if(sampling) begin
                //计数到10 且存在 1位开启位，8位扫描码，1位奇校准位以及1位停止位，则开始数据写入fifo
                if(count==4'd10)begin
                    if ((buffer[0]==0) &&              //start bits 开始
                        (ps2_data)     &&              //stop bits  结束
                        (^buffer[9:1])) begin          //奇校验 检测扫描码均为高电平
                        // $display("receive: %x",buffer[8:1]);
                        fifo[w_ptr] <= buffer[8:1];    //将扫描码赋值给fifo
                        w_ptr <= w_ptr +3'b1;          //自身赋值加1,留给下一次写操作用的
                        ready <= 1'b1;                 //fifo存入数据则可以进行读数据操作，读操作标志置为1
                        overflow <= overflow | (r_ptr == (w_ptr +3'b1));//fifo存满，溢出信号设位1
                    end
                    count <= 0;                         //重新计数

                end
                else begin
                    buffer[count] <= ps2_data;          //储存input的ps2数据
                    count <= count +3'b1;
                end
            end
        end
    end

    assign data = fifo[r_ptr];                          //进行读数据，输出键盘接收到的数据
endmodule
