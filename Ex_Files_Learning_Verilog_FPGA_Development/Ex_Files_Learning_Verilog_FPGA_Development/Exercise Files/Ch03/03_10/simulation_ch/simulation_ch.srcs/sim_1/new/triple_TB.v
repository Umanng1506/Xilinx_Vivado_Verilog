`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/28/2019 11:10:58 PM
// Design Name: 
// Module Name: triple_TB
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
 

module triple_TB();
  // Write your simulation code here.
  // Display the result for input values 0, 1, 3, 5, 10, and 15.
  // Show these results in the waveform viewer.
  reg [3:0] num_value;
  wire [5:0] result;
  triple DUT_triple(num_value,result);
  initial begin
    $monitor("\nThe triple of %d is %d.\n",num_value,result);
    num_value=4'd0; #10;
    num_value=4'd1; #10;
    num_value=4'd3; #10;
    num_value=4'd5; #10;
    num_value=4'd10; #10;
    num_value=4'd15; #10;
    $stop;
  end
endmodule
