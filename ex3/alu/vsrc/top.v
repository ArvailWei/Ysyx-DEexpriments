module top(button,a,b,s,out_c,zero,overflow,in,segA,segB,segC,segD,segE,segF,segG,segH);
    input [2:0] button;
    input [4:0] a;//[4]是符号位,0+ 1-
    input [4:0] b;
    output reg [4:0] s;//结果
    output reg out_c;//进位位
    output reg zero; //判断零信号
    output reg overflow;//溢出信号 没溢出为高电平，溢出为低电平
    output reg [9:0] in;//输入显示
    assign in[9]=a[4];
    assign in[8]=b[4];
    assign in[7:4]=a[3:0];
    assign in[3:0]=b[3:0];

    output reg [6:0] segA;//a
    output reg [6:0] segB;//a
    output reg [6:0] segC;//b符号
    output reg [6:0] segD;//b
    output reg [6:0] segE;//b
    output reg [6:0] segF;//s符号
    output reg [6:0] segG;//s
    output reg [6:0] segH;//s
 
    reg [6:0] show_result;
    
    //seg_led函数，用于赋值seg管发光的数码管
    function [6:0] seg_led;
        input [3:0] x;
        begin
            case(x)
                0:seg_led=7'b0000001;
                1:seg_led=7'b1001111;
                2:seg_led=7'b0010010;
                3:seg_led=7'b0000110;
                4:seg_led=7'b1001100;
                5:seg_led=7'b0100100;
                6:seg_led=7'b0100000;
                7:seg_led=7'b0001111;
                8:seg_led=7'b0000000;
                default:seg_led=7'b0000100;    
            endcase
        end
    endfunction


    always @(button or a or b ) begin
        case(button)

        //实现加法功能
         0:begin
            {out_c,s}=a+b;
            overflow=(a[3]==b[3])&&(s[3]==a[3]);
            zero = ~(|s);

            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);
                  
            end
         end

        //减法
        1:begin
            integer i;
            integer diff_b;
            diff_b[4:0]=b;

            //将负数原码转为补码
            for (i=0;i<=3;i=i+1) begin
                diff_b[i]=~diff_b[i];
            end
            diff_b=diff_b+1;

            //进行减法运算
            if(a==0&&diff_b[3:0]==0) begin
                out_c=0;s=0;
            end

            else if(a!=0&&diff_b[3:0]==0)
                {out_c,s}=a+diff_b[4:0];

            else begin 
                {out_c,s}=a+diff_b[4:0];
                if (s[4]==1) begin
                    for (i=0;i<=3;i=i+1) begin 
                        s[i]=~s[i];
                    end
                    s=s+1;
                end
            end

            overflow=(a[3]==b[3])&&(s[3]==a[3]);
            zero = ~(|s);

            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end

        end

        //取反
        2:begin
            s[3:0]=~a[3:0];
            out_c=0;
            zero=0;
            overflow=0;

            //显示 
            segC=7'b1111111;
            segF=7'b1111111;
            
            if(a[3:0]>10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end       
            if(s[3:0]>10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);
            end 
        end

        //与
        3:begin
            s=a&b;
            out_c=0;
            zero=0;
            overflow=0;   
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
        end
        
        //或
        4:begin
            s=a | b;
            out_c=0;
            zero=0;
            overflow=0;

            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end      
        end

        //异或
        5:begin
            s=a ^ b;
            out_c=0;
            zero=0;
            overflow=0;
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
        end

        //比较大小
        6:begin
            zero=0;
            overflow=0;
            out_c=0;

            //同正
            if(a[4]==b[4]&&a[4]==0)begin
                if (a<b) s=1;
                else s=0;
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
            end

            //同负
            else if(a[4]==b[4]&&a[4]==1)begin
                if(a<b) s=0;//负数绝对值大，负数越小
                else s=1;
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
            end

            //一正一负
            else if(a[4]!=b[4])begin
                if(a<b) s=0;
                else s=1;
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
            end
            
        end

        //判断相等
        7:begin
            if(a==b) s=1;
            else s=0;
            zero=0;
            overflow=0;
            out_c=0;
            //显示 

            //符号位
            if (b[4]==0) segC=7'b1111111;
            else segC=7'b1111110;
            if (s[4]==0) segF=7'b1111111;
            else segF=7'b1111110;
            
            //数字部分
            if(a[3:0]>=10)begin
                segA=seg_led(a[3:0]/10);
                segB=seg_led((a[3:0]-10)%10);  
            end
            else begin 
                segA=seg_led(0);
                segB=seg_led(a[3:0]);
            end

            if(b[3:0]>=10)begin
                segD=seg_led(b[3:0]/10);
                segE=seg_led((b[3:0]-10)%10);  
            end
            else begin 
                segD=seg_led(0);
                segE=seg_led(b[3:0]);
            end

            if(s[3:0]>=10)begin
                segG=seg_led(s[3:0]/10);
                segH=seg_led((s[3:0]-10)%10);  
            end
            else begin 
                segG=seg_led(0);
                segH=seg_led(s[3:0]);   
            end
        end
        endcase
    end

        
    //实例化
    /*bcd7seg seg1(.b(a[3:0]%10),.h(segA));
    bcd7seg seg2(.b((a[3:0]-10)%10),.h(segB));
    bcd7seg seg3(.b(b[3:0]%10),.h(segC));
    bcd7seg seg4(.b((b-10)%10),.h(segD));
    bcd7seg seg5(.b(s%10),.h(segE));
    bcd7seg seg6(.b((s-10)%10),.h(segF));*/

endmodule
