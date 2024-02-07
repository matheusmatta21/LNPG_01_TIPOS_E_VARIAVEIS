import java.util.Scanner;

public class MediaPonderada {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double nota1, nota2, nota3;
        double peso1, peso2, peso3;
        double media_ponderada;

        System.out.println("Digite a primeira nota:");
        nota1 = scanner.nextDouble();
        System.out.println("Digite o peso da primeira nota:");
        peso1 = scanner.nextDouble();

        System.out.println("Digite a segunda nota:");
        nota2 = scanner.nextDouble();
        System.out.println("Digite o peso da segunda nota:");
        peso2 = scanner.nextDouble();

        System.out.println("Digite a terceira nota:");
        nota3 = scanner.nextDouble();
        System.out.println("Digite o peso da terceira nota:");
        peso3 = scanner.nextDouble();

        scanner.close();

        media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

        System.out.println("A média ponderada é de " + media_ponderada);
    }
}
