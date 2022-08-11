module InstRead(
  input         clock,
  input         reset,
  input         io_ctrl_rinst_start,
  output        io_ctrl_rinst_done,
  input  [31:0] io_core_rinst_addr,
  output [31:0] io_core_rinst_data,
  output        io_mem_rinst_en,
  output [31:0] io_mem_rinst_addr,
  input         io_mem_rinst_valid,
  input  [31:0] io_mem_rinst_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] reg_state; // @[InstRead.scala 25:26]
  reg [31:0] reg_inst; // @[InstRead.scala 26:26]
  wire [1:0] _GEN_1 = io_mem_rinst_valid ? 2'h3 : reg_state; // @[InstRead.scala 25:26 40:{32,43}]
  wire [1:0] _GEN_2 = 2'h3 == reg_state ? 2'h0 : reg_state; // @[InstRead.scala 29:3 44:17 25:26]
  wire  _T_5 = reg_state == 2'h2 & io_mem_rinst_valid; // @[InstRead.scala 48:29]
  assign io_ctrl_rinst_done = reg_state == 2'h3; // @[InstRead.scala 55:36]
  assign io_core_rinst_data = reg_inst; // @[InstRead.scala 62:22]
  assign io_mem_rinst_en = reg_state == 2'h1; // @[InstRead.scala 58:36]
  assign io_mem_rinst_addr = io_core_rinst_addr; // @[InstRead.scala 59:22]
  always @(posedge clock) begin
    if (reset) begin // @[InstRead.scala 25:26]
      reg_state <= 2'h0; // @[InstRead.scala 25:26]
    end else if (2'h0 == reg_state) begin // @[InstRead.scala 29:3]
      if (io_ctrl_rinst_start) begin // @[InstRead.scala 32:33]
        reg_state <= 2'h1; // @[InstRead.scala 32:44]
      end
    end else if (2'h1 == reg_state) begin // @[InstRead.scala 29:3]
      reg_state <= 2'h2; // @[InstRead.scala 36:17]
    end else if (2'h2 == reg_state) begin // @[InstRead.scala 29:3]
      reg_state <= _GEN_1;
    end else begin
      reg_state <= _GEN_2;
    end
    if (reset) begin // @[InstRead.scala 26:26]
      reg_inst <= 32'h13; // @[InstRead.scala 26:26]
    end else if (_T_5) begin // @[InstRead.scala 49:3]
      reg_inst <= io_mem_rinst_data; // @[InstRead.scala 50:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  reg_inst = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DataRead(
  input         clock,
  input         reset,
  input         io_ctrl_rmem_start,
  output        io_ctrl_rmem_done,
  input  [31:0] io_core_rmem_addr,
  input  [2:0]  io_core_rmem_sel,
  output [63:0] io_core_rmem_data,
  output        io_mem_rmem_en,
  output [31:0] io_mem_rmem_addr,
  output [1:0]  io_mem_rmem_size,
  input         io_mem_rmem_valid,
  input  [63:0] io_mem_rmem_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] reg_state; // @[DataRead.scala 26:26]
  reg [63:0] reg_data; // @[DataRead.scala 27:26]
  wire [1:0] _GEN_1 = io_mem_rmem_valid ? 2'h3 : reg_state; // @[DataRead.scala 26:26 41:{31,42}]
  wire [1:0] _GEN_2 = 2'h3 == reg_state ? 2'h0 : reg_state; // @[DataRead.scala 30:3 45:17 26:26]
  wire  _T_5 = reg_state == 2'h2 & io_mem_rmem_valid; // @[DataRead.scala 49:29]
  wire  _io_mem_rmem_size_T = io_core_rmem_sel == 3'h0; // @[DataRead.scala 63:43]
  wire  _io_mem_rmem_size_T_1 = io_core_rmem_sel == 3'h4; // @[DataRead.scala 63:75]
  wire  _io_mem_rmem_size_T_2 = io_core_rmem_sel == 3'h0 | io_core_rmem_sel == 3'h4; // @[DataRead.scala 63:55]
  wire  _io_mem_rmem_size_T_3 = io_core_rmem_sel == 3'h1; // @[DataRead.scala 64:43]
  wire  _io_mem_rmem_size_T_4 = io_core_rmem_sel == 3'h5; // @[DataRead.scala 64:75]
  wire  _io_mem_rmem_size_T_5 = io_core_rmem_sel == 3'h1 | io_core_rmem_sel == 3'h5; // @[DataRead.scala 64:55]
  wire  _io_mem_rmem_size_T_6 = io_core_rmem_sel == 3'h2; // @[DataRead.scala 65:43]
  wire  _io_mem_rmem_size_T_7 = io_core_rmem_sel == 3'h6; // @[DataRead.scala 65:75]
  wire  _io_mem_rmem_size_T_8 = io_core_rmem_sel == 3'h2 | io_core_rmem_sel == 3'h6; // @[DataRead.scala 65:55]
  wire  _io_mem_rmem_size_T_9 = io_core_rmem_sel == 3'h3; // @[DataRead.scala 66:43]
  wire [1:0] _io_mem_rmem_size_T_10 = _io_mem_rmem_size_T_9 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_mem_rmem_size_T_11 = _io_mem_rmem_size_T_8 ? 2'h2 : _io_mem_rmem_size_T_10; // @[Mux.scala 101:16]
  wire [1:0] _io_mem_rmem_size_T_12 = _io_mem_rmem_size_T_5 ? 2'h1 : _io_mem_rmem_size_T_11; // @[Mux.scala 101:16]
  wire [55:0] _io_core_rmem_data_T_3 = reg_data[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_core_rmem_data_T_5 = {_io_core_rmem_data_T_3,reg_data[7:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_core_rmem_data_T_9 = reg_data[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_core_rmem_data_T_11 = {_io_core_rmem_data_T_9,reg_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_core_rmem_data_T_15 = reg_data[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_core_rmem_data_T_17 = {_io_core_rmem_data_T_15,reg_data[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_core_rmem_data_T_22 = {56'h0,reg_data[7:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_core_rmem_data_T_26 = {48'h0,reg_data[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_core_rmem_data_T_30 = {32'h0,reg_data[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_core_rmem_data_T_31 = _io_mem_rmem_size_T_7 ? _io_core_rmem_data_T_30 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _io_core_rmem_data_T_32 = _io_mem_rmem_size_T_4 ? _io_core_rmem_data_T_26 : _io_core_rmem_data_T_31; // @[Mux.scala 101:16]
  wire [63:0] _io_core_rmem_data_T_33 = _io_mem_rmem_size_T_1 ? _io_core_rmem_data_T_22 : _io_core_rmem_data_T_32; // @[Mux.scala 101:16]
  wire [63:0] _io_core_rmem_data_T_34 = _io_mem_rmem_size_T_9 ? reg_data : _io_core_rmem_data_T_33; // @[Mux.scala 101:16]
  wire [63:0] _io_core_rmem_data_T_35 = _io_mem_rmem_size_T_6 ? _io_core_rmem_data_T_17 : _io_core_rmem_data_T_34; // @[Mux.scala 101:16]
  wire [63:0] _io_core_rmem_data_T_36 = _io_mem_rmem_size_T_3 ? _io_core_rmem_data_T_11 : _io_core_rmem_data_T_35; // @[Mux.scala 101:16]
  assign io_ctrl_rmem_done = reg_state == 2'h3; // @[DataRead.scala 56:35]
  assign io_core_rmem_data = _io_mem_rmem_size_T ? _io_core_rmem_data_T_5 : _io_core_rmem_data_T_36; // @[Mux.scala 101:16]
  assign io_mem_rmem_en = reg_state == 2'h1; // @[DataRead.scala 59:32]
  assign io_mem_rmem_addr = io_core_rmem_addr; // @[DataRead.scala 60:20]
  assign io_mem_rmem_size = _io_mem_rmem_size_T_2 ? 2'h0 : _io_mem_rmem_size_T_12; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    if (reset) begin // @[DataRead.scala 26:26]
      reg_state <= 2'h0; // @[DataRead.scala 26:26]
    end else if (2'h0 == reg_state) begin // @[DataRead.scala 30:3]
      if (io_ctrl_rmem_start) begin // @[DataRead.scala 33:32]
        reg_state <= 2'h1; // @[DataRead.scala 33:43]
      end
    end else if (2'h1 == reg_state) begin // @[DataRead.scala 30:3]
      reg_state <= 2'h2; // @[DataRead.scala 37:17]
    end else if (2'h2 == reg_state) begin // @[DataRead.scala 30:3]
      reg_state <= _GEN_1;
    end else begin
      reg_state <= _GEN_2;
    end
    if (reset) begin // @[DataRead.scala 27:26]
      reg_data <= 64'h0; // @[DataRead.scala 27:26]
    end else if (_T_5) begin // @[DataRead.scala 50:3]
      reg_data <= io_mem_rmem_data; // @[DataRead.scala 51:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_state = _RAND_0[1:0];
  _RAND_1 = {2{`RANDOM}};
  reg_data = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DataWrite(
  input         clock,
  input         reset,
  input         io_ctrl_wmem_start,
  output        io_ctrl_wmem_done,
  input  [31:0] io_core_wmem_addr,
  input  [1:0]  io_core_wmem_sel,
  input  [63:0] io_core_wmem_data,
  output        io_mem_wmem_en,
  output [31:0] io_mem_wmem_addr,
  output [1:0]  io_mem_wmem_size,
  output [63:0] io_mem_wmem_data,
  input         io_mem_wmem_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] reg_state; // @[DataWrite.scala 28:26]
  wire [1:0] _GEN_1 = io_mem_wmem_valid ? 2'h3 : reg_state; // @[DataWrite.scala 28:26 42:{31,42}]
  wire [1:0] _GEN_2 = 2'h3 == reg_state ? 2'h0 : reg_state; // @[DataWrite.scala 31:3 46:17 28:26]
  wire  _io_mem_wmem_size_T = io_core_wmem_sel == 2'h0; // @[DataWrite.scala 59:43]
  wire  _io_mem_wmem_size_T_1 = io_core_wmem_sel == 2'h1; // @[DataWrite.scala 60:43]
  wire  _io_mem_wmem_size_T_2 = io_core_wmem_sel == 2'h2; // @[DataWrite.scala 61:43]
  wire  _io_mem_wmem_size_T_3 = io_core_wmem_sel == 2'h3; // @[DataWrite.scala 62:43]
  wire [1:0] _io_mem_wmem_size_T_4 = _io_mem_wmem_size_T_3 ? 2'h3 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_mem_wmem_size_T_5 = _io_mem_wmem_size_T_2 ? 2'h2 : _io_mem_wmem_size_T_4; // @[Mux.scala 101:16]
  wire [1:0] _io_mem_wmem_size_T_6 = _io_mem_wmem_size_T_1 ? 2'h1 : _io_mem_wmem_size_T_5; // @[Mux.scala 101:16]
  assign io_ctrl_wmem_done = reg_state == 2'h3; // @[DataWrite.scala 52:35]
  assign io_mem_wmem_en = reg_state == 2'h1; // @[DataWrite.scala 55:32]
  assign io_mem_wmem_addr = io_core_wmem_addr; // @[DataWrite.scala 56:20]
  assign io_mem_wmem_size = _io_mem_wmem_size_T ? 2'h0 : _io_mem_wmem_size_T_6; // @[Mux.scala 101:16]
  assign io_mem_wmem_data = io_core_wmem_data; // @[DataWrite.scala 64:20]
  always @(posedge clock) begin
    if (reset) begin // @[DataWrite.scala 28:26]
      reg_state <= 2'h0; // @[DataWrite.scala 28:26]
    end else if (2'h0 == reg_state) begin // @[DataWrite.scala 31:3]
      if (io_ctrl_wmem_start) begin // @[DataWrite.scala 34:32]
        reg_state <= 2'h1; // @[DataWrite.scala 34:43]
      end
    end else if (2'h1 == reg_state) begin // @[DataWrite.scala 31:3]
      reg_state <= 2'h2; // @[DataWrite.scala 38:17]
    end else if (2'h2 == reg_state) begin // @[DataWrite.scala 31:3]
      reg_state <= _GEN_1;
    end else begin
      reg_state <= _GEN_2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_state = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Check(
  output [4:0] io_ctrl_flush,
  output [4:0] io_ctrl_hold,
  input  [4:0] io_dec_rs1,
  input  [4:0] io_dec_rs2,
  input        io_dec_rs1_en,
  input        io_dec_rs2_en,
  input        io_exe_wreg_en,
  input  [4:0] io_exe_rd,
  input        io_mem_wreg_en,
  input  [4:0] io_mem_rd,
  input        io_mem_rmem_en,
  input        io_jmp_en
);
  wire  _io_ctrl_flush_T_1 = io_exe_rd != 5'h0; // @[Check.scala 28:68]
  wire  _io_ctrl_flush_T_4 = io_exe_wreg_en & io_dec_rs1_en & io_exe_rd != 5'h0 & io_exe_rd == io_dec_rs1; // @[Check.scala 28:76]
  wire  _io_ctrl_flush_T_9 = io_exe_wreg_en & io_dec_rs2_en & _io_ctrl_flush_T_1 & io_exe_rd == io_dec_rs2; // @[Check.scala 29:76]
  wire  _io_ctrl_flush_T_10 = io_mem_wreg_en & io_mem_rmem_en; // @[Check.scala 30:37]
  wire  _io_ctrl_flush_T_12 = io_mem_rd != 5'h0; // @[Check.scala 30:85]
  wire  _io_ctrl_flush_T_15 = io_mem_wreg_en & io_mem_rmem_en & io_dec_rs1_en & io_mem_rd != 5'h0 & io_mem_rd ==
    io_dec_rs1; // @[Check.scala 30:93]
  wire  _io_ctrl_flush_T_21 = _io_ctrl_flush_T_10 & io_dec_rs2_en & _io_ctrl_flush_T_12 & io_mem_rd == io_dec_rs2; // @[Check.scala 31:93]
  wire [3:0] _io_ctrl_flush_T_22 = io_jmp_en ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_ctrl_flush_T_23 = _io_ctrl_flush_T_21 ? 4'h4 : _io_ctrl_flush_T_22; // @[Mux.scala 101:16]
  wire [3:0] _io_ctrl_flush_T_24 = _io_ctrl_flush_T_15 ? 4'h4 : _io_ctrl_flush_T_23; // @[Mux.scala 101:16]
  wire [3:0] _io_ctrl_flush_T_25 = _io_ctrl_flush_T_9 ? 4'h4 : _io_ctrl_flush_T_24; // @[Mux.scala 101:16]
  wire [3:0] _io_ctrl_flush_T_26 = _io_ctrl_flush_T_4 ? 4'h4 : _io_ctrl_flush_T_25; // @[Mux.scala 101:16]
  wire [4:0] _io_ctrl_hold_T_22 = _io_ctrl_flush_T_21 ? 5'h18 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _io_ctrl_hold_T_23 = _io_ctrl_flush_T_15 ? 5'h18 : _io_ctrl_hold_T_22; // @[Mux.scala 101:16]
  wire [4:0] _io_ctrl_hold_T_24 = _io_ctrl_flush_T_9 ? 5'h18 : _io_ctrl_hold_T_23; // @[Mux.scala 101:16]
  assign io_ctrl_flush = {{1'd0}, _io_ctrl_flush_T_26}; // @[Check.scala 26:17]
  assign io_ctrl_hold = _io_ctrl_flush_T_4 ? 5'h18 : _io_ctrl_hold_T_24; // @[Mux.scala 101:16]
endmodule
module coreCtrl(
  input         clock,
  input         reset,
  input  [31:0] io_Core_inst_addr,
  output [31:0] io_Core_inst,
  input         io_Core_rmem_en,
  input  [2:0]  io_Core_rmem_sel,
  input  [31:0] io_Core_rmem_addr,
  output [63:0] io_Core_rmem_data,
  input         io_Core_wmem_en,
  input  [1:0]  io_Core_wmem_sel,
  input  [31:0] io_Core_wmem_addr,
  input  [63:0] io_Core_wmem_data,
  output [4:0]  io_Core_ctrl_flush,
  output [4:0]  io_Core_ctrl_hold,
  input  [4:0]  io_Core_dec_rs1,
  input  [4:0]  io_Core_dec_rs2,
  input         io_Core_dec_rs1_en,
  input         io_Core_dec_rs2_en,
  input         io_Core_exe_wreg_en,
  input  [4:0]  io_Core_exe_rd,
  input         io_Core_mem_wreg_en,
  input  [4:0]  io_Core_mem_rd,
  input         io_Core_jmp_en,
  output        io_Mem_mem_rinst_en,
  output [31:0] io_Mem_mem_rinst_addr,
  input         io_Mem_mem_rinst_valid,
  input  [31:0] io_Mem_mem_rinst_data,
  output        io_Mem_mem_rmem_en,
  output [31:0] io_Mem_mem_rmem_addr,
  output [1:0]  io_Mem_mem_rmem_size,
  input         io_Mem_mem_rmem_valid,
  input  [63:0] io_Mem_mem_rmem_data,
  output        io_Mem_mem_wmem_en,
  output [31:0] io_Mem_mem_wmem_addr,
  output [1:0]  io_Mem_mem_wmem_size,
  output [63:0] io_Mem_mem_wmem_data,
  input         io_Mem_mem_wmem_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  RInst_clock; // @[coreCtrl.scala 43:21]
  wire  RInst_reset; // @[coreCtrl.scala 43:21]
  wire  RInst_io_ctrl_rinst_start; // @[coreCtrl.scala 43:21]
  wire  RInst_io_ctrl_rinst_done; // @[coreCtrl.scala 43:21]
  wire [31:0] RInst_io_core_rinst_addr; // @[coreCtrl.scala 43:21]
  wire [31:0] RInst_io_core_rinst_data; // @[coreCtrl.scala 43:21]
  wire  RInst_io_mem_rinst_en; // @[coreCtrl.scala 43:21]
  wire [31:0] RInst_io_mem_rinst_addr; // @[coreCtrl.scala 43:21]
  wire  RInst_io_mem_rinst_valid; // @[coreCtrl.scala 43:21]
  wire [31:0] RInst_io_mem_rinst_data; // @[coreCtrl.scala 43:21]
  wire  RMem_clock; // @[coreCtrl.scala 44:21]
  wire  RMem_reset; // @[coreCtrl.scala 44:21]
  wire  RMem_io_ctrl_rmem_start; // @[coreCtrl.scala 44:21]
  wire  RMem_io_ctrl_rmem_done; // @[coreCtrl.scala 44:21]
  wire [31:0] RMem_io_core_rmem_addr; // @[coreCtrl.scala 44:21]
  wire [2:0] RMem_io_core_rmem_sel; // @[coreCtrl.scala 44:21]
  wire [63:0] RMem_io_core_rmem_data; // @[coreCtrl.scala 44:21]
  wire  RMem_io_mem_rmem_en; // @[coreCtrl.scala 44:21]
  wire [31:0] RMem_io_mem_rmem_addr; // @[coreCtrl.scala 44:21]
  wire [1:0] RMem_io_mem_rmem_size; // @[coreCtrl.scala 44:21]
  wire  RMem_io_mem_rmem_valid; // @[coreCtrl.scala 44:21]
  wire [63:0] RMem_io_mem_rmem_data; // @[coreCtrl.scala 44:21]
  wire  WMem_clock; // @[coreCtrl.scala 45:21]
  wire  WMem_reset; // @[coreCtrl.scala 45:21]
  wire  WMem_io_ctrl_wmem_start; // @[coreCtrl.scala 45:21]
  wire  WMem_io_ctrl_wmem_done; // @[coreCtrl.scala 45:21]
  wire [31:0] WMem_io_core_wmem_addr; // @[coreCtrl.scala 45:21]
  wire [1:0] WMem_io_core_wmem_sel; // @[coreCtrl.scala 45:21]
  wire [63:0] WMem_io_core_wmem_data; // @[coreCtrl.scala 45:21]
  wire  WMem_io_mem_wmem_en; // @[coreCtrl.scala 45:21]
  wire [31:0] WMem_io_mem_wmem_addr; // @[coreCtrl.scala 45:21]
  wire [1:0] WMem_io_mem_wmem_size; // @[coreCtrl.scala 45:21]
  wire [63:0] WMem_io_mem_wmem_data; // @[coreCtrl.scala 45:21]
  wire  WMem_io_mem_wmem_valid; // @[coreCtrl.scala 45:21]
  wire [4:0] Check_io_ctrl_flush; // @[coreCtrl.scala 46:21]
  wire [4:0] Check_io_ctrl_hold; // @[coreCtrl.scala 46:21]
  wire [4:0] Check_io_dec_rs1; // @[coreCtrl.scala 46:21]
  wire [4:0] Check_io_dec_rs2; // @[coreCtrl.scala 46:21]
  wire  Check_io_dec_rs1_en; // @[coreCtrl.scala 46:21]
  wire  Check_io_dec_rs2_en; // @[coreCtrl.scala 46:21]
  wire  Check_io_exe_wreg_en; // @[coreCtrl.scala 46:21]
  wire [4:0] Check_io_exe_rd; // @[coreCtrl.scala 46:21]
  wire  Check_io_mem_wreg_en; // @[coreCtrl.scala 46:21]
  wire [4:0] Check_io_mem_rd; // @[coreCtrl.scala 46:21]
  wire  Check_io_mem_rmem_en; // @[coreCtrl.scala 46:21]
  wire  Check_io_jmp_en; // @[coreCtrl.scala 46:21]
  reg [2:0] reg_state; // @[coreCtrl.scala 48:26]
  wire [2:0] _reg_state_T = io_Core_wmem_en ? 3'h5 : 3'h7; // @[Mux.scala 101:16]
  wire [2:0] _reg_state_T_1 = io_Core_rmem_en ? 3'h3 : _reg_state_T; // @[Mux.scala 101:16]
  wire [2:0] _GEN_0 = RInst_io_ctrl_rinst_done ? _reg_state_T_1 : reg_state; // @[coreCtrl.scala 63:7 64:19 48:26]
  wire [2:0] _GEN_1 = RMem_io_ctrl_rmem_done ? 3'h7 : reg_state; // @[coreCtrl.scala 48:26 78:{36,47}]
  wire [2:0] _GEN_2 = WMem_io_ctrl_wmem_done ? 3'h7 : reg_state; // @[coreCtrl.scala 48:26 87:{36,47}]
  wire [2:0] _GEN_3 = 3'h7 == reg_state ? 3'h1 : reg_state; // @[coreCtrl.scala 50:3 92:17 48:26]
  wire [2:0] _GEN_4 = 3'h6 == reg_state ? _GEN_2 : _GEN_3; // @[coreCtrl.scala 50:3]
  wire [2:0] _GEN_5 = 3'h5 == reg_state ? 3'h6 : _GEN_4; // @[coreCtrl.scala 50:3 83:17]
  wire [2:0] _GEN_6 = 3'h4 == reg_state ? _GEN_1 : _GEN_5; // @[coreCtrl.scala 50:3]
  wire [2:0] _GEN_7 = 3'h3 == reg_state ? 3'h4 : _GEN_6; // @[coreCtrl.scala 50:3 74:17]
  wire  _io_Core_ctrl_flush_T = reg_state == 3'h7; // @[coreCtrl.scala 130:44]
  InstRead RInst ( // @[coreCtrl.scala 43:21]
    .clock(RInst_clock),
    .reset(RInst_reset),
    .io_ctrl_rinst_start(RInst_io_ctrl_rinst_start),
    .io_ctrl_rinst_done(RInst_io_ctrl_rinst_done),
    .io_core_rinst_addr(RInst_io_core_rinst_addr),
    .io_core_rinst_data(RInst_io_core_rinst_data),
    .io_mem_rinst_en(RInst_io_mem_rinst_en),
    .io_mem_rinst_addr(RInst_io_mem_rinst_addr),
    .io_mem_rinst_valid(RInst_io_mem_rinst_valid),
    .io_mem_rinst_data(RInst_io_mem_rinst_data)
  );
  DataRead RMem ( // @[coreCtrl.scala 44:21]
    .clock(RMem_clock),
    .reset(RMem_reset),
    .io_ctrl_rmem_start(RMem_io_ctrl_rmem_start),
    .io_ctrl_rmem_done(RMem_io_ctrl_rmem_done),
    .io_core_rmem_addr(RMem_io_core_rmem_addr),
    .io_core_rmem_sel(RMem_io_core_rmem_sel),
    .io_core_rmem_data(RMem_io_core_rmem_data),
    .io_mem_rmem_en(RMem_io_mem_rmem_en),
    .io_mem_rmem_addr(RMem_io_mem_rmem_addr),
    .io_mem_rmem_size(RMem_io_mem_rmem_size),
    .io_mem_rmem_valid(RMem_io_mem_rmem_valid),
    .io_mem_rmem_data(RMem_io_mem_rmem_data)
  );
  DataWrite WMem ( // @[coreCtrl.scala 45:21]
    .clock(WMem_clock),
    .reset(WMem_reset),
    .io_ctrl_wmem_start(WMem_io_ctrl_wmem_start),
    .io_ctrl_wmem_done(WMem_io_ctrl_wmem_done),
    .io_core_wmem_addr(WMem_io_core_wmem_addr),
    .io_core_wmem_sel(WMem_io_core_wmem_sel),
    .io_core_wmem_data(WMem_io_core_wmem_data),
    .io_mem_wmem_en(WMem_io_mem_wmem_en),
    .io_mem_wmem_addr(WMem_io_mem_wmem_addr),
    .io_mem_wmem_size(WMem_io_mem_wmem_size),
    .io_mem_wmem_data(WMem_io_mem_wmem_data),
    .io_mem_wmem_valid(WMem_io_mem_wmem_valid)
  );
  Check Check ( // @[coreCtrl.scala 46:21]
    .io_ctrl_flush(Check_io_ctrl_flush),
    .io_ctrl_hold(Check_io_ctrl_hold),
    .io_dec_rs1(Check_io_dec_rs1),
    .io_dec_rs2(Check_io_dec_rs2),
    .io_dec_rs1_en(Check_io_dec_rs1_en),
    .io_dec_rs2_en(Check_io_dec_rs2_en),
    .io_exe_wreg_en(Check_io_exe_wreg_en),
    .io_exe_rd(Check_io_exe_rd),
    .io_mem_wreg_en(Check_io_mem_wreg_en),
    .io_mem_rd(Check_io_mem_rd),
    .io_mem_rmem_en(Check_io_mem_rmem_en),
    .io_jmp_en(Check_io_jmp_en)
  );
  assign io_Core_inst = RInst_io_core_rinst_data; // @[coreCtrl.scala 123:29]
  assign io_Core_rmem_data = RMem_io_core_rmem_data; // @[coreCtrl.scala 101:27]
  assign io_Core_ctrl_flush = reg_state == 3'h7 ? Check_io_ctrl_flush : 5'h0; // @[coreCtrl.scala 130:32]
  assign io_Core_ctrl_hold = _io_Core_ctrl_flush_T ? Check_io_ctrl_hold : 5'h1f; // @[coreCtrl.scala 131:32]
  assign io_Mem_mem_rinst_en = RInst_io_mem_rinst_en; // @[coreCtrl.scala 124:29]
  assign io_Mem_mem_rinst_addr = RInst_io_mem_rinst_addr; // @[coreCtrl.scala 125:29]
  assign io_Mem_mem_rmem_en = RMem_io_mem_rmem_en; // @[coreCtrl.scala 102:27]
  assign io_Mem_mem_rmem_addr = RMem_io_mem_rmem_addr; // @[coreCtrl.scala 103:27]
  assign io_Mem_mem_rmem_size = RMem_io_mem_rmem_size; // @[coreCtrl.scala 104:27]
  assign io_Mem_mem_wmem_en = WMem_io_mem_wmem_en; // @[coreCtrl.scala 114:27]
  assign io_Mem_mem_wmem_addr = WMem_io_mem_wmem_addr; // @[coreCtrl.scala 115:27]
  assign io_Mem_mem_wmem_size = WMem_io_mem_wmem_size; // @[coreCtrl.scala 116:27]
  assign io_Mem_mem_wmem_data = WMem_io_mem_wmem_data; // @[coreCtrl.scala 117:27]
  assign RInst_clock = clock;
  assign RInst_reset = reset;
  assign RInst_io_ctrl_rinst_start = reg_state == 3'h1; // @[coreCtrl.scala 121:44]
  assign RInst_io_core_rinst_addr = io_Core_inst_addr; // @[coreCtrl.scala 122:29]
  assign RInst_io_mem_rinst_valid = io_Mem_mem_rinst_valid; // @[coreCtrl.scala 126:29]
  assign RInst_io_mem_rinst_data = io_Mem_mem_rinst_data; // @[coreCtrl.scala 127:29]
  assign RMem_clock = clock;
  assign RMem_reset = reset;
  assign RMem_io_ctrl_rmem_start = reg_state == 3'h3; // @[coreCtrl.scala 98:42]
  assign RMem_io_core_rmem_addr = io_Core_rmem_addr; // @[coreCtrl.scala 99:27]
  assign RMem_io_core_rmem_sel = io_Core_rmem_sel; // @[coreCtrl.scala 100:27]
  assign RMem_io_mem_rmem_valid = io_Mem_mem_rmem_valid; // @[coreCtrl.scala 105:27]
  assign RMem_io_mem_rmem_data = io_Mem_mem_rmem_data; // @[coreCtrl.scala 106:27]
  assign WMem_clock = clock;
  assign WMem_reset = reset;
  assign WMem_io_ctrl_wmem_start = reg_state == 3'h5; // @[coreCtrl.scala 110:42]
  assign WMem_io_core_wmem_addr = io_Core_wmem_addr; // @[coreCtrl.scala 111:27]
  assign WMem_io_core_wmem_sel = io_Core_wmem_sel; // @[coreCtrl.scala 112:27]
  assign WMem_io_core_wmem_data = io_Core_wmem_data; // @[coreCtrl.scala 113:27]
  assign WMem_io_mem_wmem_valid = io_Mem_mem_wmem_valid; // @[coreCtrl.scala 118:27]
  assign Check_io_dec_rs1 = io_Core_dec_rs1; // @[coreCtrl.scala 132:25]
  assign Check_io_dec_rs2 = io_Core_dec_rs2; // @[coreCtrl.scala 133:25]
  assign Check_io_dec_rs1_en = io_Core_dec_rs1_en; // @[coreCtrl.scala 134:25]
  assign Check_io_dec_rs2_en = io_Core_dec_rs2_en; // @[coreCtrl.scala 135:25]
  assign Check_io_exe_wreg_en = io_Core_exe_wreg_en; // @[coreCtrl.scala 136:25]
  assign Check_io_exe_rd = io_Core_exe_rd; // @[coreCtrl.scala 137:25]
  assign Check_io_mem_wreg_en = io_Core_mem_wreg_en; // @[coreCtrl.scala 138:25]
  assign Check_io_mem_rd = io_Core_mem_rd; // @[coreCtrl.scala 139:25]
  assign Check_io_mem_rmem_en = io_Core_rmem_en; // @[coreCtrl.scala 140:25]
  assign Check_io_jmp_en = io_Core_jmp_en; // @[coreCtrl.scala 141:25]
  always @(posedge clock) begin
    if (reset) begin // @[coreCtrl.scala 48:26]
      reg_state <= 3'h0; // @[coreCtrl.scala 48:26]
    end else if (3'h0 == reg_state) begin // @[coreCtrl.scala 50:3]
      reg_state <= 3'h1; // @[coreCtrl.scala 53:17]
    end else if (3'h1 == reg_state) begin // @[coreCtrl.scala 50:3]
      reg_state <= 3'h2; // @[coreCtrl.scala 58:17]
    end else if (3'h2 == reg_state) begin // @[coreCtrl.scala 50:3]
      reg_state <= _GEN_0;
    end else begin
      reg_state <= _GEN_7;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_state = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
