%x = 1:1:length(OpenDataPositivosPorDia.FECHA);
%y = OpenDataPositivosPorDia.POSITIVOS;
%[ec, R2] = interpLog(x, y);

function [ec, R2, y1] = interpLog(x, y)
    [ec, S] = polyfit(log(x), y, 1);
    disp(ec);

    %figure
    %plot(x, y,'ro','markersize', 4,'markerfacecolor','r');
    %hold on
        z=@(x) ec(1)*log(x) + ec(2);
        y1=z(x);
        %plot(x,y1)
    %hold off

    % Correlación
    R2 = 1 - (S.normr/norm(y - mean(y)))^2;
    disp(R2);
end