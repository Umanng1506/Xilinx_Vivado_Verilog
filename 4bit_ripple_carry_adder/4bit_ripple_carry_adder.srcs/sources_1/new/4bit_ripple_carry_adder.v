`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 4-bit Ripple Carry Adder
//////////////////////////////////////////////////////////////////////////////////

module ripple_carry_adder_4bit(a, b, sum, cout);

    input [3:0] a, b;
    //input cin;
    output [3:0] sum;
    output cout;

    wire c1, c2, c3;

    full_adder u1(a[0], b[0], 1'b0, sum[0], c1);
    full_adder u2(a[1], b[1], c1, sum[1], c2);
    full_adder u3(a[2], b[2], c2, sum[2], c3);
    full_adder u4(a[3], b[3], c3, sum[3], cout);

endmodule



