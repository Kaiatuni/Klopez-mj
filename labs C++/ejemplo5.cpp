#include <iostream>
#include <cmath> //libreria de funciones matematicas 
using namespace std;

const double  PI = 3.14; // definir variable global y constante

double calcularAreaCirculo(double radio); // definir funcion

int main()
{
    double radio;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    if (radio < 0)
    {
        cout << "El radio ingresado no es valido. favor introduzca un valor de radio no negativo. " << endl;
    }
    else 
    {
        double area = calcularAreaCirculo(radio); // llamada a la funcion

        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    }

    return 0;
}

double calcularAreaCirculo(  double radio)
{
    return PI * pow(radio, 2); // calculando el area del circulo (pow funcion para elevar  la potencia de un numero)
}