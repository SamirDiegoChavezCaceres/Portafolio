function a1 = interSplineEval(x_data, Coef, x)
    [s, z] = size(Coef); % z = numero de coeficientes s = numero de funcioens 
    x_data = [x_data x_data(end)];
    a1 = 0;
    for i = 1:s
        if(x < x_data(i+1) && x >= x_data(i))
            for j = 0:z-1
                a1 = a1 + Coef(i, z - j)*(x^j); 
            end
        end
        
    end
    if(x == x_data(end))
        for j = 0:z-1
            a1 = a1 + Coef(s, z - j)*(x^j); 
        end
    end
end
