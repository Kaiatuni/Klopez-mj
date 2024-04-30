#include <iostream>
using namespace std;


// FUNCION PARA CALCULAR EL SUELDO DEL VENDEDOR 
double calcularSueldo(double ventas){
    double sueldoBase  = ventas * 0.15; // este proceso calcula el 15% del sueldo

// si ventas mayores o igual a 1500 agrega el bono adicional
    if (ventas >= 1500){
        sueldoBase += 125;
    }

    return sueldoBase;
    }
int main()
{
    double ventas;
    cout << "Ingrese el numero de ventas realizadas: ";
    cin >> ventas;

    //llama a la funcion 

    double sueldo = calcularSueldo (ventas);

    cout << "El sueldo a pagar del vendedor es:  $" << sueldo << endl;

    return 0;
}