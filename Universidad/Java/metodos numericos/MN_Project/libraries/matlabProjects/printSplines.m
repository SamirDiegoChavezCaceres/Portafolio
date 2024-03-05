%% Print
function [a,s] = print(Coef, d)
    fprintf(":.....\n");
    [s, ~] = size(Coef);
    format = '';
    a = [];
    if d==1
        format = "f%d(x) = %f * x + %f \n";
    elseif d==2
        format = "f%d(x) = %f * x^2 + %f * x + %f \n";
    elseif d==3
        format = "f%d(x) = %f * x^3 + %f * x^2 + %f * x + %f \n";
    end
    
    h = 1;
    c = 1;
    for i=1:s
        if d==1
            str = sprintf(format,i,Coef(h,c),Coef(h,c+1));
            %fprintf(str);
            a = [a str];
        elseif d==2
            str = sprintf(format,i,Coef(h,c),Coef(h,c+1),Coef(h,c+2));
            %fprintf(str);
            a = [a str];
        elseif d==3
            str = sprintf(format,i,Coef(h,c),Coef(h,c+1),Coef(h,c+2),Coef(h,c+3));
            %fprintf(str);
            a = [a str];
        end
        h=h+1;
    end
    fprintf("\n");
end
