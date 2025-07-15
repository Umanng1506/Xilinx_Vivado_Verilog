`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 14.07.2025 01:42:47
// Design Name: 
// Module Name: comparator_2bit
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


module comparator_2bit(
    input [1:0] A,     
    input [1:0] B,     
    output A_gt_B,
    output A_lt_B,
    output A_eq_B
);
    assign A_gt_B = (A > B);    
    assign A_lt_B = (A < B);
    assign A_eq_B = (A == B);
endmodule
