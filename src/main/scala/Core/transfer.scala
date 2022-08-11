package RVCore

import chisel3._
import chisel3.util._

import RVCore.Parameters._




class transfer extends RawModule{
  val io = IO(new Bundle{
    val br_type  = Input(UInt(4.W))
    val rs1_data = Input(UInt(64.W))
    val rs2_data = Input(UInt(64.W))
    val imm      = Input(UInt(32.W))
    val pc       = Input(UInt(32.W))
    val jmp_en   = Output(Bool())
    val pc_next  = Output(UInt(32.W))
  })

  val pc_type = MuxCase(PC_4,
                Array(
                  (io.br_type === BR_EQ && io.rs1_data === io.rs2_data) -> PC_BRJMP,
                  (io.br_type === BR_NE && io.rs1_data =/= io.rs2_data) -> PC_BRJMP,
                  (io.br_type === BR_LS && io.rs1_data.asSInt  <   io.rs2_data.asSInt) -> PC_BRJMP,
                  (io.br_type === BR_GE && io.rs1_data.asSInt  >=  io.rs2_data.asSInt) -> PC_BRJMP,
                  (io.br_type === BR_LSU && io.rs1_data.asUInt  <  io.rs2_data.asUInt) -> PC_BRJMP,
                  (io.br_type === BR_GEU && io.rs1_data.asUInt >=  io.rs2_data.asUInt) -> PC_BRJMP,
                  (io.br_type === BR_JAL)  -> PC_JAL,
                  (io.br_type === BR_JALR) -> PC_JALR
                ))

  val rs1_data_32 = io.rs1_data(31, 0)
  io.pc_next := MuxCase((io.pc + 4.U(32.W)), 
                Array(
                  (pc_type === PC_BRJMP) -> (io.pc + io.imm),
                  (pc_type === PC_JAL)   -> (io.pc + io.imm),
                  (pc_type === PC_JALR)  -> ((rs1_data_32 + io.imm) & "hfffffffe".U)
                ))
  io.jmp_en := Mux((pc_type === PC_BRJMP || pc_type === PC_JAL || pc_type === PC_JALR), true.B, false.B)
}
