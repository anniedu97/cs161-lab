`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:55:54 01/25/2019 
// Design Name: 
// Module Name:    fixnfloat 
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
module fixnfloat(
  input wire clk, 
  input wire rst , 
  input wire [31:0] targetnumber, 
  input wire[4:0] fixpointpos , 
  input wire opcode , 
  output wire[31:0] result );

wire [31:0] floatresult ; 
wire [31:0] fixresult ; 

reg [31:0] float_res;
reg [31:0] fix_res;
reg [31:0] res_reg;


assign floatresult = float_res;
assign fixresult = fix_res;
assign result = res_reg;

reg [31:0] number;
integer shift = 0;
integer exponent = 0;
integer exp = 0;
integer i;
integer j;
integer k;


// -------------------------------------------
// From fix to float 
// -------------------------------------------

// Your  Implementation 

always @(posedge clk) begin
	
		number = targetnumber;
		shift = 0;	
		
		if(number[31] == 0) begin
			float_res[31] = 1'b0;
		end
		
		else begin
			float_res[31] = 1'b1;
			number = ~number + 1;
		end
		
		j = fixpointpos;
		number = number >> j;
		
		while (number >= 2) begin
			number = number >> 1;
			shift = shift + 1;
			
		end
		
		exponent = shift + 127;
		
		float_res [30:23] = exponent;
		
		j = fixpointpos - 1 + shift; 
		k = shift;
		
		
		if(targetnumber[31] == 1'b1)begin
			number = ~targetnumber + 1;
		end
		else
			number = targetnumber;
		
		for(i = 22; i >= 0; i = i - 1) begin  
			if(j >= 0) begin
				float_res[i] = number[j];
				j = j - 1;
			end
			else begin
				float_res[i] = 0;
			end
			
		end
		
		if (targetnumber == 0) begin
            float_res = 0;
        end
		
		
		
end

	
	
	
	


// -------------------------------------------	
// From float to fix  
// -------------------------------------------

// Your  Implementation  
always @(posedge clk) begin 
		exp = targetnumber[30:23];
		exp = exp - 127;
		
		
		fix_res = 0;
		fix_res[23] = 1'b1;
		fix_res[22:0] = targetnumber[22:0];
		fix_res = fix_res >> (23 -(exp + fixpointpos)); 
		
		if(targetnumber[31] == 1) begin 
			fix_res = ~fix_res + 1;
		end
		
end

// -------------------------------------------	
// Register the results 
// -------------------------------------------

always @ ( posedge rst ) begin 

 res_reg <= opcode == 1 ?  fixresult : floatresult ; 

end 

endmodule




