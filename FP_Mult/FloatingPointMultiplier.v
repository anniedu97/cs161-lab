`timescale 1ns / 1ps

module floatingPointMultiplier(
    input clk,
    input rst,
    input enable,
    output reg valid,
    input[31:0] A,
    input[31:0] B,
    output reg[31:0] result
);

// Implement your solution here

reg [31:0] yourresult;

reg [7:0] expA;
reg [7:0] expB;
reg [7:0] expR;
reg sign;
reg [23:0] A_expand;
reg [23:0] B_expand;
reg [47:0] Mult;
reg [22:0] Normie;

integer shift_amt;


always @(posedge clk) begin
	expA = A[30:23];
	expB = B[30:23];
	
	//Calculate Exponent
	expR = $signed(expA) + $signed(expB);
	expR = expR - 127;
	
	//Sign
	sign = A[31] ^ B[31];
	
	//EXPAND Dong
	A_expand = A[22:0];
	B_expand = B[22:0];
	
	if(expA == 0) begin
		A_expand[23] = 1'b0;
	end
	
	else begin
		A_expand[23] = 1'b1;
	end
	
	if(expB == 0) begin
		B_expand[23] = 1'b0;
	end
	
	else begin
		B_expand[23] = 1'b1;
	end
	
	Mult = A_expand * B_expand;
	
	shift_amt = 1;
	
	while(Mult[47] != 1 && shift_amt < 47) begin
		Mult = Mult << 1;
		shift_amt = shift_amt + 1;
	
	end
	
	Normie = Mult[47:24];
	
	expR = expR + shift_amt;
	
	
	
	yourresult = {sign, expR, Normie};
	
	if(A == 0 || B == 0) begin
		yourresult = 0;
	end
	
	else if(A == 32'h7fffffff || B == 32'h7fffffff) begin
		yourresult = 32'h7fffffff;
	end
	


end



// Sequential section
always @(posedge clk) begin
    if(rst) begin
        result <= 0;
        valid <= 0;
    end
    else begin
        result <= yourresult;
        valid <= enable;
    end
end

endmodule
