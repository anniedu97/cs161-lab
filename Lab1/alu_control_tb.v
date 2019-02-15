`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:40:04 02/07/2019
// Design Name:   alu_control
// Module Name:   C:/Users/Anaya/Documents/CS161L/Lab1/alu_control_tb.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_control_tb;

	// Inputs
	reg [1:0] alu_op;
	reg [5:0] instruction_5_0;

	// Outputs
	wire [3:0] alu_out;

	// Instantiate the Unit Under Test (UUT)
	alu_control uut (
		.alu_op(alu_op), 
		.instruction_5_0(instruction_5_0), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		alu_op = 0;
		instruction_5_0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		alu_op = 2'b00;
		instruction_5_0 = 0;
		
		#100;
		alu_op = 2'b01;
		instruction_5_0 = 0;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100000;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100010;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100100;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100101;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b100111;
		
		#100;
		alu_op = 2'b10;
		instruction_5_0 = 6'b101010;
		
		
		
		
		
      
		
        
		// Add stimulus here

	end
      
endmodule

