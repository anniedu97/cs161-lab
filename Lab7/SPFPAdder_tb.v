`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:29:46 03/13/2019
// Design Name:   SPFPAdder
// Module Name:   C:/Users/Anaya/Documents/CS161L/Lab7/SPFPAdder_tb.v
// Project Name:  Lab7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPFPAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPFPAdder_tb;

	// Inputs
	reg clk;
	reg rst;
	reg enable;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire valid;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	SPFPAdder uut (
		.clk(clk), 
		.rst(rst), 
		.enable(enable), 
		.valid(valid), 
		.A(A), 
		.B(B), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst = 0;
		enable = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		B = 'h40a80000; //5.25	
		A = 'h40700000; //3.75
		
		#100
		
		A = 'hc12c0000; //-10.75 
		B = 'h40a00000; // 5
		
		#100;
		
		A = 'h40a80000; //5.25	
		B = 'h40700000; //3.75
		
        
		// Add stimulus here
		

	end
	
	always 
			#40 clk = ~clk;
      
endmodule

