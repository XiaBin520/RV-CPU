package RVCore

import chisel3._
import chisel3.util._


class CPU extends Module{
  val io = IO(new coreCtrl_Mem_io())

  val Core = Module(new core())
  val CoreCtrl = Module(new coreCtrl())

  Core.io <> CoreCtrl.io.Core
  io <> CoreCtrl.io.Mem
}

object CPU extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new CPU())
}