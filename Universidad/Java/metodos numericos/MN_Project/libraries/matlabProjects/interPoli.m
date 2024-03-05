%x = 1:1:length(OpenDataPositivosPorDia.FECHA);
%y = OpenDataPositivosPorDia.POSITIVOS;
%n = 4; % Grado del polinomio
%[F, R2] = interPolia(x, y, n);
%salen 5


function [ec, R2, y1, x, y] = interPoli(x, y, n)
    [ec, S]= polyfit(x, y, n);
    y1 = polyval(ec, x);
    disp(ec);

    %figure
    %plot(x,y,'bo');
    %hold on 
    %    plot(x,y1, 'r--'); 
    %    legend('Data', 'Polynom');
    %hold off
    
    % Correlación
    R2 = 1 - (S.normr/norm(y - mean(y)))^2;
    disp(R2);
end

