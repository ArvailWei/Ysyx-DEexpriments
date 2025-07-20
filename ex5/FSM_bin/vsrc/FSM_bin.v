module FSM_bin(clk,din,rst,dout)
    input clk,din,rst;
    output reg dout;

    //9个状态 因为需要亮灯，所以给了[3:0]位宽，如果不亮灯，1位宽则足以表示各个状态的当前状态
    parameter [3:0] s0=0,s1=1,s2=2,s3=3,s4=4,s5=5,s6=6,s7=7,s8=8,s9=9;

    //状态之间的输入输出值（对应状态值）
    wire [3:0] state_din,state_dout;
    wire state_wen;//???写使能？ 高电平写入数据

    //模块待施工，目测实现简单寄存器,写入并储存当前状态的数据
    SimReg#(4,0) state(clk,rst,state_din,state_dout,state_wen);

    //是写能写入
    assign state_wen = 1;

    //选择器，实现状态值
    MuxKeyWithDefault#(9,4,1) outMux(.out(dout),.key(state_dout),.default_out(0),.lut({
        //由表得知的各个状态的所处状态值
        s0,1'b0,
        s1,1'b0,
        s2,1'b0,
        s3,1'b0,
        s4,1'b1,
        s5,1'b0,
        s6,1'b0,
        s7,1'b0,
        s8,1'b1
    }));

    //选择器，实现状态的转变
    MuxKeyWithDefault#(9,4,1) stateMux(.out(state_din),.key(state_dout),.default_out(0),.lut({
        //由表得知转变
        s0,din?s5:s1,
        s1,din?s5:s2,
        s2,din?s5:s3,
        s3,din?s5:s4,
        s4,din?s5:s4,
        s5,din?s6:s1,
        s6,din?s7:s1,
        s7,din?s8:s1,
        s8,din?s8:s1
    }));

endmodule 
