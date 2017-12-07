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

top top_test_module(
		.opa(opa),
		.opb(opb),
		.start(start),
		.rst(rst),
		.clk(clk),
		.done(done),
		.result(result)
);

class Bus;
	rand bit[31:0] NA;
	rand bit[31:0] NB;
endclass

Bus bus = new;

integer k;
longint gcdresult;
longint desingresult;

initial begin 
	$display("low power design function verification");
#0
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
	start = 1'b0;
	#1000000;
	if (desingresult == gcdresult);
	else begin 
		$display("operator is: opa = %d , opb = %d", opa, opb);
		$display("two result is not equal: desingresult = %d , gcdresult = %d", desingresult, gcdresult);		
		errorFlag = 1'b1;
	end
	if (k % 100 == 0)
		$display("have finish %d percent test", k/100);

		
end



if (errorFlag == 1)
	$display("design verification fail");
else
	$display("design verification pass");

#10000;

$finish;


end


always @ (done) begin
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
