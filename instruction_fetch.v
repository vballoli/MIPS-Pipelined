`timescale 1ns / 1ps
module instruction_fetch(
	input [7:0] instruction_address,
	input reset,
	output reg [1:0] opcode,
	output reg [2:0] rDest,
	output reg [2:0] rSrc,
	output reg [2:0] immediate_data,
	output reg [7:0] jump_address
    );
	 
	reg [7:0] instruction_file [7:0];
	
	reg [7:0] instruction;
	
	always @ (reset)
	begin
	
	
	if (reset == 1)
		begin
		instruction_file[0] = 8'b00001000;
		instruction_file[1] = 8'b01001011;
		instruction_file[2] = 8'b01000010;
		instruction_file[3] = 8'b11000101;
		instruction_file[4] = 8'b00000000;
		instruction_file[5] = 8'b01000101;
		end
	end
	
	always @ (*)
	begin
		instruction = instruction_file[instruction_address];
		opcode = instruction[7:6];
		rDest = instruction[5:3];
		rSrc = instruction[2:0];
		immediate_data = rSrc;
		jump_address = {instruction_address[7:6] ,instruction[5:0]};
	end


endmodule
