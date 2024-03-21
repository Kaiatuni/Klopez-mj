#include <iostream> 
using namespace std;

int main()
{
    int examen1, examen2, examen3, examen4, promedio;

    cout <<"Ingresa la nota del examen 1: ";
    cin >> examen1;

    // pedir las variables de los examenes //

    cout <<"Ingresa la nota del examen 2: ";
    cin >> examen2;

     cout <<"Ingresa la nota del examen 3: ";
    cin >> examen3;

     cout <<"Ingresa la nota del examen 4: ";
    cin >> examen4;

    promedio = examen1 + examen2 + examen3 + examen4 /4; //Calcular el promedio de los examenes diviendolo por el numero de cantidad //

    cout <<"El promedio de los examenes es:" <<promedio<<endl;

    return 0;
    
}
    
