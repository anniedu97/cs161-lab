`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

`define WORD_SIZE 32

module cs161_datapath(
    clk ,     
    rst ,     
    instr_op ,
    funct   , 
    reg_dst , 
    branch  , 
    mem_read , 
    mem_to_reg ,
    alu_op    , 
    mem_write  ,
    alu_src  ,  
    reg_write ,    
	 
    // Debug Signals
    prog_count ,  
    instr_opcode ,  
    reg1_addr   ,  
    reg1_data  ,   
    reg2_addr  ,   
    reg2_data  ,   
    write_reg_addr ,
    write_reg_data
    );

 input wire  clk ; 
 input wire  rst ;
 
 output wire[5:0] instr_op ;
 output wire[5:0] funct  ;  
 
 input wire   reg_dst  ;
 input wire   branch   ;
 input wire   mem_read ;
 input wire   mem_to_reg ;
 input wire[3:0] alu_op  ;  
 input wire   mem_write ;
 input wire   alu_src   ; 
 input wire   reg_write  ;
 
 
// ----------------------------------------------
// Debug Signals
// ----------------------------------------------
  
 output wire[`WORD_SIZE-1:0]  prog_count; 
 output wire[5:0] instr_opcode   ;  
 output wire[4:0] reg1_addr     ;   
 output wire[`WORD_SIZE-1:0] reg1_data ;
 output wire[4:0] reg2_addr   ;   
 output wire[`WORD_SIZE-1:0] reg2_data ;
 output wire[4:0] write_reg_addr  ;
 output wire[`WORD_SIZE-1:0] write_reg_data ; 

// Insert your solution below here.

reg [`WORD_SIZE-1:0] PC;
wire [`WORD_SIZE-1:0] instr;
wire [5:0] opcode;
wire [4:0] dst_addr;
wire [`WORD_SIZE-1:0] alu_B;
wire [`WORD_SIZE-1:0] alu_result;
wire [`WORD_SIZE-1:0] mem_data;
wire [4:0] dst_2;
wire [4:0] dst_1;
wire [`WORD_SIZE-1:0] reg_data_1;
wire [`WORD_SIZE-1:0] reg_data_2;
assign dst_1 = instr[20:16];
assign dst_2 = instr[15:11];


assign prog_count = PC;
assign instr_opcode = instr[31:26];
assign reg1_addr = instr[25:21];
assign reg2_addr = instr[20:16];


//assign write_reg_data = alu_result;
assign reg1_data = reg_data_1;
assign reg2_data = reg_data_2;
assign write_reg_addr = dst_addr;


initial begin
	PC = 0;
end


always @(posedge clk) begin
	PC = PC + 1;
	//$display("%b", instr[31:0]);
	//$display("%b", dst_2);
end
/*
always @* begin

	dst_addr = (reg_dst) ? dst_1 : dst_2;
	$display("%b dst1", dst_1);
	$display("%b dst2", dst_2);
	$display("%b reg_dst", reg_dst);
	$display("%b dst_addr", dst_addr);
	$display("\n");
end
*/
cpumemory mem (
	.clk(clk),
	.rst(rst),
	.instr_read_address(PC),
	.instr_instruction(instr)
);
	


mux_2_1 regdst_mux(
	.select_in(reg_dst),
	.datain1(dst_1),
	.datain2(dst_2),
	.data_out(dst_addr)
);




cpu_registers regs(
	.clk(clk),
	.rst(rst),
	.read_register_1(reg1_addr),
	.read_register_2(reg2_addr),
	.read_data_1(reg_data_1),
	.read_data_2(reg_data_2)
);

mux_2_1 alu_src_mux(
	.select_in(alu_src),
	.datain1(reg_data_2),
	.datain2(instr[15:0]),
	.data_out(alu_B)
);

alu_control alu_ctrl(
	.alu_op(alu_op),  
	.instruction_5_0(opcode)
	
);

my_alu alu(
	.clk(clk),
	.reset(rst),
	.A(reg_data_1),
	.B(alu_B),
	.result(alu_result)
);

mux_2_1 mem_to_reg_mux(
	.select_in(mem_to_reg),
	.datain1(alu_res),
	.datain2(mem_data),
	.data_out(write_reg_data)
);


cpu_registers WB(
	.clk(clk),
	.rst(rst),
	.reg_write(reg_write),
	.write_register(write_reg_addr),
	.write_data(write_reg_data)
);





endmodule
