`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:10:18 01/15/2019
// Design Name:   my_alu
// Module Name:   C:/Users/Anaya/Documents/CS161L/Lab1/my_alu_tb.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_alu_tb;
	parameter NBITS = 8;
	// Inputs
	reg clk;
	reg reset;
	reg [NBITS-1:0] A;
	reg [NBITS-1:0] B;
	reg [2:0] opcode;

	// Outputs
	wire signed [NBITS-1:0] result;
	wire carryout;
	wire overflow;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	my_alu #(.NBITS(NBITS)) uut (
		.clk(clk), 
		.reset(reset), 
		.A(A), 
		.B(B), 
		.opcode(opcode), 
		.result(result), 
		.carryout(carryout), 
		.overflow(overflow), 
		.zero(zero)
	);
	
	integer i = 0;
	integer j = 0;

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 0;
		A = 6;
		B = 11;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		for(i = 0; i < 8; i = i + 1) begin
			A = 1;
			B = 0;
			
			#100;
			
			A = 3;
			B = 2;
			
			#100;
			
			A = 10;
			B = 7;
			
			#100;
			
			A = -8;
			B = -8;
			
			#100;
			A = 15;
			B = 1;
			
			#100;
			A = -1;
			B = -2;
			
			opcode = i + 1;
			
		end
		
        
		// Add stimulus here
		
	end
	
	always
			#10 clk = ~clk;
      
endmodule

