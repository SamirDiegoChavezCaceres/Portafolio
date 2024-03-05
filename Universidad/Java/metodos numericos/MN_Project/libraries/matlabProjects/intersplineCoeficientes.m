function [Tabla] = Splines(x,y,d)
    n=length(x);
    A=zeros((d+1)*(n-1)); % nuestra matriz A necesitamos (d+1) * (n-1) ecuaciones 
    b=zeros((d+1)*(n-1),1); % nuestro vector b
    cua=x.^2; % x al cuadrado
    cub=x.^3; % x al cubo
    
    %% lineal
    if d==1
        c=1;
        h=1;
        %y(xi) = splinei(xi) = ai * xi + bi ; queremos hallar a b 
        for i=1:n-1 %nos preocupamos nada mas de que los nodos interiores en cada spline
                    %sean iguales
            A(i,c)=x(i); %nodos inferiores de 1 , n-1
            A(i,c+1)=1; 
            b(i)=y(i); %deben valer y-iesimo
            c=c+2;
            h=h+1;
        end
        
        c=1;
        for i=2:n
            A(h,c)=x(i); %nodos inferiores de 2 , n
            A(h,c+1)=1;
            b(h)=y(i); %deben valer y-iesimo
            c=c+2;
            h=h+1;
        end
    %% Cuadratica
    elseif d==2
        c=1;
        h=1;
        %y(xi) = splinei(xi) = ai * xi^2 + bi * xi + ci ; queremos hallar a b c
        for i=1:n-1 
            %1er condicion 
             %hallamos condiciones de evaluacion en extremo inferior de cada spline
            A(i,c)=cua(i); 
            A(i,c+1)=x(i);
            A(i,c+2)=1; 
            b(i)=y(i); % fila A iesima debe ser igual a y(iesimo)
            c=c+3; % recorremos las 3 variables
            h=h+1; % siguiente fila / condicion
        end
        % el for de arriba y abajo en conjunto hacen cumplir la 1 y 2
        % condicion
        c=1;
        for i=2:n %1er condicion
            %evaluacion en extremo superior de cada spline
            A(h,c)=cua(i);
            A(h,c+1)=x(i);
            A(h,c+2)=1;
            b(h)=y(i); % fila A iesima debe ser igual a y(iesimo)
            c=c+3;
            h=h+1;
        end
        
        % 3ra condicion de primera derivada
        c=1;
        for i=2:n-1
            A(h,c)=2*x(i); %primera derivada de spline i - 1
            A(h,c+1)=1;
            A(h,c+3)=-2*x(i);  %primera derivada de spline i 
            A(h,c+4)=-1;
            b(h)=0; %deben ser iguales
            c=c+4; %recorremos las 4 variables
            h=h+1; 
        end
        
        A(h,1)=2; %4 condicion: segunda derivada del primer punto debe ser cero
        b(h)=0;
        
  %% Cubica
    elseif d==3
        c=1;
        h=1;
        for i=1:n-1 %y(xi) = splinei(xi) = ai * xi^3 + bi * xi^2 + ci + di ; queremos hallar a b c d
            A(i,c)=cub(i); %aca rellenamos para extremo inferior de cada spline
            A(i,c+1)=cua(i);
            A(i,c+2)=x(i);
            A(i,c+3)=1;
            b(i)=y(i); %debe ser igual a vector 'y' en el mismo punto 
            c=c+4; %recorremos los 4 variables
            h=h+1; %siguiente fila
        end
        %el for de arriba y abajo en conjunto hacen cumplir la 1 y 2
        %condiciones del libro
        c=1;
        for i=2:n
            A(h,c)=cub(i); %aca rellenamos para extremo posterior de cada spline
            A(h,c+1)=cua(i);
            A(h,c+2)=x(i);
            A(h,c+3)=1;
            b(h)=y(i); %debe ser igual a vector 'y' en el mismo punto 
            c=c+4; 
            h=h+1;
        end
        
        %3era condicion del libro primera derivadas de nodos interiores deben ser iguales
        c=1;
        for i=2:n-1  %aca rellenamos la condicion de primera derivada igual en spline contiguas
            A(h,c)=3*cua(i); %primera derivada en 1er spline
            A(h,c+1)=2*x(i);
            A(h,c+2)=1;
            A(h,c+4)=-3*cua(i); %primera derivada en 2do spline
            A(h,c+5)=-2*x(i);
            A(h,c+6)=-1;
            b(h)=0; %deben ser iguales
            c=c+4;
            h=h+1;
        end
        
        %4ta condicion del libro segundas derivadas de nodos interiores deben ser iguales
        c=1;
        for i=2:n-1 %condicion segunda derivada
            A(h,c)=6*x(i); %segunda derivada en 1er spline
            A(h,c+1)=2;
            A(h,c+4)=-6*x(i); %segunda derivada en 2do spline
            A(h,c+5)=-2;
            b(h)=0; % deben ser iguales
            c=c+4;
            h=h+1;
        end
        
        %5ta condicion de segunda derivada en nodos extremos
        A(h,1)=6*x(1); %condicion de segunda derivada extremo inferior de todo debe ser cero
        A(h,2)=2;
        b(h)=0;
        h=h+1;
        A(h,c)=6*x(end);%condicion de segunda derivad extremo superior de todo debe ser cero
        A(h,c+1)=2;
        b(h)=0;
    end
    
    %TablaA = array2table(A); %el primer spline tendra A1 A2 A3 A4, el segundo A5,A6,A7,A8 etc...
    %TablaB = b; %mostramos las matrices
    %disp(TablaB)
    %disp(TablaA)
    val=inv(A)*b; %resolvemos sistema de ecuaciones por medio matriz inversa
    Tabla=reshape(val,d+1,n-1); %acomodamos los valores para tener coeficientes
    Tabla=Tabla'; %transpuesta
end


