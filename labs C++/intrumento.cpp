#include <iostream>
using namespace std;

int main()
{
    int tipo_instrumento; 
 // lista de instrumentos //
    cout <<"1. Guitarra"<<endl;
    cout <<"2. Pianos" <<endl;
    cout <<"3. Baterias" <<endl;
    cout <<"4. Violines"<<endl;
    cout <<"5. Flautas" <<endl;
    cout <<"Ingrese el tipo de instrumento" <<endl;

    cin >> tipo_instrumento;

    switch(tipo_instrumento)
    {
        case 1: //guitarras
            cout <<"EL descuento es de 10%"<<endl;
            break;
        
        case 2: //Pianos //
            cout <<"El descuento es de 15%"<<endl;
            break;
        case 3: //baterias //
            cout <<"El descuento es de 20%"<<endl;
            break;
        
        case 4: // Violin //
            cout <<"El descuento es de 12%"<<endl;
            break;
        
        case 5: //Flautas //
            cout <<"El descuento es de 8%"<<endl;
            break;
        
        default: // es por si el usuario no pone opciones validas //
            cout <<"Instrumento NO reconocido. Intente de nuevo."<<endl;
    }
    return 0;
}