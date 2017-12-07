probilities = zeros(63,1);
outputs_gcd = zeros(10000000,1);
for i = 1:10000000,
    opa = randi(power(2, 32) - 1);
    opb = randi(power(2, 32) - 1);
    [ output_args, it_out ] = gcd( opa, opb, 0);
    probilities(it_out) = probilities(it_out) + 1; 
    outputs_gcd(i) = it_out;
end


save('probilities1.mat', 'probilities');       

save('outputs_gcd.mat', 'outputs_gcd');  