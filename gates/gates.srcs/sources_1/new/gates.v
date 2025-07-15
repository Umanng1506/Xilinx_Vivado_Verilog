`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04.07.2025 15:52:21
// Design Name: 
// Module Name: gates
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


module gates(
    input a,
    input b,
    output y_and,
    output y_nand,
    output y_or,
    output y_nor,
    output y_xor
    );
    
    assign y_and = a&b;
    assign y_nand = ~(a&b);
    assign y_or = a|b;
    assign y_nor = ~(a|b);
    assign y_xor = a^b;
endmodule
