`timescale 1ns / 1ps

module forwarding_unit(
		input [1:0] ex_opcode,
		input [2:0] id_ex_src_reg,
		input [2:0] id_ex_dest_reg,
		input [2:0] ex_wb_reg,
		input reset,
		output reg if_id_reset,
		output reg id_ex_reset,
		output reg ex_wb_reset,
		output reg alu_forwarded_input
    );
	 
	 always @ (*)
	 begin
		 if (reset == 0)
		 begin
			if (id_ex_dest_reg == ex_wb_reg)
			begin
				if_id_reset = 1;
				id_ex_reset = 1;
				ex_wb_reset = 0;
				alu_forwarded_input = 1;
			end
		
			else
			begin
				if_id_reset = 0;
				id_ex_reset = 0;
				ex_wb_reset = 0;
				alu_forwarded_input = 0;
			end
		 end
		 else
		 begin
			if_id_reset = 1;
			id_ex_reset = 1;
			ex_wb_reset = 1;
			alu_forwarded_input = 0;
		 end
	 end


endmodule
