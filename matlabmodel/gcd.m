function [ output_args , it_out] = gcd( opa, opb, it_number)
%GCD Summary of this function goes here
%   Detailed explanation goes here
if opa < opb,
    t = opa;
    opa = opb;
    opb = t;
end

if opb == 0,
    output_args = opa;
    it_out = it_number ;
    return;
end

[output_args, it_out] = gcd(opb, mod(opa, opb), it_number);
it_out = it_out + 1;

end

