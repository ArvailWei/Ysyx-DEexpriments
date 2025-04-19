module scancode2ascii(
    input [7:0] scan,
    output reg [7:0] ascii
);

    always @(scan)begin
        case (scan)
            8'h1c: ascii = 8'h61;//a
            8'h32: ascii = 8'h62;//b
            8'h21: ascii = 8'h63;//c
            8'h23: ascii = 8'h64;//d
            8'h24: ascii = 8'h65;//e
            8'h2b: ascii = 8'h66;//f
            8'h34: ascii = 8'h67;//g
            8'h33: ascii = 8'h68;//h
            8'h43: ascii = 8'h69;//i
            8'h3b: ascii = 8'h6a;//j
            8'h42: ascii = 8'h6b;//k
            8'h4b: ascii = 8'h6c;//l
            8'h3a: ascii = 8'h6d;//m
            8'h31: ascii = 8'h6e;//n
            8'h44: ascii = 8'h6f;//o
            8'h4d: ascii = 8'h70;//p
            8'h15: ascii = 8'h71;//q
            8'h2d: ascii = 8'h72;//r
            8'h1b: ascii = 8'h73;//s
            8'h2c: ascii = 8'h74;//t
            8'h3c: ascii = 8'h75;//u
            8'h2a: ascii = 8'h76;//v
            8'h1d: ascii = 8'h77;//w
            8'h22: ascii = 8'h78;//x
            8'h35: ascii = 8'h79;//y
            8'h1a: ascii = 8'h7a;//z
            8'h29: ascii = 8'h20;//space
            8'h05: ascii = 8'h00;//f1
            8'h06: ascii = 8'h00;//f2
            8'h04: ascii = 8'h00;//f3
            8'h0c: ascii = 8'h00;//f4
            8'h03: ascii = 8'h00;//f5
            8'h0b: ascii = 8'h00;//f6
            8'h83: ascii = 8'h00;//f7
            8'h0a: ascii = 8'h00;//f8
            8'h01: ascii = 8'h00;//f9
            8'h09: ascii = 8'h00;//f10
            8'h78: ascii = 8'h00;//f11
            8'h07: ascii = 8'h00;//f12
            8'h70: ascii = 8'he0;//ins
            8'h69: ascii = 8'he0;//end
            8'h7d: ascii = 8'he0;//pgup
            8'h75: ascii = 8'he0;//u_arrow
            8'h6b: ascii = 8'he0;//l_arrow
            8'h72: ascii = 8'he0;//d_arrow
            8'h74: ascii = 8'he0;//r_arrow
            8'h0e: ascii = 8'h60;//~
            8'h16: ascii = 8'h21;//1
            8'h1e: ascii = 8'h40;//2
            8'h26: ascii = 8'h23;//3
            8'h25: ascii = 8'h24;//4
            8'h2e: ascii = 8'h25;//5
            8'h36: ascii = 8'h5e;//6
            8'h3d: ascii = 8'h26;//7
            8'h3e: ascii = 8'h2a;//8
            8'h46: ascii = 8'h28;//9
            8'h45: ascii = 8'h29;//0
            8'h4e: ascii = 8'h2d;//-
            8'h55: ascii = 8'h5f;//+
            8'h66: ascii = 8'h08;//back
            8'h0d: ascii = 8'h09;//tap
            8'h58: ascii = 8'h00;//CAPS
            8'h12: ascii = 8'h00;//shift
            8'h14: ascii = 8'h00;//ctrl
            8'h11: ascii = 8'h00;//alt 
            8'h41: ascii = 8'h2c;//,
            8'h49: ascii = 8'h2e;//.
            8'h4a: ascii = 8'h2f;///
            8'h54: ascii = 8'h5b;//[
            8'h5b: ascii = 8'h5d;//]
            8'h5d: ascii = 8'h5c;//\
            8'h4c: ascii = 8'h3b;//;
            8'h52: ascii = 8'h27;//'
            8'h5a: ascii = 8'h0d;//enter            

            default: ascii = 8'b00;
        endcase
    end
endmodule
