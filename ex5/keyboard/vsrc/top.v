module top(
    //input
    inout clrn,
    input clk,
    input ps2_clk,ps2_data,

    //seg
    //显示ScanCode 键码
    output [6:0] seg0,
    output [6:0] seg1,

    output [6:0] seg2,//空

    //显示ASCII码
    output [6:0] seg3,
    output [6:0] seg4,

    output [6:0] seg5,//空

    //显示按下次数
    output [6:0] seg6,
    output [6:0] seg7,    

    //led - overflow
    output led
);
    //状态
    parameter s0 = 2'b00, s1= 2'b01, s2 = 2'b10;

    //reg
    reg [7:0] count;                    //计数器，记录按下的次数
    reg [1:0] current_state,next_state; //现态和次态
    reg is_working;                     //指示低四位seg是否显示
    reg [7:0] kb_data;                  //键盘数据
    reg [7:0] ascii_code;               //ascii码

    //wire
    wire[7:0] data;         //ps2 输出data
    wire overflow;          //ps2 溢出信号
    wire ready;             //ps2 读取信号
    wire nextdata = 1'b0;   //给ps2 读取的信号
   

    //组合逻辑
    assign led = overflow;
    //初始化
    initial begin
        current_state = s0;
        is_working = 0;
    end
    
    always @(posedge clk or negedge clrn) begin
        //复位
        if(clrn)begin
            count <= 0;
            current_state <= s0;
        end
        
        else begin
            if(ready) begin
                $display("receive: %x",data[7:0]);

                //状态转变
                case(current_state)
                //静止->按住
                s0:begin
                    // if(ready)begin
                        current_state <= s1;       
                        is_working <= 1;        //开启数码管显示
                        kb_data <= data;
                    // end 
                end
                //按住->松开
                s1:begin      
                    //识别到断码--松开标志
                    if(data == 8'hf0 /*&& ready*/)begin
                        current_state <= s2;
                        count <= count + 8'b1;
                        is_working <= 1'b0;
                    end
                end
                // 松开->静止
                s2:begin
                    current_state <= s0;   //回归初态
                end 
                default:current_state <= s0;
                endcase
            end 
        end    
    end
// //输出逻辑
//     always@(current_state)begin
//         if(current_state == s1 && ready)begin
//             kb_data <= data;
//             $display("acsii : %x",kb_data);
//             $display("acsii : %x",ascii_code);
//         end
//     end

//模块实例化
//ps2_keyboard
ps2_keyboard my_ps2_keyboard(
    .clk      	( clk     ),
    .clrn     	(~clrn      ),
    .ps2_clk  	(ps2_clk   ),
    .ps2_data 	(ps2_data  ),
    .nextdata 	(nextdata  ),
    .data     	(data      ),
    .ready    	(ready     ),
    .overflow 	(overflow  )
);

//scancode to ascii
scancode2ascii u_scancode2ascii(
    .scan  	(kb_data   ),
    .ascii 	(ascii_code  )
);

//bcd7seg
//scancode
bcd7seg my_seg0(.b      	(kb_data[3:0]       ),.enable 	(is_working ),.h      	(seg0       ));
bcd7seg my_seg1(.b      	(kb_data[7:4]       ),.enable 	(is_working  ),.h      	(seg1       ));
//empty
bcd7seg my_seg2(.b      	(0       ),.enable 	(0  ),.h      	(seg2       ));//空
//ascii
bcd7seg my_seg3(.b      	(ascii_code[3:0]       ),.enable 	(is_working  ),.h      	(seg3       ));
bcd7seg my_seg4(.b      	(ascii_code[7:4]       ),.enable 	(is_working  ),.h      	(seg4       ));
//empty
bcd7seg my_seg5(.b      	(0       ),.enable 	(0  ),.h      	(seg5       ));//空
//count
bcd7seg my_seg6(.b      	(count[3:0]       ),.enable 	(1  ),.h      	(seg6       ));
bcd7seg my_seg7(.b      	(count[7:4]       ),.enable 	(1  ),.h      	(seg7       ));


endmodule
