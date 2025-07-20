module add_sub(a,b,in_c,out_c,overflow,zero,s);
    input [3:0]a;
    input [3:0]b;
    input in_c;
    output reg out_c,overflow,zero;//overflow判断溢出,zero判断是否全为0
    output reg [3:0] s;
    //reg [3:0] i=0;
    reg [3:0] t_no_Cin;



    always @(a or b or in_c)begin
        zero=0;
        overflow=0;

        t_no_Cin={4{in_c}}^b;//扩展c_in，按位异或B 得到B1(t_no_Cin)
        {out_c,s}=a+{3'b0,in_c}+t_no_Cin;//实现加法器功能
        overflow=(a[3]==t_no_Cin[3])&&(s[3]!=a[3]);//溢出判断
        /*for (i=0;i<=31;i=i+1)begin
            if(s[i]==i[i]) z=1;//判断是否全零，all0,z->1,exist 1,z->0
        end*/
        zero = ~(|s);// |s按位或运算（所有位进行），全0则=0,存在1则=1,～取反，当全0时zero为高电平
    end

endmodule


