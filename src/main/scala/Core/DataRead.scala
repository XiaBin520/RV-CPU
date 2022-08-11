package RVCore

import chisel3._
import chisel3.util._

import RVCore.Instructions._
import RVCore.Parameters._
import RVCore.StateFSM._

class DataRead extends Module{
  val io = IO(new Bundle{
    val ctrl_rmem_start = Input(Bool())
    val ctrl_rmem_done  = Output(Bool())

    val core_rmem_addr  = Input(UInt(32.W))
    val core_rmem_sel   = Input(UInt(3.W))
    val core_rmem_data  = Output(UInt(64.W))

    val mem_rmem_en     = Output(Bool())
    val mem_rmem_addr   = Output(UInt(32.W))
    val mem_rmem_size   = Output(UInt(2.W))
    val mem_rmem_valid  = Input(Bool())
    val mem_rmem_data   = Input(UInt(64.W))
  })

  val reg_state = RegInit(S_IDLE)
  val reg_data  = RegInit(0.U(64.W))

  switch(reg_state)
  {
    is(S_IDLE)
    {
      when(io.ctrl_rmem_start) {reg_state := S_SEND}
    }
    is(S_SEND)
    {
      reg_state := S_WAIT
    }
    is(S_WAIT)
    {
      when(io.mem_rmem_valid) {reg_state := S_DONE}
    }
    is(S_DONE)
    {
      reg_state := S_IDLE
    }
  }

  when(reg_state === S_WAIT && io.mem_rmem_valid)
  {
    reg_data := io.mem_rmem_data
  }

  //********************************************
  // To Main Ctrl FSM
  io.ctrl_rmem_done := (reg_state === S_DONE)

  // To Memory
  io.mem_rmem_en := (reg_state === S_SEND)
  io.mem_rmem_addr := io.core_rmem_addr
  io.mem_rmem_size := MuxCase(SIZE_1B, 
                      Array(
                        (io.core_rmem_sel === RMEM_LB || io.core_rmem_sel === RMEM_LBU) -> SIZE_1B,
                        (io.core_rmem_sel === RMEM_LH || io.core_rmem_sel === RMEM_LHU) -> SIZE_2B,
                        (io.core_rmem_sel === RMEM_LW || io.core_rmem_sel === RMEM_LWU) -> SIZE_4B,
                        (io.core_rmem_sel === RMEM_LD) -> SIZE_8B
                      ))

  // To CPU Core
  io.core_rmem_data := MuxCase(0.U, 
                       Array(
                        (io.core_rmem_sel === RMEM_LB)  -> Cat(Fill(64-8,  reg_data(7)),  reg_data(7, 0)),
                        (io.core_rmem_sel === RMEM_LH)  -> Cat(Fill(64-16, reg_data(15)), reg_data(15, 0)),
                        (io.core_rmem_sel === RMEM_LW)  -> Cat(Fill(64-32, reg_data(31)), reg_data(31, 0)),
                        (io.core_rmem_sel === RMEM_LD)  -> reg_data,
                        (io.core_rmem_sel === RMEM_LBU) -> Cat(Fill(64-8,  0.U),  reg_data(7, 0)),
                        (io.core_rmem_sel === RMEM_LHU) -> Cat(Fill(64-16, 0.U),  reg_data(15, 0)),
                        (io.core_rmem_sel === RMEM_LWU) -> Cat(Fill(64-32, 0.U),  reg_data(31, 0))
                       ))
}

