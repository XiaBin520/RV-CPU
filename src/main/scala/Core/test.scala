
import chisel3._
import chisel3.util._

// import RVCore.Instructions._
// import RVCore.Parameters._


class test extends Module{
  val io = IO(new Bundle{
    val c = Input(UInt(8.W))
    val d = Output(UInt(8.W))
  })
  io.d := MuxCase(0.U, 
          Array(
            (io.c === 1.U) -> 11.U,
            (io.c === 2.U) -> 22.U
          ))
}


object test extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new test())
}


