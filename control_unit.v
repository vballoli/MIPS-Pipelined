`timescale 1ns / 1ps

module control_unit(
		input [1:0] if_opcode,
		input [1:0] id_opcode,
		input [1:0] ex_opcode,
		output reg writeReg,
		output reg exe_ctrl,
		output reg pc_jump_sel
    );
	 
	 always @ (*)
	 begin
		case(id_opcode)
			2'b00: 
			begin
			exe_ctrl = 0;
			end
			2'b01: 
			begin
			exe_ctrl = 1;
			end
			2'b11: 
			begin
			exe_ctrl = 0;
			end
			default:
			begin
			exe_ctrl = 0;
			end
		endcase
		case(ex_opcode)
			2'b00: 
			begin
			writeReg = 1;
			end
			2'b01: 
			begin
			writeReg = 1;
			end
			2'b11: 
			begin
			writeReg = 0;
			end
			default:
			begin
			writeReg = 1;
			end
		endcase
		case(if_opcode)
			2'b00: 
			begin
			pc_jump_sel = 0;
			end
			2'b01: 
			begin
			pc_jump_sel = 0;
			end
			2'b11: 
			begin
			pc_jump_sel = 1;
			end
			default:
			begin
			pc_jump_sel = 0;
			end
		endcase
		
	 end


endmodule
