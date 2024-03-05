
# include <iostream>

using namespace std;

class Nodo
{
    // Atributos
    string dato;
    Nodo* siguiente;
    // Metodos
    public:
        string getDato()
        {
            return this->dato;
        }
        void setDato(string s)
        {
            this->dato = s;
        }
        Nodo* getNext()
        {
            return this->siguiente;
        }
        void setNext(Nodo* n)
        {
            this->siguiente = n;
        }
};


