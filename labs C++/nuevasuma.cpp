#include <iostream> 
using namespace std;

int main ()
{
    int sumaClasificaciones = 0;
    int promedio, calificacionEstudiante;
    string nombreEstudiante;

    for(int i = 1; i <= 10; i++){

        cout <<"Estudiante #" <<i <<":";
        cout <<"Ingrese el nombre del estudiante: ";
        cin >>nombreEstudiante;

        //pide que pongas la calificacion del estudiante //
        cout << "Ingrese la puntuacion de: " <<nombreEstudiante << ":";
        cin >> calificacionEstudiante;

        // en este paso se acumulan las calificaciones //
        sumaClasificaciones = sumaClasificaciones + calificacionEstudiante;

    }
    
    //aqui esta el total de calificaciones que se divide por la cantidad de estudiantes//
    promedio = sumaClasificaciones/10;
    cout <<"El promedio de las clasificaciones del grupo son: " <<promedio;
    return 0;
}