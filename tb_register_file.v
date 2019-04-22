`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:14:18 04/21/2019
// Design Name:   register_file
// Module Name:   V:/Verilog/MIPSPipelined/tb_register_file.v
// Project Name:  MIPSPipelined
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_register_file;

	// Inputs
	reg [2:0] rSrc;
	reg [2:0] rDest;
	reg write_reg;
	reg [7:0] writeData;
	reg reset;

	// Outputs
	wire [7:0] srcData;

	// Instantiate the Unit Under Test (UUT)
	register_file uut (
		.rSrc(rSrc), 
		.rDest(rDest), 
		.write_reg(write_reg), 
		.writeData(writeData), 
		.reset(reset), 
		.srcData(srcData)
	);

	initial begin
		// Initialize Inputs
		rSrc = 0;
		rDest = 0;
		write_reg = 0;
		writeData = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
		
		rSrc = 1;
		
		#10
		rSrc = 2;
		
		#10
		rSrc = 3;
        
		// Add stimulus here

	end
      
endmodule

