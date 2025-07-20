#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->clk, 1, BTNU);
	nvboard_bind_pin( &top->din, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->st, 1, SW13);
	nvboard_bind_pin( &top->select_dir, 1, SW15);
	nvboard_bind_pin( &top->select_ult, 1, SW14);
	nvboard_bind_pin( &top->shamt, 3, SW11, SW10, SW9);
	nvboard_bind_pin( &top->led_high, 4, LD7, LD6, LD5, LD4);
	nvboard_bind_pin( &top->led_low, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->segA, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->segB, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
}
