`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:35:36 04/21/2019 
// Design Name: 
// Module Name:    mux 
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
module mux(
    input [7:0] data_1,
    input [7:0] data_2,
    input select,
    output reg [7:0] data
    );

	always @ (*)
	begin
		if (select == 0)
			data = data_1;
		else
			data = data_2;
	end

endmodule
