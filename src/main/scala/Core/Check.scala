package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._

class Check extends RawModule{
  val io = IO(new Bundle{
    val ctrl_flush  = Output(UInt(5.W))
    val ctrl_hold   = Output(UInt(5.W))

    val dec_rs1     = Input(UInt(5.W))
    val dec_rs2     = Input(UInt(5.W))
    val dec_rs1_en  = Input(Bool())
    val dec_rs2_en  = Input(Bool())
    val exe_wreg_en = Input(Bool())
    val exe_rd      = Input(UInt(5.W))
    val mem_wreg_en = Input(Bool())
    val mem_rd      = Input(UInt(5.W))
    val mem_rmem_en = Input(Bool())
    val jmp_en      = Input(Bool())
  })

  io.ctrl_flush := MuxCase("b00000".U, 
                   Array(
                    (io.exe_wreg_en && io.dec_rs1_en  && io.exe_rd =/= 0.U && io.exe_rd === io.dec_rs1) -> "b00100".U,
                    (io.exe_wreg_en && io.dec_rs2_en  && io.exe_rd =/= 0.U && io.exe_rd === io.dec_rs2) -> "b00100".U,
                    (io.mem_wreg_en && io.mem_rmem_en && io.dec_rs1_en && io.mem_rd =/= 0.U && io.mem_rd === io.dec_rs1) -> "b00100".U,
                    (io.mem_wreg_en && io.mem_rmem_en && io.dec_rs2_en && io.mem_rd =/= 0.U && io.mem_rd === io.dec_rs2) -> "b00100".U,
                    (io.jmp_en) -> "b01000".U
                   ))
  io.ctrl_hold  := MuxCase("b00000".U, 
                   Array(
                    (io.exe_wreg_en && io.dec_rs1_en  && io.exe_rd =/= 0.U && io.exe_rd === io.dec_rs1) -> "b11000".U,
                    (io.exe_wreg_en && io.dec_rs2_en  && io.exe_rd =/= 0.U && io.exe_rd === io.dec_rs2) -> "b11000".U,
                    (io.mem_wreg_en && io.mem_rmem_en && io.dec_rs1_en && io.mem_rd =/= 0.U && io.mem_rd === io.dec_rs1) -> "b11000".U,
                    (io.mem_wreg_en && io.mem_rmem_en && io.dec_rs2_en && io.mem_rd =/= 0.U && io.mem_rd === io.dec_rs2) -> "b11000".U
                   ))
}