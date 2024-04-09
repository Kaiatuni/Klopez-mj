#include <iostream>
using namespace std;
int main()
{
    string a;

    cout <<"Ingrese la letra (a) para verificar la validacion"<<endl;
    cin >> a;

    if(a == "a"){ // si l letra es a la tarjeta es valida //
        cout <<"su Tarjeta es valida" <<endl;
    }
    else {
        cout <<"Su tarjeta es invalida."<<endl; // si no es a va a salir invalida //
    }

    return 0;
}
