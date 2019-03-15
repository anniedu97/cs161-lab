`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:38:56 03/15/2019
// Design Name:   floatingPointMultiplier
// Module Name:   C:/Users/Anaya/Documents/CS161L/FP_Mult/floatingPointMultiplier_tb.v
// Project Name:  FP_Mult
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: floatingPointMultiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module floatingPointMultiplier_tb;

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
	floatingPointMultiplier uut (
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
		rst = 1;
		enable = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk = 0;
		rst = 0;
		enable = 0;
		A = 0;
		B = 0;
		
		#100
		
		B = 32'h40a80000; //5.25	
		A = 32'h40700000; //3.75   0x419D8000
		
		#100;
		
		A = 32'h40a80000; //5.25	
		B = 32'h40700000; //3.75
		
		#100
		
		
		A = 32'h42c88000; //100.25
		B = 32'h40b80000;	//5.75	0x44101c00
		
		#100
		
		A = 32'hc0f00000; //-7.5
		B = 32'hc15c0000; //-13.75  0x42ce4000
		
		#100
		
		A = 32'h41da0000;//27.25
		B = 32'hc0e80000;//-7.25
		
		#100
		
		A = 32'h40a80000; //5.22
		B = 0;
		
		#100
		
		A = 32'H7fffffff; //NaN
		B = 32'h42c88000; //100.25
		
		
		
		
        
		// Add stimulus here
		

	end
	
	always 
			#20 clk = ~clk;
      
      
endmodule

