module testbench();

reg Clk;
reg Reset;
reg Start;
reg signed [31:0] A;
reg signed [31:0] B;
wire signed [31:0] Result;
wire Done;

initial
begin
	Clk = 1;
	Reset = 1;
	Start = 0;
	A = 77777;
	B = 63;
	#20 Reset = 0;
	#10 Reset = 1;
	#100 Start = 1;
end

always
begin
	#5 Clk = ~Clk;
end

gcd_top
#(
	.DATA_WIDTH(32),
	.PIPELINE_DEPTH(63)
) inst (
	.Clk(Clk),
	.Reset(Reset),
	.Start(Start),
	.A(A),
	.B(B),
	.Result(Result),
	.Done(Done)
);

endmodule