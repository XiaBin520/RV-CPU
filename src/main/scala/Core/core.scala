package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._

class core_io extends Bundle{
  val inst_addr = Output(UInt(32.W))
  val inst      = Input(UInt(32.W))

  val rmem_en   = Output(Bool())
  val rmem_sel  = Output(UInt(3.W))
  val rmem_addr = Output(UInt(32.W))
  val rmem_data = Input(UInt(64.W))

  val wmem_en   = Output(Bool())
  val wmem_sel  = Output(UInt(2.W))
  val wmem_addr = Output(UInt(32.W))
  val wmem_data = Output(UInt(64.W))

  val ctrl_flush = Input(UInt(5.W))
  val ctrl_hold  = Input(UInt(5.W))

  val dec_rs1     = Output(UInt(5.W))
  val dec_rs2     = Output(UInt(5.W))
  val dec_rs1_en  = Output(Bool())
  val dec_rs2_en  = Output(Bool())
  val exe_wreg_en = Output(Bool())
  val exe_rd      = Output(UInt(5.W))
  val mem_wreg_en = Output(Bool())
  val mem_rd      = Output(UInt(5.W))
  val jmp_en      = Output(Bool())
}




class core extends Module{
  val io = IO(new core_io())

  //**********************************
  //  Main Four Module
  val RegFile    = Module(new RegFile())
  val Decoder    = Module(new Decoder())
  val ImmSext    = Module(new ImmSext())
  val Transfer   = Module(new transfer())
  val CMP_Module = Module(new cmp_module())


  //**********************************
  // Pipeline State Registers

  //  Instructions Fetch State
  val if_reg_pc              =   RegInit(RESET_ADDR)

  //  Instruction Decode State
  val dec_reg_inst           =   RegInit(NOP_INST)
  val dec_reg_pc             =   RegInit(RESET_ADDR)

  // Execute State
  val exe_reg_data1          =   RegInit(0.U(64.W))
  val exe_reg_data2          =   RegInit(0.U(64.W))
  val exe_reg_rs2_data       =   RegInit(0.U(64.W))
  val exe_reg_ctrl_cmp_sel   =   RegInit(CMP_ALU)
  val exe_reg_ctrl_alu_op    =   RegInit(ALU_ADD)
  val exe_reg_ctrl_walu_op   =   RegInit(WALU_ADD)
  val exe_reg_ctrl_rmem_en   =   RegInit(false.B)
  val exe_reg_ctrl_rmem_sel  =   RegInit(RMEM_LB)
  val exe_reg_ctrl_wmem_en   =   RegInit(false.B)
  val exe_reg_ctrl_wmem_sel  =   RegInit(WMEM_SB)
  val exe_reg_ctrl_wreg_en   =   RegInit(false.B)
  val exe_reg_ctrl_rd        =   RegInit(0.U(5.W))

  // Memory State
  val mem_reg_alu_data       =   RegInit(0.U(64.W))
  val mem_reg_rs2_data       =   RegInit(0.U(64.W))
  val mem_reg_ctrl_rmem_en   =   RegInit(false.B)
  val mem_reg_ctrl_rmem_sel  =   RegInit(RMEM_LB)
  val mem_reg_ctrl_wmem_en   =   RegInit(false.B)
  val mem_reg_ctrl_wmem_sel  =   RegInit(WMEM_SB)
  val mem_reg_ctrl_wreg_en   =   RegInit(false.B)
  val mem_reg_ctrl_rd        =   RegInit(0.U(5.W))

