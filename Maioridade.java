import java.util.Scanner;

public class Maioridade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int idade;

        System.out.println("Digite uma idade:");
        idade = scanner.nextInt();
        scanner.close();
        if (idade < 0) {
            System.out.println("Digite uma idade válida!");
        } else if (idade >= 18) {
            System.out.println(idade + " é maior de idade.");
        } else {
            System.out.println(idade + " é menor de idade.");
        }
    }
}
