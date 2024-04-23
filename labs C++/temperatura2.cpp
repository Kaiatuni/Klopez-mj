#include <iostream>
using namespace std;
int main(){
// definiedno variables //
    int i;
    double promedio, temp, sumaTemp;
// esto se hace para que se calcule el promedio //
    for (i = 1; i <= 12; i++){
        cout << "Temperatura" <<i <<endl;
        cout << "INgrese la temperatura" << endl;
        cin >> temp;

        sumaTemp = sumaTemp + temp;
// calcula el promedio
    promedio = sumaTemp/12;
    cout << "La temperatura del year es" << promedio << "º"<< endl;

    }
    return 0;
} // fin del programa