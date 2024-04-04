using System;

class Tarjeta
{
    static void Main(string[] args)
    {
        // Solicitar al usuario el estado de la tarjeta de biblioteca
        Console.WriteLine("¿Cuál es el estado de su tarjeta de biblioteca? (activa/inactiva)");
        string estadoTarjeta = Console.ReadLine();

        // Verificar el estado de la tarjeta y mostrar el mensaje correspondiente
        if (estadoTarjeta() == "activa")
        {
            Console.WriteLine("¡Puede realizar préstamos!");
        }
        else if (estadoTarjeta() == "inactiva")
        {
            Console.WriteLine("Lo siento, no se permiten préstamos.");
        }
        else
        {
            Console.WriteLine("Por favor, introduzca un estado válido (activa/inactiva).");
        }
    }
}