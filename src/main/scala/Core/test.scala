import chisel3._
import chisel3.util._



class testBox extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val reg_data = Input(Vec(32, UInt(64.W)))
  })

  setInline("testBox.v", 
  """
    |import "DPI-C" function void reg_value(input int a, input longint b);
    |
    |module testBox(
    | input [63:0] reg_data [0:31],
    |);
    | always @(*) begin
    |   interger = i;
    |   for(i = 0; i < 32; i = i + 1) begin
    |     reg_value(i, reg_data[i]);
    |   end
    | end
    |endmodule
  """.stripMargin)
}






class test extends Module{
  val io = IO(new Bundle{
    val wen   = Input(Bool())
    val waddr = Input(UInt(5.W))
    val wdata = Input(UInt(64.W))
    val rdata = Output(UInt(64.W))
  })


  val reg_file = RegInit( VecInit( Seq.fill(32)(0.U(64.W)) ) )
  when(io.wen)
  {
    reg_file(io.waddr) := io.wdata
  }

  io.rdata := reg_file(io.waddr)


  val Box = Module(new testBox())
  Box.io.reg_data := reg_file
}







object test extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new test())
}