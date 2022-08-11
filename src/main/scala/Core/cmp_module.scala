package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._


class alu extends RawModule{
    val io = IO(new Bundle{
      val alu_op   = Input(UInt(4.W))
      val data1    = Input(UInt(64.W))
      val data2    = Input(UInt(64.W))
      val alu_data = Output(UInt(64.W))
    })

    val shamt = io.data2(5, 0)

    io.alu_data := MuxCase(0.U(64.W), Array(
                      (io.alu_op === ALU_ADD)  -> (io.data1 + io.data2),
                      (io.alu_op === ALU_SUB)  -> (io.data1 - io.data2),
                      (io.alu_op === ALU_SLL)  -> (io.data1 << shamt),
                      (io.alu_op === ALU_SLT)  -> ((io.data1.asSInt < io.data2.asSInt).asUInt),
                      (io.alu_op === ALU_SLTU) -> (io.data1 < io.data2),
                      (io.alu_op === ALU_XOR)  -> (io.data1 ^ io.data2),
                      (io.alu_op === ALU_SRL)  -> (io.data1 >> shamt),
                      (io.alu_op === ALU_SRA)  -> ((io.data1.asSInt >> shamt).asUInt),
                      (io.alu_op === ALU_OR)   -> (io.data1 | shamt),
                      (io.alu_op === ALU_AND)  -> (io.data1 & shamt),
    ))
}


class walu  extends RawModule{
  val io = IO(new Bundle{
    val walu_op   = Input(UInt(3.W))
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val walu_data = Output(UInt(64.W))
  })

  val wdata1 = io.data1(31, 0)
  val shamt = io.data2(4, 0)

  val walu_data1 = MuxCase(0.U(64.W), Array(
                    (io.walu_op === WALU_ADD) -> (io.data1 + io.data2),
                    (io.walu_op === WALU_SUB) -> (io.data1 - io.data2),
                    (io.walu_op === WALU_SLL) -> (io.data1 << shamt)
                  ))
  val walu_data2 = MuxCase(0.U(64.W), Array(
                    (io.walu_op === WALU_SRL) -> (wdata1 >> shamt),
                    (io.walu_op === WALU_SRA) -> ((wdata1.asSInt >> shamt).asUInt),
                  ))

  io.walu_data := Mux(  (io.walu_op === WALU_SRL) || (io.walu_op === WALU_SRA), 
                          Cat( Fill(32, walu_data2(31)), walu_data2 ), 
                          walu_data1
                  )
}



class cmp_module extends Module{
  val io = IO(new Bundle{
    val cmp_sel  = Input(UInt(2.W))
    val alu_op   = Input(UInt(4.W))
    val walu_op  = Input(UInt(3.W))
    val data1    = Input(UInt(64.W))
    val data2    = Input(UInt(64.W))
    val alu_data = Output(UInt(64.W))
  })

  val alu  = Module(new alu())
  val walu = Module(new walu())

  alu.io.alu_op := io.alu_op
  alu.io.data1  := io.data1
  alu.io.data2  := io.data2

  walu.io.walu_op := io.walu_op
  walu.io.data1 := io.data1
  walu.io.data2 := io.data2

  val alu_data = MuxCase(0.U(64.W), Array(
                  (io.cmp_sel === CMP_ALU)  -> alu.io.alu_data,
                  (io.cmp_sel === CMP_WALU) -> walu.io.walu_data
                ))
  io.alu_data := alu_data
}


