
package RVCore

import chisel3._
import chisel3.util._

object StateFSM{
  val S_IDLE          =   0.U(2.W)
  val S_SEND          =   1.U(2.W)
  val S_WAIT          =   2.U(2.W)
  val S_DONE          =   3.U(2.W)

  val S_IDLE3         =   0.U(3.W)
  val S_RINST         =   1.U(3.W)
  val S_RINST_WAIT    =   2.U(3.W)
  val S_RMEM          =   3.U(3.W)
  val S_RMEM_WAIT     =   4.U(3.W)
  val S_WMEM          =   5.U(3.W)
  val S_WMEM_WAIT     =   6.U(3.W)
  val S_RUN           =   7.U(3.W)
}
