import chisel3._
import chisel3.util._

class testBox(n: Int) extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val x = Input(UInt(n.W))
    val y = Input(UInt(n.W))
    val z = Output(UInt(n.W))
  })

  setInline("testAdd.v", 
  """module testAdd(
    | input [${n-1}:0] x,
    | input [${n-1}:0] y,
    | input [${n-1}:0] z
    | );
    |
    | assign z = x + y;
    | 
    | endmodule
  """.stripMargin)
}


class test extends Module{
  val io = IO(new Bundle{
    val a = Input(UInt(64.W))
    val b = Input(UInt(64.W))
    val c = Output(UInt(64.W))
  })
  val reg_add = RegInit(0.U(64.W))
  val Add = Module(new testBox(64))
  Add.io.x := io.a
  Add.io.y := io.b
  reg_add := Add.io.z
  io.c := reg_add
}


object test extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new test())
}


