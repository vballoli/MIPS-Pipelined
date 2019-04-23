`timescale 1ns / 1ps
module mips(
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

// Register File
wire [7:0] data, id_data, exe_data, alu_data;
reg [7:0] forwarded_data;

// ALU
reg [7:0] input_2;

// Forwarding unit
wire if_id_reset, id_exe_reset, exe_wb_reset;

wire write_reg, exe_ctrl, pc_jump_sel, alu_forward_control;

program_counter pc (previous_address, clk, reset, instruction_address);

instruction_fetch i_f (previous_address, reset, opcode, rDest, rSrc, immediate_data, jump_address);

pipeline_register if_id (clk, if_id_reset, opcode, rDest, rSrc, immediate_data, jump_address, 0, 
	if_opcode, if_rSrc, if_rDest, if_immediate_data, if_jump_address, if_empty);

register_files rf (if_rSrc, exe_rDest, write_reg, exe_data, reset, data);	

pipeline_register id_ex (clk, id_exe_reset, if_opcode, if_rDest, if_rSrc, if_immediate_data, if_jump_address, data,
	id_opcode, id_rSrc, id_rDest, id_immediate_data, id_jump_address, id_data);

// Input 1 and 2 MUX - control signal from control and forwarding unit

always @ (*)
begin
	case(id_opcode)
	2'b01:
	begin
		input_2 = id_immediate_data;
		//$write("Immediate data chosen");
	end
	2'b00:
	begin
		//$write("id_data chosen");
		input_2 = id_data;
	end
	endcase
	
	if (alu_forward_control == 1)
	begin
		//$write("EXE data chosen");
		forwarded_data = exe_data;
	end
	else
	begin
		//$write("ID Data chosen");
		forwarded_data = id_data;
	end
	
end


exe al (forwarded_data, input_2, exe_ctrl, alu_data);

pipeline_register ex_wb (clk, exe_wb_reset, id_opcode, id_rDest, id_rSrc, id_immediate_data, id_jump_address, alu_data, 
	exe_opcode, exe_rSrc, exe_rDest, exe_immediate_data, exe_jump_address, exe_data);

// /* Inputs to control module for write_reg, alu_input and control signal and branch instructions
control_unit cu (if_opcode, id_opcode, exe_opcode, write_reg, exe_ctrl, pc_jump_sel);

// /* forwarding unit for deciding the register resets and input to ALU Decide between exe data and id data
forwarding_unit fu (exe_opcode, id_rSrc, id_rDest, exe_rDest, reset, if_id_reset, id_exe_reset,
	exe_wb_reset, alu_forward_control);

// /* Decide branch module
branch b (instruction_address, if_jump_address, pc_jump_sel, previous_address);	

endmodule
