//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Fri Jul  4 16:31:56 2025
//Host        : LAPTOP-BRS5LFOE running 64-bit major release  (build 9200)
//Command     : generate_target gates_bdf.bd
//Design      : gates_bdf
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "gates_bdf,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=gates_bdf,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "gates_bdf.hwdef" *) 
module gates_bdf
   (a,
    b,
    y);
  input a;
  input b;
  output [0:0]y;

  wire a_1;
  wire b_1;
  wire [0:0]util_vector_logic_0_Res;

  assign a_1 = a;
  assign b_1 = b;
  assign y[0] = util_vector_logic_0_Res;
  gates_bdf_util_vector_logic_0_0 util_vector_logic_0
       (.Op1(a_1),
        .Op2(b_1),
        .Res(util_vector_logic_0_Res));
endmodule
