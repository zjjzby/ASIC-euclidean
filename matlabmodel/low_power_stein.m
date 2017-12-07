function [ result, it_number ] = low_power_stein( opa, opb )
%LOW_POWER_STEIN Summary of this function goes here
%   Detailed explanation goes here
it_number = 0;

while (opa ~= opb && opb ~= 0 && opa ~= 0)
    it_number = it_number + 1;
    tmpa = opa;
    tmpb =opb;
    lengtha = 0;
    lengthb = 0;
    while (tmpa ~= 0)
        tmpa = floor(tmpa / 2);
        lengtha = lengtha + 1;
    end
    while (tmpb ~= 0)
        tmpb = floor(tmpb / 2);
        lengthb = lengthb + 1;
    end
    lengthdiff = abs(lengtha - lengthb);
    if (opa >  opb)
        opa = abs(opa - opb*power(2, lengthdiff));
    else
        opb = abs(opb - opa*power(2, lengthdiff));
    end
end

if opa == opb,
    result = opa;
    return;
end

if opa == 0,
    result = opb;
    return;
end

if opb == 0,
    result = opa;
    return;
end


end

