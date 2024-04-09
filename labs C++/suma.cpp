#include <iostream>
using namespace std;

int main ()
{

    int suma = 0; // esto se usa para la suma //
    int i; 

    for (i = 1; i <= 10; i++)
    {
        suma = suma + i;
    }
    cout << "La suma de los numeros del 1 al 100 es: " << suma <<endl;
    
}
