#include <iostream>
using namespace std;

class Persona {
    int edad;
    public:
        Persona(int e) : edad(e) {};
        virtual ostream& print(ostream& os);
};
ostream& Persona::print(ostream& os){
    return os << "Tengo " << edad << " años.\n";
}
class Estudiante : public Persona {
    int libros;
    public:
        Estudiante(int e, int l) : libros(l), Persona(e) {};
        ostream& print(ostream& os);
};
ostream& Estudiante::print(ostream& os){
    return Persona::print(os) << "Ademas tengo " << libros << " libros.\n";
}
class Trabajador : public Persona {
    int experiencia;
    public:
        Trabajador(int edad, int trabajo) : experiencia(trabajo), Persona(edad) {};
        ostream& print(ostream& os);
};
ostream& Trabajador::print(ostream& os){
    return Persona::print(os) << "Ademas tengo " << experiencia << " años de experiencia.\n";
}
main() {
    Persona* p[6];
    int i = 0;
    while(i < 6){
        if(i % 2 == 0)
            p[i] = new Estudiante(15*(i+1), 1*(i+1));
        else
            p[i] = new Trabajador(20*(i+1), 2*(i+1));
        i++;
    }
    for(Persona* x : p){
        (*x).print(cout);
    }
}
