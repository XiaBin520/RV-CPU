package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._

class Decoder extends RawModule{
  val io = IO(new Bundle{
    val   inst        =   Input(UInt(32.W))
    val   br_type     =   Output(UInt(4.W))
    val   imm_op      =   Output(UInt(3.W))
    val   cmp_sel     =   Output(UInt(2.W))
    val   op1_sel     =   Output(UInt(2.W))
    val   op2_sel     =   Output(UInt(2.W))
    val   alu_op      =   Output(UInt(4.W))
    val   walu_op     =   Output(UInt(3.W))
    val   rmem_en     =   Output(Bool())
    val   rmem_sel    =   Output(UInt(3.W))
    val   wmem_en     =   Output(Bool())
    val   wmem_sel    =   Output(UInt(2.W))
    val   wreg_en     =   Output(Bool())
    val   rs1_en      =   Output(Bool())
    val   rs2_en      =   Output(Bool())
  })

  val ctrl_signals = 
      ListLookup(io.inst,
//                           | br tyep |   imm op    | cmp sel | op1 sel | op2 sel  | alu op  | walu op  | rmem en | rmem sel | wmem en | wmem sel | wreg en  | rs1 en | rs2 en 
                        List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_NO,  RS2_NO),
        Array(
          LUI     ->    List(   BR_NO,    IMM_UTYPE,   CMP_ALU,  OP1_ZERO, OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_NO,  RS2_NO),
          AUIPC   ->    List(   BR_NO,    IMM_UTYPE,   CMP_ALU,  OP1_PC,   OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_NO,  RS2_NO),
          JAL     ->    List(   BR_JAL,   IMM_JTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_NO,  RS2_NO),
          JALR    ->    List(   BR_JALR,  IMM_ITYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          BEQ     ->    List(   BR_EQ,    IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          BNE     ->    List(   BR_NE,    IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          BLT     ->    List(   BR_LS,    IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          BGE     ->    List(   BR_GE,    IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          BLTU    ->    List(   BR_LSU,   IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          BGEU    ->    List(   BR_GEU,   IMM_BTYPE,   CMP_ALU,  OP1_PC,   OP2_FOUR,  ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          LB      ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LH      ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LH,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LW      ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LW,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LD      ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LD,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LBU     ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LBU,  WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LHU     ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LHU,  WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          LWU     ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_EN,  RMEM_LWU,  WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SB      ->    List(   BR_NO,    IMM_STYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_EN,  WMEM_SB,   WREG_NO,   RS1_EN,  RS2_EN),
          SH      ->    List(   BR_NO,    IMM_STYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_EN,  WMEM_SH,   WREG_NO,   RS1_EN,  RS2_EN),
          SW      ->    List(   BR_NO,    IMM_STYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_EN,  WMEM_SW,   WREG_NO,   RS1_EN,  RS2_EN),
          SD      ->    List(   BR_NO,    IMM_STYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_EN,  WMEM_SD,   WREG_NO,   RS1_EN,  RS2_EN),
          ADDI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SLLI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_SLL,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SLTI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_SLT,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SLTIU   ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_SLTU, WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          XORI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_XOR,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SRLI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_SRL,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SRAI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_SRA,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          ORI     ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_OR,   WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          ANDI    ->    List(   BR_NO,    IMM_ITYPE,   CMP_ALU,  OP1_RS1,  OP2_IMM,   ALU_AND,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          ADD     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SUB     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SUB,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SLL     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SLL,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SLT     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SLT,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SLTU    ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SLTU, WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          XOR     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_XOR,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SRL     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SRL,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SRA     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_SRA,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          OR      ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_OR,   WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          AND     ->    List(   BR_NO,    IMM_RTYPE,   CMP_ALU,  OP1_RS1,  OP2_RS2,   ALU_AND,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          ADDIW   ->    List(   BR_NO,    IMM_ITYPE,   CMP_WALU, OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SLLIW   ->    List(   BR_NO,    IMM_ITYPE,   CMP_WALU, OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_SLL,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SRLIW   ->    List(   BR_NO,    IMM_ITYPE,   CMP_WALU, OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_SRL,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          SRAIW   ->    List(   BR_NO,    IMM_ITYPE,   CMP_WALU, OP1_RS1,  OP2_IMM,   ALU_ADD,  WALU_SRA,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_NO),
          ADDW    ->    List(   BR_NO,    IMM_RTYPE,   CMP_WALU, OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_ADD,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SUBW    ->    List(   BR_NO,    IMM_RTYPE,   CMP_WALU, OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_SUB,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SLLW    ->    List(   BR_NO,    IMM_RTYPE,   CMP_WALU, OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_SLL,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SRLW    ->    List(   BR_NO,    IMM_RTYPE,   CMP_WALU, OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_SRL,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
          SRAW    ->    List(   BR_NO,    IMM_RTYPE,   CMP_WALU, OP1_RS1,  OP2_RS2,   ALU_ADD,  WALU_SRA,  RMEM_NO,  RMEM_LB,   WMEM_NO,  WMEM_SB,   WREG_EN,   RS1_EN,  RS2_EN),
      ))

      val br_type :: imm_op :: cmp_sel :: op1_sel :: op2_sel :: alu_op :: walu_op :: mem_reg_signals = ctrl_signals
      val rmem_en :: rmem_sel :: wmem_en :: wmem_sel :: wreg_en :: rs1_en :: rs2_en :: Nil = mem_reg_signals      

      io.br_type    :=    br_type
      io.imm_op     :=    imm_op
      io.cmp_sel    :=    cmp_sel
      io.op1_sel    :=    op1_sel
      io.op2_sel    :=    op2_sel
      io.alu_op     :=    alu_op
      io.walu_op    :=    walu_op
      io.rmem_en    :=    rmem_sel
      io.rmem_sel   :=    rmem_sel
      io.wmem_en    :=    wmem_en
      io.wmem_sel   :=    wmem_sel
      io.wreg_en    :=    wreg_en
      io.rs1_en     :=    rs1_en
      io.rs2_en     :=    rs2_en
}


object Decoder extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new Decoder())
}