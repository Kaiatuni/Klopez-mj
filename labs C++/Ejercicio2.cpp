#include <iostream> 
using namespace std;

int main()
{
    int velocidad, tiempo, distancia; // variables //
    
    cout <<"Ingrese la velocidad: ";
    cin >> velocidad ; 

    cout <<"Ingrese el tiempo: ";
    cin >> tiempo ;

    distancia = velocidad * tiempo ; //calcular la distancia que se corrio //
    
    cout <<"La distancia total recorrida es de: " <<distancia<< endl; //resultado//

    return 0;

}