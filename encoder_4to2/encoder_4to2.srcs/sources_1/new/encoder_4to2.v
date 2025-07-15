`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10.07.2025 13:47:20
// Design Name: 
// Module Name: encoder_4to2
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


module encoder_4to2(
    
        input [3:0]d,
        output reg [1:0]y
    );
    
    always @(*) begin
    case (d)
        4'b1000: y = 2'b00;
        4'b0100: y = 2'b01;
        4'b0010: y = 2'b10;
        4'b0001: y = 2'b11;
        endcase
        end
endmodule
                

