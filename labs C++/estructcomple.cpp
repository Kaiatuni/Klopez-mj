#include <iostream>
using namespace std;

int main()
{
    float total_compras; // definiendo variables //
    char miembro_vip;
    //solicita al usuario que ingrese el total de compras//
    cout << "Ingrese el total de compras: ";
    cin >> total_compras;

    cout << "Es miembro de VIP (s/n): ";
    cin >> miembro_vip;

    miembro_vip = tolower(miembro_vip); 
// El if se usa para preguntar si el usuario tiene vip o no //
    if(total_compras >= 150 || miembro_vip == 's') { 
        cout << "Descuento aplicado" <<endl;
    } else {
        cout << "SIn descuento aplicado" <<endl;
    }
    return 0;
}