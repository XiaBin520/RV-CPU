module RegFile(
  input         clock,
  input         reset,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  output [63:0] io_rs1_data,
  output [63:0] io_rs2_data,
  input         io_wreg_en,
  input  [4:0]  io_rd,
  input  [63:0] io_rd_data
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
`endif // RANDOMIZE_REG_INIT
  reg [63:0] gprFile_1; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_2; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_3; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_4; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_5; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_6; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_7; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_8; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_9; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_10; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_11; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_12; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_13; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_14; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_15; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_16; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_17; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_18; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_19; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_20; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_21; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_22; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_23; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_24; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_25; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_26; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_27; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_28; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_29; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_30; // @[RegFile.scala 20:24]
  reg [63:0] gprFile_31; // @[RegFile.scala 20:24]
  wire  _io_rs1_data_T_2 = io_rd != 5'h0; // @[RegFile.scala 21:63]
  wire [63:0] _GEN_1 = 5'h1 == io_rs1 ? gprFile_1 : 64'h0; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_2 = 5'h2 == io_rs1 ? gprFile_2 : _GEN_1; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_3 = 5'h3 == io_rs1 ? gprFile_3 : _GEN_2; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_4 = 5'h4 == io_rs1 ? gprFile_4 : _GEN_3; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_5 = 5'h5 == io_rs1 ? gprFile_5 : _GEN_4; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_6 = 5'h6 == io_rs1 ? gprFile_6 : _GEN_5; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_7 = 5'h7 == io_rs1 ? gprFile_7 : _GEN_6; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_8 = 5'h8 == io_rs1 ? gprFile_8 : _GEN_7; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_9 = 5'h9 == io_rs1 ? gprFile_9 : _GEN_8; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_10 = 5'ha == io_rs1 ? gprFile_10 : _GEN_9; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_11 = 5'hb == io_rs1 ? gprFile_11 : _GEN_10; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_12 = 5'hc == io_rs1 ? gprFile_12 : _GEN_11; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_13 = 5'hd == io_rs1 ? gprFile_13 : _GEN_12; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_14 = 5'he == io_rs1 ? gprFile_14 : _GEN_13; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_15 = 5'hf == io_rs1 ? gprFile_15 : _GEN_14; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_16 = 5'h10 == io_rs1 ? gprFile_16 : _GEN_15; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_17 = 5'h11 == io_rs1 ? gprFile_17 : _GEN_16; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_18 = 5'h12 == io_rs1 ? gprFile_18 : _GEN_17; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_19 = 5'h13 == io_rs1 ? gprFile_19 : _GEN_18; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_20 = 5'h14 == io_rs1 ? gprFile_20 : _GEN_19; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_21 = 5'h15 == io_rs1 ? gprFile_21 : _GEN_20; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_22 = 5'h16 == io_rs1 ? gprFile_22 : _GEN_21; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_23 = 5'h17 == io_rs1 ? gprFile_23 : _GEN_22; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_24 = 5'h18 == io_rs1 ? gprFile_24 : _GEN_23; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_25 = 5'h19 == io_rs1 ? gprFile_25 : _GEN_24; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_26 = 5'h1a == io_rs1 ? gprFile_26 : _GEN_25; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_27 = 5'h1b == io_rs1 ? gprFile_27 : _GEN_26; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_28 = 5'h1c == io_rs1 ? gprFile_28 : _GEN_27; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_29 = 5'h1d == io_rs1 ? gprFile_29 : _GEN_28; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_30 = 5'h1e == io_rs1 ? gprFile_30 : _GEN_29; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_31 = 5'h1f == io_rs1 ? gprFile_31 : _GEN_30; // @[RegFile.scala 21:{21,21}]
  wire [63:0] _GEN_33 = 5'h1 == io_rs2 ? gprFile_1 : 64'h0; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_34 = 5'h2 == io_rs2 ? gprFile_2 : _GEN_33; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_35 = 5'h3 == io_rs2 ? gprFile_3 : _GEN_34; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_36 = 5'h4 == io_rs2 ? gprFile_4 : _GEN_35; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_37 = 5'h5 == io_rs2 ? gprFile_5 : _GEN_36; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_38 = 5'h6 == io_rs2 ? gprFile_6 : _GEN_37; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_39 = 5'h7 == io_rs2 ? gprFile_7 : _GEN_38; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_40 = 5'h8 == io_rs2 ? gprFile_8 : _GEN_39; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_41 = 5'h9 == io_rs2 ? gprFile_9 : _GEN_40; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_42 = 5'ha == io_rs2 ? gprFile_10 : _GEN_41; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_43 = 5'hb == io_rs2 ? gprFile_11 : _GEN_42; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_44 = 5'hc == io_rs2 ? gprFile_12 : _GEN_43; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_45 = 5'hd == io_rs2 ? gprFile_13 : _GEN_44; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_46 = 5'he == io_rs2 ? gprFile_14 : _GEN_45; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_47 = 5'hf == io_rs2 ? gprFile_15 : _GEN_46; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_48 = 5'h10 == io_rs2 ? gprFile_16 : _GEN_47; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_49 = 5'h11 == io_rs2 ? gprFile_17 : _GEN_48; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_50 = 5'h12 == io_rs2 ? gprFile_18 : _GEN_49; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_51 = 5'h13 == io_rs2 ? gprFile_19 : _GEN_50; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_52 = 5'h14 == io_rs2 ? gprFile_20 : _GEN_51; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_53 = 5'h15 == io_rs2 ? gprFile_21 : _GEN_52; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_54 = 5'h16 == io_rs2 ? gprFile_22 : _GEN_53; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_55 = 5'h17 == io_rs2 ? gprFile_23 : _GEN_54; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_56 = 5'h18 == io_rs2 ? gprFile_24 : _GEN_55; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_57 = 5'h19 == io_rs2 ? gprFile_25 : _GEN_56; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_58 = 5'h1a == io_rs2 ? gprFile_26 : _GEN_57; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_59 = 5'h1b == io_rs2 ? gprFile_27 : _GEN_58; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_60 = 5'h1c == io_rs2 ? gprFile_28 : _GEN_59; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_61 = 5'h1d == io_rs2 ? gprFile_29 : _GEN_60; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_62 = 5'h1e == io_rs2 ? gprFile_30 : _GEN_61; // @[RegFile.scala 22:{21,21}]
  wire [63:0] _GEN_63 = 5'h1f == io_rs2 ? gprFile_31 : _GEN_62; // @[RegFile.scala 22:{21,21}]
  assign io_rs1_data = io_rs1 == io_rd & io_wreg_en & io_rd != 5'h0 ? io_rd_data : _GEN_31; // @[RegFile.scala 21:21]
  assign io_rs2_data = io_rs2 == io_rd & io_wreg_en & _io_rs1_data_T_2 ? io_rd_data : _GEN_63; // @[RegFile.scala 22:21]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_1 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_1 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_2 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h2 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_2 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_3 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h3 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_3 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_4 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h4 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_4 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_5 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h5 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_5 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_6 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h6 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_6 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_7 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h7 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_7 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_8 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h8 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_8 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_9 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h9 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_9 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_10 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'ha == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_10 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_11 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'hb == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_11 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_12 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'hc == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_12 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_13 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'hd == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_13 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_14 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'he == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_14 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_15 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'hf == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_15 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_16 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h10 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_16 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_17 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h11 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_17 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_18 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h12 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_18 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_19 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h13 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_19 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_20 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h14 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_20 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_21 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h15 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_21 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_22 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h16 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_22 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_23 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h17 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_23 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_24 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h18 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_24 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_25 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h19 == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_25 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_26 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1a == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_26 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_27 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1b == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_27 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_28 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1c == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_28 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_29 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1d == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_29 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_30 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1e == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_30 <= io_rd_data; // @[RegFile.scala 23:36]
      end
    end
    if (reset) begin // @[RegFile.scala 20:24]
      gprFile_31 <= 64'h0; // @[RegFile.scala 20:24]
    end else if (io_wreg_en) begin // @[RegFile.scala 23:20]
      if (5'h1f == io_rd) begin // @[RegFile.scala 23:36]
        gprFile_31 <= io_rd_data; // @[RegFile.scala 23:36]
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
  gprFile_1 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  gprFile_2 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  gprFile_3 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  gprFile_4 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  gprFile_5 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  gprFile_6 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  gprFile_7 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  gprFile_8 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  gprFile_9 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  gprFile_10 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  gprFile_11 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  gprFile_12 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  gprFile_13 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  gprFile_14 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  gprFile_15 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  gprFile_16 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  gprFile_17 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  gprFile_18 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  gprFile_19 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  gprFile_20 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  gprFile_21 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  gprFile_22 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  gprFile_23 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  gprFile_24 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  gprFile_25 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  gprFile_26 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  gprFile_27 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  gprFile_28 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  gprFile_29 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  gprFile_30 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  gprFile_31 = _RAND_30[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Decoder(
  input  [31:0] io_inst,
  output [3:0]  io_br_type,
  output [2:0]  io_imm_op,
  output [1:0]  io_cmp_sel,
  output [1:0]  io_op1_sel,
  output [1:0]  io_op2_sel,
  output [3:0]  io_alu_op,
  output [2:0]  io_walu_op,
  output        io_rmem_en,
  output [2:0]  io_rmem_sel,
  output        io_wmem_en,
  output [1:0]  io_wmem_sel,
  output        io_wreg_en,
  output        io_rs1_en,
  output        io_rs2_en
);
  wire [31:0] _ctrl_signals_T = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_1 = 32'h37 == _ctrl_signals_T; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_3 = 32'h17 == _ctrl_signals_T; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_5 = 32'h6f == _ctrl_signals_T; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_signals_T_6 = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_7 = 32'h67 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_9 = 32'h63 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_11 = 32'h1063 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_13 = 32'h4063 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_15 = 32'h5063 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_17 = 32'h6063 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_19 = 32'h7063 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_21 = 32'h3 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_23 = 32'h1003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_25 = 32'h2003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_27 = 32'h3003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_29 = 32'h4003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_31 = 32'h5003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_33 = 32'h6003 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_35 = 32'h23 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_37 = 32'h1023 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_39 = 32'h2023 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_41 = 32'h3023 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_43 = 32'h13 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_signals_T_44 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_45 = 32'h1013 == _ctrl_signals_T_44; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_47 = 32'h2013 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_49 = 32'h3013 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_51 = 32'h4013 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_53 = 32'h5013 == _ctrl_signals_T_44; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_55 = 32'h40005013 == _ctrl_signals_T_44; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_57 = 32'h6013 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_59 = 32'h7013 == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire [31:0] _ctrl_signals_T_60 = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_61 = 32'h33 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_63 = 32'h40000033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_65 = 32'h1033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_67 = 32'h2033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_69 = 32'h3033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_71 = 32'h4033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_73 = 32'h5033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_75 = 32'h40005033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_77 = 32'h6033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_79 = 32'h7033 == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_81 = 32'h1b == _ctrl_signals_T_6; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_83 = 32'h101b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_85 = 32'h501b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_87 = 32'h4000501b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_89 = 32'h3b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_91 = 32'h4000003b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_93 = 32'h103b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_95 = 32'h503b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire  _ctrl_signals_T_97 = 32'h4000503b == _ctrl_signals_T_60; // @[Lookup.scala 31:38]
  wire [3:0] _ctrl_signals_T_137 = _ctrl_signals_T_19 ? 4'h6 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_138 = _ctrl_signals_T_17 ? 4'h5 : _ctrl_signals_T_137; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_139 = _ctrl_signals_T_15 ? 4'h4 : _ctrl_signals_T_138; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_140 = _ctrl_signals_T_13 ? 4'h3 : _ctrl_signals_T_139; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_141 = _ctrl_signals_T_11 ? 4'h2 : _ctrl_signals_T_140; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_142 = _ctrl_signals_T_9 ? 4'h1 : _ctrl_signals_T_141; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_143 = _ctrl_signals_T_7 ? 4'h8 : _ctrl_signals_T_142; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_144 = _ctrl_signals_T_5 ? 4'h7 : _ctrl_signals_T_143; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_145 = _ctrl_signals_T_3 ? 4'h0 : _ctrl_signals_T_144; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_151 = _ctrl_signals_T_87 ? 3'h1 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_152 = _ctrl_signals_T_85 ? 3'h1 : _ctrl_signals_T_151; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_153 = _ctrl_signals_T_83 ? 3'h1 : _ctrl_signals_T_152; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_154 = _ctrl_signals_T_81 ? 3'h1 : _ctrl_signals_T_153; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_155 = _ctrl_signals_T_79 ? 3'h0 : _ctrl_signals_T_154; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_156 = _ctrl_signals_T_77 ? 3'h0 : _ctrl_signals_T_155; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_157 = _ctrl_signals_T_75 ? 3'h0 : _ctrl_signals_T_156; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_158 = _ctrl_signals_T_73 ? 3'h0 : _ctrl_signals_T_157; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_159 = _ctrl_signals_T_71 ? 3'h0 : _ctrl_signals_T_158; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_160 = _ctrl_signals_T_69 ? 3'h0 : _ctrl_signals_T_159; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_161 = _ctrl_signals_T_67 ? 3'h0 : _ctrl_signals_T_160; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_162 = _ctrl_signals_T_65 ? 3'h0 : _ctrl_signals_T_161; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_163 = _ctrl_signals_T_63 ? 3'h0 : _ctrl_signals_T_162; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_164 = _ctrl_signals_T_61 ? 3'h0 : _ctrl_signals_T_163; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_165 = _ctrl_signals_T_59 ? 3'h1 : _ctrl_signals_T_164; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_166 = _ctrl_signals_T_57 ? 3'h1 : _ctrl_signals_T_165; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_167 = _ctrl_signals_T_55 ? 3'h1 : _ctrl_signals_T_166; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_168 = _ctrl_signals_T_53 ? 3'h1 : _ctrl_signals_T_167; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_169 = _ctrl_signals_T_51 ? 3'h1 : _ctrl_signals_T_168; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_170 = _ctrl_signals_T_49 ? 3'h1 : _ctrl_signals_T_169; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_171 = _ctrl_signals_T_47 ? 3'h1 : _ctrl_signals_T_170; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_172 = _ctrl_signals_T_45 ? 3'h1 : _ctrl_signals_T_171; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_173 = _ctrl_signals_T_43 ? 3'h1 : _ctrl_signals_T_172; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_174 = _ctrl_signals_T_41 ? 3'h2 : _ctrl_signals_T_173; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_175 = _ctrl_signals_T_39 ? 3'h2 : _ctrl_signals_T_174; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_176 = _ctrl_signals_T_37 ? 3'h2 : _ctrl_signals_T_175; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_177 = _ctrl_signals_T_35 ? 3'h2 : _ctrl_signals_T_176; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_178 = _ctrl_signals_T_33 ? 3'h1 : _ctrl_signals_T_177; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_179 = _ctrl_signals_T_31 ? 3'h1 : _ctrl_signals_T_178; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_180 = _ctrl_signals_T_29 ? 3'h1 : _ctrl_signals_T_179; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_181 = _ctrl_signals_T_27 ? 3'h1 : _ctrl_signals_T_180; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_182 = _ctrl_signals_T_25 ? 3'h1 : _ctrl_signals_T_181; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_183 = _ctrl_signals_T_23 ? 3'h1 : _ctrl_signals_T_182; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_184 = _ctrl_signals_T_21 ? 3'h1 : _ctrl_signals_T_183; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_185 = _ctrl_signals_T_19 ? 3'h3 : _ctrl_signals_T_184; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_186 = _ctrl_signals_T_17 ? 3'h3 : _ctrl_signals_T_185; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_187 = _ctrl_signals_T_15 ? 3'h3 : _ctrl_signals_T_186; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_188 = _ctrl_signals_T_13 ? 3'h3 : _ctrl_signals_T_187; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_189 = _ctrl_signals_T_11 ? 3'h3 : _ctrl_signals_T_188; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_190 = _ctrl_signals_T_9 ? 3'h3 : _ctrl_signals_T_189; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_191 = _ctrl_signals_T_7 ? 3'h1 : _ctrl_signals_T_190; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_192 = _ctrl_signals_T_5 ? 3'h5 : _ctrl_signals_T_191; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_193 = _ctrl_signals_T_3 ? 3'h4 : _ctrl_signals_T_192; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_194 = _ctrl_signals_T_97 ? 2'h1 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_195 = _ctrl_signals_T_95 ? 2'h1 : _ctrl_signals_T_194; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_196 = _ctrl_signals_T_93 ? 2'h1 : _ctrl_signals_T_195; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_197 = _ctrl_signals_T_91 ? 2'h1 : _ctrl_signals_T_196; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_198 = _ctrl_signals_T_89 ? 2'h1 : _ctrl_signals_T_197; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_199 = _ctrl_signals_T_87 ? 2'h1 : _ctrl_signals_T_198; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_200 = _ctrl_signals_T_85 ? 2'h1 : _ctrl_signals_T_199; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_201 = _ctrl_signals_T_83 ? 2'h1 : _ctrl_signals_T_200; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_202 = _ctrl_signals_T_81 ? 2'h1 : _ctrl_signals_T_201; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_203 = _ctrl_signals_T_79 ? 2'h0 : _ctrl_signals_T_202; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_204 = _ctrl_signals_T_77 ? 2'h0 : _ctrl_signals_T_203; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_205 = _ctrl_signals_T_75 ? 2'h0 : _ctrl_signals_T_204; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_206 = _ctrl_signals_T_73 ? 2'h0 : _ctrl_signals_T_205; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_207 = _ctrl_signals_T_71 ? 2'h0 : _ctrl_signals_T_206; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_208 = _ctrl_signals_T_69 ? 2'h0 : _ctrl_signals_T_207; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_209 = _ctrl_signals_T_67 ? 2'h0 : _ctrl_signals_T_208; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_210 = _ctrl_signals_T_65 ? 2'h0 : _ctrl_signals_T_209; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_211 = _ctrl_signals_T_63 ? 2'h0 : _ctrl_signals_T_210; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_212 = _ctrl_signals_T_61 ? 2'h0 : _ctrl_signals_T_211; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_213 = _ctrl_signals_T_59 ? 2'h0 : _ctrl_signals_T_212; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_214 = _ctrl_signals_T_57 ? 2'h0 : _ctrl_signals_T_213; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_215 = _ctrl_signals_T_55 ? 2'h0 : _ctrl_signals_T_214; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_216 = _ctrl_signals_T_53 ? 2'h0 : _ctrl_signals_T_215; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_217 = _ctrl_signals_T_51 ? 2'h0 : _ctrl_signals_T_216; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_218 = _ctrl_signals_T_49 ? 2'h0 : _ctrl_signals_T_217; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_219 = _ctrl_signals_T_47 ? 2'h0 : _ctrl_signals_T_218; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_220 = _ctrl_signals_T_45 ? 2'h0 : _ctrl_signals_T_219; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_221 = _ctrl_signals_T_43 ? 2'h0 : _ctrl_signals_T_220; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_222 = _ctrl_signals_T_41 ? 2'h0 : _ctrl_signals_T_221; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_223 = _ctrl_signals_T_39 ? 2'h0 : _ctrl_signals_T_222; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_224 = _ctrl_signals_T_37 ? 2'h0 : _ctrl_signals_T_223; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_225 = _ctrl_signals_T_35 ? 2'h0 : _ctrl_signals_T_224; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_226 = _ctrl_signals_T_33 ? 2'h0 : _ctrl_signals_T_225; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_227 = _ctrl_signals_T_31 ? 2'h0 : _ctrl_signals_T_226; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_228 = _ctrl_signals_T_29 ? 2'h0 : _ctrl_signals_T_227; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_229 = _ctrl_signals_T_27 ? 2'h0 : _ctrl_signals_T_228; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_230 = _ctrl_signals_T_25 ? 2'h0 : _ctrl_signals_T_229; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_231 = _ctrl_signals_T_23 ? 2'h0 : _ctrl_signals_T_230; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_232 = _ctrl_signals_T_21 ? 2'h0 : _ctrl_signals_T_231; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_233 = _ctrl_signals_T_19 ? 2'h0 : _ctrl_signals_T_232; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_234 = _ctrl_signals_T_17 ? 2'h0 : _ctrl_signals_T_233; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_235 = _ctrl_signals_T_15 ? 2'h0 : _ctrl_signals_T_234; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_236 = _ctrl_signals_T_13 ? 2'h0 : _ctrl_signals_T_235; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_237 = _ctrl_signals_T_11 ? 2'h0 : _ctrl_signals_T_236; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_238 = _ctrl_signals_T_9 ? 2'h0 : _ctrl_signals_T_237; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_239 = _ctrl_signals_T_7 ? 2'h0 : _ctrl_signals_T_238; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_240 = _ctrl_signals_T_5 ? 2'h0 : _ctrl_signals_T_239; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_241 = _ctrl_signals_T_3 ? 2'h0 : _ctrl_signals_T_240; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_281 = _ctrl_signals_T_19 ? 2'h1 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_282 = _ctrl_signals_T_17 ? 2'h1 : _ctrl_signals_T_281; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_283 = _ctrl_signals_T_15 ? 2'h1 : _ctrl_signals_T_282; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_284 = _ctrl_signals_T_13 ? 2'h1 : _ctrl_signals_T_283; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_285 = _ctrl_signals_T_11 ? 2'h1 : _ctrl_signals_T_284; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_286 = _ctrl_signals_T_9 ? 2'h1 : _ctrl_signals_T_285; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_287 = _ctrl_signals_T_7 ? 2'h1 : _ctrl_signals_T_286; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_288 = _ctrl_signals_T_5 ? 2'h1 : _ctrl_signals_T_287; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_289 = _ctrl_signals_T_3 ? 2'h1 : _ctrl_signals_T_288; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_295 = _ctrl_signals_T_87 ? 2'h1 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_296 = _ctrl_signals_T_85 ? 2'h1 : _ctrl_signals_T_295; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_297 = _ctrl_signals_T_83 ? 2'h1 : _ctrl_signals_T_296; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_298 = _ctrl_signals_T_81 ? 2'h1 : _ctrl_signals_T_297; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_299 = _ctrl_signals_T_79 ? 2'h0 : _ctrl_signals_T_298; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_300 = _ctrl_signals_T_77 ? 2'h0 : _ctrl_signals_T_299; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_301 = _ctrl_signals_T_75 ? 2'h0 : _ctrl_signals_T_300; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_302 = _ctrl_signals_T_73 ? 2'h0 : _ctrl_signals_T_301; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_303 = _ctrl_signals_T_71 ? 2'h0 : _ctrl_signals_T_302; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_304 = _ctrl_signals_T_69 ? 2'h0 : _ctrl_signals_T_303; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_305 = _ctrl_signals_T_67 ? 2'h0 : _ctrl_signals_T_304; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_306 = _ctrl_signals_T_65 ? 2'h0 : _ctrl_signals_T_305; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_307 = _ctrl_signals_T_63 ? 2'h0 : _ctrl_signals_T_306; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_308 = _ctrl_signals_T_61 ? 2'h0 : _ctrl_signals_T_307; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_309 = _ctrl_signals_T_59 ? 2'h1 : _ctrl_signals_T_308; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_310 = _ctrl_signals_T_57 ? 2'h1 : _ctrl_signals_T_309; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_311 = _ctrl_signals_T_55 ? 2'h1 : _ctrl_signals_T_310; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_312 = _ctrl_signals_T_53 ? 2'h1 : _ctrl_signals_T_311; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_313 = _ctrl_signals_T_51 ? 2'h1 : _ctrl_signals_T_312; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_314 = _ctrl_signals_T_49 ? 2'h1 : _ctrl_signals_T_313; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_315 = _ctrl_signals_T_47 ? 2'h1 : _ctrl_signals_T_314; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_316 = _ctrl_signals_T_45 ? 2'h1 : _ctrl_signals_T_315; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_317 = _ctrl_signals_T_43 ? 2'h1 : _ctrl_signals_T_316; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_318 = _ctrl_signals_T_41 ? 2'h1 : _ctrl_signals_T_317; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_319 = _ctrl_signals_T_39 ? 2'h1 : _ctrl_signals_T_318; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_320 = _ctrl_signals_T_37 ? 2'h1 : _ctrl_signals_T_319; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_321 = _ctrl_signals_T_35 ? 2'h1 : _ctrl_signals_T_320; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_322 = _ctrl_signals_T_33 ? 2'h1 : _ctrl_signals_T_321; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_323 = _ctrl_signals_T_31 ? 2'h1 : _ctrl_signals_T_322; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_324 = _ctrl_signals_T_29 ? 2'h1 : _ctrl_signals_T_323; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_325 = _ctrl_signals_T_27 ? 2'h1 : _ctrl_signals_T_324; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_326 = _ctrl_signals_T_25 ? 2'h1 : _ctrl_signals_T_325; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_327 = _ctrl_signals_T_23 ? 2'h1 : _ctrl_signals_T_326; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_328 = _ctrl_signals_T_21 ? 2'h1 : _ctrl_signals_T_327; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_329 = _ctrl_signals_T_19 ? 2'h2 : _ctrl_signals_T_328; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_330 = _ctrl_signals_T_17 ? 2'h2 : _ctrl_signals_T_329; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_331 = _ctrl_signals_T_15 ? 2'h2 : _ctrl_signals_T_330; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_332 = _ctrl_signals_T_13 ? 2'h2 : _ctrl_signals_T_331; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_333 = _ctrl_signals_T_11 ? 2'h2 : _ctrl_signals_T_332; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_334 = _ctrl_signals_T_9 ? 2'h2 : _ctrl_signals_T_333; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_335 = _ctrl_signals_T_7 ? 2'h2 : _ctrl_signals_T_334; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_336 = _ctrl_signals_T_5 ? 2'h2 : _ctrl_signals_T_335; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_337 = _ctrl_signals_T_3 ? 2'h1 : _ctrl_signals_T_336; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_347 = _ctrl_signals_T_79 ? 4'ha : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_348 = _ctrl_signals_T_77 ? 4'h9 : _ctrl_signals_T_347; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_349 = _ctrl_signals_T_75 ? 4'h7 : _ctrl_signals_T_348; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_350 = _ctrl_signals_T_73 ? 4'h6 : _ctrl_signals_T_349; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_351 = _ctrl_signals_T_71 ? 4'h5 : _ctrl_signals_T_350; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_352 = _ctrl_signals_T_69 ? 4'h4 : _ctrl_signals_T_351; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_353 = _ctrl_signals_T_67 ? 4'h3 : _ctrl_signals_T_352; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_354 = _ctrl_signals_T_65 ? 4'h2 : _ctrl_signals_T_353; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_355 = _ctrl_signals_T_63 ? 4'h1 : _ctrl_signals_T_354; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_356 = _ctrl_signals_T_61 ? 4'h0 : _ctrl_signals_T_355; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_357 = _ctrl_signals_T_59 ? 4'ha : _ctrl_signals_T_356; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_358 = _ctrl_signals_T_57 ? 4'h9 : _ctrl_signals_T_357; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_359 = _ctrl_signals_T_55 ? 4'h7 : _ctrl_signals_T_358; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_360 = _ctrl_signals_T_53 ? 4'h6 : _ctrl_signals_T_359; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_361 = _ctrl_signals_T_51 ? 4'h5 : _ctrl_signals_T_360; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_362 = _ctrl_signals_T_49 ? 4'h4 : _ctrl_signals_T_361; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_363 = _ctrl_signals_T_47 ? 4'h3 : _ctrl_signals_T_362; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_364 = _ctrl_signals_T_45 ? 4'h2 : _ctrl_signals_T_363; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_365 = _ctrl_signals_T_43 ? 4'h0 : _ctrl_signals_T_364; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_366 = _ctrl_signals_T_41 ? 4'h0 : _ctrl_signals_T_365; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_367 = _ctrl_signals_T_39 ? 4'h0 : _ctrl_signals_T_366; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_368 = _ctrl_signals_T_37 ? 4'h0 : _ctrl_signals_T_367; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_369 = _ctrl_signals_T_35 ? 4'h0 : _ctrl_signals_T_368; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_370 = _ctrl_signals_T_33 ? 4'h0 : _ctrl_signals_T_369; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_371 = _ctrl_signals_T_31 ? 4'h0 : _ctrl_signals_T_370; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_372 = _ctrl_signals_T_29 ? 4'h0 : _ctrl_signals_T_371; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_373 = _ctrl_signals_T_27 ? 4'h0 : _ctrl_signals_T_372; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_374 = _ctrl_signals_T_25 ? 4'h0 : _ctrl_signals_T_373; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_375 = _ctrl_signals_T_23 ? 4'h0 : _ctrl_signals_T_374; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_376 = _ctrl_signals_T_21 ? 4'h0 : _ctrl_signals_T_375; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_377 = _ctrl_signals_T_19 ? 4'h0 : _ctrl_signals_T_376; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_378 = _ctrl_signals_T_17 ? 4'h0 : _ctrl_signals_T_377; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_379 = _ctrl_signals_T_15 ? 4'h0 : _ctrl_signals_T_378; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_380 = _ctrl_signals_T_13 ? 4'h0 : _ctrl_signals_T_379; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_381 = _ctrl_signals_T_11 ? 4'h0 : _ctrl_signals_T_380; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_382 = _ctrl_signals_T_9 ? 4'h0 : _ctrl_signals_T_381; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_383 = _ctrl_signals_T_7 ? 4'h0 : _ctrl_signals_T_382; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_384 = _ctrl_signals_T_5 ? 4'h0 : _ctrl_signals_T_383; // @[Lookup.scala 34:39]
  wire [3:0] _ctrl_signals_T_385 = _ctrl_signals_T_3 ? 4'h0 : _ctrl_signals_T_384; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_386 = _ctrl_signals_T_97 ? 3'h4 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_387 = _ctrl_signals_T_95 ? 3'h3 : _ctrl_signals_T_386; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_388 = _ctrl_signals_T_93 ? 3'h2 : _ctrl_signals_T_387; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_389 = _ctrl_signals_T_91 ? 3'h1 : _ctrl_signals_T_388; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_390 = _ctrl_signals_T_89 ? 3'h0 : _ctrl_signals_T_389; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_391 = _ctrl_signals_T_87 ? 3'h4 : _ctrl_signals_T_390; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_392 = _ctrl_signals_T_85 ? 3'h3 : _ctrl_signals_T_391; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_393 = _ctrl_signals_T_83 ? 3'h2 : _ctrl_signals_T_392; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_394 = _ctrl_signals_T_81 ? 3'h0 : _ctrl_signals_T_393; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_395 = _ctrl_signals_T_79 ? 3'h0 : _ctrl_signals_T_394; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_396 = _ctrl_signals_T_77 ? 3'h0 : _ctrl_signals_T_395; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_397 = _ctrl_signals_T_75 ? 3'h0 : _ctrl_signals_T_396; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_398 = _ctrl_signals_T_73 ? 3'h0 : _ctrl_signals_T_397; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_399 = _ctrl_signals_T_71 ? 3'h0 : _ctrl_signals_T_398; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_400 = _ctrl_signals_T_69 ? 3'h0 : _ctrl_signals_T_399; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_401 = _ctrl_signals_T_67 ? 3'h0 : _ctrl_signals_T_400; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_402 = _ctrl_signals_T_65 ? 3'h0 : _ctrl_signals_T_401; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_403 = _ctrl_signals_T_63 ? 3'h0 : _ctrl_signals_T_402; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_404 = _ctrl_signals_T_61 ? 3'h0 : _ctrl_signals_T_403; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_405 = _ctrl_signals_T_59 ? 3'h0 : _ctrl_signals_T_404; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_406 = _ctrl_signals_T_57 ? 3'h0 : _ctrl_signals_T_405; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_407 = _ctrl_signals_T_55 ? 3'h0 : _ctrl_signals_T_406; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_408 = _ctrl_signals_T_53 ? 3'h0 : _ctrl_signals_T_407; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_409 = _ctrl_signals_T_51 ? 3'h0 : _ctrl_signals_T_408; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_410 = _ctrl_signals_T_49 ? 3'h0 : _ctrl_signals_T_409; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_411 = _ctrl_signals_T_47 ? 3'h0 : _ctrl_signals_T_410; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_412 = _ctrl_signals_T_45 ? 3'h0 : _ctrl_signals_T_411; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_413 = _ctrl_signals_T_43 ? 3'h0 : _ctrl_signals_T_412; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_414 = _ctrl_signals_T_41 ? 3'h0 : _ctrl_signals_T_413; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_415 = _ctrl_signals_T_39 ? 3'h0 : _ctrl_signals_T_414; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_416 = _ctrl_signals_T_37 ? 3'h0 : _ctrl_signals_T_415; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_417 = _ctrl_signals_T_35 ? 3'h0 : _ctrl_signals_T_416; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_418 = _ctrl_signals_T_33 ? 3'h0 : _ctrl_signals_T_417; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_419 = _ctrl_signals_T_31 ? 3'h0 : _ctrl_signals_T_418; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_420 = _ctrl_signals_T_29 ? 3'h0 : _ctrl_signals_T_419; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_421 = _ctrl_signals_T_27 ? 3'h0 : _ctrl_signals_T_420; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_422 = _ctrl_signals_T_25 ? 3'h0 : _ctrl_signals_T_421; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_423 = _ctrl_signals_T_23 ? 3'h0 : _ctrl_signals_T_422; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_424 = _ctrl_signals_T_21 ? 3'h0 : _ctrl_signals_T_423; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_425 = _ctrl_signals_T_19 ? 3'h0 : _ctrl_signals_T_424; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_426 = _ctrl_signals_T_17 ? 3'h0 : _ctrl_signals_T_425; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_427 = _ctrl_signals_T_15 ? 3'h0 : _ctrl_signals_T_426; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_428 = _ctrl_signals_T_13 ? 3'h0 : _ctrl_signals_T_427; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_429 = _ctrl_signals_T_11 ? 3'h0 : _ctrl_signals_T_428; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_430 = _ctrl_signals_T_9 ? 3'h0 : _ctrl_signals_T_429; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_431 = _ctrl_signals_T_7 ? 3'h0 : _ctrl_signals_T_430; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_432 = _ctrl_signals_T_5 ? 3'h0 : _ctrl_signals_T_431; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_433 = _ctrl_signals_T_3 ? 3'h0 : _ctrl_signals_T_432; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_514 = _ctrl_signals_T_33 ? 3'h6 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_515 = _ctrl_signals_T_31 ? 3'h5 : _ctrl_signals_T_514; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_516 = _ctrl_signals_T_29 ? 3'h4 : _ctrl_signals_T_515; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_517 = _ctrl_signals_T_27 ? 3'h3 : _ctrl_signals_T_516; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_518 = _ctrl_signals_T_25 ? 3'h2 : _ctrl_signals_T_517; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_519 = _ctrl_signals_T_23 ? 3'h1 : _ctrl_signals_T_518; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_520 = _ctrl_signals_T_21 ? 3'h0 : _ctrl_signals_T_519; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_521 = _ctrl_signals_T_19 ? 3'h0 : _ctrl_signals_T_520; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_522 = _ctrl_signals_T_17 ? 3'h0 : _ctrl_signals_T_521; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_523 = _ctrl_signals_T_15 ? 3'h0 : _ctrl_signals_T_522; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_524 = _ctrl_signals_T_13 ? 3'h0 : _ctrl_signals_T_523; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_525 = _ctrl_signals_T_11 ? 3'h0 : _ctrl_signals_T_524; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_526 = _ctrl_signals_T_9 ? 3'h0 : _ctrl_signals_T_525; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_527 = _ctrl_signals_T_7 ? 3'h0 : _ctrl_signals_T_526; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_528 = _ctrl_signals_T_5 ? 3'h0 : _ctrl_signals_T_527; // @[Lookup.scala 34:39]
  wire [2:0] _ctrl_signals_T_529 = _ctrl_signals_T_3 ? 3'h0 : _ctrl_signals_T_528; // @[Lookup.scala 34:39]
  wire [2:0] ctrl_signals_8 = _ctrl_signals_T_1 ? 3'h0 : _ctrl_signals_T_529; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_562 = _ctrl_signals_T_33 ? 1'h0 : _ctrl_signals_T_35 | (_ctrl_signals_T_37 | (_ctrl_signals_T_39
     | _ctrl_signals_T_41)); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_563 = _ctrl_signals_T_31 ? 1'h0 : _ctrl_signals_T_562; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_564 = _ctrl_signals_T_29 ? 1'h0 : _ctrl_signals_T_563; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_565 = _ctrl_signals_T_27 ? 1'h0 : _ctrl_signals_T_564; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_566 = _ctrl_signals_T_25 ? 1'h0 : _ctrl_signals_T_565; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_567 = _ctrl_signals_T_23 ? 1'h0 : _ctrl_signals_T_566; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_568 = _ctrl_signals_T_21 ? 1'h0 : _ctrl_signals_T_567; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_569 = _ctrl_signals_T_19 ? 1'h0 : _ctrl_signals_T_568; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_570 = _ctrl_signals_T_17 ? 1'h0 : _ctrl_signals_T_569; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_571 = _ctrl_signals_T_15 ? 1'h0 : _ctrl_signals_T_570; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_572 = _ctrl_signals_T_13 ? 1'h0 : _ctrl_signals_T_571; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_573 = _ctrl_signals_T_11 ? 1'h0 : _ctrl_signals_T_572; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_574 = _ctrl_signals_T_9 ? 1'h0 : _ctrl_signals_T_573; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_575 = _ctrl_signals_T_7 ? 1'h0 : _ctrl_signals_T_574; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_576 = _ctrl_signals_T_5 ? 1'h0 : _ctrl_signals_T_575; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_577 = _ctrl_signals_T_3 ? 1'h0 : _ctrl_signals_T_576; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_606 = _ctrl_signals_T_41 ? 2'h3 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_607 = _ctrl_signals_T_39 ? 2'h2 : _ctrl_signals_T_606; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_608 = _ctrl_signals_T_37 ? 2'h1 : _ctrl_signals_T_607; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_609 = _ctrl_signals_T_35 ? 2'h0 : _ctrl_signals_T_608; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_610 = _ctrl_signals_T_33 ? 2'h0 : _ctrl_signals_T_609; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_611 = _ctrl_signals_T_31 ? 2'h0 : _ctrl_signals_T_610; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_612 = _ctrl_signals_T_29 ? 2'h0 : _ctrl_signals_T_611; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_613 = _ctrl_signals_T_27 ? 2'h0 : _ctrl_signals_T_612; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_614 = _ctrl_signals_T_25 ? 2'h0 : _ctrl_signals_T_613; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_615 = _ctrl_signals_T_23 ? 2'h0 : _ctrl_signals_T_614; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_616 = _ctrl_signals_T_21 ? 2'h0 : _ctrl_signals_T_615; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_617 = _ctrl_signals_T_19 ? 2'h0 : _ctrl_signals_T_616; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_618 = _ctrl_signals_T_17 ? 2'h0 : _ctrl_signals_T_617; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_619 = _ctrl_signals_T_15 ? 2'h0 : _ctrl_signals_T_618; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_620 = _ctrl_signals_T_13 ? 2'h0 : _ctrl_signals_T_619; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_621 = _ctrl_signals_T_11 ? 2'h0 : _ctrl_signals_T_620; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_622 = _ctrl_signals_T_9 ? 2'h0 : _ctrl_signals_T_621; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_623 = _ctrl_signals_T_7 ? 2'h0 : _ctrl_signals_T_622; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_624 = _ctrl_signals_T_5 ? 2'h0 : _ctrl_signals_T_623; // @[Lookup.scala 34:39]
  wire [1:0] _ctrl_signals_T_625 = _ctrl_signals_T_3 ? 2'h0 : _ctrl_signals_T_624; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_654 = _ctrl_signals_T_41 ? 1'h0 : _ctrl_signals_T_43 | (_ctrl_signals_T_45 | (_ctrl_signals_T_47
     | (_ctrl_signals_T_49 | (_ctrl_signals_T_51 | (_ctrl_signals_T_53 | (_ctrl_signals_T_55 | (_ctrl_signals_T_57 | (
    _ctrl_signals_T_59 | (_ctrl_signals_T_61 | (_ctrl_signals_T_63 | (_ctrl_signals_T_65 | (_ctrl_signals_T_67 | (
    _ctrl_signals_T_69 | (_ctrl_signals_T_71 | (_ctrl_signals_T_73 | (_ctrl_signals_T_75 | (_ctrl_signals_T_77 | (
    _ctrl_signals_T_79 | (_ctrl_signals_T_81 | (_ctrl_signals_T_83 | (_ctrl_signals_T_85 | (_ctrl_signals_T_87 | (
    _ctrl_signals_T_89 | (_ctrl_signals_T_91 | (_ctrl_signals_T_93 | (_ctrl_signals_T_95 | _ctrl_signals_T_97)))))))))))
    ))))))))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_655 = _ctrl_signals_T_39 ? 1'h0 : _ctrl_signals_T_654; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_656 = _ctrl_signals_T_37 ? 1'h0 : _ctrl_signals_T_655; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_657 = _ctrl_signals_T_35 ? 1'h0 : _ctrl_signals_T_656; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_665 = _ctrl_signals_T_19 ? 1'h0 : _ctrl_signals_T_21 | (_ctrl_signals_T_23 | (_ctrl_signals_T_25
     | (_ctrl_signals_T_27 | (_ctrl_signals_T_29 | (_ctrl_signals_T_31 | (_ctrl_signals_T_33 | _ctrl_signals_T_657))))))
    ; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_666 = _ctrl_signals_T_17 ? 1'h0 : _ctrl_signals_T_665; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_667 = _ctrl_signals_T_15 ? 1'h0 : _ctrl_signals_T_666; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_668 = _ctrl_signals_T_13 ? 1'h0 : _ctrl_signals_T_667; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_669 = _ctrl_signals_T_11 ? 1'h0 : _ctrl_signals_T_668; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_670 = _ctrl_signals_T_9 ? 1'h0 : _ctrl_signals_T_669; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_704 = _ctrl_signals_T_37 | (_ctrl_signals_T_39 | (_ctrl_signals_T_41 | (_ctrl_signals_T_43 | (
    _ctrl_signals_T_45 | (_ctrl_signals_T_47 | (_ctrl_signals_T_49 | (_ctrl_signals_T_51 | (_ctrl_signals_T_53 | (
    _ctrl_signals_T_55 | (_ctrl_signals_T_57 | (_ctrl_signals_T_59 | (_ctrl_signals_T_61 | (_ctrl_signals_T_63 | (
    _ctrl_signals_T_65 | (_ctrl_signals_T_67 | (_ctrl_signals_T_69 | (_ctrl_signals_T_71 | (_ctrl_signals_T_73 | (
    _ctrl_signals_T_75 | (_ctrl_signals_T_77 | (_ctrl_signals_T_79 | (_ctrl_signals_T_81 | (_ctrl_signals_T_83 | (
    _ctrl_signals_T_85 | (_ctrl_signals_T_87 | (_ctrl_signals_T_89 | (_ctrl_signals_T_91 | (_ctrl_signals_T_93 | (
    _ctrl_signals_T_95 | _ctrl_signals_T_97))))))))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_720 = _ctrl_signals_T_5 ? 1'h0 : _ctrl_signals_T_7 | (_ctrl_signals_T_9 | (_ctrl_signals_T_11 |
    (_ctrl_signals_T_13 | (_ctrl_signals_T_15 | (_ctrl_signals_T_17 | (_ctrl_signals_T_19 | (_ctrl_signals_T_21 | (
    _ctrl_signals_T_23 | (_ctrl_signals_T_25 | (_ctrl_signals_T_27 | (_ctrl_signals_T_29 | (_ctrl_signals_T_31 | (
    _ctrl_signals_T_33 | (_ctrl_signals_T_35 | _ctrl_signals_T_704)))))))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_721 = _ctrl_signals_T_3 ? 1'h0 : _ctrl_signals_T_720; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_727 = _ctrl_signals_T_87 ? 1'h0 : _ctrl_signals_T_89 | (_ctrl_signals_T_91 | (_ctrl_signals_T_93
     | (_ctrl_signals_T_95 | _ctrl_signals_T_97))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_728 = _ctrl_signals_T_85 ? 1'h0 : _ctrl_signals_T_727; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_729 = _ctrl_signals_T_83 ? 1'h0 : _ctrl_signals_T_728; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_730 = _ctrl_signals_T_81 ? 1'h0 : _ctrl_signals_T_729; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_741 = _ctrl_signals_T_59 ? 1'h0 : _ctrl_signals_T_61 | (_ctrl_signals_T_63 | (_ctrl_signals_T_65
     | (_ctrl_signals_T_67 | (_ctrl_signals_T_69 | (_ctrl_signals_T_71 | (_ctrl_signals_T_73 | (_ctrl_signals_T_75 | (
    _ctrl_signals_T_77 | (_ctrl_signals_T_79 | _ctrl_signals_T_730))))))))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_742 = _ctrl_signals_T_57 ? 1'h0 : _ctrl_signals_T_741; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_743 = _ctrl_signals_T_55 ? 1'h0 : _ctrl_signals_T_742; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_744 = _ctrl_signals_T_53 ? 1'h0 : _ctrl_signals_T_743; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_745 = _ctrl_signals_T_51 ? 1'h0 : _ctrl_signals_T_744; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_746 = _ctrl_signals_T_49 ? 1'h0 : _ctrl_signals_T_745; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_747 = _ctrl_signals_T_47 ? 1'h0 : _ctrl_signals_T_746; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_748 = _ctrl_signals_T_45 ? 1'h0 : _ctrl_signals_T_747; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_749 = _ctrl_signals_T_43 ? 1'h0 : _ctrl_signals_T_748; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_754 = _ctrl_signals_T_33 ? 1'h0 : _ctrl_signals_T_35 | (_ctrl_signals_T_37 | (_ctrl_signals_T_39
     | (_ctrl_signals_T_41 | _ctrl_signals_T_749))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_755 = _ctrl_signals_T_31 ? 1'h0 : _ctrl_signals_T_754; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_756 = _ctrl_signals_T_29 ? 1'h0 : _ctrl_signals_T_755; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_757 = _ctrl_signals_T_27 ? 1'h0 : _ctrl_signals_T_756; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_758 = _ctrl_signals_T_25 ? 1'h0 : _ctrl_signals_T_757; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_759 = _ctrl_signals_T_23 ? 1'h0 : _ctrl_signals_T_758; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_760 = _ctrl_signals_T_21 ? 1'h0 : _ctrl_signals_T_759; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_767 = _ctrl_signals_T_7 ? 1'h0 : _ctrl_signals_T_9 | (_ctrl_signals_T_11 | (_ctrl_signals_T_13
     | (_ctrl_signals_T_15 | (_ctrl_signals_T_17 | (_ctrl_signals_T_19 | _ctrl_signals_T_760))))); // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_768 = _ctrl_signals_T_5 ? 1'h0 : _ctrl_signals_T_767; // @[Lookup.scala 34:39]
  wire  _ctrl_signals_T_769 = _ctrl_signals_T_3 ? 1'h0 : _ctrl_signals_T_768; // @[Lookup.scala 34:39]
  assign io_br_type = _ctrl_signals_T_1 ? 4'h0 : _ctrl_signals_T_145; // @[Lookup.scala 34:39]
  assign io_imm_op = _ctrl_signals_T_1 ? 3'h4 : _ctrl_signals_T_193; // @[Lookup.scala 34:39]
  assign io_cmp_sel = _ctrl_signals_T_1 ? 2'h0 : _ctrl_signals_T_241; // @[Lookup.scala 34:39]
  assign io_op1_sel = _ctrl_signals_T_1 ? 2'h2 : _ctrl_signals_T_289; // @[Lookup.scala 34:39]
  assign io_op2_sel = _ctrl_signals_T_1 ? 2'h1 : _ctrl_signals_T_337; // @[Lookup.scala 34:39]
  assign io_alu_op = _ctrl_signals_T_1 ? 4'h0 : _ctrl_signals_T_385; // @[Lookup.scala 34:39]
  assign io_walu_op = _ctrl_signals_T_1 ? 3'h0 : _ctrl_signals_T_433; // @[Lookup.scala 34:39]
  assign io_rmem_en = ctrl_signals_8[0]; // @[Decoder.scala 94:21]
  assign io_rmem_sel = _ctrl_signals_T_1 ? 3'h0 : _ctrl_signals_T_529; // @[Lookup.scala 34:39]
  assign io_wmem_en = _ctrl_signals_T_1 ? 1'h0 : _ctrl_signals_T_577; // @[Lookup.scala 34:39]
  assign io_wmem_sel = _ctrl_signals_T_1 ? 2'h0 : _ctrl_signals_T_625; // @[Lookup.scala 34:39]
  assign io_wreg_en = _ctrl_signals_T_1 | (_ctrl_signals_T_3 | (_ctrl_signals_T_5 | (_ctrl_signals_T_7 |
    _ctrl_signals_T_670))); // @[Lookup.scala 34:39]
  assign io_rs1_en = _ctrl_signals_T_1 ? 1'h0 : _ctrl_signals_T_721; // @[Lookup.scala 34:39]
  assign io_rs2_en = _ctrl_signals_T_1 ? 1'h0 : _ctrl_signals_T_769; // @[Lookup.scala 34:39]
endmodule
module ImmSext(
  input  [24:0] io_imm31To7,
  input  [2:0]  io_imm_op,
  output [63:0] io_imm
);
  wire  _io_imm_T = io_imm_op == 3'h0; // @[ImmSext.scala 21:25]
  wire  _io_imm_T_2 = io_imm_op == 3'h1; // @[ImmSext.scala 22:25]
  wire [51:0] _io_imm_T_5 = io_imm31To7[24] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_imm_T_7 = {_io_imm_T_5,io_imm31To7[24:13]}; // @[Cat.scala 31:58]
  wire  _io_imm_T_8 = io_imm_op == 3'h2; // @[ImmSext.scala 23:25]
  wire [63:0] _io_imm_T_14 = {_io_imm_T_5,io_imm31To7[24:18],io_imm31To7[4:0]}; // @[Cat.scala 31:58]
  wire  _io_imm_T_15 = io_imm_op == 3'h3; // @[ImmSext.scala 24:25]
  wire [50:0] _io_imm_T_18 = io_imm31To7[24] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_imm_T_23 = {_io_imm_T_18,io_imm31To7[24],io_imm31To7[0],io_imm31To7[23:18],io_imm31To7[4:1],1'h0}; // @[Cat.scala 31:58]
  wire  _io_imm_T_24 = io_imm_op == 3'h4; // @[ImmSext.scala 25:25]
  wire [31:0] _io_imm_T_27 = io_imm31To7[24] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_imm_T_29 = {_io_imm_T_27,io_imm31To7[24:5],12'h0}; // @[Cat.scala 31:58]
  wire  _io_imm_T_30 = io_imm_op == 3'h5; // @[ImmSext.scala 26:25]
  wire [42:0] _io_imm_T_33 = io_imm31To7[24] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_imm_T_38 = {_io_imm_T_33,io_imm31To7[24],io_imm31To7[12:5],io_imm31To7[13],io_imm31To7[23:14],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _io_imm_T_39 = _io_imm_T_30 ? _io_imm_T_38 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _io_imm_T_40 = _io_imm_T_24 ? _io_imm_T_29 : _io_imm_T_39; // @[Mux.scala 101:16]
  wire [63:0] _io_imm_T_41 = _io_imm_T_15 ? _io_imm_T_23 : _io_imm_T_40; // @[Mux.scala 101:16]
  wire [63:0] _io_imm_T_42 = _io_imm_T_8 ? _io_imm_T_14 : _io_imm_T_41; // @[Mux.scala 101:16]
  wire [63:0] _io_imm_T_43 = _io_imm_T_2 ? _io_imm_T_7 : _io_imm_T_42; // @[Mux.scala 101:16]
  assign io_imm = _io_imm_T ? 64'h0 : _io_imm_T_43; // @[Mux.scala 101:16]
endmodule
module transfer(
  input  [3:0]  io_br_type,
  input  [63:0] io_rs1_data,
  input  [63:0] io_rs2_data,
  input  [31:0] io_imm,
  input  [31:0] io_pc,
  output        io_jmp_en,
  output [31:0] io_pc_next
);
  wire  _pc_type_T_2 = io_br_type == 4'h1 & io_rs1_data == io_rs2_data; // @[transfer.scala 24:41]
  wire  _pc_type_T_5 = io_br_type == 4'h2 & io_rs1_data != io_rs2_data; // @[transfer.scala 25:41]
  wire  _pc_type_T_10 = io_br_type == 4'h3 & $signed(io_rs1_data) < $signed(io_rs2_data); // @[transfer.scala 26:41]
  wire  _pc_type_T_15 = io_br_type == 4'h4 & $signed(io_rs1_data) >= $signed(io_rs2_data); // @[transfer.scala 27:41]
  wire  _pc_type_T_18 = io_br_type == 4'h5 & io_rs1_data < io_rs2_data; // @[transfer.scala 28:42]
  wire  _pc_type_T_21 = io_br_type == 4'h6 & io_rs1_data >= io_rs2_data; // @[transfer.scala 29:42]
  wire  _pc_type_T_22 = io_br_type == 4'h7; // @[transfer.scala 30:31]
  wire  _pc_type_T_23 = io_br_type == 4'h8; // @[transfer.scala 31:31]
  wire [2:0] _pc_type_T_24 = _pc_type_T_23 ? 3'h3 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_25 = _pc_type_T_22 ? 3'h2 : _pc_type_T_24; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_26 = _pc_type_T_21 ? 3'h1 : _pc_type_T_25; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_27 = _pc_type_T_18 ? 3'h1 : _pc_type_T_26; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_28 = _pc_type_T_15 ? 3'h1 : _pc_type_T_27; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_29 = _pc_type_T_10 ? 3'h1 : _pc_type_T_28; // @[Mux.scala 101:16]
  wire [2:0] _pc_type_T_30 = _pc_type_T_5 ? 3'h1 : _pc_type_T_29; // @[Mux.scala 101:16]
  wire [2:0] pc_type = _pc_type_T_2 ? 3'h1 : _pc_type_T_30; // @[Mux.scala 101:16]
  wire [31:0] rs1_data_32 = io_rs1_data[31:0]; // @[transfer.scala 34:32]
  wire [31:0] _io_pc_next_T_1 = io_pc + 32'h4; // @[transfer.scala 35:32]
  wire  _io_pc_next_T_2 = pc_type == 3'h1; // @[transfer.scala 37:28]
  wire [31:0] _io_pc_next_T_4 = io_pc + io_imm; // @[transfer.scala 37:52]
  wire  _io_pc_next_T_5 = pc_type == 3'h2; // @[transfer.scala 38:28]
  wire  _io_pc_next_T_8 = pc_type == 3'h3; // @[transfer.scala 39:28]
  wire [31:0] _io_pc_next_T_10 = rs1_data_32 + io_imm; // @[transfer.scala 39:59]
  wire [31:0] _io_pc_next_T_11 = _io_pc_next_T_10 & 32'hfffffffe; // @[transfer.scala 39:69]
  wire [31:0] _io_pc_next_T_12 = _io_pc_next_T_8 ? _io_pc_next_T_11 : _io_pc_next_T_1; // @[Mux.scala 101:16]
  wire [31:0] _io_pc_next_T_13 = _io_pc_next_T_5 ? _io_pc_next_T_4 : _io_pc_next_T_12; // @[Mux.scala 101:16]
  assign io_jmp_en = _io_pc_next_T_2 | _io_pc_next_T_5 | _io_pc_next_T_8; // @[transfer.scala 41:64]
  assign io_pc_next = _io_pc_next_T_2 ? _io_pc_next_T_4 : _io_pc_next_T_13; // @[Mux.scala 101:16]
endmodule
module alu(
  input  [3:0]  io_alu_op,
  input  [63:0] io_data1,
  input  [63:0] io_data2,
  output [63:0] io_alu_data
);
  wire [5:0] shamt = io_data2[5:0]; // @[cmp_module.scala 18:25]
  wire  _io_alu_data_T = io_alu_op == 4'h0; // @[cmp_module.scala 21:34]
  wire [63:0] _io_alu_data_T_2 = io_data1 + io_data2; // @[cmp_module.scala 21:61]
  wire  _io_alu_data_T_3 = io_alu_op == 4'h1; // @[cmp_module.scala 22:34]
  wire [63:0] _io_alu_data_T_5 = io_data1 - io_data2; // @[cmp_module.scala 22:61]
  wire  _io_alu_data_T_6 = io_alu_op == 4'h2; // @[cmp_module.scala 23:34]
  wire [126:0] _GEN_1 = {{63'd0}, io_data1}; // @[cmp_module.scala 23:61]
  wire [126:0] _io_alu_data_T_7 = _GEN_1 << shamt; // @[cmp_module.scala 23:61]
  wire  _io_alu_data_T_8 = io_alu_op == 4'h3; // @[cmp_module.scala 24:34]
  wire  _io_alu_data_T_11 = $signed(io_data1) < $signed(io_data2); // @[cmp_module.scala 24:69]
  wire  _io_alu_data_T_12 = io_alu_op == 4'h4; // @[cmp_module.scala 25:34]
  wire  _io_alu_data_T_13 = io_data1 < io_data2; // @[cmp_module.scala 25:61]
  wire  _io_alu_data_T_14 = io_alu_op == 4'h5; // @[cmp_module.scala 26:34]
  wire [63:0] _io_alu_data_T_15 = io_data1 ^ io_data2; // @[cmp_module.scala 26:61]
  wire  _io_alu_data_T_16 = io_alu_op == 4'h6; // @[cmp_module.scala 27:34]
  wire [63:0] _io_alu_data_T_17 = io_data1 >> shamt; // @[cmp_module.scala 27:61]
  wire  _io_alu_data_T_18 = io_alu_op == 4'h7; // @[cmp_module.scala 28:34]
  wire [63:0] _io_alu_data_T_21 = $signed(io_data1) >>> shamt; // @[cmp_module.scala 28:79]
  wire  _io_alu_data_T_22 = io_alu_op == 4'h9; // @[cmp_module.scala 29:34]
  wire [63:0] _GEN_0 = {{58'd0}, shamt}; // @[cmp_module.scala 29:61]
  wire [63:0] _io_alu_data_T_23 = io_data1 | _GEN_0; // @[cmp_module.scala 29:61]
  wire  _io_alu_data_T_24 = io_alu_op == 4'ha; // @[cmp_module.scala 30:34]
  wire [63:0] _io_alu_data_T_25 = io_data1 & _GEN_0; // @[cmp_module.scala 30:61]
  wire [63:0] _io_alu_data_T_26 = _io_alu_data_T_24 ? _io_alu_data_T_25 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_27 = _io_alu_data_T_22 ? _io_alu_data_T_23 : _io_alu_data_T_26; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_28 = _io_alu_data_T_18 ? _io_alu_data_T_21 : _io_alu_data_T_27; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_29 = _io_alu_data_T_16 ? _io_alu_data_T_17 : _io_alu_data_T_28; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_30 = _io_alu_data_T_14 ? _io_alu_data_T_15 : _io_alu_data_T_29; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_31 = _io_alu_data_T_12 ? {{63'd0}, _io_alu_data_T_13} : _io_alu_data_T_30; // @[Mux.scala 101:16]
  wire [63:0] _io_alu_data_T_32 = _io_alu_data_T_8 ? {{63'd0}, _io_alu_data_T_11} : _io_alu_data_T_31; // @[Mux.scala 101:16]
  wire [126:0] _io_alu_data_T_33 = _io_alu_data_T_6 ? _io_alu_data_T_7 : {{63'd0}, _io_alu_data_T_32}; // @[Mux.scala 101:16]
  wire [126:0] _io_alu_data_T_34 = _io_alu_data_T_3 ? {{63'd0}, _io_alu_data_T_5} : _io_alu_data_T_33; // @[Mux.scala 101:16]
  wire [126:0] _io_alu_data_T_35 = _io_alu_data_T ? {{63'd0}, _io_alu_data_T_2} : _io_alu_data_T_34; // @[Mux.scala 101:16]
  assign io_alu_data = _io_alu_data_T_35[63:0]; // @[cmp_module.scala 20:17]
endmodule
module walu(
  input  [2:0]  io_walu_op,
  input  [63:0] io_data1,
  input  [63:0] io_data2,
  output [63:0] io_walu_data
);
  wire [31:0] wdata1 = io_data1[31:0]; // @[cmp_module.scala 43:24]
  wire [4:0] shamt = io_data2[4:0]; // @[cmp_module.scala 44:23]
  wire  _walu_data1_T = io_walu_op == 3'h0; // @[cmp_module.scala 47:33]
  wire [63:0] _walu_data1_T_2 = io_data1 + io_data2; // @[cmp_module.scala 47:60]
  wire  _walu_data1_T_3 = io_walu_op == 3'h1; // @[cmp_module.scala 48:33]
  wire [63:0] _walu_data1_T_5 = io_data1 - io_data2; // @[cmp_module.scala 48:60]
  wire  _walu_data1_T_6 = io_walu_op == 3'h2; // @[cmp_module.scala 49:33]
  wire [94:0] _GEN_0 = {{31'd0}, io_data1}; // @[cmp_module.scala 49:60]
  wire [94:0] _walu_data1_T_7 = _GEN_0 << shamt; // @[cmp_module.scala 49:60]
  wire [94:0] _walu_data1_T_8 = _walu_data1_T_6 ? _walu_data1_T_7 : 95'h0; // @[Mux.scala 101:16]
  wire [94:0] _walu_data1_T_9 = _walu_data1_T_3 ? {{31'd0}, _walu_data1_T_5} : _walu_data1_T_8; // @[Mux.scala 101:16]
  wire [94:0] walu_data1 = _walu_data1_T ? {{31'd0}, _walu_data1_T_2} : _walu_data1_T_9; // @[Mux.scala 101:16]
  wire  _walu_data2_T = io_walu_op == 3'h3; // @[cmp_module.scala 52:33]
  wire [31:0] _walu_data2_T_1 = wdata1 >> shamt; // @[cmp_module.scala 52:58]
  wire  _walu_data2_T_2 = io_walu_op == 3'h4; // @[cmp_module.scala 53:33]
  wire [31:0] _walu_data2_T_3 = io_data1[31:0]; // @[cmp_module.scala 53:59]
  wire [31:0] _walu_data2_T_5 = $signed(_walu_data2_T_3) >>> shamt; // @[cmp_module.scala 53:76]
  wire [63:0] _walu_data2_T_6 = _walu_data2_T_2 ? {{32'd0}, _walu_data2_T_5} : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] walu_data2 = _walu_data2_T ? {{32'd0}, _walu_data2_T_1} : _walu_data2_T_6; // @[Mux.scala 101:16]
  wire [31:0] _io_walu_data_T_5 = walu_data2[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [95:0] _io_walu_data_T_6 = {_io_walu_data_T_5,walu_data2}; // @[Cat.scala 31:58]
  wire [95:0] _io_walu_data_T_7 = _walu_data2_T | _walu_data2_T_2 ? _io_walu_data_T_6 : {{1'd0}, walu_data1}; // @[cmp_module.scala 56:22]
  assign io_walu_data = _io_walu_data_T_7[63:0]; // @[cmp_module.scala 56:16]
endmodule
module cmp_module(
  input  [1:0]  io_cmp_sel,
  input  [3:0]  io_alu_op,
  input  [2:0]  io_walu_op,
  input  [63:0] io_data1,
  input  [63:0] io_data2,
  output [63:0] io_alu_data
);
  wire [3:0] alu_io_alu_op; // @[cmp_module.scala 74:20]
  wire [63:0] alu_io_data1; // @[cmp_module.scala 74:20]
  wire [63:0] alu_io_data2; // @[cmp_module.scala 74:20]
  wire [63:0] alu_io_alu_data; // @[cmp_module.scala 74:20]
  wire [2:0] walu_io_walu_op; // @[cmp_module.scala 75:20]
  wire [63:0] walu_io_data1; // @[cmp_module.scala 75:20]
  wire [63:0] walu_io_data2; // @[cmp_module.scala 75:20]
  wire [63:0] walu_io_walu_data; // @[cmp_module.scala 75:20]
  wire  _alu_data_T = io_cmp_sel == 2'h0; // @[cmp_module.scala 86:31]
  wire  _alu_data_T_1 = io_cmp_sel == 2'h1; // @[cmp_module.scala 87:31]
  wire [63:0] _alu_data_T_2 = _alu_data_T_1 ? walu_io_walu_data : 64'h0; // @[Mux.scala 101:16]
  alu alu ( // @[cmp_module.scala 74:20]
    .io_alu_op(alu_io_alu_op),
    .io_data1(alu_io_data1),
    .io_data2(alu_io_data2),
    .io_alu_data(alu_io_alu_data)
  );
  walu walu ( // @[cmp_module.scala 75:20]
    .io_walu_op(walu_io_walu_op),
    .io_data1(walu_io_data1),
    .io_data2(walu_io_data2),
    .io_walu_data(walu_io_walu_data)
  );
  assign io_alu_data = _alu_data_T ? alu_io_alu_data : _alu_data_T_2; // @[Mux.scala 101:16]
  assign alu_io_alu_op = io_alu_op; // @[cmp_module.scala 77:17]
  assign alu_io_data1 = io_data1; // @[cmp_module.scala 78:17]
  assign alu_io_data2 = io_data2; // @[cmp_module.scala 79:17]
  assign walu_io_walu_op = io_walu_op; // @[cmp_module.scala 81:19]
  assign walu_io_data1 = io_data1; // @[cmp_module.scala 82:17]
  assign walu_io_data2 = io_data2; // @[cmp_module.scala 83:17]
endmodule
module core(
  input         clock,
  input         reset,
  output [31:0] io_inst_addr,
  input  [31:0] io_inst,
  output        io_rmem_en,
  output [2:0]  io_rmem_sel,
  output [31:0] io_rmem_addr,
  input  [63:0] io_rmem_data,
  output        io_wmem_en,
  output [1:0]  io_wmem_sel,
  output [31:0] io_wmem_addr,
  output [63:0] io_wmem_data,
  input  [4:0]  io_ctrl_flush,
  input  [4:0]  io_ctrl_hold,
  output [4:0]  io_dec_rs1,
  output [4:0]  io_dec_rs2,
  output        io_dec_rs1_en,
  output        io_dec_rs2_en,
  output        io_exe_wreg_en,
  output [4:0]  io_exe_rd,
  output        io_mem_wreg_en,
  output [4:0]  io_mem_rd,
  output        io_jmp_en
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
`endif // RANDOMIZE_REG_INIT
  wire  RegFile_clock; // @[core.scala 45:26]
  wire  RegFile_reset; // @[core.scala 45:26]
  wire [4:0] RegFile_io_rs1; // @[core.scala 45:26]
  wire [4:0] RegFile_io_rs2; // @[core.scala 45:26]
  wire [63:0] RegFile_io_rs1_data; // @[core.scala 45:26]
  wire [63:0] RegFile_io_rs2_data; // @[core.scala 45:26]
  wire  RegFile_io_wreg_en; // @[core.scala 45:26]
  wire [4:0] RegFile_io_rd; // @[core.scala 45:26]
  wire [63:0] RegFile_io_rd_data; // @[core.scala 45:26]
  wire [31:0] Decoder_io_inst; // @[core.scala 46:26]
  wire [3:0] Decoder_io_br_type; // @[core.scala 46:26]
  wire [2:0] Decoder_io_imm_op; // @[core.scala 46:26]
  wire [1:0] Decoder_io_cmp_sel; // @[core.scala 46:26]
  wire [1:0] Decoder_io_op1_sel; // @[core.scala 46:26]
  wire [1:0] Decoder_io_op2_sel; // @[core.scala 46:26]
  wire [3:0] Decoder_io_alu_op; // @[core.scala 46:26]
  wire [2:0] Decoder_io_walu_op; // @[core.scala 46:26]
  wire  Decoder_io_rmem_en; // @[core.scala 46:26]
  wire [2:0] Decoder_io_rmem_sel; // @[core.scala 46:26]
  wire  Decoder_io_wmem_en; // @[core.scala 46:26]
  wire [1:0] Decoder_io_wmem_sel; // @[core.scala 46:26]
  wire  Decoder_io_wreg_en; // @[core.scala 46:26]
  wire  Decoder_io_rs1_en; // @[core.scala 46:26]
  wire  Decoder_io_rs2_en; // @[core.scala 46:26]
  wire [24:0] ImmSext_io_imm31To7; // @[core.scala 47:26]
  wire [2:0] ImmSext_io_imm_op; // @[core.scala 47:26]
  wire [63:0] ImmSext_io_imm; // @[core.scala 47:26]
  wire [3:0] Transfer_io_br_type; // @[core.scala 48:26]
  wire [63:0] Transfer_io_rs1_data; // @[core.scala 48:26]
  wire [63:0] Transfer_io_rs2_data; // @[core.scala 48:26]
  wire [31:0] Transfer_io_imm; // @[core.scala 48:26]
  wire [31:0] Transfer_io_pc; // @[core.scala 48:26]
  wire  Transfer_io_jmp_en; // @[core.scala 48:26]
  wire [31:0] Transfer_io_pc_next; // @[core.scala 48:26]
  wire [1:0] CMP_Module_io_cmp_sel; // @[core.scala 49:26]
  wire [3:0] CMP_Module_io_alu_op; // @[core.scala 49:26]
  wire [2:0] CMP_Module_io_walu_op; // @[core.scala 49:26]
  wire [63:0] CMP_Module_io_data1; // @[core.scala 49:26]
  wire [63:0] CMP_Module_io_data2; // @[core.scala 49:26]
  wire [63:0] CMP_Module_io_alu_data; // @[core.scala 49:26]
  reg [31:0] if_reg_pc; // @[core.scala 56:41]
  reg [31:0] dec_reg_inst; // @[core.scala 59:41]
  reg [31:0] dec_reg_pc; // @[core.scala 60:41]
  reg [63:0] exe_reg_data1; // @[core.scala 63:41]
  reg [63:0] exe_reg_data2; // @[core.scala 64:41]
  reg [63:0] exe_reg_rs2_data; // @[core.scala 65:41]
  reg [1:0] exe_reg_ctrl_cmp_sel; // @[core.scala 66:41]
  reg [3:0] exe_reg_ctrl_alu_op; // @[core.scala 67:41]
  reg [2:0] exe_reg_ctrl_walu_op; // @[core.scala 68:41]
  reg  exe_reg_ctrl_rmem_en; // @[core.scala 69:41]
  reg [2:0] exe_reg_ctrl_rmem_sel; // @[core.scala 70:41]
  reg  exe_reg_ctrl_wmem_en; // @[core.scala 71:41]
  reg [1:0] exe_reg_ctrl_wmem_sel; // @[core.scala 72:41]
  reg  exe_reg_ctrl_wreg_en; // @[core.scala 73:41]
  reg [4:0] exe_reg_ctrl_rd; // @[core.scala 74:41]
  reg [63:0] mem_reg_alu_data; // @[core.scala 77:41]
  reg [63:0] mem_reg_rs2_data; // @[core.scala 78:41]
  reg  mem_reg_ctrl_rmem_en; // @[core.scala 79:41]
  reg [2:0] mem_reg_ctrl_rmem_sel; // @[core.scala 80:41]
  reg  mem_reg_ctrl_wmem_en; // @[core.scala 81:41]
  reg [1:0] mem_reg_ctrl_wmem_sel; // @[core.scala 82:41]
  reg  mem_reg_ctrl_wreg_en; // @[core.scala 83:41]
  reg [4:0] mem_reg_ctrl_rd; // @[core.scala 84:41]
  reg [63:0] wb_reg_wbdata; // @[core.scala 87:41]
  reg  wb_reg_ctrl_wreg_en; // @[core.scala 88:41]
  reg [4:0] wb_reg_ctrl_rd; // @[core.scala 89:41]
  wire  _rs1_sel_T_3 = mem_reg_ctrl_wreg_en & ~mem_reg_ctrl_rmem_en & mem_reg_ctrl_rd != 5'h0; // @[core.scala 96:66]
  wire  _rs1_sel_T_6 = mem_reg_ctrl_wreg_en & ~mem_reg_ctrl_rmem_en & mem_reg_ctrl_rd != 5'h0 & mem_reg_ctrl_rd ==
    dec_reg_inst[19:15]; // @[core.scala 96:93]
  wire  _rs1_sel_T_8 = wb_reg_ctrl_wreg_en & wb_reg_ctrl_rd != 5'h0; // @[core.scala 97:41]
  wire  _rs1_sel_T_11 = wb_reg_ctrl_wreg_en & wb_reg_ctrl_rd != 5'h0 & wb_reg_ctrl_rd == dec_reg_inst[19:15]; // @[core.scala 97:67]
  wire [1:0] _rs1_sel_T_12 = _rs1_sel_T_11 ? 2'h2 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] rs1_sel = _rs1_sel_T_6 ? 2'h1 : _rs1_sel_T_12; // @[Mux.scala 101:16]
  wire  _rs2_sel_T_6 = _rs1_sel_T_3 & mem_reg_ctrl_rd == dec_reg_inst[24:20]; // @[core.scala 101:93]
  wire  _rs2_sel_T_11 = _rs1_sel_T_8 & wb_reg_ctrl_rd == dec_reg_inst[24:20]; // @[core.scala 102:67]
  wire [1:0] _rs2_sel_T_12 = _rs2_sel_T_11 ? 2'h2 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] rs2_sel = _rs2_sel_T_6 ? 2'h1 : _rs2_sel_T_12; // @[Mux.scala 101:16]
  wire  _rs1_data_T = rs1_sel == 2'h1; // @[core.scala 106:28]
  wire  _rs1_data_T_1 = rs1_sel == 2'h2; // @[core.scala 107:28]
  wire [63:0] _rs1_data_T_2 = _rs1_data_T_1 ? wb_reg_wbdata : RegFile_io_rs1_data; // @[Mux.scala 101:16]
  wire [63:0] rs1_data = _rs1_data_T ? mem_reg_alu_data : _rs1_data_T_2; // @[Mux.scala 101:16]
  wire  _rs2_data_T = rs2_sel == 2'h1; // @[core.scala 111:28]
  wire  _rs2_data_T_1 = rs2_sel == 2'h2; // @[core.scala 112:28]
  wire [63:0] _rs2_data_T_2 = _rs2_data_T_1 ? wb_reg_wbdata : RegFile_io_rs2_data; // @[Mux.scala 101:16]
  wire [63:0] rs2_data = _rs2_data_T ? mem_reg_alu_data : _rs2_data_T_2; // @[Mux.scala 101:16]
  wire  _T_2 = ~io_ctrl_hold[4]; // @[core.scala 123:13]
  wire [31:0] _if_reg_pc_T_1 = if_reg_pc + 32'h4; // @[core.scala 125:73]
  wire  _T_5 = ~io_ctrl_hold[3]; // @[core.scala 139:13]
  wire  _T_8 = ~io_ctrl_hold[2]; // @[core.scala 175:13]
  wire  _exe_reg_data1_T = Decoder_io_op1_sel == 2'h0; // @[core.scala 179:43]
  wire  _exe_reg_data1_T_1 = Decoder_io_op1_sel == 2'h1; // @[core.scala 180:43]
  wire [31:0] _exe_reg_data1_T_4 = _exe_reg_data1_T_1 ? if_reg_pc : 32'h0; // @[Mux.scala 101:16]
  wire  _exe_reg_data2_T = Decoder_io_op2_sel == 2'h0; // @[core.scala 185:43]
  wire  _exe_reg_data2_T_1 = Decoder_io_op2_sel == 2'h1; // @[core.scala 186:43]
  wire  _exe_reg_data2_T_2 = Decoder_io_op2_sel == 2'h2; // @[core.scala 187:43]
  wire [2:0] _exe_reg_data2_T_3 = _exe_reg_data2_T_2 ? 3'h4 : 3'h0; // @[Mux.scala 101:16]
  wire [63:0] _exe_reg_data2_T_4 = _exe_reg_data2_T_1 ? ImmSext_io_imm : {{61'd0}, _exe_reg_data2_T_3}; // @[Mux.scala 101:16]
  wire  _T_10 = io_ctrl_hold == 5'h0; // @[core.scala 221:13]
  wire  _T_13 = ~io_ctrl_hold[0]; // @[core.scala 253:13]
  RegFile RegFile ( // @[core.scala 45:26]
    .clock(RegFile_clock),
    .reset(RegFile_reset),
    .io_rs1(RegFile_io_rs1),
    .io_rs2(RegFile_io_rs2),
    .io_rs1_data(RegFile_io_rs1_data),
    .io_rs2_data(RegFile_io_rs2_data),
    .io_wreg_en(RegFile_io_wreg_en),
    .io_rd(RegFile_io_rd),
    .io_rd_data(RegFile_io_rd_data)
  );
  Decoder Decoder ( // @[core.scala 46:26]
    .io_inst(Decoder_io_inst),
    .io_br_type(Decoder_io_br_type),
    .io_imm_op(Decoder_io_imm_op),
    .io_cmp_sel(Decoder_io_cmp_sel),
    .io_op1_sel(Decoder_io_op1_sel),
    .io_op2_sel(Decoder_io_op2_sel),
    .io_alu_op(Decoder_io_alu_op),
    .io_walu_op(Decoder_io_walu_op),
    .io_rmem_en(Decoder_io_rmem_en),
    .io_rmem_sel(Decoder_io_rmem_sel),
    .io_wmem_en(Decoder_io_wmem_en),
    .io_wmem_sel(Decoder_io_wmem_sel),
    .io_wreg_en(Decoder_io_wreg_en),
    .io_rs1_en(Decoder_io_rs1_en),
    .io_rs2_en(Decoder_io_rs2_en)
  );
  ImmSext ImmSext ( // @[core.scala 47:26]
    .io_imm31To7(ImmSext_io_imm31To7),
    .io_imm_op(ImmSext_io_imm_op),
    .io_imm(ImmSext_io_imm)
  );
  transfer Transfer ( // @[core.scala 48:26]
    .io_br_type(Transfer_io_br_type),
    .io_rs1_data(Transfer_io_rs1_data),
    .io_rs2_data(Transfer_io_rs2_data),
    .io_imm(Transfer_io_imm),
    .io_pc(Transfer_io_pc),
    .io_jmp_en(Transfer_io_jmp_en),
    .io_pc_next(Transfer_io_pc_next)
  );
  cmp_module CMP_Module ( // @[core.scala 49:26]
    .io_cmp_sel(CMP_Module_io_cmp_sel),
    .io_alu_op(CMP_Module_io_alu_op),
    .io_walu_op(CMP_Module_io_walu_op),
    .io_data1(CMP_Module_io_data1),
    .io_data2(CMP_Module_io_data2),
    .io_alu_data(CMP_Module_io_alu_data)
  );
  assign io_inst_addr = if_reg_pc; // @[core.scala 128:16]
  assign io_rmem_en = mem_reg_ctrl_rmem_en; // @[core.scala 233:16]
  assign io_rmem_sel = mem_reg_ctrl_rmem_sel; // @[core.scala 234:16]
  assign io_rmem_addr = mem_reg_alu_data[31:0]; // @[core.scala 235:16]
  assign io_wmem_en = mem_reg_ctrl_wmem_en; // @[core.scala 237:16]
  assign io_wmem_sel = mem_reg_ctrl_wmem_sel; // @[core.scala 238:16]
  assign io_wmem_addr = mem_reg_alu_data[31:0]; // @[core.scala 239:16]
  assign io_wmem_data = mem_reg_rs2_data; // @[core.scala 240:16]
  assign io_dec_rs1 = dec_reg_inst[19:15]; // @[core.scala 160:32]
  assign io_dec_rs2 = dec_reg_inst[24:20]; // @[core.scala 161:32]
  assign io_dec_rs1_en = Decoder_io_rs1_en; // @[core.scala 162:17]
  assign io_dec_rs2_en = Decoder_io_rs2_en; // @[core.scala 163:17]
  assign io_exe_wreg_en = exe_reg_ctrl_wreg_en; // @[core.scala 208:18]
  assign io_exe_rd = exe_reg_ctrl_rd; // @[core.scala 209:18]
  assign io_mem_wreg_en = mem_reg_ctrl_wreg_en; // @[core.scala 242:18]
  assign io_mem_rd = mem_reg_ctrl_rd; // @[core.scala 243:18]
  assign io_jmp_en = Transfer_io_jmp_en; // @[core.scala 164:17]
  assign RegFile_clock = clock;
  assign RegFile_reset = reset;
  assign RegFile_io_rs1 = dec_reg_inst[19:15]; // @[core.scala 147:39]
  assign RegFile_io_rs2 = dec_reg_inst[24:20]; // @[core.scala 148:39]
  assign RegFile_io_wreg_en = wb_reg_ctrl_wreg_en; // @[core.scala 260:22]
  assign RegFile_io_rd = wb_reg_ctrl_rd; // @[core.scala 261:22]
  assign RegFile_io_rd_data = wb_reg_wbdata; // @[core.scala 262:22]
  assign Decoder_io_inst = dec_reg_inst; // @[core.scala 145:24]
  assign ImmSext_io_imm31To7 = dec_reg_inst[31:7]; // @[core.scala 150:39]
  assign ImmSext_io_imm_op = Decoder_io_imm_op; // @[core.scala 151:24]
  assign Transfer_io_br_type = Decoder_io_br_type; // @[core.scala 153:24]
  assign Transfer_io_rs1_data = _rs1_data_T ? mem_reg_alu_data : _rs1_data_T_2; // @[Mux.scala 101:16]
  assign Transfer_io_rs2_data = _rs2_data_T ? mem_reg_alu_data : _rs2_data_T_2; // @[Mux.scala 101:16]
  assign Transfer_io_imm = ImmSext_io_imm[31:0]; // @[core.scala 156:41]
  assign Transfer_io_pc = dec_reg_pc; // @[core.scala 157:24]
  assign CMP_Module_io_cmp_sel = exe_reg_ctrl_cmp_sel; // @[core.scala 201:25]
  assign CMP_Module_io_alu_op = exe_reg_ctrl_alu_op; // @[core.scala 202:25]
  assign CMP_Module_io_walu_op = exe_reg_ctrl_walu_op; // @[core.scala 203:25]
  assign CMP_Module_io_data1 = exe_reg_data1; // @[core.scala 204:25]
  assign CMP_Module_io_data2 = exe_reg_data2; // @[core.scala 205:25]
  always @(posedge clock) begin
    if (reset) begin // @[core.scala 56:41]
      if_reg_pc <= 32'h80000000; // @[core.scala 56:41]
    end else if (io_ctrl_flush[4]) begin // @[core.scala 120:3]
      if_reg_pc <= 32'h80000000; // @[core.scala 121:15]
    end else if (_T_2) begin // @[core.scala 124:3]
      if (Transfer_io_jmp_en) begin // @[core.scala 125:21]
        if_reg_pc <= Transfer_io_pc_next;
      end else begin
        if_reg_pc <= _if_reg_pc_T_1;
      end
    end
    if (reset) begin // @[core.scala 59:41]
      dec_reg_inst <= 32'h13; // @[core.scala 59:41]
    end else if (io_ctrl_flush[3]) begin // @[core.scala 135:3]
      dec_reg_inst <= 32'h13; // @[core.scala 136:18]
    end else if (_T_5) begin // @[core.scala 140:3]
      dec_reg_inst <= io_inst; // @[core.scala 141:18]
    end
    if (reset) begin // @[core.scala 60:41]
      dec_reg_pc <= 32'h80000000; // @[core.scala 60:41]
    end else if (io_ctrl_flush[3]) begin // @[core.scala 135:3]
      dec_reg_pc <= 32'h80000000; // @[core.scala 137:18]
    end else if (_T_5) begin // @[core.scala 140:3]
      dec_reg_pc <= if_reg_pc; // @[core.scala 142:18]
    end
    if (reset) begin // @[core.scala 63:41]
      exe_reg_data1 <= 64'h0; // @[core.scala 63:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        if (_exe_reg_data1_T) begin // @[Mux.scala 101:16]
          exe_reg_data1 <= rs1_data;
        end else begin
          exe_reg_data1 <= {{32'd0}, _exe_reg_data1_T_4};
        end
      end
    end
    if (reset) begin // @[core.scala 64:41]
      exe_reg_data2 <= 64'h0; // @[core.scala 64:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        if (_exe_reg_data2_T) begin // @[Mux.scala 101:16]
          exe_reg_data2 <= rs2_data;
        end else begin
          exe_reg_data2 <= _exe_reg_data2_T_4;
        end
      end
    end
    if (reset) begin // @[core.scala 65:41]
      exe_reg_rs2_data <= 64'h0; // @[core.scala 65:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        if (_rs2_data_T) begin // @[Mux.scala 101:16]
          exe_reg_rs2_data <= mem_reg_alu_data;
        end else begin
          exe_reg_rs2_data <= _rs2_data_T_2;
        end
      end
    end
    if (reset) begin // @[core.scala 66:41]
      exe_reg_ctrl_cmp_sel <= 2'h0; // @[core.scala 66:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_cmp_sel <= Decoder_io_cmp_sel; // @[core.scala 190:27]
      end
    end
    if (reset) begin // @[core.scala 67:41]
      exe_reg_ctrl_alu_op <= 4'h0; // @[core.scala 67:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_alu_op <= Decoder_io_alu_op; // @[core.scala 191:27]
      end
    end
    if (reset) begin // @[core.scala 68:41]
      exe_reg_ctrl_walu_op <= 3'h0; // @[core.scala 68:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_walu_op <= Decoder_io_walu_op; // @[core.scala 192:27]
      end
    end
    if (reset) begin // @[core.scala 69:41]
      exe_reg_ctrl_rmem_en <= 1'h0; // @[core.scala 69:41]
    end else if (io_ctrl_flush[2]) begin // @[core.scala 170:3]
      exe_reg_ctrl_rmem_en <= 1'h0; // @[core.scala 171:26]
    end else if (_T_8) begin // @[core.scala 176:3]
      exe_reg_ctrl_rmem_en <= Decoder_io_rmem_en; // @[core.scala 193:27]
    end
    if (reset) begin // @[core.scala 70:41]
      exe_reg_ctrl_rmem_sel <= 3'h0; // @[core.scala 70:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_rmem_sel <= Decoder_io_rmem_sel; // @[core.scala 194:27]
      end
    end
    if (reset) begin // @[core.scala 71:41]
      exe_reg_ctrl_wmem_en <= 1'h0; // @[core.scala 71:41]
    end else if (io_ctrl_flush[2]) begin // @[core.scala 170:3]
      exe_reg_ctrl_wmem_en <= 1'h0; // @[core.scala 172:26]
    end else if (_T_8) begin // @[core.scala 176:3]
      exe_reg_ctrl_wmem_en <= Decoder_io_wmem_en; // @[core.scala 195:27]
    end
    if (reset) begin // @[core.scala 72:41]
      exe_reg_ctrl_wmem_sel <= 2'h0; // @[core.scala 72:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_wmem_sel <= Decoder_io_wmem_sel; // @[core.scala 196:27]
      end
    end
    if (reset) begin // @[core.scala 73:41]
      exe_reg_ctrl_wreg_en <= 1'h0; // @[core.scala 73:41]
    end else if (io_ctrl_flush[2]) begin // @[core.scala 170:3]
      exe_reg_ctrl_wreg_en <= 1'h0; // @[core.scala 173:26]
    end else if (_T_8) begin // @[core.scala 176:3]
      exe_reg_ctrl_wreg_en <= Decoder_io_wreg_en; // @[core.scala 197:27]
    end
    if (reset) begin // @[core.scala 74:41]
      exe_reg_ctrl_rd <= 5'h0; // @[core.scala 74:41]
    end else if (!(io_ctrl_flush[2])) begin // @[core.scala 170:3]
      if (_T_8) begin // @[core.scala 176:3]
        exe_reg_ctrl_rd <= dec_reg_inst[11:7]; // @[core.scala 198:27]
      end
    end
    if (reset) begin // @[core.scala 77:41]
      mem_reg_alu_data <= 64'h0; // @[core.scala 77:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_alu_data <= CMP_Module_io_alu_data; // @[core.scala 223:27]
      end
    end
    if (reset) begin // @[core.scala 78:41]
      mem_reg_rs2_data <= 64'h0; // @[core.scala 78:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_rs2_data <= exe_reg_rs2_data; // @[core.scala 224:27]
      end
    end
    if (reset) begin // @[core.scala 79:41]
      mem_reg_ctrl_rmem_en <= 1'h0; // @[core.scala 79:41]
    end else if (io_ctrl_flush[1]) begin // @[core.scala 216:3]
      mem_reg_ctrl_rmem_en <= 1'h0; // @[core.scala 217:26]
    end else if (_T_10) begin // @[core.scala 222:3]
      mem_reg_ctrl_rmem_en <= exe_reg_ctrl_rmem_en; // @[core.scala 225:27]
    end
    if (reset) begin // @[core.scala 80:41]
      mem_reg_ctrl_rmem_sel <= 3'h0; // @[core.scala 80:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_ctrl_rmem_sel <= exe_reg_ctrl_rmem_sel; // @[core.scala 226:27]
      end
    end
    if (reset) begin // @[core.scala 81:41]
      mem_reg_ctrl_wmem_en <= 1'h0; // @[core.scala 81:41]
    end else if (io_ctrl_flush[1]) begin // @[core.scala 216:3]
      mem_reg_ctrl_wmem_en <= 1'h0; // @[core.scala 219:26]
    end else if (_T_10) begin // @[core.scala 222:3]
      mem_reg_ctrl_wmem_en <= exe_reg_ctrl_wmem_en; // @[core.scala 227:27]
    end
    if (reset) begin // @[core.scala 82:41]
      mem_reg_ctrl_wmem_sel <= 2'h0; // @[core.scala 82:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_ctrl_wmem_sel <= exe_reg_ctrl_wmem_sel; // @[core.scala 228:27]
      end
    end
    if (reset) begin // @[core.scala 83:41]
      mem_reg_ctrl_wreg_en <= 1'h0; // @[core.scala 83:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_ctrl_wreg_en <= exe_reg_ctrl_wreg_en; // @[core.scala 229:27]
      end
    end
    if (reset) begin // @[core.scala 84:41]
      mem_reg_ctrl_rd <= 5'h0; // @[core.scala 84:41]
    end else if (!(io_ctrl_flush[1])) begin // @[core.scala 216:3]
      if (_T_10) begin // @[core.scala 222:3]
        mem_reg_ctrl_rd <= exe_reg_ctrl_rd; // @[core.scala 230:27]
      end
    end
    if (reset) begin // @[core.scala 87:41]
      wb_reg_wbdata <= 64'h0; // @[core.scala 87:41]
    end else if (!(io_ctrl_flush[0])) begin // @[core.scala 250:3]
      if (_T_13) begin // @[core.scala 254:3]
        if (mem_reg_ctrl_rmem_en) begin // @[core.scala 255:31]
          wb_reg_wbdata <= io_rmem_data;
        end else begin
          wb_reg_wbdata <= mem_reg_alu_data;
        end
      end
    end
    if (reset) begin // @[core.scala 88:41]
      wb_reg_ctrl_wreg_en <= 1'h0; // @[core.scala 88:41]
    end else if (io_ctrl_flush[0]) begin // @[core.scala 250:3]
      wb_reg_ctrl_wreg_en <= 1'h0; // @[core.scala 251:25]
    end else if (_T_13) begin // @[core.scala 254:3]
      wb_reg_ctrl_wreg_en <= mem_reg_ctrl_wreg_en; // @[core.scala 256:25]
    end
    if (reset) begin // @[core.scala 89:41]
      wb_reg_ctrl_rd <= 5'h0; // @[core.scala 89:41]
    end else if (!(io_ctrl_flush[0])) begin // @[core.scala 250:3]
      if (_T_13) begin // @[core.scala 254:3]
        wb_reg_ctrl_rd <= mem_reg_ctrl_rd; // @[core.scala 257:25]
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
  _RAND_0 = {1{`RANDOM}};
  if_reg_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  dec_reg_inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  dec_reg_pc = _RAND_2[31:0];
  _RAND_3 = {2{`RANDOM}};
  exe_reg_data1 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  exe_reg_data2 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  exe_reg_rs2_data = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  exe_reg_ctrl_cmp_sel = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  exe_reg_ctrl_alu_op = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  exe_reg_ctrl_walu_op = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  exe_reg_ctrl_rmem_en = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  exe_reg_ctrl_rmem_sel = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  exe_reg_ctrl_wmem_en = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  exe_reg_ctrl_wmem_sel = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  exe_reg_ctrl_wreg_en = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  exe_reg_ctrl_rd = _RAND_14[4:0];
  _RAND_15 = {2{`RANDOM}};
  mem_reg_alu_data = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  mem_reg_rs2_data = _RAND_16[63:0];
  _RAND_17 = {1{`RANDOM}};
  mem_reg_ctrl_rmem_en = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  mem_reg_ctrl_rmem_sel = _RAND_18[2:0];
  _RAND_19 = {1{`RANDOM}};
  mem_reg_ctrl_wmem_en = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  mem_reg_ctrl_wmem_sel = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  mem_reg_ctrl_wreg_en = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  mem_reg_ctrl_rd = _RAND_22[4:0];
  _RAND_23 = {2{`RANDOM}};
  wb_reg_wbdata = _RAND_23[63:0];
  _RAND_24 = {1{`RANDOM}};
  wb_reg_ctrl_wreg_en = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  wb_reg_ctrl_rd = _RAND_25[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
module CPU(
  input         clock,
  input         reset,
  output        io_mem_rinst_en,
  output [31:0] io_mem_rinst_addr,
  input         io_mem_rinst_valid,
  input  [31:0] io_mem_rinst_data,
  output        io_mem_rmem_en,
  output [31:0] io_mem_rmem_addr,
  output [1:0]  io_mem_rmem_size,
  input         io_mem_rmem_valid,
  input  [63:0] io_mem_rmem_data,
  output        io_mem_wmem_en,
  output [31:0] io_mem_wmem_addr,
  output [1:0]  io_mem_wmem_size,
  output [63:0] io_mem_wmem_data,
  input         io_mem_wmem_valid
);
  wire  Core_clock; // @[CPU.scala 10:20]
  wire  Core_reset; // @[CPU.scala 10:20]
  wire [31:0] Core_io_inst_addr; // @[CPU.scala 10:20]
  wire [31:0] Core_io_inst; // @[CPU.scala 10:20]
  wire  Core_io_rmem_en; // @[CPU.scala 10:20]
  wire [2:0] Core_io_rmem_sel; // @[CPU.scala 10:20]
  wire [31:0] Core_io_rmem_addr; // @[CPU.scala 10:20]
  wire [63:0] Core_io_rmem_data; // @[CPU.scala 10:20]
  wire  Core_io_wmem_en; // @[CPU.scala 10:20]
  wire [1:0] Core_io_wmem_sel; // @[CPU.scala 10:20]
  wire [31:0] Core_io_wmem_addr; // @[CPU.scala 10:20]
  wire [63:0] Core_io_wmem_data; // @[CPU.scala 10:20]
  wire [4:0] Core_io_ctrl_flush; // @[CPU.scala 10:20]
  wire [4:0] Core_io_ctrl_hold; // @[CPU.scala 10:20]
  wire [4:0] Core_io_dec_rs1; // @[CPU.scala 10:20]
  wire [4:0] Core_io_dec_rs2; // @[CPU.scala 10:20]
  wire  Core_io_dec_rs1_en; // @[CPU.scala 10:20]
  wire  Core_io_dec_rs2_en; // @[CPU.scala 10:20]
  wire  Core_io_exe_wreg_en; // @[CPU.scala 10:20]
  wire [4:0] Core_io_exe_rd; // @[CPU.scala 10:20]
  wire  Core_io_mem_wreg_en; // @[CPU.scala 10:20]
  wire [4:0] Core_io_mem_rd; // @[CPU.scala 10:20]
  wire  Core_io_jmp_en; // @[CPU.scala 10:20]
  wire  CoreCtrl_clock; // @[CPU.scala 11:24]
  wire  CoreCtrl_reset; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Core_inst_addr; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Core_inst; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_rmem_en; // @[CPU.scala 11:24]
  wire [2:0] CoreCtrl_io_Core_rmem_sel; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Core_rmem_addr; // @[CPU.scala 11:24]
  wire [63:0] CoreCtrl_io_Core_rmem_data; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_wmem_en; // @[CPU.scala 11:24]
  wire [1:0] CoreCtrl_io_Core_wmem_sel; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Core_wmem_addr; // @[CPU.scala 11:24]
  wire [63:0] CoreCtrl_io_Core_wmem_data; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_ctrl_flush; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_ctrl_hold; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_dec_rs1; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_dec_rs2; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_dec_rs1_en; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_dec_rs2_en; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_exe_wreg_en; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_exe_rd; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_mem_wreg_en; // @[CPU.scala 11:24]
  wire [4:0] CoreCtrl_io_Core_mem_rd; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Core_jmp_en; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_rinst_en; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Mem_mem_rinst_addr; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_rinst_valid; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Mem_mem_rinst_data; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_rmem_en; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Mem_mem_rmem_addr; // @[CPU.scala 11:24]
  wire [1:0] CoreCtrl_io_Mem_mem_rmem_size; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_rmem_valid; // @[CPU.scala 11:24]
  wire [63:0] CoreCtrl_io_Mem_mem_rmem_data; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_wmem_en; // @[CPU.scala 11:24]
  wire [31:0] CoreCtrl_io_Mem_mem_wmem_addr; // @[CPU.scala 11:24]
  wire [1:0] CoreCtrl_io_Mem_mem_wmem_size; // @[CPU.scala 11:24]
  wire [63:0] CoreCtrl_io_Mem_mem_wmem_data; // @[CPU.scala 11:24]
  wire  CoreCtrl_io_Mem_mem_wmem_valid; // @[CPU.scala 11:24]
  core Core ( // @[CPU.scala 10:20]
    .clock(Core_clock),
    .reset(Core_reset),
    .io_inst_addr(Core_io_inst_addr),
    .io_inst(Core_io_inst),
    .io_rmem_en(Core_io_rmem_en),
    .io_rmem_sel(Core_io_rmem_sel),
    .io_rmem_addr(Core_io_rmem_addr),
    .io_rmem_data(Core_io_rmem_data),
    .io_wmem_en(Core_io_wmem_en),
    .io_wmem_sel(Core_io_wmem_sel),
    .io_wmem_addr(Core_io_wmem_addr),
    .io_wmem_data(Core_io_wmem_data),
    .io_ctrl_flush(Core_io_ctrl_flush),
    .io_ctrl_hold(Core_io_ctrl_hold),
    .io_dec_rs1(Core_io_dec_rs1),
    .io_dec_rs2(Core_io_dec_rs2),
    .io_dec_rs1_en(Core_io_dec_rs1_en),
    .io_dec_rs2_en(Core_io_dec_rs2_en),
    .io_exe_wreg_en(Core_io_exe_wreg_en),
    .io_exe_rd(Core_io_exe_rd),
    .io_mem_wreg_en(Core_io_mem_wreg_en),
    .io_mem_rd(Core_io_mem_rd),
    .io_jmp_en(Core_io_jmp_en)
  );
  coreCtrl CoreCtrl ( // @[CPU.scala 11:24]
    .clock(CoreCtrl_clock),
    .reset(CoreCtrl_reset),
    .io_Core_inst_addr(CoreCtrl_io_Core_inst_addr),
    .io_Core_inst(CoreCtrl_io_Core_inst),
    .io_Core_rmem_en(CoreCtrl_io_Core_rmem_en),
    .io_Core_rmem_sel(CoreCtrl_io_Core_rmem_sel),
    .io_Core_rmem_addr(CoreCtrl_io_Core_rmem_addr),
    .io_Core_rmem_data(CoreCtrl_io_Core_rmem_data),
    .io_Core_wmem_en(CoreCtrl_io_Core_wmem_en),
    .io_Core_wmem_sel(CoreCtrl_io_Core_wmem_sel),
    .io_Core_wmem_addr(CoreCtrl_io_Core_wmem_addr),
    .io_Core_wmem_data(CoreCtrl_io_Core_wmem_data),
    .io_Core_ctrl_flush(CoreCtrl_io_Core_ctrl_flush),
    .io_Core_ctrl_hold(CoreCtrl_io_Core_ctrl_hold),
    .io_Core_dec_rs1(CoreCtrl_io_Core_dec_rs1),
    .io_Core_dec_rs2(CoreCtrl_io_Core_dec_rs2),
    .io_Core_dec_rs1_en(CoreCtrl_io_Core_dec_rs1_en),
    .io_Core_dec_rs2_en(CoreCtrl_io_Core_dec_rs2_en),
    .io_Core_exe_wreg_en(CoreCtrl_io_Core_exe_wreg_en),
    .io_Core_exe_rd(CoreCtrl_io_Core_exe_rd),
    .io_Core_mem_wreg_en(CoreCtrl_io_Core_mem_wreg_en),
    .io_Core_mem_rd(CoreCtrl_io_Core_mem_rd),
    .io_Core_jmp_en(CoreCtrl_io_Core_jmp_en),
    .io_Mem_mem_rinst_en(CoreCtrl_io_Mem_mem_rinst_en),
    .io_Mem_mem_rinst_addr(CoreCtrl_io_Mem_mem_rinst_addr),
    .io_Mem_mem_rinst_valid(CoreCtrl_io_Mem_mem_rinst_valid),
    .io_Mem_mem_rinst_data(CoreCtrl_io_Mem_mem_rinst_data),
    .io_Mem_mem_rmem_en(CoreCtrl_io_Mem_mem_rmem_en),
    .io_Mem_mem_rmem_addr(CoreCtrl_io_Mem_mem_rmem_addr),
    .io_Mem_mem_rmem_size(CoreCtrl_io_Mem_mem_rmem_size),
    .io_Mem_mem_rmem_valid(CoreCtrl_io_Mem_mem_rmem_valid),
    .io_Mem_mem_rmem_data(CoreCtrl_io_Mem_mem_rmem_data),
    .io_Mem_mem_wmem_en(CoreCtrl_io_Mem_mem_wmem_en),
    .io_Mem_mem_wmem_addr(CoreCtrl_io_Mem_mem_wmem_addr),
    .io_Mem_mem_wmem_size(CoreCtrl_io_Mem_mem_wmem_size),
    .io_Mem_mem_wmem_data(CoreCtrl_io_Mem_mem_wmem_data),
    .io_Mem_mem_wmem_valid(CoreCtrl_io_Mem_mem_wmem_valid)
  );
  assign io_mem_rinst_en = CoreCtrl_io_Mem_mem_rinst_en; // @[CPU.scala 14:6]
  assign io_mem_rinst_addr = CoreCtrl_io_Mem_mem_rinst_addr; // @[CPU.scala 14:6]
  assign io_mem_rmem_en = CoreCtrl_io_Mem_mem_rmem_en; // @[CPU.scala 14:6]
  assign io_mem_rmem_addr = CoreCtrl_io_Mem_mem_rmem_addr; // @[CPU.scala 14:6]
  assign io_mem_rmem_size = CoreCtrl_io_Mem_mem_rmem_size; // @[CPU.scala 14:6]
  assign io_mem_wmem_en = CoreCtrl_io_Mem_mem_wmem_en; // @[CPU.scala 14:6]
  assign io_mem_wmem_addr = CoreCtrl_io_Mem_mem_wmem_addr; // @[CPU.scala 14:6]
  assign io_mem_wmem_size = CoreCtrl_io_Mem_mem_wmem_size; // @[CPU.scala 14:6]
  assign io_mem_wmem_data = CoreCtrl_io_Mem_mem_wmem_data; // @[CPU.scala 14:6]
  assign Core_clock = clock;
  assign Core_reset = reset;
  assign Core_io_inst = CoreCtrl_io_Core_inst; // @[CPU.scala 13:11]
  assign Core_io_rmem_data = CoreCtrl_io_Core_rmem_data; // @[CPU.scala 13:11]
  assign Core_io_ctrl_flush = CoreCtrl_io_Core_ctrl_flush; // @[CPU.scala 13:11]
  assign Core_io_ctrl_hold = CoreCtrl_io_Core_ctrl_hold; // @[CPU.scala 13:11]
  assign CoreCtrl_clock = clock;
  assign CoreCtrl_reset = reset;
  assign CoreCtrl_io_Core_inst_addr = Core_io_inst_addr; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_rmem_en = Core_io_rmem_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_rmem_sel = Core_io_rmem_sel; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_rmem_addr = Core_io_rmem_addr; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_wmem_en = Core_io_wmem_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_wmem_sel = Core_io_wmem_sel; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_wmem_addr = Core_io_wmem_addr; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_wmem_data = Core_io_wmem_data; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_dec_rs1 = Core_io_dec_rs1; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_dec_rs2 = Core_io_dec_rs2; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_dec_rs1_en = Core_io_dec_rs1_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_dec_rs2_en = Core_io_dec_rs2_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_exe_wreg_en = Core_io_exe_wreg_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_exe_rd = Core_io_exe_rd; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_mem_wreg_en = Core_io_mem_wreg_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_mem_rd = Core_io_mem_rd; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Core_jmp_en = Core_io_jmp_en; // @[CPU.scala 13:11]
  assign CoreCtrl_io_Mem_mem_rinst_valid = io_mem_rinst_valid; // @[CPU.scala 14:6]
  assign CoreCtrl_io_Mem_mem_rinst_data = io_mem_rinst_data; // @[CPU.scala 14:6]
  assign CoreCtrl_io_Mem_mem_rmem_valid = io_mem_rmem_valid; // @[CPU.scala 14:6]
  assign CoreCtrl_io_Mem_mem_rmem_data = io_mem_rmem_data; // @[CPU.scala 14:6]
  assign CoreCtrl_io_Mem_mem_wmem_valid = io_mem_wmem_valid; // @[CPU.scala 14:6]
endmodule
