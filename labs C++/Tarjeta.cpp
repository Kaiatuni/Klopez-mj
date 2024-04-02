#include <iostream>
using namespace std;

int main(){
    string estadoTarjeta;

    cout << " Ingrese el estado de su tarjeta (E para activa, N para Inactiva): "; // se le dice al codigo que printee este mensaje //
    cin >> estadoTarjeta;

    if (estadoTarjeta == "E" || estadoTarjeta == "e") {
        cout <<"Su tarjeta esta activa, puede hacer el prestamo." <<endl; // Si ingresas E el usuario tiene una tarjeta activa // 
    }
    else if (estadoTarjeta == "N" || estadoTarjeta == "n") {
        cout <<"Su tarjeta esta inactiva, no puede hacer el prestamo." <<endl; // Si ingresas E el usuario tiene una tarjeta activa // 
    }
    else {
    cout <<"Su tarjeta no es valida para hacer un prestamo." <<endl;
    }
    return 0;
    
}