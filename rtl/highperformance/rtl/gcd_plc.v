module gcd_plc
#(
    parameter DATA_WIDTH = 32
)(
    input wire                         Clk,
    input wire                         Reset,
    input wire                         Start,

    input wire signed [DATA_WIDTH-1:0] Ain,
    input wire signed [DATA_WIDTH-1:0] Bin,
    input wire        [DATA_WIDTH-1:0] Cin,

    output reg signed [DATA_WIDTH-1:0] Aout,
    output reg signed [DATA_WIDTH-1:0] Bout,
    output reg        [DATA_WIDTH-1:0] Cout
);

wire signed [DATA_WIDTH-1:0] ab_sub;
wire signed [DATA_WIDTH-1:0] ba_sub;
wire signed [DATA_WIDTH-1:0] ab_sub_sr1;
wire signed [DATA_WIDTH-1:0] ba_sub_sr1;

wire signed [DATA_WIDTH-1:0] ain_sr1;
wire signed [DATA_WIDTH-1:0] bin_sr1;

assign ab_sub = Ain - Bin;
assign ba_sub = Bin - Ain;
assign ab_sub_sr1 = ab_sub >>> 1;
assign ba_sub_sr1 = ba_sub >>> 1;

assign ain_sr1 = Ain >>> 1;
assign bin_sr1 = Bin >>> 1;

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

    /* bypass */
    else if(ab_sub == 0 || Ain == 0 || Bin == 0)
    begin
        Aout <= Ain;
        Bout <= Bin;
        Cout <= Cin;
    end

    /* a>b */
    else if(ab_sub[DATA_WIDTH-1] == 0)
    begin
        if(Ain[0] == 0 && Bin[0] == 0)
        begin
            Aout <= ab_sub_sr1;
            Bout <= bin_sr1;
            Cout <= Cin + 1;
        end
        else if(Ain[0] == 1 && Bin[0] == 0)
        begin
            Aout <= ab_sub;
            Bout <= bin_sr1;
            Cout <= Cin;
        end
        else if(Ain[0] == 0 && Bin[0] == 1)
        begin
            Aout <= ain_sr1; //ab_sub
            Bout <= Bin;
            Cout <= Cin;
        end
        else
        begin
            Aout <= ab_sub_sr1;
            Bout <= Bin;
            Cout <= Cin;
        end
    end

    /* a<b */
    else
    begin
        if(Bin[0] == 0 && Ain[0] == 0)
        begin
            Aout <= ba_sub_sr1;
            Bout <= ain_sr1;
            Cout <= Cin + 1;
        end
        else if(Bin[0] == 1 && Ain[0] == 0)
        begin
            Aout <= ba_sub;
            Bout <= ain_sr1;
            Cout <= Cin;
        end
        else if(Bin[0] == 0 && Ain[0] == 1)
        begin
            Aout <= bin_sr1; //ba_sub
            Bout <= Ain;
            Cout <= Cin;
        end
        else
        begin
            Aout <= ba_sub_sr1;
            Bout <= Ain;
            Cout <= Cin;
        end
    end
end

endmodule