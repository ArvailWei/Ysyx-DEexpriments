#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->button, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->a, 5, SW9, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->b, 5, SW8, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->out_c, 1, LD12);
	nvboard_bind_pin( &top->zero, 1, LD11);
	nvboard_bind_pin( &top->overflow, 1, LD10);
	nvboard_bind_pin( &top->in, 10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->segA, 7, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G);
	nvboard_bind_pin( &top->segB, 7, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G);
	nvboard_bind_pin( &top->segC, 7, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G);
	nvboard_bind_pin( &top->segD, 7, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G);
	nvboard_bind_pin( &top->segE, 7, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G);
	nvboard_bind_pin( &top->segF, 7, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin( &top->segG, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->segH, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
}
