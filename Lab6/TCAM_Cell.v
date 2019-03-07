`timescale 1ns / 1ps

module TCAM_Cell(
    input wire clk,
    input wire rst,
    input wire we,
    input wire cell_search_bit,
    input wire cell_dont_care_bit,
    input wire cell_match_bit_in,
    output reg cell_match_bit_out
    );

	 reg stored_bit;
	 
// Insert your solution below here. 

	always @(posedge clk) begin
		
		if(rst) begin
			stored_bit = 0;
		end
		
		if(we && !rst)begin
			stored_bit <= cell_search_bit;	
		end
	
		
	end
	
	always @ * begin
		cell_match_bit_out = (cell_match_bit_in && (cell_search_bit == stored_bit)) || cell_dont_care_bit  ? 1: 0;
	end

endmodule
