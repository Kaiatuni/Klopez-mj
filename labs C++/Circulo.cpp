#include <iostream> 
using namespace std;

int main()
{
    // Definiendo variables //
    double radio, area;
    const double PI = 3.14;

    cout << " Ingrese la medida del radio";
    cin >> radio;

    area = PI * radio;

    cout <<" El area del circulo es: "<<area<<endl;

    return 0;
}