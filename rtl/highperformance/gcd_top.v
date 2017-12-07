module gcd_top
#(
    parameter DATA_WIDTH = 32,
    parameter PIPELINE_DEPTH = 63
)(
    input wire                          Clk,
    input wire                          Reset,
    input wire                          Start,

    input wire  signed [DATA_WIDTH-1:0] A,
    input wire  signed [DATA_WIDTH-1:0] B,

    output wire signed [DATA_WIDTH-1:0] Result,
    output wire                         Done
);

generate
    genvar i;
    for(i = 0; i < (PIPELINE_DEPTH + 1); i = i + 1)
    begin: plc_wire
        wire signed [DATA_WIDTH-1:0] a;
        wire signed [DATA_WIDTH-1:0] b;
        wire        [DATA_WIDTH-1:0] c;
    end
endgenerate

generate
    genvar j;
    for(j = 0; j < PIPELINE_DEPTH; j = j + 1)
    begin: plc
        gcd_plc
        #(
            .DATA_WIDTH(DATA_WIDTH)
        ) inst (
            .Clk   (Clk),
            .Reset (Reset),
            .Start (Start),
            .Ain   (plc_wire[j].a),
            .Bin   (plc_wire[j].b),
            .Cin   (plc_wire[j].c),
            .Aout  (plc_wire[j+1].a),
            .Bout  (plc_wire[j+1].b),
            .Cout  (plc_wire[j+1].c)
        );
    end
endgenerate

gcd_input
#(
    .DATA_WIDTH(DATA_WIDTH)
) input_inst (
    .Clk   (Clk),
    .Reset (Reset),
    .Start (Start),
    .Ain   (A),
    .Bin   (B),
    .Aout  (plc_wire[0].a),
    .Bout  (plc_wire[0].b),
    .Cout  (plc_wire[0].c)
);

gcd_output
#(
    .DATA_WIDTH(DATA_WIDTH)
) output_inst (
    .Clk   (Clk),
    .Reset (Reset),
    .Start (Start),
    .Ain   (plc_wire[PIPELINE_DEPTH].a),
    .Bin   (plc_wire[PIPELINE_DEPTH].b),
    .Cin   (plc_wire[PIPELINE_DEPTH].c),
    .Pout  (Result),
    .Done  (Done)
);

endmodule