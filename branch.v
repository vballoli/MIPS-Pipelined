`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:53 04/21/2019 
// Design Name: 
// Module Name:    branch 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module branch(
		input [7:0] instruction_address,
		input [7:0] jump_address,
		input select,
		output reg [7:0] new_address
    );
	 
	 always @ (*)
	 begin
		if (select == 1)
			new_address = jump_address;
		else
			new_address = instruction_address;
	 end


endmodule
