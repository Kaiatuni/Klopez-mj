using System;

namespace temperatura
{
    class Program
    {
        static void Main(string[] args)
        {
           int i = 1;
           double promedio;
           double temp = 0;
           double sumaTemp = 0;

           // el ciclo se activa mientras i es menor o igual a 12 //
           do{

            Console.WriteLine("Temperatura " + i);
            Console.WriteLine("Ingrese la temperatura: ");
            temp = double.Parse(Console.ReadLine());
            i++;
        // proceso de conseguir la suma para la temperatura
            sumaTemp = sumaTemp + temp;

            promedio = sumaTemp/12;

           }
           while(i <= 12);
            //le ensena al usuario cual es la temperatura promedio //
           Console.WriteLine ("La temperatura promedio es:" + promedio + "º");
        }
    }
}
