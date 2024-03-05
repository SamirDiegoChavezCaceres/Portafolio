
// Enunciado 1.3 - URLify

// Escribir un metodo que reemplace todos los espacios
// vacios o en blanco de un string por la cadena %20.
// Debes suponer que el string tiene el suficiente
// espacio para poder soportar los caracteres adicionales
// te estaran dando la verdadera longitud del string.

// Hints #53 y # 118

// Hint #53 : Es mas facil modificar strings desde si
// empezamos desde su final hacia su primer caracter

// Hint #118 : Tal vez deberias contas cuantos espacios
// en blanco hay. Podrias contarlos?

# include <iostream>

using namespace std;

string reemplazarVacios(string s)
{
    int longitud = s.length();
    string url = "";
    for (int i = 0; i < longitud; i++)
    {
        cout << s[i] << endl;
        if(s[i] == ' ')
        {
            url += "%20";
        }
        else
        {
            url += s[i];
        }
    }
    return url;
}

string recortar(string s, int size)
{
    string recortado = "";
    for (int i = 0; i < size; i++)
    {
        cout << s[i] << endl;
        recortado += s[i];
    }
    cout << "Recortado: " << recortado << endl;
    cout << "Longitud: " << recortado.length() << endl;
    return recortado;
}

int main()
{
    string url;
    int longitud;
    cout << "Ingrese la cadena: ";
    getline(cin, url);
    cout << "Ingrese la longitud de la cadena: ";
    cin >> longitud;
    url = recortar(url, longitud);
    url = reemplazarVacios(url);
    cout << "Nueva cadena: " << url << endl;
    return 0;
}
