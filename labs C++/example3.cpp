#include <iostream>

using namespace std;

int main ()
{
    int opcion;

    cout <<"Bienvenido a Kivan's Cafe: "<<endl;
    cout <<"Menu: "<<endl;
    cout <<"1. Cafe"<<endl;
    cout <<"2. te"<<endl;
    cout <<"3. Chocolate Caliente"<<endl;
    cout <<"4. Jugo de Naranja"<<endl;
    cout <<"--------------------------" <<endl;
    cout <<"Por favor selecciona tu bebida"<<endl;

    cin >> opcion;

    switch(opcion)
    {
        case 1: //esta es la opcion del cafe//
            cout <<"EL precio de el cafe es de $2"<<endl;
            break;

        case 2: // opcion de el te //
            cout <<"El precio del Te es de $1.5"<<endl;
            break;
        
        case 3: // opcion del chocolate caliente //
            cout <<"El precio del chocolate caliente es de $2.5"<<endl;
            break;
        
        case 4: // Jugo de naranja //
            cout <<"El precio del jugo de naraja es de $1"<<endl;
            break; 
        default: // en caso de que el usuario entre una opcion no valida //
        cout <<"Opcion NO es valida, Favor selccionar una del menu."<<endl;

    }
    
    return 0;

}