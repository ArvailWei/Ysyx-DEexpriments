module m_mux21(a,b,s,y);
	input a,b,s;//声明三个wire型输入变量a,b,s 位宽为1(默认)
	output y;//声明一个wire型输出变量y，为宽为1

assign y =(~s&a)|(s&b);//实现电路的逻辑功能 (非s与a 或 s与b)

endmodule
