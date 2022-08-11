package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._
import RVCore.StateFSM._


class DataWrite extends Module{
  val io = IO(new Bundle{
    val ctrl_wmem_start = Input(Bool())
    val ctrl_wmem_done  = Output(Bool())
    
    val core_wmem_addr  = Input(UInt(32.W))
    val core_wmem_sel   = Input(UInt(2.W))
    val core_wmem_data  = Input(UInt(64.W))

    val mem_wmem_en     = Output(Bool())
    val mem_wmem_addr   = Output(UInt(32.W))
    val mem_wmem_size   = Output(UInt(2.W))
    val mem_wmem_data   = Output(UInt(64.W))
    val mem_wmem_valid  = Input(Bool())
  })


  val reg_state = RegInit(S_IDLE)

  switch(reg_state)
  {
    is(S_IDLE)
    {
      when(io.ctrl_wmem_start) {reg_state := S_SEND}
    }
    is(S_SEND)
    {
      reg_state := S_WAIT
    }
    is(S_WAIT)
    {
      when(io.mem_wmem_valid) {reg_state := S_DONE}
    }
    is(S_DONE)
    {
      reg_state := S_IDLE
    }
  }

  //********************************************
  // To Main Ctrl FSM
  io.ctrl_wmem_done := (reg_state === S_DONE)

  // To memory
  io.mem_wmem_en := (reg_state === S_SEND)
  io.mem_wmem_addr := io.core_wmem_addr
  io.mem_wmem_size := MuxCase(SIZE_1B, 
                      Array(
                        (io.core_wmem_sel === WMEM_SB) -> SIZE_1B,
                        (io.core_wmem_sel === WMEM_SH) -> SIZE_2B,
                        (io.core_wmem_sel === WMEM_SW) -> SIZE_4B,
                        (io.core_wmem_sel === WMEM_SD) -> SIZE_8B,
                      ))
  io.mem_wmem_data := io.core_wmem_data
}
