`timescale 1ns / 1ps

module testbench;
	import "DPI-C" function longint gcdfunc(input longint a, input longint b);
	import "DPI-C" function longint gcd(input longint a, input longint b);


reg [31:0] opa;
reg [31:0] opb;
reg start;
reg rst;
reg clk;
wire done;
wire [31:0] result;

bit errorFlag = 1'b0;

gcd_top top_test_module(
		.A(opa),
		.B(opb),
		.Start(start),
		.Reset(rst),
		.Clk(clk),
		.Done(done),
		.Result(result)
);

class Bus;
	rand bit[31:0] NA;
	rand bit[31:0] NB;
	constraint word_align1 {NA[31:30] == 1'b0;}
	constraint word_aling2 {NB[31:30] == 1'b0;}

endclass

Bus bus = new;

integer k;
integer nright;
integer nfalse;
longint gcdresult;
longint desingresult;

initial begin 
	$display("low power design function verification");
#0
nright = 0;
nfalse = 0;
rst = 1'b0;
opa = 32'd0;
opb = 32'd0;
start = 1'b0;
#1000;
rst = 1'b1;

$display("Start verification");

for(k = 0; k < 10000; k = k + 1) begin 

	#200;
	if (bus.randomize() == 1);
	else
		$display("Randomization failed");
	opa = bus.NA;
	opb = bus.NB;
	gcdresult = gcd(longint'(bus.NA), longint'(bus.NB));
	#200;
	start = 1'b1;
        #200;
	start = 1'b1;
	#10000000;
	if (desingresult == gcdresult)
		nright = nright + 1;
	else begin 
		$display("operator is: opa = %d , opb = %d", opa, opb);
		$display("two result is not equal: desingresult = %d , gcdresult = %d", desingresult, gcdresult);		
		errorFlag = 1'b1;
		nfalse = nfalse + 1;
	end
	if (k % 100 == 0)
		$display("have finish %d percent test", k/100);

		
end

$display("%d cases pass", nright);
$display("%d cases failed", nfalse);

if (errorFlag == 1)
	$display("design verification fail");
else
	$display("design verification pass");

#10000;

$finish;


end


always @ (result) begin
     desingresult = result;
end

always 
begin
    clk = 1'b0;
    #100;
    clk = 1'b1;
    #100;
end


endmodule
