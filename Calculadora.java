import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double primeiro_numero;
        double segundo_numero;
        double soma;
        double subtracao;
        double multiplicacao;
        double divisao;
        System.out.println("Digite o primeiro numero:");
        primeiro_numero = scanner.nextDouble();

        System.out.println("Digite o segundo número:");
        segundo_numero = scanner.nextDouble();

        soma = primeiro_numero + segundo_numero;
        subtracao = primeiro_numero - segundo_numero;
        multiplicacao = primeiro_numero * segundo_numero;
        divisao = primeiro_numero / segundo_numero;

        System.out.println("Soma: " + soma);
        System.out.println("Subtração: " + subtracao);
        System.out.println("Multiplicação: " + multiplicacao);
        System.out.println("Divisão: " + divisao);

        scanner.close();
    }
}