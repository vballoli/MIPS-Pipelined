`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:25 04/22/2019 
// Design Name: 
// Module Name:    m 
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
module m(
	input clk,
	input reset
    );
	 
	 // Program Counter 	 
wire [7:0] previous_address, instruction_address;

// Instruction Fetch
wire [1:0] opcode, if_opcode, id_opcode, exe_opcode;
wire [2:0] rSrc, rDest, immediate_data, if_rSrc, if_rDest, id_rSrc, id_rDest, 
	exe_rSrc, exe_rDest;
wire signed [2:0] if_immediate_data, id_immediate_data, exe_immediate_data;
wire [7:0] jump_address, if_jump_address, id_jump_address, exe_jump_address;
wire [7:0] if_empty;
	 
	 program_counter pc (instruction_address, clk, reset, instruction_address);

instruction_fetch i_f (instruction_address, reset, opcode, rDest, rSrc, immediate_data, jump_address);

pipeline_register if_id (clk, if_id_reset, opcode, rDest, rSrc, immediate_data, jump_address, 0, 
	if_opcode, if_rSrc, if_rDest, if_immediate_data, if_jump_address, if_empty);

register_files rf (if_rSrc, exe_rDest, 0, exe_data, reset, data);	


pipeline_register id_ex (clk, id_exe_reset, if_opcode, if_rDest, if_rSrc, if_immediate_data, if_jump_address, data,
	id_opcode, id_rSrc, id_rDest, id_immediate_data, id_jump_address, id_data);
	
	
	pipeline_register ex_wb (clk, exe_wb_reset, id_opcode, id_rDest, id_rSrc, id_immediate_data, id_jump_address, alu_data, 
	exe_opcode, exe_rSrc, exe_rDest, exe_immediate_data, exe_jump_address, exe_data);
	 
	 


endmodule
