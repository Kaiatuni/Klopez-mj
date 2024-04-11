#include <iostream>
using namespace std;
int main()
// el string se uso porque es un nombre nada mas y el int se pueden usar numeros. //
{
    string nombre;
    int numero = 10;
//le pide al usuario que ingrese su nombre //
    cout << "Ingrese su nombre: ";
    cin >> nombre;
// el for se usa para que la cantidad de veces que se va a repetir empieze en 1 //
    for (int i = 1; i <= numero ; i++)
    {
        cout <<"Hola, " <<nombre <<endl;
    }
// fin del programa //
    return 0;

}