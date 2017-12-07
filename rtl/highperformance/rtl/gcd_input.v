module gcd_input
#(
    parameter DATA_WIDTH = 32
)(
    input wire                         Clk,
    input wire                         Reset,
    input wire                         Start,

    input wire signed [DATA_WIDTH-1:0] Ain,
    input wire signed [DATA_WIDTH-1:0] Bin,

    output reg signed [DATA_WIDTH-1:0] Aout,
    output reg signed [DATA_WIDTH-1:0] Bout,
    output reg        [DATA_WIDTH-1:0] Cout
);

always @(posedge Clk or negedge Reset)
begin
    if(!Reset)
    begin
        Aout <= 0;
        Bout <= 0;
        Cout <= 0;
    end
    else if(!Start)
    begin
        Aout <= Aout;
        Bout <= Bout;
        Cout <= Cout;
    end
    else
    begin
        Aout <= Ain;
        Bout <= Bin;
        Cout <= 0;
    end
end

endmodule