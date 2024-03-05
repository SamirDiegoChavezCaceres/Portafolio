
// Enunciado 1.2 - Check Permutation

// Dados dos strings, escribe un metodo que
// decida si uno es la permutacion del otro

// Hints #1, #84, #122 y #131

// Hint #1 : Debes describir que significa que
// un string sea la permutacion de otro. Una vez
// hayas definido eso, como puedes verificarlo?

// Hint #84 : Hay una solucion que sea en tiempo
// O(NlogN) y otra solucion que usa un poco de
// espacio pero esta en tiempo lineal O(n).

// Hint #122 : Podria ser una tabla hash util?

// Hint #131 : Dos strings permutados deben tener
// los mismos caracteres pero en un orden diferente

# include <iostream>

using namespace std;

string ordenarPalabra(string s1)
{
    int tamanio = s1.length();
    char aux = s1[0];
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s1[i] < s1[j])
            {
                aux = s1[i];
                s1[i] = s1[j];
                s1[j] = aux;
            }
        }
    }
    return s1;
}

bool checkPermutation(string s1, string s2)
{
    bool permutated = true;
    if (s1.length() == s2.length())
    {
        s1 = ordenarPalabra(s1);
        s2 = ordenarPalabra(s2);
        int i = 0;
        while (s1[i] != 0)
        {
            if (s1[i] != s2[i])
            {
                permutated = false;
                break;
            }
            i++;
        }
    }
    return permutated;
}

int main()
{
    string s1, s2;
    cout << "Ingrese la primera cadena: ";
    cin >> s1;
    cout << "Ingrese la segunda cadena: ";
    cin >> s2;
    if (checkPermutation(s1, s2))
    {
        cout << "Una cadena es la permutacion de la otra" << endl;
    }
    else
    {
        cout << "Ambas cadenas son diferentes entre si" << endl;
    }
    return 0;
}
