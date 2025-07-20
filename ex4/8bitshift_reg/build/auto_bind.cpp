#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->date, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->clk, 1, BTNU);
	nvboard_bind_pin( &top->select, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->decide, 1, SW12);
	nvboard_bind_pin( &top->led_high, 4, LD7, LD6, LD5, LD4);
	nvboard_bind_pin( &top->led_low, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->segA, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->segB, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
}
