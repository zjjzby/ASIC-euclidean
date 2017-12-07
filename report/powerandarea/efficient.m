frequency_logic = [100 200 300 400 500];
frequency_register = [100 200 300 400 500 600];
power_logic = [0.1415 0.2840 0.5257 0.6992 1.0016];
power_register = [0.2359 0.4773 0.7263 0.9869 1.3718 1.8776];
area_logic = [4181.039986 4176.360006 4807.080038 5236.560042 6531.840052];
area_register = [4782.959931 4913.999997 4959.360001 5299.920007 5937.839956 7064.639998];

efficient_logic = (power_logic.*1e-3.*96.4)./(frequency_logic.*1e6*32);
mean_logic = mean(efficient_logic);
efficient_register= (power_register.*1e-3.*96.4)./(frequency_register.*1e6*32);
mean_register = mean(efficient_register);

figure(3);
plot(frequency_logic,efficient_logic*1e12 );
hold on;
plot(frequency_register,efficient_register *1e12 );
grid;
xlabel('frequency (Mhz)');
ylabel('efficient (fj/bit)');
legend('logic case', 'register case');