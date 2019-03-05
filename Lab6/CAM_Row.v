`timescale 1ns / 1ps

module CAM_Row(
    clk,
    rst,
    we,
    search_word,
    dont_care_mask,
	 row_match
    );

    parameter CAM_WIDTH = 8;

    input wire clk, rst, we;
    input wire [CAM_WIDTH-1:0] search_word, dont_care_mask;
    output wire row_match;
	 
	 wire [CAM_WIDTH-1:0] match;

// Insert your solution below here.
	 
	genvar i;
	 
	generate
	 
	 for(i = 0; i < CAM_WIDTH; i = i + 1) begin : BCAM_Cells
		BCAM_Cell BCAM(
			.clk(clk),
			.rst(rst),
			.we(we),
			.cell_search_bit(search_word[i]),
			.cell_dont_care_bit(dont_care_mask[i]),
			.cell_match_bit_in(match[i]),
			.cell_match_bit_out(match[i + 1])
		);
		
		
	 end
	 endgenerate
	 
endmodule
