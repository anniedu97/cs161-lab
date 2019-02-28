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
wire [31:0] signEX;
wire [31:0] branch_addr;
reg [31:0] branch_a;
wire branch_taken;
wire [4:0] dst_2;
wire [4:0] dst_1;

assign prog_count = PC;
assign instr_opcode = Instruction[31:26];
assign reg1_addr = Instruction[25:21];
assign reg2_addr = Instruction[20:16];
assign funct = Instruction[5:0];
assign signEX = { {16{Instruction[15]}}, Instruction[15:0]};
assign branch_taken = (Branch_sig2 && alu_result == 0);

assign dst_1 = Instruction[20:16];
assign dst_2 = Instruction[15:11];

//Pipeline Regs
wire [`WORD_SIZE-1:0] Instruction;
wire [`WORD_SIZE-1:0] Reg1_Data;
wire [`WORD_SIZE-1:0] Reg2_Data;
wire [`WORD_SIZE-1:0] ALU_Result;
wire [`WORD_SIZE-1:0] ALU_Result2;
wire [`WORD_SIZE-1:0] Sign_Ex;
wire [4:0] Dst1_Addr;
wire [4:0] Dst2_Addr;
wire [4:0] Write_Reg_Addr;
wire [4:0] Write_Reg_Addr2;
wire [4:0] Write_Reg_Addr3;
wire [`WORD_SIZE-1:0] Mem_Data;
wire Reg_Dst_sig;
wire Branch_sig;
wire Mem_Read_sig;
wire Mem_to_Reg_sig;
wire [3:0] ALU_Op_sig;
wire Mem_Write_sig;
wire ALU_Src_sig;
wire Reg_Write_sig; 

wire Branch_sig2;
wire Mem_Read_sig2;
wire Mem_to_Reg_sig2;
wire Mem_Write_sig2;
wire Reg_Write_sig2; 

wire Mem_to_Reg_sig3;
wire Mem_Write_sig3;

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
	.data_mem_write(Mem_Write_sig3),
	.data_address(Alu_Result2/4 - 1),
	.data_write_data(Reg2_Data),
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
	.select_in(Reg_Dst_sig),
	.datain1(Dst1_Addr),
	.datain2(Dst2_Addr),
	.data_out(write_reg_addr)
);

cpu_registers regs(
	.clk(clk),
	.rst(rst),
	.reg_write(Reg_Write_sig2),
	.read_register_1(reg1_addr),
	.read_register_2(reg2_addr),
	.read_data_1(reg1_data),
	.read_data_2(reg2_data),
	.write_register(Write_Reg_Addr),
	.write_data(write_reg_data) 
);

mux_2_1 alu_src_mux(
	.select_in(ALU_Src_sig),
	.datain1(Reg2_Data),
	.datain2(Sign_Ex),
	.data_out(alu_B)
);

alu_control alu_ctrl(
	.clk(clk),
	.rst(rst),
	.alu_op(ALU_Op_sig),  
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
	.datain1(ALU_Result2),
	.datain2(Mem_Data),
	.data_out(write_reg_data)
);

//IF/ID
gen_register PC_reg(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(PC),
	.data_out(PC_reg_sig)
);

gen_register Instr(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(instr),
	.data_out(Instruction)	
);

//ID/EX
gen_register PC_reg2(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(PC_reg_sig),
	.data_out(PC_reg_sig2)
);

gen_register Reg1(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(reg1_data),
	.data_out(Reg1_Data)	
);

gen_register Reg2(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(reg2_data),
	.data_out(Reg2_Data)	
);

gen_register sign_extend(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(signEx),
	.data_out(SignEx)		
);

gen_register Dst_Addr_1(	
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(dst_1),
	.data_out(Dst1_Addr)		
);

gen_register Dst_Addr_2(	
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(dst_2),
	.data_out(Dst2_Addr)		
);

gen_register Write_Reg(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(write_reg_addr),
	.data_out(Write_Reg_Addr)		
);

gen_register Reg_Dst (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(reg_dst),
	.data_out(Reg_Dst_sig)		
);
   
gen_register Branch (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(branch),
	.data_out(Branch_sig)		
);

gen_register Mem_Read (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(mem_read),
	.data_out(Mem_Read_sig)		
);

gen_register Mem_to_Reg (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(mem_to_reg),
	.data_out(Mem_to_Reg_sig)		
);

gen_register Alu_op (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(alu_op),
	.data_out(ALU_Op_sig)		
);
  
gen_register Mem_Write (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(mem_write),
	.data_out(Mem_Write_sig)		
);  
  
gen_register Alu_Src (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(alu_src),
	.data_out(ALU_Src_sig)		

);

gen_register Reg_Write (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(reg_write),
	.data_out(Reg_Write_sig)		
);  

//EX/MEM
gen_register PC_reg3(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(PC_reg_sig2),
	.data_out(PC_reg_sig3)
);

gen_register ALU_Res(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(alu_result),
	.data_out(ALU_Result)	
);

gen_register Branch2 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Branch_sig),
	.data_out(Branch_sig2)		
);

gen_register Mem_Read2 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Mem_to_Reg_sig),
	.data_out(Mem_Read_sig2)		
);

gen_register Mem_to_Reg2 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Mem_to_Reg_sig),
	.data_out(Mem_to_Reg_sig2)		
);

  
gen_register Mem_Write2 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Mem_Write_sig),
	.data_out(Mem_Write_sig2)		
);  

gen_register Reg_Write2 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Reg_Write_sig),
	.data_out(Reg_Write_sig2)		
);  

gen_register Write_Reg2(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Write_Reg_Addr),
	.data_out(Write_Reg_Addr2)		
);


//WB
gen_register PC_reg4(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(PC_reg_sig3),
	.data_out(PC_reg_sig4)
);

gen_register ALU_Res2(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Alu_Result),
	.data_out(ALU_Result2)	
);

gen_register MemData(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(mem_data),
	.data_out(Mem_Data)
);

gen_register Mem_to_Reg3 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Mem_to_Reg_sig2),
	.data_out(Mem_to_Reg_sig3)		
);

  
gen_register Mem_Write3 (
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Mem_Write_sig2),
	.data_out(Mem_Write_sig3)		
);  

gen_register Write_Reg3(
	.clk(clk),
	.rst(rst),
	.write_en(1),
	.data_in(Write_Reg_Addr2),
	.data_out(Write_Reg_Addr3)		
);




endmodule
