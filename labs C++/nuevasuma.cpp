#include <iostream> 
using namespace std;

int main ()
{
    int sumaClasificaciones = 0;
    int promedio, calificacionEstudiante;
    string nombreEstudiante;
    int cantidadEstudiante;

    cout << "Ingrese la cantidad de estudiantes (10 o menos estudiantes)";
    cin >> cantidadEstudiante;
    if(cantidadEstudiante <= 10){
        for(int i = 1; i <= cantidadEstudiante; i++){

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
        promedio = sumaClasificaciones/cantidadEstudiante;
        cout <<"El promedio de las clasificaciones del grupo son: " <<promedio;
    }
    else{
        cout << "Número muy grande o no válido."<<endl;
    }
    return 0;
}