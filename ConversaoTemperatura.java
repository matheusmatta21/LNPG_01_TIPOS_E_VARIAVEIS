import java.util.Scanner;


public class ConversaoTemperatura {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double temperatura_celsius;
        double temperatura_fahrenheit;

        System.out.println("Digite a temperatura em Celsius:");
        temperatura_celsius = scanner.nextDouble();
        scanner.close();

        temperatura_fahrenheit = (temperatura_celsius * 9/5) + 32;

        System.out.println("A temperaura em Fahrenheit é de " + temperatura_fahrenheit + "F");
    }
}
