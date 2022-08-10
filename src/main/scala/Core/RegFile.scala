package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._

class RegFile extends Module {
  val io = IO(new Bundle{
    val rs1      = Input(UInt(5.W))
    val rs2      = Input(UInt(5.W))
    val rs1_data = Output(UInt(64.W))
    val rs2_data = Output(UInt(64.W))
    val wreg_en  = Input(Bool())
    val rd       = Input(UInt(5.W))
    val rd_data  = Input(UInt(64.W))
  })

  val gprFile = RegInit( VecInit(  Seq.fill(32)(0.U(64.W))  ) )
  io.rs1_data := Mux((io.rs1 === io.rd && io.wreg_en && io.rd =/= 0.U), io.rd_data, gprFile(io.rs1))
  io.rs2_data := Mux((io.rs2 === io.rd && io.wreg_en && io.rd =/= 0.U), io.rd_data, gprFile(io.rs2))
  when(io.wreg_en) {gprFile(io.rd) := io.rd_data}
  gprFile(0) := 0.U(64.W)
}


object RegFile extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new RegFile())
}