  // Writeback State
  val wb_reg_wbdata          =   RegInit(0.U(64.W))
  val wb_reg_ctrl_wreg_en    =   RegInit(false.B)
  val wb_reg_ctrl_rd         =   RegInit(0.U(5.W))

  
  //**********************************
  //  Data Bypass
  val rs1_sel = MuxCase(RS1_DEC, 
                Array(
                  (mem_reg_ctrl_wreg_en && !mem_reg_ctrl_rmem_en && mem_reg_ctrl_rd =/= 0.U && mem_reg_ctrl_rd === dec_reg_inst(19, 15)) -> RS1_MEM,
                  (wb_reg_ctrl_wreg_en  && wb_reg_ctrl_rd =/= 0.U && wb_reg_ctrl_rd === dec_reg_inst(19, 15)) -> RS1_WB
                ))
  val rs2_sel = MuxCase(RS2_DEC, 
                Array(
                  (mem_reg_ctrl_wreg_en && !mem_reg_ctrl_rmem_en && mem_reg_ctrl_rd =/= 0.U && mem_reg_ctrl_rd === dec_reg_inst(24, 20)) -> RS2_MEM,
                  (wb_reg_ctrl_wreg_en  && wb_reg_ctrl_rd =/= 0.U && wb_reg_ctrl_rd === dec_reg_inst(24, 20)) -> RS2_WB
                ))
  val rs1_data = MuxCase(RegFile.io.rs1_data, 
                 Array(
                  (rs1_sel === RS1_MEM) -> mem_reg_alu_data,
                  (rs1_sel === RS1_WB)  -> wb_reg_wbdata
                ))
  val rs2_data = MuxCase(RegFile.io.rs2_data, 
                 Array(
                  (rs2_sel === RS2_MEM) -> mem_reg_alu_data,
                  (rs2_sel === RS2_WB)  -> wb_reg_wbdata
                ))


  //**********************************
  // Instruction Fetch Stage

  when(io.ctrl_flush(4))
  {
    if_reg_pc := RESET_ADDR
  }
  .elsewhen(!io.ctrl_hold(4))
  {
    if_reg_pc := Mux(Transfer.io.jmp_en, Transfer.io.pc_next, if_reg_pc + 4.U)
  }

  io.inst_addr := if_reg_pc



  //**********************************
  // Instruction Decode Stage
  when(io.ctrl_flush(3))
  {
    dec_reg_inst := NOP_INST
    dec_reg_pc   := RESET_ADDR
  }
  .elsewhen(!io.ctrl_hold(3))
  {
    dec_reg_inst := io.inst
    dec_reg_pc   := if_reg_pc
  }

  Decoder.io.inst      := dec_reg_inst

  RegFile.io.rs1       := dec_reg_inst(19, 15)
  RegFile.io.rs2       := dec_reg_inst(24, 20)

  ImmSext.io.imm31To7  := dec_reg_inst(31, 7)
  ImmSext.io.imm_op    := Decoder.io.imm_op

  Transfer.io.br_type  := Decoder.io.br_type
  Transfer.io.rs1_data := rs1_data
  Transfer.io.rs2_data := rs2_data
  Transfer.io.imm      := ImmSext.io.imm(31, 0)
  Transfer.io.pc       := dec_reg_pc
  

  io.dec_rs1    := dec_reg_inst(19, 15)
  io.dec_rs2    := dec_reg_inst(24, 20)
  io.dec_rs1_en := Decoder.io.rs1_en
  io.dec_rs2_en := Decoder.io.rs2_en
  io.jmp_en     := Transfer.io.jmp_en


