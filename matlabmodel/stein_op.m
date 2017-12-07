function [ output_args, it_out ] = stein_op( opa, opb )
%STEIN Summary of this function goes here
%   Detailed explanation goes here

C = 0;
it_number = 0;
A = opa;
B = opb;
C = 1;
while(B ~= 0 & A~= 0 &  A ~= B )
    [ A, B, C ] = stein_cell( A, B, C );
    it_number = it_number + 1;
end

if B == 0,
output_args = A*C;
end
if A == 0,
output_args = B*C;
end
if A == B,
output_args = A*C;
end

it_out = it_number ;



end

