`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.07.2025 01:09:06
// Design Name: 
// Module Name: full_adder
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module full_adder(
    input a,
    input b,
    input cin,
    output sum,
    output carry
    );
   
   wire wire1, wire2, wire3;
    
   Half_Adder u1( a, b, wire1, wire2);
   Half_Adder u2( wire1, cin, sum, wire3);
   
   assign carry= wire1|wire2;
endmodule
