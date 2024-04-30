#include <iostream>
#include <string>
using namespace std;
int main()
{
    //definir el arreglo con 5 nombres de ciudades o paises
    string ciudades[5] = {"Paris","Tokyo","Nueva York","Londres", "Sydney"};

    //imprimir los nombres de las ciudades o paises
    cout << "Lista de ciudades o paises: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "ciudad/pais" << i + 1 << ": " << ciudades[i] << endl;
    }


    return 0;
}