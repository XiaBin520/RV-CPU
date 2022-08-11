package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._
import RVCore.StateFSM._


class coreCtrl_Mem_io extends Bundle{
  val mem_rinst_en     = Output(Bool())
  val mem_rinst_addr   = Output(UInt(32.W))
  val mem_rinst_valid  = Input(Bool())
  val mem_rinst_data   = Input(UInt(32.W))

  val mem_rmem_en     = Output(Bool())
  val mem_rmem_addr   = Output(UInt(32.W))
  val mem_rmem_size   = Output(UInt(2.W))
  val mem_rmem_valid  = Input(Bool())
  val mem_rmem_data   = Input(UInt(64.W))

  val mem_wmem_en     = Output(Bool())
  val mem_wmem_addr   = Output(UInt(32.W))
  val mem_wmem_size   = Output(UInt(2.W))
  val mem_wmem_data   = Output(UInt(64.W))
  val mem_wmem_valid  = Input(Bool())
}



class coreCtrl_io extends Bundle{
  val Core  =  Flipped(new core_io())
  val Mem   =  new coreCtrl_Mem_io()
}




class coreCtrl extends Module{
  val io = IO(new coreCtrl_io())

  val RInst = Module(new InstRead())
  val RMem  = Module(new DataRead())
  val WMem  = Module(new DataWrite())
  val Check = Module(new Check())

  val reg_state = RegInit(S_IDLE3)
  switch(reg_state)
  {
    is(S_IDLE3)
    {
      reg_state := S_RINST
    }
    // Read Instructions
    is(S_RINST)
    {
      reg_state := S_RINST_WAIT
    }
    is(S_RINST_WAIT)
    {
      when(RInst.io.ctrl_rinst_done)
      {
        reg_state := MuxCase(S_RUN, 
                     Array(
                      (io.Core.rmem_en) -> S_RMEM,
                      (io.Core.wmem_en) -> S_WMEM
                     ))
      }
    }
    // Read Data
    is(S_RMEM)
    {
      reg_state := S_RMEM_WAIT
    }
    is(S_RMEM_WAIT)
    {
      when(RMem.io.ctrl_rmem_done) {reg_state := S_RUN}
    }
    // Write Data
    is(S_WMEM)
    {
      reg_state := S_WMEM_WAIT
    }
    is(S_WMEM_WAIT)
    {
      when(WMem.io.ctrl_wmem_done) {reg_state := S_RUN}
    }
    // Running
    is(S_RUN)
    {
      reg_state := S_RINST
    }
  }

  //********************************************
  // Read Memory FSM
  RMem.io.ctrl_rmem_start :=  (reg_state === S_RMEM)
  RMem.io.core_rmem_addr  :=  io.Core.rmem_addr
  RMem.io.core_rmem_sel   :=  io.Core.rmem_sel
  io.Core.rmem_data       :=  RMem.io.core_rmem_data
  io.Mem.mem_rmem_en      :=  RMem.io.mem_rmem_en
  io.Mem.mem_rmem_addr    :=  RMem.io.mem_rmem_addr
  io.Mem.mem_rmem_size    :=  RMem.io.mem_rmem_size
  RMem.io.mem_rmem_valid  :=  io.Mem.mem_rmem_valid
  RMem.io.mem_rmem_data   :=  io.Mem.mem_rmem_data


  // Write Memory FSM
  WMem.io.ctrl_wmem_start :=  (reg_state === S_WMEM)
  WMem.io.core_wmem_addr  :=  io.Core.wmem_addr
  WMem.io.core_wmem_sel   :=  io.Core.wmem_sel
  WMem.io.core_wmem_data  :=  io.Core.wmem_data
  io.Mem.mem_wmem_en      :=  WMem.io.mem_wmem_en
  io.Mem.mem_wmem_addr    :=  WMem.io.mem_wmem_addr
  io.Mem.mem_wmem_size    :=  WMem.io.mem_wmem_size
  io.Mem.mem_wmem_data    :=  WMem.io.mem_wmem_data
  WMem.io.mem_wmem_valid  :=  io.Mem.mem_wmem_valid

  // Read Instructions FSM
  RInst.io.ctrl_rinst_start :=  (reg_state === S_RINST)
  RInst.io.core_rinst_addr  :=  io.Core.inst_addr
  io.Core.inst              :=  RInst.io.core_rinst_data
  io.Mem.mem_rinst_en       :=  RInst.io.mem_rinst_en
  io.Mem.mem_rinst_addr     :=  RInst.io.mem_rinst_addr
  RInst.io.mem_rinst_valid  :=  io.Mem.mem_rinst_valid
  RInst.io.mem_rinst_data   :=  io.Mem.mem_rinst_data

  // Check Hazard
  io.Core.ctrl_flush    :=  Mux((reg_state === S_RUN),  Check.io.ctrl_flush, "b00000".U)
  io.Core.ctrl_hold     :=  Mux((reg_state === S_RUN),  Check.io.ctrl_hold,  "b11111".U)
  Check.io.dec_rs1      :=  io.Core.dec_rs1
  Check.io.dec_rs2      :=  io.Core.dec_rs2
  Check.io.dec_rs1_en   :=  io.Core.dec_rs1_en
  Check.io.dec_rs2_en   :=  io.Core.dec_rs2_en
  Check.io.exe_wreg_en  :=  io.Core.exe_wreg_en
  Check.io.exe_rd       :=  io.Core.exe_rd
  Check.io.mem_wreg_en  :=  io.Core.mem_wreg_en
  Check.io.mem_rd       :=  io.Core.mem_rd
  Check.io.mem_rmem_en  :=  io.Core.rmem_en
  Check.io.jmp_en       :=  io.Core.jmp_en
}


object coreCtrl extends App{
  (new chisel3.stage.ChiselStage).emitVerilog(new coreCtrl())
}
