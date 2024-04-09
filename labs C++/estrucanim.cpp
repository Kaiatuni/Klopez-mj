#include <iostream> 
using namespace std;

int main(){

     int miembrodelTeatro, numero_entradas; // definir variables //

    cout << "Es miembro del teatro? (1 para si/ 2 para no): ";
    cin >> miembrodelTeatro;

    cout << "Ingrese la cantidad de entradas compradas: ";
    cin >> numero_entradas;
//se empieza el proceso de los if's// 
    if (miembrodelTeatro == 1){
        if(numero_entradas > 5){
            cout <<"Usted tiene un descuento de 15%" <<endl;
        }
        else {
            cout << "Usted tiene un descuento de 10%" <<endl;
        }
    } //estas llaves se usan para tener estos ifs individualmente //
    else {
        if(numero_entradas > 10){ // se usa para saber que tipo de descuento aplica //
            cout << "Usted tiene un descuento de 5%" <<endl;
        }
        else {
            cout <<"you suck, no tienes descuento" <<endl;
        }
    }
    return 0;
}
