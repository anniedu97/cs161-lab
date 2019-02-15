`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:58:44 02/01/2019 
// Design Name: 
// Module Name:    alu_control 
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
module alu_control(
	 input wire [3:0] alu_op , 
    input wire [5:0] instruction_5_0 , 
    output wire [3:0] alu_out 
    );
	 
	 reg [3:0] out;
	 
	 assign alu_out = out;
	 
	 localparam mem = 2'b00;
	 localparam beq = 2'b01;
	 localparam R   = 2'b10;
	 
	 localparam ADD = 6'b100000;
	 localparam SUB = 6'b100010;
	 localparam AND = 6'b100100;
	 localparam OR  = 6'b100101;
	 localparam NOR = 6'b100111;
	 localparam SLT = 6'b101010;
	 
	 
	 always @ * begin
		
		case(alu_op)
			mem:	begin
				out = 4'b0010;
			end
			
			beq:	begin
				out = 4'b0110;
			end
			
			R:		begin
				case(instruction_5_0) 
					ADD:	begin
						out = 4'b0010;
					end
					
					SUB:	begin
						out = 4'b0110;
					end
					
					AND:	begin
						out = 4'b0000;
					end
					
					OR:	begin
						out = 4'b0001;
					end
					
					NOR:	begin
						out = 4'b1100;
					end
					
					SLT:	begin
						out = 4'b0111;
					end
				
				endcase
			
			
			end
			
			default:	begin
				out = 4'b0000;
			
			end
		
		
		
		
		endcase
	 
	 
	 end
	 
	 


endmodule
