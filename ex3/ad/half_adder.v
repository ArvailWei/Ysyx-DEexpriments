module half_adder(a,b,s,c);
	input a;
	input b;
	output reg s,c;

	always@(a or b)begin
	s = a ^ b ;
	c = a & b;
	end
endmodule
	
