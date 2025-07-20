#include <nvboard.h>
#include "Vrandom_num.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static TOP_NAME dut;
//static Vrandom_num* top;

void nvboard_bind_all_pins(TOP_NAME* random_num);
 
 //实现clk功能
static void single_cycle(){
	dut.clk = 0; dut.eval();
	dut.clk = 1; dut.eval();
}
 
static void reset(int n){
	dut.rst = 1;//复位信号 rst=1 进行复位
	while(n-->0) single_cycle();//经过n个周期
	dut.rst = 0;//完成复位
}
 
int main(){
	nvboard_bind_all_pins(&dut);//引脚绑定
	nvboard_init();//初始化
	
	reset(10);//10个周期复位（#10）稳定系统
	while(1){
		nvboard_update();
		single_cycle();
	}
 
}

