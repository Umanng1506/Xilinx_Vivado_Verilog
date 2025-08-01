`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10.07.2025 14:51:53
// Design Name: 
// Module Name: decoder_4to2
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


module decoder_4to2(
        input [1:0]a,
        output reg [3:0]y
    );
    
    always @(*) begin
    case (a)
        2'b00: y = 4'b1000;
        2'b01: y = 4'b0100;
        2'b10: y = 4'b0010;
        2'b11: y = 4'b0001;
    endcase
end     
endmodule
