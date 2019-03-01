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

// Insert your solution below here.
	 
endmodule
