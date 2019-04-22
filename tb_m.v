`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:51:55 04/22/2019
// Design Name:   m
// Module Name:   V:/Verilog/MIPSPipelined/tb_m.v
// Project Name:  MIPSPipelined
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: m
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_m;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	m uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		reset = 1;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here

	end
	
	initial begin
	clk = 0;
	repeat(14)
	#15
	clk = ~clk;
	$finish;
	end
      
endmodule

