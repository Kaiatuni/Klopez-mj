import java.util.Scanner;

public class Bonos{

    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese la antiguedad del empleado (en años): "); // Con este comando le estoy diciendo al usuario que ingrese la antiguedad del empleado //
        int antiguedad = scanner.nextInt();

        if(antiguedad >= 5){
            System.out.println("Es elegible para el bono!"); //si antiguedad es mayor que 5 es elegible//
        }
        if(antiguedad < 5){
            System.out.println( "No es elegible para el bono :("); // si antigueda es menor que 5 nno es elegible// 
        }
        scanner.close();
        }
    }