  //**********************************
  // Execute Stage
  when(io.ctrl_flush(2))
  {
    exe_reg_ctrl_rmem_en := false.B
    exe_reg_ctrl_wmem_en := false.B
    exe_reg_ctrl_wreg_en := false.B
  }
  .elsewhen(!io.ctrl_hold(2))
  {
    exe_reg_data1 := MuxCase(0.U, 
                     Array(
                      (Decoder.io.op1_sel === OP1_RS1)  -> rs1_data,
                      (Decoder.io.op1_sel === OP1_PC)   -> if_reg_pc,
                      (Decoder.io.op1_sel === OP1_ZERO) -> 0.U
                    ))
    exe_reg_data2 := MuxCase(0.U, 
                     Array(
                      (Decoder.io.op2_sel === OP2_RS2)  -> rs2_data,
                      (Decoder.io.op2_sel === OP2_IMM)  -> ImmSext.io.imm,
                      (Decoder.io.op2_sel === OP2_FOUR) -> 4.U
                    ))
    exe_reg_rs2_data      := rs2_data
    exe_reg_ctrl_cmp_sel  := Decoder.io.cmp_sel
    exe_reg_ctrl_alu_op   := Decoder.io.alu_op
    exe_reg_ctrl_walu_op  := Decoder.io.walu_op
    exe_reg_ctrl_rmem_en  := Decoder.io.rmem_en
    exe_reg_ctrl_rmem_sel := Decoder.io.rmem_sel
    exe_reg_ctrl_wmem_en  := Decoder.io.wmem_en
    exe_reg_ctrl_wmem_sel := Decoder.io.wmem_sel
    exe_reg_ctrl_wreg_en  := Decoder.io.wreg_en
    exe_reg_ctrl_rd       := dec_reg_inst(11, 7)
  }

  CMP_Module.io.cmp_sel := exe_reg_ctrl_cmp_sel
  CMP_Module.io.alu_op  := exe_reg_ctrl_alu_op
  CMP_Module.io.walu_op := exe_reg_ctrl_walu_op
  CMP_Module.io.data1   := exe_reg_data1
  CMP_Module.io.data2   := exe_reg_data2


  io.exe_wreg_en := exe_reg_ctrl_wreg_en
  io.exe_rd      := exe_reg_ctrl_rd



  //**********************************
  // Memory Stage
  when(io.ctrl_flush(1))
  {
    mem_reg_ctrl_rmem_en := false.B
    mem_reg_ctrl_wmem_en := false.B
    mem_reg_ctrl_wmem_en := false.B
  }
  .elsewhen(!io.ctrl_hold)
  {
    mem_reg_alu_data      := CMP_Module.io.alu_data
    mem_reg_rs2_data      := exe_reg_rs2_data
    mem_reg_ctrl_rmem_en  := exe_reg_ctrl_rmem_en
    mem_reg_ctrl_rmem_sel := exe_reg_ctrl_rmem_sel
    mem_reg_ctrl_wmem_en  := exe_reg_ctrl_wmem_en
    mem_reg_ctrl_wmem_sel := exe_reg_ctrl_wmem_sel
    mem_reg_ctrl_wreg_en  := exe_reg_ctrl_wreg_en
    mem_reg_ctrl_rd       := exe_reg_ctrl_rd
  }

  io.rmem_en   := mem_reg_ctrl_rmem_en
  io.rmem_sel  := mem_reg_ctrl_rmem_sel
  io.rmem_addr := mem_reg_alu_data
  
  io.wmem_en   := mem_reg_ctrl_wmem_en
  io.wmem_sel  := mem_reg_ctrl_wmem_sel
  io.wmem_addr := mem_reg_alu_data
  io.wmem_data := mem_reg_rs2_data

  io.mem_wreg_en := mem_reg_ctrl_wreg_en
  io.mem_rd      := mem_reg_ctrl_rd



  //**********************************
  // Writeback Stage
  when(io.ctrl_flush(0))
  {
    wb_reg_ctrl_wreg_en := false.B
  }
  .elsewhen(!io.ctrl_hold(0))
  {
    wb_reg_wbdata       := Mux(mem_reg_ctrl_rmem_en, io.rmem_data, mem_reg_alu_data)
    wb_reg_ctrl_wreg_en := mem_reg_ctrl_wreg_en
    wb_reg_ctrl_rd      := mem_reg_ctrl_rd
  }

  RegFile.io.wreg_en := wb_reg_ctrl_wreg_en
  RegFile.io.rd      := wb_reg_ctrl_rd
  RegFile.io.rd_data := wb_reg_wbdata
}



object core extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new core())
}
