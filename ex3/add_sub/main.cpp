#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vfull_adder.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vfull_adder* top;

//波形
void step_and_dump_wave()
{
    top -> eval();//模块内容更新（相当于执行一次always内容？）
    contextp -> timeInc(1);//时间推进1ns
    tfp -> dump(contextp->time());//dump(time)：调用tfp的dump，写入time时间状态下的信号
}

//仿真初始化
void sim_init()
{
    contextp = new VerilatedContext;//定义仿真内容
    tfp = new VerilatedVcdC;//定义仿真波形内容
    top = new Vfull_adder;//顶层模块名字
    contextp -> traceEverOn(true);//开启波形追踪
    top -> trace(tfp,0);//设置top模块的信号与tfp相关，0表示所有信号
    tfp->open("wave.vcd");//设置波形保存文件名
}

//仿真结束
void sim_exit()
{
    step_and_dump_wave();
    tfp -> close();
}


int main()
{
    sim_init();
    //input
    top ->  in_c = 0b0; top -> a = 0b0 ; top -> b = 0b0 ; step_and_dump_wave();
                    top -> a = 0b0 ; top -> b = 0b1 ; step_and_dump_wave();
                    top -> a = 0b1 ; top -> b = 0b0 ; step_and_dump_wave();
                    top -> a = 0b1 ; top -> b = 0b1 ; step_and_dump_wave();
    top ->  in_c = 0b1; top -> a = 0b0 ; top -> b = 0b0 ; step_and_dump_wave();
                    top -> a = 0b0 ; top -> b = 0b1 ; step_and_dump_wave();
                    top -> a = 0b1 ; top -> b = 0b0 ; step_and_dump_wave();
                    top -> a = 0b1 ; top -> b = 0b1 ; step_and_dump_wave();
    sim_exit();
}