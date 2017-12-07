module top(
		input wire [31:0] opa,
		input wire [31:0] opb,
		input wire start,
		input wire rst,
		input wire clk,
		output done,
		output [31:0] result
);

reg [2:0] current_state;
reg [2:0] next_state;
reg [31:0] regopa;
reg [31:0] regopb;

reg [31:0] regpa_out;
reg [31:0] regpb_out;
reg [6:0] regpc_out;

reg [31:0] tmp_regopa;
reg [31:0] tmp_regopb;


reg [31:0] result;
reg done;

reg camp_flag;
wire [5:0] length_opa;
wire [5:0] length_opb;
wire [5:0] length_diff;

wire [31:0] length_in_opa;
wire [31:0] length_in_opb;
//***********************************************************************//
//                                                                       //
//                          state   machine                              //
//                                                                       //
//***********************************************************************//

parameter IDLE = 3'd0;
parameter INPUT = 3'd1;
parameter ADJUDICATE = 3'd2;
parameter CAMP_SWITCH = 3'd3;
parameter ALIGN = 3'd4;
parameter ABSOLUTE = 3'd5;
parameter OUTPUT = 3'd6;

parameter ZEROS = 32'd0;
parameter ZEROS_C = 7'b0; 


//***********************************************************************//
//                                                                       //
//                          state   machine                              //
//                                                                       //
//***********************************************************************//
always @(posedge clk or negedge rst) begin : proc_current_state
	if(~rst) begin
		current_state <= IDLE;
	end else begin
		current_state <= next_state ;
	end
end



always @ * begin : proc_next_state
	case (current_state)
		IDLE:begin 
			if(start == 1) 
				next_state <= INPUT;
			else 
				next_state <= IDLE;			
		end
		INPUT:next_state <= ADJUDICATE;
		ADJUDICATE:begin 
			if(regopa == regopb || regopa == 0 || regopb == 0) begin
				next_state <= OUTPUT;
			end
			else begin 
				next_state <= CAMP_SWITCH;
			end
		end
		CAMP_SWITCH:next_state <= ALIGN;
		ALIGN:next_state <= ABSOLUTE;
		ABSOLUTE:next_state <= ADJUDICATE;
		OUTPUT:begin 
			if(start == 1) 
				next_state <= INPUT;
			else 
				next_state <= IDLE;
		end
		default : next_state <= IDLE;
	endcase
end



//***********************************************************************//
//                                                                       //
//                                                                       //
//                                                                       //
//***********************************************************************//
always @(posedge clk or negedge rst) begin : proc_regopa
	if(~rst) begin
		regopa <= ZEROS;
	end else begin
		case (next_state)
			IDLE:regopa <= ZEROS;
			INPUT:regopa <= opa;
			ADJUDICATE:regopa <= regopa;
			CAMP_SWITCH:regopa <= regopa;
			ALIGN:regopa <= regopa;
			ABSOLUTE:begin 
				if (tmp_regopa >= tmp_regopb) begin 
					regopa <= tmp_regopa - tmp_regopb;
				end
				else begin 
					regopa <= tmp_regopb - tmp_regopa;
				end
			end		
			default :regopa <= regopa;
		endcase		
	end
end

//
always @(posedge clk or negedge rst) begin : proc_regopb
	if(~rst) begin
		regopb <= ZEROS;
	end else begin
		case (next_state)
			IDLE:regopb <= ZEROS;
			INPUT:regopb <= opb;
			ADJUDICATE:regopb <= regopb;
			CAMP_SWITCH:regopb <= regopb;
			ALIGN:regopb <= regopb;
			ABSOLUTE:begin 
				if (camp_flag) 
					regopb <= regopb;
				else
					regopb <= regopa;
			end	
			default:regopb <= regopb;
		endcase		
	end
end


// campflags
always @(posedge clk or negedge rst) begin : proc_camp_flag
	if(~rst) begin
		camp_flag <= 0;
	end else begin
		case (next_state)
			CAMP_SWITCH:begin 
				if(regopa < regopb) begin
					camp_flag <= 1'b0;
				end
				else begin 
					camp_flag <= 1'b1;
				end
			end
			default : camp_flag <= camp_flag;
		endcase
	end
end




assign length_in_opa = tmp_regopa;
assign length_in_opb = tmp_regopb;

length cal_opa_length(.op(length_in_opa), .op_length(length_opa));
length cal_opp_length(.op(length_in_opb), .op_length(length_opb));

assign length_diff = length_opa - length_opb;


always @(posedge clk or negedge rst) begin : proc_tmp_reg
	if(~rst) begin
		tmp_regopa <= 32'd0;
		tmp_regopb <= 32'd0;
	end else begin
		case (next_state)
			CAMP_SWITCH:begin 
				if (regopa < regopb) begin 
					tmp_regopa <= regopb;
					tmp_regopb <= regopa;
				end
				else begin 
					tmp_regopa <= regopa;
					tmp_regopb <= regopb;
				end
			end
			ALIGN:begin 
				tmp_regopa <= tmp_regopa;
				tmp_regopb <= tmp_regopb <<< length_diff;
			end
			ABSOLUTE:begin 
				tmp_regopa <= tmp_regopa;
				tmp_regopb <= tmp_regopb;
			end
			default : begin 
				tmp_regopb <= tmp_regopb;
				tmp_regopa <= tmp_regopa;
			end
		endcase
	end
end




//***********************************************************************//
//                                                                       //
//                       result                                          //
//                                                                       //
//***********************************************************************//
always @(posedge clk or negedge rst) begin : proc_preop_reg
	if(~rst) begin
		regpa_out <= 0;
		regpb_out <= 0;
	end else begin
		case (next_state)
			ADJUDICATE: begin 
				if(regopa == regopb || regopa == 0 || regopb == 0) begin
					regpa_out <= regopa;
					regpb_out <= regopb;				
				end
				else begin 
					regpa_out <= regpa_out;
					regpb_out <= regpb_out;	
				end
			end		
			default : begin 
				regpa_out <= regpa_out;
				regpb_out <= regpb_out;
			end
		endcase
	end
end



always @(posedge clk or negedge rst) begin : proc_result
	if(~rst) begin
		result <= ZEROS;
	end else begin
		case (next_state)
			OUTPUT:begin 
				if(regpa_out == regpb_out) begin 
					result <= regpa_out ;
				end
				else if (regpa_out == 0 ) begin
					result <=  regpb_out ;
				end
				else begin 
					result <= regpa_out ;
				end
			end
			default : begin 
				result <= result;
			end
		endcase
	end
end


always @(posedge clk or negedge rst) begin : proc_done
	if(~rst) begin
		done <= 1'b0;
	end else begin
		case (next_state)
			INPUT:begin 
				done <= 1'b0;
			end
			OUTPUT: begin 
				done <= 1'b1;
			end
			default : done <= 1'b0;
		endcase
	end
end


endmodule // top
