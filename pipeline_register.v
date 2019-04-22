`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:59:13 04/19/2019 
// Design Name: 
// Module Name:    pipeline_register 
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
module pipeline_register(
		input clk,
		input reset,
		input [1:0] opcode,
		input [2:0] rDest,
		input [2:0] rSrc,
		input [2:0] immediate_data,
		input [7:0] jump_address,
		input signed [7:0] data,
		output reg [1:0] opc,
		output reg [2:0] reg_src,
		output reg [2:0] reg_dest,
		output reg [2:0] im_da,
		output reg [7:0] pja,
		output reg signed [7:0] reg_data
    );
	 
//	 always @ (reset)
//	 begin
//	 if (reset == 1)
//		begin
//		opc = 2'bxx;
//		reg_src = 3'b111;
//		reg_dest = 3'b111;
//		im_da = 1;
//		pja = 1;
//		reg_data = 1;
//		end
//	 end
//
	always @ (posedge clk)
	begin
//		$write("Opcode %b: ", opcode);
//		$write("rSRc %b: ", rSrc);
//		$write("rDest %b: ", rDest);
//		$write("id %b: ", immediate_data);
//		$write("ja %b: ", jump_address);
//		$write("data %b: ", data);
		opc = opcode;
		reg_src = rSrc;
		reg_dest = rDest;
		im_da = immediate_data;
		pja = jump_address;
		reg_data = data;
	end

endmodule
