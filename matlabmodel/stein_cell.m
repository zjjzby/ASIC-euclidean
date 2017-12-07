function [ Aout, Bout, Cout ] = stein_cell( A, B, C )
%STEIN_CELL Summary of this function goes here
%   Detailed explanation goes here
if A < B,
    t = A;
    A = B;
    B = t;
end


if (mod(A,2) == 0) & (mod(B,2 ) == 0),
    Aout = A/2;
    Bout = B/2;
    Cout = C*2;
    return;
end

if (mod(A,2) == 0) & (mod(B,2) ~= 0),
    Aout = A/2;
    Bout = B;
    Cout = C;
     return ;
end

if (mod(A,2) ~= 0) & (mod(B,2) == 0),
    Btmp = B;
    while(A > Btmp *2)
        Btmp = Btmp *2;
    end
    Aout = A - Btmp;
    Bout = B/2;
    Cout = C;
    return ;
end

if (mod(A,2) ~= 0) & (mod(B,2) ~= 0),
     Aout = (A - B)/2;
     Bout = B;
     Cout = C;
     return ;
end


end

