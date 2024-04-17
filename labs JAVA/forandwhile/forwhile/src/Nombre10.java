import java.util.Scanner;

public class Nombre10 {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        //le pide al usuario que ingrese su nombre
        System.out.print("Ingrese su nombre:");

        //el nombre ingresado se analiza y se almacena en la data
        String nombre = scanner.nextLine();

        // esto es para que solo lo haga 10 veces la repeticion
        for(int i = 1, i <= 10; i++){

            //imprime el numero de veces necesaria //
            System.out.println("Hola " + nombre +"!");
        }
        scanner.close();
    }
}    