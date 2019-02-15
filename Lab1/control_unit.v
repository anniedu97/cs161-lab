`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:56:33 02/01/2019 
// Design Name: 
// Module Name:    control_unit 
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
module control_unit(
	 input wire [5:0]  instr_op , 
    output wire reg_dst      ,   
    output wire  branch    ,     
    output wire  mem_read ,  
    output wire  mem_to_reg  ,
    output wire [3:0]  alu_op  ,        
    output wire  mem_write  , 
    output wire  alu_src     ,    
    output wire  reg_write  
    );
	
	
	reg [8:0] reg_out;
	assign reg_dst = reg_out[8];
	assign alu_src = reg_out[7];
	assign mem_to_reg = reg_out[6];
	assign reg_write = reg_out[5];
	assign mem_read = reg_out[4];
	assign mem_write = reg_out[3];
	assign branch = reg_out[2];
	assign alu_op = reg_out[1:0];

	localparam R = 6'b000000;
	localparam lw = 6'b100011;
	localparam sw = 6'b101011;
	localparam beq = 6'b000100;
	localparam imm = 6'b001000;


	always @ * begin
		reg_out = 0;
		
		case(instr_op) 
			R:		begin
				reg_out[8] = 1'b1;
				reg_out[5] = 1'b1;
				reg_out[1] = 1'b1;
			
				end
			lw:	begin
				reg_out[7] = 1'b1;
				reg_out[6] = 1'b1;
				reg_out[5] = 1'b1;
				reg_out[4] = 1'b1;
				
				end
				
			sw:	begin
				reg_out[7] = 1'b1;
				reg_out[3] = 1'b1;
			
				end
				
			beq:	begin
				reg_out[2] = 1'b1;
				reg_out[0] = 1'b1;
				end
				
			imm:	begin
				reg_out[7] = 1'b1;
				reg_out[5] = 1'b1;	
			end
			
			default: begin
			
			end
				
		endcase
			
	
	
	
	end
	



endmodule
