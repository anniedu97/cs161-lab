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
wire [`WORD_SIZE-1:0] newPC;

wire [`WORD_SIZE-1:0] instr;
wire [5:0] opcode;
wire [3:0] alu_fnct;
wire [4:0] dst_addr;
wire [`WORD_SIZE-1:0] alu_B;
wire [`WORD_SIZE-1:0] alu_result;
wire [`WORD_SIZE-1:0] mem_data;
wire [`WORD_SIZE-1:0] reg_data_1;
wire [`WORD_SIZE-1:0] reg_data_2;
wire [31:0] signEX;
wire [31:0] branch_addr;
reg [31:0] branch_a;
wire branch_taken;

wire [4:0] dst_2;
wire [4:0] dst_1;

assign prog_count = PC;
assign instr_opcode = instr[31:26];
assign reg1_addr = instr[25:21];
assign reg2_addr = instr[20:16];
assign reg1_data = reg_data_1;
assign reg2_data = reg_data_2;
assign funct = instr[5:0];
assign signEX = { {16{instr[15]}}, instr[15:0]};
assign branch_taken = (branch && alu_result == 0);

//Pipeline Regs
reg [`WORD_SIZE-1:0] Instruction;
reg [`WORD_SIZE-1:0] Reg1_Data;
reg [`WORD_SIZE-1:0]	Reg2_Data;
reg [`WORD_SIZE-1:0] ALU_Result;

initial begin
	PC = 0;
end


always @(posedge clk) begin
	if(rst) begin
		PC = 0;
	end
	
	else begin 
		PC = newPC + 4;
	end
	
end

cpumemory mem (
	.clk(clk),
	.rst(rst),
	.instr_read_address(PC/4),
	.instr_instruction(instr),
	.data_mem_write(mem_write),
	.data_address(alu_result/4 - 1),
	.data_write_data(reg2_data),
	.data_read_data(mem_data) 
);
	
assign opcode = instr[31:26];
assign reg_1_adress = instr[25:21];


mux_2_1 branch_mux(
	.select_in(branch_taken),
	.datain1(PC),
	.datain2(PC + (signEX <<< 2) ),
	.data_out(newPC)
);

mux_2_1 regdst_mux(
	.select_in(reg_dst),
	.datain1(instr[20:16]),
	.datain2(instr[15:11]),
	.data_out(write_reg_addr)
);

cpu_registers regs(
	.clk(clk),
	.rst(rst),
	.reg_write(reg_write),
	.read_register_1(reg1_addr),
	.read_register_2(reg2_addr),
	.read_data_1(reg_data_1),
	.read_data_2(reg_data_2),
	.write_register(write_reg_addr),
	.write_data(write_reg_data) 
);

mux_2_1 alu_src_mux(
	.select_in(alu_src),
	.datain1(reg_data_2),
	.datain2(signEX),
	.data_out(alu_B)
);

alu_control alu_ctrl(
	.clk(clk),
	.rst(rst),
	.alu_op(alu_op),  
	.instruction_5_0(funct),
	.alu_out(alu_fnct)
);

my_alu alu(
	.clk(clk),
	.reset(rst),
	.opcode(alu_fnct),
	.A(Reg1_Data),
	.B(alu_B),
	.result(alu_result)
);

mux_2_1 mem_to_reg_mux(
	.select_in(mem_to_reg),
	.datain1(alu_result),
	.datain2(mem_data),
	.data_out(write_reg_data)
);

gen_register PC(
	.clk(clk),
	.rst(rst),
	.write_enable(1),
	.data_in(),
	.data_out()
);

gen_register Instr(
	.clk(clk),
	.rst(rst),
	.write_enable(1),
	.data_in(instr),
	.data_out(Instruction)
);

gen_register Reg1(
	.clk(clk),
	.rst(rst),
	.write_enable(1),
	.data_in(reg1_data),
	.data_out(Reg1_Data)	
);

gen_register Reg2(
	.clk(clk),
	.rst(rst),
	.write_enable(1),
	.data_in(reg2_data),
	.data_out(Reg2_Data)	
);

gen_register ALU_Res(
	.clk(clk),
	.rst(rst),
	.write_enable(1),
	.data_in(alu_result),
	.data_out(ALU_Result)	
);

endmodule
