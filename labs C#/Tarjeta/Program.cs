using System;

namespace tarjeta
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ingrese 1 para Tarjeta activa");
            int tarjeta = int.Parse(Console.readline());

            if (tarjeta = 1){
                Console.Writeline("Su tarjeta es valida.");
            }
            else {
                Console.Writeline("Su tarjeta NO es valida.");
            }
        }
    }
}
