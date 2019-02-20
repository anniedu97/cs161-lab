`timescale 1ns / 1ps

module cs161_processor(
    clk ,
    rst ,   
	 // Debug signals 
    prog_count     , 
    instr_opcode   ,
    reg1_addr      ,
    reg1_data      ,
    reg2_addr      ,
    reg2_data      ,
    write_reg_addr ,
    write_reg_data  
    );

input wire clk ;
input wire rst ;
    
// Debug Signals

input wire[31:0] prog_count     ; 
input wire[5:0]  instr_opcode   ;
input wire[4:0]  reg1_addr      ;
input wire[31:0] reg1_data      ;
input wire[4:0]  reg2_addr      ;
input wire[31:0] reg2_data      ;
input wire[4:0]  write_reg_addr ;
input wire[31:0] write_reg_data ;

wire [5:0] opcode;
wire [31:0] PC;

wire reg_dst;
wire branch;    
wire mem_read;  
wire mem_to_reg;
wire [3:0]  alu_op;
wire mem_write;  
wire alu_src; 
wire reg_write;



assign prog_count = PC;
assign instr_opcode = opcode;

// Insert your solution below here.
	 
cs161_datapath DP (
	.clk(clk),
	.rst(rst),
	.branch(branch),
	.mem_read(mem_read),
	.mem_to_reg(mem_to_reg),
	.alu_op(alu_op),
	.mem_write(mem_write),
	.alu_src(alu_src),
	.reg_write(reg_write),	
	.prog_count(PC),
	.instr_opcode(opcode),	
	.reg_dst(reg_dst),
	.reg1_addr(reg1_addr),
	.reg1_data(reg1_data),
	.reg2_addr(reg2_addr),
	.reg2_data(reg2_data),
	.write_reg_addr(write_reg_addr),
	.write_reg_data(write_reg_data)
);

control_unit ctrl (
	.instr_op(opcode),
	.reg_dst(reg_dst),
	.branch(branch),    
	.mem_read(mem_read), 
	.mem_to_reg(mem_to_reg),
	.alu_op(alu_op),
	.mem_write(mem_write),  
	.alu_src(alu_src),
	.reg_write(reg_write)
);
	          
endmodule
