#include <iostream> 
using namespace std;

int main()
{
    int yearact, yearborn, edadaprox ; // variables necesarias para calcular la edad aprox //

    cout << "Ingrese el year actual";
    cin >> yearact;

    cout <<"Ingrese el year en que nacio";
    cin >> yearborn;

    edadaprox = yearact - yearborn; // proceso para calcular //

    cout <<"La edad aproximada es de: "<<edadaprox<< endl;

    return 0;
}