%x = 1:1:length(OpenDataPositivosPorDia.FECHA);
%y = OpenDataPositivosPorDia.POSITIVOS;
%[ec, R2] = interpExp(x, y);

function [ec, R2, y1] = interpExp(x, y)
    [ec, S] = polyfit(x, log(y), 1);
    disp(ec);

    %figure
    %plot(x, y,'ro','markersize', 4,'markerfacecolor','r');
    %hold on
        z=@(x) exp(ec(2))*exp(x*ec(1));
        y1=z(x);
        %fplot(z,[x(1),x(end)]);
    %hold off

    % Correlación
    R2 = 1 - (S.normr/norm(y - mean(y)))^2;
    disp(R2);
end
