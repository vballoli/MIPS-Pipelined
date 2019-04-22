`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:01:48 04/21/2019
// Design Name:   program_counter
// Module Name:   V:/Verilog/MIPSPipelined/tb_pc.v
// Project Name:  MIPSPipelined
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: program_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_pc;

	// Inputs
	reg [7:0] previous_address;
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] instruction_address;

	// Instantiate the Unit Under Test (UUT)
	program_counter uut (
		.previous_address(previous_address), 
		.clk(clk), 
		.reset(reset), 
		.instruction_address(instruction_address)
	);

	initial begin
		// Initialize Inputs
		previous_address = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here

	end
	
	initial begin
	clk = 0;
	repeat(20)
	#5
	clk = ~clk;
	end
      
endmodule

