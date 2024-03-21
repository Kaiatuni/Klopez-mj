#include <iostream>
using namespace std;

int main()
{
    int area, base, altura, perimetro; //variables a usar //

    cout <<"Ingrese La base: ";
    cin >> base;

    cout <<"Ingrese la altura: ";
    cin >> altura;

    area = base * altura; // proceso para conseguir //

    cout << "El area del rectangulo es: " <<area<< endl; //Esto se escribe para printear el resultado //
// el endl se puso para terminar esta programacion y ejecutar otra// 
    cout << "Ingrese la altura: ";
    cin >> altura;

    cout <<"Ingrese la base: ";
    cin >> base;

    perimetro = altura + base;

    cout <<"El perimetro del rectangulo es: " <<perimetro<< endl; 

    return 0;

}