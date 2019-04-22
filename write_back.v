`timescale 1ns / 1ps

module write_back(
		input [7:0] write_data,
		input clk,
		output [7:0] data
    );
	 
	 always @ (posedge clk)
	 begin
	 
		data = write_data;
	 
	 end


endmodule
