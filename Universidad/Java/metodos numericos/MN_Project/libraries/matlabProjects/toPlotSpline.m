%% Plot
%% toPlot(x, a,)
function [xTotal,yTotal,xlen,ylen] = toPlotSpline(x_data, Coef)
    [s, z] = size(Coef); % z = numero de coeficientes s = numero de funcioens 
    
    dx = (x_data(end) - x_data(1))/1000; %cantidad entre cada punto x
    x = x_data(1):dx:x_data(end); % creamos un array con dx de intervalo entre c/u 
                                  % desde el primer dato al ultimo

    xa1 = x(x >= x_data(1) & x <= x_data(2)); % solo escogemos los datos x 
                                              % del intervalo que queremos xi a xi+1
    
    x_data = [x_data x_data(end)]; %cogemos de 2 en dos debemos tener dos finales
    xTotal = [];
    yTotal = [];
    for i = 1:s
        
        a1 = zeros(size(xa1));
        
        for j = 0:z-1 % z = 4 
            a1 = a1 + Coef(i, z - j)*xa1.^j; 
            % coef(1,4 - 0)*(x a evaluar)^(0) = variable ind 
            % coef(1,4 - 1)*(x a evaluar)^(1) = variable primer grado
            % coef(1,4 - 2)*(x a evaluar)^(2) = variable segundo grado
            % coef(1,4 - 3)*(x a evaluar)^(3) = variable tercer grado
            %los sumamos y obtenemos y(x)
        end
        
        xTotal = [xTotal xa1];
        yTotal = [yTotal a1];

        xa1 = x(x > x_data(i+1) & x <= x_data(i+2)); %siguientes datos x
                                                    % de la funcion spline acotada
        
    end
    xlen = length(xTotal);
    ylen = length(yTotal);
end