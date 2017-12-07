numberOfsamples = 10000000;
probilities = zeros(63,1);
outputs = zeros(numberOfsamples,1);
probilities_op = zeros(63,1);
outputs_op = zeros(numberOfsamples,1);
for i = 1:numberOfsamples,
    opa = randi(power(2, 32) - 1);
    opb = randi(power(2, 32) - 1);
    [ output_args, it_out ] = stein_top_original(opa, opb );
    outputs(i) = it_out;
    probilities(it_out) = probilities(it_out) + 1; 
    
    [ output_args, it_out ] = low_power_stein(opa, opb );
    outputs_op(i) = it_out;
    probilities_op(it_out) = probilities_op(it_out) + 1; 
    if  mod(i, floor(numberOfsamples/100)) == 0,
        message = sprintf('%d percent has been deposed', i/ floor(numberOfsamples/100));
        disp(message);
    end
end


save('probilities2.mat', 'probilities');         
save('outputoriginal.mat', 'outputs');     
save('probilities_op2.mat', 'probilities_op');         
save('outputoriginal_op.mat', 'outputs_op');    