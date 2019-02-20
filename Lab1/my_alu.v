`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:41:01 01/11/2019 
// Design Name: 
// Module Name:    my_alu 
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
module my_alu #(parameter NBITS = 32)(
    input clk,
    input reset,
    input [NBITS-1:0] A,
    input [NBITS-1:0] B,
    input [3:0] opcode,
    output signed [NBITS-1:0] result,
    output carryout,
    output overflow,
    output zero
    );
	 
	 wire signed [NBITS-1:0] X;
	 wire signed [NBITS-1:0] Y;
	 reg signed [NBITS-1:0] res;
	 reg zer;
	 reg ovflo;
	 reg cout;
	 
	 assign X = A;
	 assign Y = B;
	 
	 assign result = res;
	 assign zero = zer;
	 assign overflow = ovflo;
	 assign carryout = cout;
	 
	 
	 localparam u_add = 4'b1000;
	 localparam s_add = 4'b0010;
	 localparam u_sub = 4'b0100;
	 localparam s_sub = 4'b0110;
	 localparam AND   = 4'b0000;
	 localparam OR    = 4'b0001; 
	 localparam XOR   = 4'b1110;
	 localparam div2  = 4'b1110;
	 localparam NOR 	= 4'b1100;
	 localparam SLT	= 4'b0111;
	 
	 always @(posedge clk) begin
		ovflo = 0;
		zer = 0;
		cout = 0;
		
		case(opcode) 
			u_add: begin
						res = A + B;
						if(res < A && res < B)begin
							cout = 1;
						end
						else begin
							cout = 0;
						end
					 end	
			s_add: begin
						res = X + Y;
						if(X >= 0 && Y >= 0 && res < 0)begin
							ovflo = 1;
						end
						else if(X < 0 && Y < 0 && res >= 0)begin
							ovflo = 1;
						end
						else begin
							ovflo = 0;
						end
					 end
			
			u_sub: begin
						res = A - B;
						if(res > A && res > B)begin 
							cout = 1;
						end
						else begin
							cout = 0;
						end
							
					 end
			
			s_sub: begin
						res = X - Y;
						if(X >= 0 && Y < 0 && res < 0)begin
							ovflo = 1;
						end
						else if(X < 0 && Y >= 0 && res >= 0)begin
							ovflo = 1;
						end
						else begin
							ovflo = 0;
						end
						
			       end
			
			AND: begin
						res = A & B;
					end
			
			OR: begin
						res = A | B;
			    end
			
			XOR: begin
						res = A ^ B;
			
			     end
				  
			div2: begin
						res = A >>> 1;
		 
		         end
					
			NOR: begin
					res = ~(A | B);

				end
				
			SLT:	begin
					if(A < B) begin
						res = 0;
					end
				end
					
			default: begin
							res = -1;	
							ovflo = 0;
			         end
			
			endcase
			
			if(result == 0)begin
				zer = 1;
			end
			
			else begin
				zer = 0;
			end
		
	 end 
	 
	 
	 
	 


endmodule
