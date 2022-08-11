
package RVCore

import chisel3._
import chisel3.util._

object Parameters{
  val   PC_4        =   0.U(3.W)
  val   PC_BRJMP    =   1.U(3.W)
  val   PC_JAL      =   2.U(3.W)
  val   PC_JALR     =   3.U(3.W)
  val   PC_EXC      =   4.U(3.W)

  val   BR_NO       =   0.U(4.W)
  val   BR_EQ       =   1.U(4.W)
  val   BR_NE       =   2.U(4.W)
  val   BR_LS       =   3.U(4.W)
  val   BR_GE       =   4.U(4.W)
  val   BR_LSU      =   5.U(4.W)
  val   BR_GEU      =   6.U(4.W)
  val   BR_JAL      =   7.U(4.W)
  val   BR_JALR     =   8.U(4.W)

  val   IMM_RTYPE   =   0.U(3.W)
  val   IMM_ITYPE   =   1.U(3.W)
  val   IMM_STYPE   =   2.U(3.W)
  val   IMM_BTYPE   =   3.U(3.W)
  val   IMM_UTYPE   =   4.U(3.W)
  val   IMM_JTYPE   =   5.U(3.W)

  val   CMP_ALU     =   0.U(2.W)
  val   CMP_WALU    =   1.U(2.W)
  val   CMP_MALU    =   2.U(2.W)

  val   OP1_RS1     =   0.U(2.W)
  val   OP1_PC      =   1.U(2.W)
  val   OP1_ZERO    =   2.U(2.W)
  val   OP1_NO      =   3.U(2.W)

  val   OP2_RS2     =   0.U(2.W)
  val   OP2_IMM     =   1.U(2.W)
  val   OP2_FOUR    =   2.U(2.W)
  val   OP2_CSR     =   3.U(2.W)

  val   ALU_ADD     =   0.U(4.W)
  val   ALU_SUB     =   1.U(4.W)
  val   ALU_SLL     =   2.U(4.W)
  val   ALU_SLT     =   3.U(4.W)
  val   ALU_SLTU    =   4.U(4.W)
  val   ALU_XOR     =   5.U(4.W)
  val   ALU_SRL     =   6.U(4.W)
  val   ALU_SRA     =   7.U(4.W)
  val   ALU_OR      =   9.U(4.W)
  val   ALU_AND     =   10.U(4.W)

  val   WALU_ADD    =   0.U(3.W)
  val   WALU_SUB    =   1.U(3.W)
  val   WALU_SLL    =   2.U(3.W)
  val   WALU_SRL    =   3.U(3.W)
  val   WALU_SRA    =   4.U(3.W)

  val   RMEM_EN     =   true.B
  val   RMEM_NO     =   false.B

  val   RMEM_LB     =   0.U(3.W)
  val   RMEM_LH     =   1.U(3.W)
  val   RMEM_LW     =   2.U(3.W)
  val   RMEM_LD     =   3.U(3.W)
  val   RMEM_LBU    =   4.U(3.W)
  val   RMEM_LHU    =   5.U(3.W)
  val   RMEM_LWU    =   6.U(3.W)

  val   WMEM_EN     =   true.B
  val   WMEM_NO     =   false.B

  val   WMEM_SB     =   0.U(2.W)
  val   WMEM_SH     =   1.U(2.W)
  val   WMEM_SW     =   2.U(2.W)
  val   WMEM_SD     =   3.U(2.W)

  val   WREG_EN     =   true.B
  val   WREG_NO     =   false.B

  val   RS1_EN      =   true.B
  val   RS1_NO      =   false.B
  val   RS2_EN      =   true.B
  val   RS2_NO      =   false.B

  val   RS1_DEC     =   0.U(2.W)
  val   RS1_MEM     =   1.U(2.W)
  val   RS1_WB      =   2.U(2.W)
  val   RS2_DEC     =   0.U(2.W)
  val   RS2_MEM     =   1.U(2.W)
  val   RS2_WB      =   2.U(2.W)

  val   SIZE_1B     =   0.U(2.W)
  val   SIZE_2B     =   1.U(2.W)
  val   SIZE_4B     =   2.U(2.W)
  val   SIZE_8B     =   3.U(2.W)

  val   RESET_ADDR  =   "h80000000".U(32.W)
  val   NOP_INST    =   "h0013".U(32.W)
}
