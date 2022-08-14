module test(
  input         clock,
  input         reset,
  input         io_wen,
  input  [4:0]  io_waddr,
  input  [63:0] io_wdata,
  output [63:0] io_rdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] Box_reg_data_0; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_1; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_2; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_3; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_4; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_5; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_6; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_7; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_8; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_9; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_10; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_11; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_12; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_13; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_14; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_15; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_16; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_17; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_18; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_19; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_20; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_21; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_22; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_23; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_24; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_25; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_26; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_27; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_28; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_29; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_30; // @[test.scala 51:19]
  wire [63:0] Box_reg_data_31; // @[test.scala 51:19]
  reg [63:0] reg_file_0; // @[test.scala 42:25]
  reg [63:0] reg_file_1; // @[test.scala 42:25]
  reg [63:0] reg_file_2; // @[test.scala 42:25]
  reg [63:0] reg_file_3; // @[test.scala 42:25]
  reg [63:0] reg_file_4; // @[test.scala 42:25]
  reg [63:0] reg_file_5; // @[test.scala 42:25]
  reg [63:0] reg_file_6; // @[test.scala 42:25]
  reg [63:0] reg_file_7; // @[test.scala 42:25]
  reg [63:0] reg_file_8; // @[test.scala 42:25]
  reg [63:0] reg_file_9; // @[test.scala 42:25]
  reg [63:0] reg_file_10; // @[test.scala 42:25]
  reg [63:0] reg_file_11; // @[test.scala 42:25]
  reg [63:0] reg_file_12; // @[test.scala 42:25]
  reg [63:0] reg_file_13; // @[test.scala 42:25]
  reg [63:0] reg_file_14; // @[test.scala 42:25]
  reg [63:0] reg_file_15; // @[test.scala 42:25]
  reg [63:0] reg_file_16; // @[test.scala 42:25]
  reg [63:0] reg_file_17; // @[test.scala 42:25]
  reg [63:0] reg_file_18; // @[test.scala 42:25]
  reg [63:0] reg_file_19; // @[test.scala 42:25]
  reg [63:0] reg_file_20; // @[test.scala 42:25]
  reg [63:0] reg_file_21; // @[test.scala 42:25]
  reg [63:0] reg_file_22; // @[test.scala 42:25]
  reg [63:0] reg_file_23; // @[test.scala 42:25]
  reg [63:0] reg_file_24; // @[test.scala 42:25]
  reg [63:0] reg_file_25; // @[test.scala 42:25]
  reg [63:0] reg_file_26; // @[test.scala 42:25]
  reg [63:0] reg_file_27; // @[test.scala 42:25]
  reg [63:0] reg_file_28; // @[test.scala 42:25]
  reg [63:0] reg_file_29; // @[test.scala 42:25]
  reg [63:0] reg_file_30; // @[test.scala 42:25]
  reg [63:0] reg_file_31; // @[test.scala 42:25]
  wire [63:0] _GEN_65 = 5'h1 == io_waddr ? reg_file_1 : reg_file_0; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_66 = 5'h2 == io_waddr ? reg_file_2 : _GEN_65; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_67 = 5'h3 == io_waddr ? reg_file_3 : _GEN_66; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_68 = 5'h4 == io_waddr ? reg_file_4 : _GEN_67; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_69 = 5'h5 == io_waddr ? reg_file_5 : _GEN_68; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_70 = 5'h6 == io_waddr ? reg_file_6 : _GEN_69; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_71 = 5'h7 == io_waddr ? reg_file_7 : _GEN_70; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_72 = 5'h8 == io_waddr ? reg_file_8 : _GEN_71; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_73 = 5'h9 == io_waddr ? reg_file_9 : _GEN_72; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_74 = 5'ha == io_waddr ? reg_file_10 : _GEN_73; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_75 = 5'hb == io_waddr ? reg_file_11 : _GEN_74; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_76 = 5'hc == io_waddr ? reg_file_12 : _GEN_75; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_77 = 5'hd == io_waddr ? reg_file_13 : _GEN_76; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_78 = 5'he == io_waddr ? reg_file_14 : _GEN_77; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_79 = 5'hf == io_waddr ? reg_file_15 : _GEN_78; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_80 = 5'h10 == io_waddr ? reg_file_16 : _GEN_79; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_81 = 5'h11 == io_waddr ? reg_file_17 : _GEN_80; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_82 = 5'h12 == io_waddr ? reg_file_18 : _GEN_81; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_83 = 5'h13 == io_waddr ? reg_file_19 : _GEN_82; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_84 = 5'h14 == io_waddr ? reg_file_20 : _GEN_83; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_85 = 5'h15 == io_waddr ? reg_file_21 : _GEN_84; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_86 = 5'h16 == io_waddr ? reg_file_22 : _GEN_85; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_87 = 5'h17 == io_waddr ? reg_file_23 : _GEN_86; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_88 = 5'h18 == io_waddr ? reg_file_24 : _GEN_87; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_89 = 5'h19 == io_waddr ? reg_file_25 : _GEN_88; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_90 = 5'h1a == io_waddr ? reg_file_26 : _GEN_89; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_91 = 5'h1b == io_waddr ? reg_file_27 : _GEN_90; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_92 = 5'h1c == io_waddr ? reg_file_28 : _GEN_91; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_93 = 5'h1d == io_waddr ? reg_file_29 : _GEN_92; // @[test.scala 48:{12,12}]
  wire [63:0] _GEN_94 = 5'h1e == io_waddr ? reg_file_30 : _GEN_93; // @[test.scala 48:{12,12}]
  testBox Box ( // @[test.scala 51:19]
    .reg_data_0(Box_reg_data_0),
    .reg_data_1(Box_reg_data_1),
    .reg_data_2(Box_reg_data_2),
    .reg_data_3(Box_reg_data_3),
    .reg_data_4(Box_reg_data_4),
    .reg_data_5(Box_reg_data_5),
    .reg_data_6(Box_reg_data_6),
    .reg_data_7(Box_reg_data_7),
    .reg_data_8(Box_reg_data_8),
    .reg_data_9(Box_reg_data_9),
    .reg_data_10(Box_reg_data_10),
    .reg_data_11(Box_reg_data_11),
    .reg_data_12(Box_reg_data_12),
    .reg_data_13(Box_reg_data_13),
    .reg_data_14(Box_reg_data_14),
    .reg_data_15(Box_reg_data_15),
    .reg_data_16(Box_reg_data_16),
    .reg_data_17(Box_reg_data_17),
    .reg_data_18(Box_reg_data_18),
    .reg_data_19(Box_reg_data_19),
    .reg_data_20(Box_reg_data_20),
    .reg_data_21(Box_reg_data_21),
    .reg_data_22(Box_reg_data_22),
    .reg_data_23(Box_reg_data_23),
    .reg_data_24(Box_reg_data_24),
    .reg_data_25(Box_reg_data_25),
    .reg_data_26(Box_reg_data_26),
    .reg_data_27(Box_reg_data_27),
    .reg_data_28(Box_reg_data_28),
    .reg_data_29(Box_reg_data_29),
    .reg_data_30(Box_reg_data_30),
    .reg_data_31(Box_reg_data_31)
  );
  assign io_rdata = 5'h1f == io_waddr ? reg_file_31 : _GEN_94; // @[test.scala 48:{12,12}]
  assign Box_reg_data_0 = reg_file_0; // @[test.scala 52:19]
  assign Box_reg_data_1 = reg_file_1; // @[test.scala 52:19]
  assign Box_reg_data_2 = reg_file_2; // @[test.scala 52:19]
  assign Box_reg_data_3 = reg_file_3; // @[test.scala 52:19]
  assign Box_reg_data_4 = reg_file_4; // @[test.scala 52:19]
  assign Box_reg_data_5 = reg_file_5; // @[test.scala 52:19]
  assign Box_reg_data_6 = reg_file_6; // @[test.scala 52:19]
  assign Box_reg_data_7 = reg_file_7; // @[test.scala 52:19]
  assign Box_reg_data_8 = reg_file_8; // @[test.scala 52:19]
  assign Box_reg_data_9 = reg_file_9; // @[test.scala 52:19]
  assign Box_reg_data_10 = reg_file_10; // @[test.scala 52:19]
  assign Box_reg_data_11 = reg_file_11; // @[test.scala 52:19]
  assign Box_reg_data_12 = reg_file_12; // @[test.scala 52:19]
  assign Box_reg_data_13 = reg_file_13; // @[test.scala 52:19]
  assign Box_reg_data_14 = reg_file_14; // @[test.scala 52:19]
  assign Box_reg_data_15 = reg_file_15; // @[test.scala 52:19]
  assign Box_reg_data_16 = reg_file_16; // @[test.scala 52:19]
  assign Box_reg_data_17 = reg_file_17; // @[test.scala 52:19]
  assign Box_reg_data_18 = reg_file_18; // @[test.scala 52:19]
  assign Box_reg_data_19 = reg_file_19; // @[test.scala 52:19]
  assign Box_reg_data_20 = reg_file_20; // @[test.scala 52:19]
  assign Box_reg_data_21 = reg_file_21; // @[test.scala 52:19]
  assign Box_reg_data_22 = reg_file_22; // @[test.scala 52:19]
  assign Box_reg_data_23 = reg_file_23; // @[test.scala 52:19]
  assign Box_reg_data_24 = reg_file_24; // @[test.scala 52:19]
  assign Box_reg_data_25 = reg_file_25; // @[test.scala 52:19]
  assign Box_reg_data_26 = reg_file_26; // @[test.scala 52:19]
  assign Box_reg_data_27 = reg_file_27; // @[test.scala 52:19]
  assign Box_reg_data_28 = reg_file_28; // @[test.scala 52:19]
  assign Box_reg_data_29 = reg_file_29; // @[test.scala 52:19]
  assign Box_reg_data_30 = reg_file_30; // @[test.scala 52:19]
  assign Box_reg_data_31 = reg_file_31; // @[test.scala 52:19]
  always @(posedge clock) begin
    if (reset) begin // @[test.scala 42:25]
      reg_file_0 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h0 == io_waddr) begin // @[test.scala 45:24]
        reg_file_0 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_1 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1 == io_waddr) begin // @[test.scala 45:24]
        reg_file_1 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_2 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h2 == io_waddr) begin // @[test.scala 45:24]
        reg_file_2 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_3 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h3 == io_waddr) begin // @[test.scala 45:24]
        reg_file_3 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_4 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h4 == io_waddr) begin // @[test.scala 45:24]
        reg_file_4 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_5 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h5 == io_waddr) begin // @[test.scala 45:24]
        reg_file_5 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_6 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h6 == io_waddr) begin // @[test.scala 45:24]
        reg_file_6 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_7 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h7 == io_waddr) begin // @[test.scala 45:24]
        reg_file_7 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_8 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h8 == io_waddr) begin // @[test.scala 45:24]
        reg_file_8 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_9 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h9 == io_waddr) begin // @[test.scala 45:24]
        reg_file_9 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_10 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'ha == io_waddr) begin // @[test.scala 45:24]
        reg_file_10 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_11 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'hb == io_waddr) begin // @[test.scala 45:24]
        reg_file_11 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_12 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'hc == io_waddr) begin // @[test.scala 45:24]
        reg_file_12 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_13 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'hd == io_waddr) begin // @[test.scala 45:24]
        reg_file_13 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_14 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'he == io_waddr) begin // @[test.scala 45:24]
        reg_file_14 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_15 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'hf == io_waddr) begin // @[test.scala 45:24]
        reg_file_15 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_16 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h10 == io_waddr) begin // @[test.scala 45:24]
        reg_file_16 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_17 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h11 == io_waddr) begin // @[test.scala 45:24]
        reg_file_17 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_18 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h12 == io_waddr) begin // @[test.scala 45:24]
        reg_file_18 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_19 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h13 == io_waddr) begin // @[test.scala 45:24]
        reg_file_19 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_20 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h14 == io_waddr) begin // @[test.scala 45:24]
        reg_file_20 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_21 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h15 == io_waddr) begin // @[test.scala 45:24]
        reg_file_21 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_22 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h16 == io_waddr) begin // @[test.scala 45:24]
        reg_file_22 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_23 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h17 == io_waddr) begin // @[test.scala 45:24]
        reg_file_23 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_24 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h18 == io_waddr) begin // @[test.scala 45:24]
        reg_file_24 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_25 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h19 == io_waddr) begin // @[test.scala 45:24]
        reg_file_25 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_26 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1a == io_waddr) begin // @[test.scala 45:24]
        reg_file_26 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_27 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1b == io_waddr) begin // @[test.scala 45:24]
        reg_file_27 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_28 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1c == io_waddr) begin // @[test.scala 45:24]
        reg_file_28 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_29 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1d == io_waddr) begin // @[test.scala 45:24]
        reg_file_29 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_30 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1e == io_waddr) begin // @[test.scala 45:24]
        reg_file_30 <= io_wdata; // @[test.scala 45:24]
      end
    end
    if (reset) begin // @[test.scala 42:25]
      reg_file_31 <= 64'h0; // @[test.scala 42:25]
    end else if (io_wen) begin // @[test.scala 44:3]
      if (5'h1f == io_waddr) begin // @[test.scala 45:24]
        reg_file_31 <= io_wdata; // @[test.scala 45:24]
      end
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
  _RAND_0 = {2{`RANDOM}};
  reg_file_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  reg_file_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  reg_file_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  reg_file_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  reg_file_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  reg_file_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  reg_file_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  reg_file_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  reg_file_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  reg_file_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  reg_file_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  reg_file_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  reg_file_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  reg_file_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  reg_file_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  reg_file_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  reg_file_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  reg_file_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  reg_file_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  reg_file_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  reg_file_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  reg_file_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  reg_file_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  reg_file_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  reg_file_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  reg_file_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  reg_file_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  reg_file_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  reg_file_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  reg_file_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  reg_file_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  reg_file_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
