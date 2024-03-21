#include <iostream>
using namespace std;

int main ()
{
    int area, Base , altura;

    cout << "Ingrese la altura del retangulo: ";
    cin >> altura;

    cout << "Ingrese la base del rectangulo: "; // Aqui se ingresa la base del rectangulo //
    cin >> Base;

    area = Base * altura;

    cout <<"El area del rectangulo es: " <<area<< endl; // Printea el area del rectangulo //

    return 0;

}