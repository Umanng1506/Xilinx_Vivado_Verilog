`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/03/2019 09:22:35 PM
// Design Name: 
// Module Name: ALU_TB
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


module ALU_TB();
  reg [3:0] a;
  reg [3:0] b;
  reg [1:0] op;
  wire [7:0] res;
  
  ALU DUT_ALU(a,b,op,res);
  
  initial begin
    $monitor("\n%d %c %d = %d\n",a,(op[1]?(op[0]?"&":"%"):(op[0]?"*":"+")),b,res);

    a=2; b=3; op=0; #10;
    a=3; b=4; #10;
    a=10; b=9; #10;
    a=15; b=15; #10;
    
    a=2; b=3; op=1; #10;
    a=3; b=4; #10;
    a=10; b=9; #10;
    a=15; b=15; #10;
    
    a=2; b=3; op=2; #10;
    a=3; b=4; #10;
    a=10; b=9; #10;
    a=15; b=15; #10;
    
    a=2; b=3; op=3; #10;
    a=3; b=4; #10;
    a=10; b=9; #10;
    a=15; b=15; #10;
    
    $stop;
  end
endmodule
