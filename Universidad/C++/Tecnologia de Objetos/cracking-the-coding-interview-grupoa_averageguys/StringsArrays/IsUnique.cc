
// Enunciado 1.1 - Is Unique

// Implementar un algoritmo que verifique si todos
// los carateres de un string son unicos. Es decir,
// que sean caraceteres unicos dentro del mismo

// Que pasaria si no puedes usar estructuras de datos

// Hints #44, #117 y # 132

# include <iostream>

using namespace std;

bool intoArray(char a[], char c)
{
    int i = 0;
    bool into = false;
    while (a[i] != 0)
    {
        if(a[i] == c)
        {
            into = true;
            break;
        }
        i++;
    }
    cout << "Caracter " << c << " dentro del arreglo?: " << into << endl;
    return into;
}

void isUnique(string s)
{
    cout << "Cadena Ingresada: " << s << endl;
    char abecedario[28];
    int i = 0;
    while (s[i] != 0)
    {
        if (!intoArray(abecedario, s[i]))
        {
            abecedario[i] = s[i];
        }
        else
        {
            cout << "La palabra tiene caracteres no unicos" << endl;
        }
        i++;
    }
}

int main()
{
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    isUnique(cadena);
    return 0;
}
