package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._

class ImmSext extends RawModule {
    val io = IO(new Bundle{
      val imm31To7 = Input(UInt(25.W))
      val imm_op   = Input(UInt(3.W))
      val imm      = Output(UInt(64.W))
    })

    val imm31To7 = io.imm31To7
    val imm_op   = io.imm_op

    io.imm := MuxCase(0.U(64.W), 
             Array(
                (imm_op === IMM_RTYPE) -> Fill(64, 0.U),
                (imm_op === IMM_ITYPE) -> Cat(Fill(64-12, imm31To7(31-7)),  imm31To7(31-7, 20-7)),
                (imm_op === IMM_STYPE) -> Cat(Fill(64-12, imm31To7(31-7)),  imm31To7(31-7, 25-7),  imm31To7(11-7, 7-7)),
                (imm_op === IMM_BTYPE) -> Cat(Fill(64-13, imm31To7(31-7)),  imm31To7(31-7),  imm31To7(7-7), imm31To7(30-7, 25-7), imm31To7(11-7, 8-7), 0.U(1.W)),
                (imm_op === IMM_UTYPE) -> Cat(Fill(64-32, imm31To7(31-7)), imm31To7(31-7, 12-7), 0.U(12.W)),
                (imm_op === IMM_JTYPE) -> Cat(Fill(64-21, imm31To7(31-7)), imm31To7(31-7), imm31To7(19-7, 12-7), imm31To7(20-7), imm31To7(30-7, 21-7), 0.U(1.W))
            ))
}




object ImmSext extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new ImmSext())
}
