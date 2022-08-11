package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._
import RVCore.StateFSM._


class InstRead extends Module{
  val io = IO(new Bundle{
    val ctrl_rinst_start = Input(Bool())
    val ctrl_rinst_done  = Output(Bool())

    val core_rinst_addr  = Input(UInt(32.W))
    val core_rinst_data  = Output(UInt(32.W))

    val mem_rinst_en     = Output(Bool())
    val mem_rinst_addr   = Output(UInt(32.W))
    val mem_rinst_valid  = Input(Bool())
    val mem_rinst_data   = Input(UInt(32.W))
  })

  val reg_state = RegInit(S_IDLE)
  val reg_inst  = RegInit("h0000_0013".U(32.W))

  switch(reg_state)
  {
    is(S_IDLE)
    {
      when(io.ctrl_rinst_start) {reg_state := S_SEND}
    }
    is(S_SEND)
    {
      reg_state := S_WAIT
    }
    is(S_WAIT)
    {
      when(io.mem_rinst_valid) {reg_state := S_DONE}
    }
    is(S_DONE)
    {
      reg_state := S_IDLE
    }
  }

  when(reg_state === S_WAIT && io.mem_rinst_valid)
  {
    reg_inst := io.mem_rinst_data
  }

  //********************************************
  // To Main Ctrl FSM
  io.ctrl_rinst_done := (reg_state === S_DONE)

  // To Memory
  io.mem_rinst_en    := (reg_state === S_SEND)
  io.mem_rinst_addr  := io.core_rinst_addr

  // To CPU Core
  io.core_rinst_data := reg_inst
}