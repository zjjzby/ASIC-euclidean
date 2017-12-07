function [ output_args ] = CHECK( a )
%CHECK Summary of this function goes here
%   Detailed explanation goes here

output_args = ~bitand(1, a);
end

