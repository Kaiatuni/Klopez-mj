import java.util.Scanner;

public class App {
    public static void main (String[] args) throws
    Exception {
        Scanner scanner = new Scanner(System.in);
         // definir la i como 1 //
        int i = 1;
        double promedio;
        double temp = 0;
        double sumaTemp = 0;
// while i es menos o igual a doce le muestra al usuario la temperatura total //
        while (i <= 12){

            System.out.println("Temperatura" + i);
            System.out.println("Ingrese la temperatura: ");

            temp = scanner.nextDouble();
            i++;

            sumaTemp = sumaTemp + temp;
        }
        // sacando el promedio
        promedio = sumaTemp/12;

        System.out.println("El promedio de las temperaturas del year son " + promedio + "º");
        // fin del programa
        scanner.close();
    }
}