#include <iostream>
#include <string>
using namespace std;

int main () {
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout <<"Ingrese un número entero: "; // El cout siempre tiene << mientras que el cin siempre va a tener >> //
    cin >> entero;

    cout << "Ingrese número flotanted: ";
    cin >> flotante;

    cout << "Ingrese un carácter: "; // << = output, >> = Input // 
    cin >> caracter;

    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore(); // Esto se usa para ignorar cualquier carácter en cout //
    getline(cin, cadena);

    return 0;
}
