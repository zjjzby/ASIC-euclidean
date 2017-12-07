module gcd_output
#(
    parameter DATA_WIDTH = 32
)(
    input wire                         Clk,
    input wire                         Reset,
    input wire                         Start,

    input wire signed [DATA_WIDTH-1:0] Ain,
    input wire signed [DATA_WIDTH-1:0] Bin,
    input wire        [DATA_WIDTH-1:0] Cin,

    output reg signed [DATA_WIDTH-1:0] Pout,
    output reg                         Done
);

localparam ERROR = 32'hFFFF_FFFF;

always @(posedge Clk or negedge Reset)
begin
    if(!Reset)
    begin
        Pout <= 0;
        Done <= 0;
    end
    else if(!Start || (Ain == 0 && Bin == 0))
    begin
        Pout <= Pout;
        Done <= Done;
    end
    else if(Ain == Bin)
    begin
        Pout <= Ain <<< Cin;
        Done <= 1;
    end
    else if(Ain == 0)
    begin
        Pout <= Bin <<< Cin;
        Done <= 1;
    end
    else if(Bin == 0)
    begin
        Pout <= Ain <<< Cin;
        Done <= 1;
    end
    else
    begin
        Pout <= ERROR;
        Done <= 0;
    end
end

endmodule