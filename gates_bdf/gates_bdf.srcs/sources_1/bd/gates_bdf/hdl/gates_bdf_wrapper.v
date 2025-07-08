//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Fri Jul  4 16:31:56 2025
//Host        : LAPTOP-BRS5LFOE running 64-bit major release  (build 9200)
//Command     : generate_target gates_bdf_wrapper.bd
//Design      : gates_bdf_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module gates_bdf_wrapper
   (a,
    b,
    y);
  input a;
  input b;
  output [0:0]y;

  wire a;
  wire b;
  wire [0:0]y;

  gates_bdf gates_bdf_i
       (.a(a),
        .b(b),
        .y(y));
endmodule
