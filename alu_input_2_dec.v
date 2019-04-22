`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:37:27 04/21/2019 
// Design Name: 
// Module Name:    alu_input_2_dec 
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
module alu_input_2_dec(
    input [7:0] data_1,
    input [7:0] data_2,
    input [1:0] opcode,
    output reg [7:0] data
    );
	 
	 always @ (*)
	 begin
		if (opcode == 2'b00)
			data = data_1;
		else
			data = data_2;
	 end


endmodule
