`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:30:24 01/30/2019
// Design Name:   fixnfloat
// Module Name:   C:/Users/Anaya/Documents/CS161L/Lab1/fixnfloat_tb.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fixnfloat
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fixnfloat_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] targetnumber;
	reg [4:0] fixpointpos;
	reg opcode;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	fixnfloat uut (
		.clk(clk), 
		.rst(rst), 
		.targetnumber(targetnumber), 
		.fixpointpos(fixpointpos), 
		.opcode(opcode), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		targetnumber = 1056;
		fixpointpos = 7;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		targetnumber = 2016;   //15.75 in fix
		fixpointpos = 7;
		
		#100
		
		targetnumber = 0;
		
		#100
		
		targetnumber = -1056;	//-8.25
		
		#100
		
		targetnumber = -2016;	//-15.75
		
		#100;
		
		targetnumber = 96;		//0.75 in fix
		
		#100
		
		targetnumber = -96;		//-0.75 in fix
		
		#100;
		
		opcode = 1;
		
		targetnumber = 'h41040000;		//8.25 in float
		
		#100;
		
		targetnumber = 'h417c0000;		//15.75 in float
		
		#100
		targetnumber = 'hc1040000;		//-8.25 in float
		
		#100
		targetnumber = 'hc17c0000;		//-15.25 in float
		
		#100
		targetnumber = 'h3f400000;		//0.75 in float
		
		#100
		targetnumber = 'hbf400000;		//-0.75 in float
		
        
		// Add stimulus here

	end
	
	always 
		#10 clk = ~clk;
	always
		#10 rst = ~rst;
	
      
endmodule

