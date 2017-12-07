load('probilities2.mat', 'probilities');         
load('outputoriginal.mat', 'outputs');     
load('probilities_op2.mat', 'probilities_op');         
load('outputoriginal_op.mat', 'outputs_op');   

load('probilities1.mat', 'probilities');       

load('outputs_gcd.mat', 'outputs_gcd');  

figure(1);
hist(outputs_gcd, 14);
grid;
xlabel('iteration number', 'fontsize', 20);
ylabel('number of samples', 'fontsize', 20);
figure(2);
hist(outputs,14);
grid;
xlabel('iteration number', 'fontsize', 20);
ylabel('number of samples', 'fontsize', 20);
figure(3);
hist(outputs_op,14);
grid;
xlabel('iteration number', 'fontsize', 20);
ylabel('number of samples', 'fontsize', 20);
