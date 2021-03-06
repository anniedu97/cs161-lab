`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:07 03/08/2019 
// Design Name: 
// Module Name:    SPFPAdder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 _ File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SPFPAdder #(parameter FP_SIZE = 32) (
		input clk,
		input rst,
		input enable,
		output reg valid,
		input[31:0]  A,
		input[31:0]  B,
		output reg[FP_SIZE-1:0] result
	);
	
	reg[FP_SIZE-1:0] Result;
	reg[FP_SIZE-1:0] yourresult;
	
	
	reg [32:0] A_33;
	reg [32:0] B_33;
	reg [7:0] expA;
	reg [7:0] expB;
	reg [7:0] expDiff;
	reg [7:0] expR;
	reg sign;
	reg [23:0] C;
	reg [24:0] C_25;
	reg Cout;
	reg [32:0] temp;
	reg [7:0] tmp_exp;
	
	integer sft_amt;
	
     // Implement your code here 
	always @(posedge clk)  begin
		//Exponents
		expA = A[30:23];
		expB = B[30:23];
		
		//Extend A to 33bits
		A_33[32:24] = A[31:23];
		A_33[22:0] = A[22:0];
		
		if(expA == 0) begin  
			A_33[23] = 1'b0;
		end
		
		else begin
			A_33[23] = 1'b1;
		end
		
		//Extend B to 33bits
		B_33[32:24] = B[31:23];
		B_33[22:0] = B[22:0];
		
		if(expB == 0) begin
			B_33[23] = 1'b0;
		end
		
		else begin
			B_33[23] = 1'b1;
		end
		
		if($signed(expB) > $signed(expA)) begin
			temp = B_33;
			B_33 = A_33;
			A_33 = temp;
			tmp_exp = expB;
			expB = expA;
			expA = tmp_exp;
		end
		
		
		expDiff = $signed(expA) - $signed(expB);
		
		if($signed(expDiff) < 0) begin
			expDiff = ~expDiff + 1;
		end
		
		B_33[23:0] = B_33[23:0] >> expDiff;
		
		if(A_33[32] != B_33[32]) begin
			B_33[32] = ~B_33[32];
			B_33[23:0] = ~B_33[23:0] + 1;
		end
		
		C_25 = A_33[23:0] + B_33[23:0];
		
		Cout = C_25[24]; 
		C = C_25[23:0];
		
		if((C[23] == 1'b1) && (A[31] != B[31]) && (Cout == 0)) begin
			C = ~C + 1;
		end
		
		if((A[31] == B[31]) && Cout) begin
			C = C >> 1;
			C[23] = 1'b1;
			sft_amt = 1;
		end
		
		else begin
			sft_amt = 0;
			while(C[23] != 1'b1 && sft_amt < 24) begin
				C = C << 1;
				sft_amt = sft_amt + 1;
			end
			
		end
		
		if(sft_amt >= 24) begin
				yourresult = 0;
				sft_amt = 0;
		end
		
		else begin
			expR = expA + sft_amt;
			sign = A_33[32];
			
			yourresult = {sign, expR, C[22:0]};
			
		end
		
	
	end

	// Sequential Part 
	always @(posedge clk) begin

		if (rst) begin
			Result <= 0;
			valid  <= 0;
		end
		else begin
			result <= yourresult ; 
			valid <= enable;
		end
	end
endmodule
