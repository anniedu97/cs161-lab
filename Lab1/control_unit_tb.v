`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:39:27 02/07/2019
// Design Name:   control_unit
// Module Name:   C:/Users/Anaya/Documents/CS161L/Lab1/control_unit_tb.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module control_unit_tb;

	// Inputs
	reg [5:0] instr_op;

	// Outputs
	wire reg_dst;
	wire branch;
	wire mem_read;
	wire mem_to_reg;
	wire [1:0] alu_op;
	wire mem_write;
	wire alu_src;
	wire reg_write;

	// Instantiate the Unit Under Test (UUT)
	control_unit uut (
		.instr_op(instr_op), 
		.reg_dst(reg_dst), 
		.branch(branch), 
		.mem_read(mem_read), 
		.mem_to_reg(mem_to_reg), 
		.alu_op(alu_op), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write)
	);

	initial begin
		// Initialize Inputs
		instr_op = 6'b000000;		

		// Wait 100 ns for global reset to finish
		
		#100;
		instr_op = 6'b000000;		//R type
		
		#100;
      instr_op = 6'b100011;		//lw
		
		#100;
		instr_op = 6'b101011;		//sw
		
		#100;
		instr_op = 6'b000100;		//beq
		
		#100;
		instr_op = 6'b001000;			//imm
		
		// Add stimulus here

	end
      
endmodule

