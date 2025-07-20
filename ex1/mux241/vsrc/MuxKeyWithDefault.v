//NR_KEY 键值对数量; KEY_LEN 键值位宽; DATA_LEN 输出数据位宽
module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,//键值对应的数据(输出数据)
  input [KEY_LEN-1:0] key,//键值
  input [DATA_LEN-1:0] default_out,//不存在key时默认输出default_out
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut//键值表
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule
