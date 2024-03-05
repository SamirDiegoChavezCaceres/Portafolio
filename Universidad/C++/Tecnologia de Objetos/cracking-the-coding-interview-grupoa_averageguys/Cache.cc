
// Pregunta 9.5 - Cache

// Imagina un servidor web para un motor de busqueda simple. El sistema
// cuenta con 100 maquinass para poder responder a las solicitudes, para
// responder las solicitudes llama al metodo processSearch(string query)
// a otro grupo de máquinas para obtener realmente el resultado. El pro
// -ceso de busqueda es muy costoso. Diseñe usted un sistema de cache
// para poder guardar las busquedas mas recientes. Debes poder explicar
// de manera clara como es que el sistema de cache se actualizara

// Usar Hints: #259, #274, #293, #311

// Hint #259: Tal vez necesites hacer algunas suposiciones.
// Hint #274: Piensa sobre como podrias hacerlo para una sola maquina.
// Tal vez puedas o quieras utilizar una tabla hash. Como funcionaria?
// Hint #293: Podrias intentar combinar lo bueno de las tablas hash y listas
// Hint #311: Como podrias hacer que esto funcione en varias maquinas

# include <iostream>

using namespace std;

struct Nodo
{
    string dato;
    Nodo* siguiente;
};

class Lista
{
    private:
        Nodo* cabeza;
    public:
        Lista(string);
        void imprimir();
        void insertar(string);
        void buscar(string);
};

Lista::Lista(string s)
{
    Nodo n = Nodo();
    n.dato = s;
    n.siguiente = 0;
    cabeza = &n;
    // cout << this->cabeza->dato << endl;
    cout << "Inicie una lista ..." << endl;
}

void Lista::imprimir()
{
    cout << "Imprimiendo lista ..." << endl;
    Nodo* pos = this->cabeza;
    while (pos->siguiente != 0)
    {
        string cadena = pos->dato;
        cout << "Cadena: " << cadena << endl;
        pos = pos->siguiente;
    }
}

void Lista::insertar(string s)
{
    Nodo n = Nodo();
    n.dato = s;
    n.siguiente = 0;
    Nodo* pos = this->cabeza;
    while (pos->siguiente != 0)
    {
        cout << pos->dato << endl;
        pos = pos->siguiente;
    }
    pos->siguiente = &n;
    cout << "Agregue un nodo ..." << endl;
}

int main()
{
    string s = "Hola";
    Lista l = Lista(s);
    // l.imprimir();
    l.insertar("Que");
    l.insertar("Tal");
    // l.imprimir();
    // cout << "Hello World!" << endl;
    return 0;
}
