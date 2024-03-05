#include <iostream>
using namespace std;
class Persona {
    public:
        virtual ostream& print(ostream& os) = 0;
};
class Estudiante : public Persona {
    int libros;
    public:
        Estudiante(int l) : libros(l) {};
        ostream& print(ostream& os);
};
ostream& Estudiante::print(ostream& os){
    return os << "Yo estudiante tengo " << libros << " libros.\n";
}
class Trabajador : public Persona {
    int experiencia;
    public:
        Trabajador(int trabajo) : experiencia(trabajo) {};
        ostream& print(ostream& os);
};
ostream& Trabajador::print(ostream& os){
    return os << "Yo trabajador tengo " << experiencia << " años de experiencia.\n";
}
main() {
    Persona* p[6];
    int i = 0;
    while(i < 6){
        if(i % 2 == 0)
            p[i] = new Estudiante(1*(i+1));
        else
            p[i] = new Trabajador(2*(i+1));
        i++;
    }
    for(Persona* x : p){
        (*x).print(cout);
    }
}
