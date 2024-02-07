#include <stdio.h>

double calcularMediaPonderada(double nota_1, double nota_2, double nota_3, double peso_1, double peso_2, double peso_3)
{
    return ((nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3)) / ((peso_1 + peso_2 + peso_3));
}

int main()
{
    double nota1;
    double nota2;
    double nota3;
    double peso1;
    double peso2;
    double peso3;
    double media;

    printf("Digite a primeira nota:\n");
    scanf("%lf", &nota1);
    printf("Digite o peso da primeira nota:\n");
    scanf("%lf", &peso1);
    printf("Digite a segunda nota:\n");
    scanf("%lf", &nota2);
    printf("Digite o peso da segunda nota:\n");
    scanf("%lf", &peso2);
    printf("Digite a terceira nota:\n");
    scanf("%lf", &nota3);
    printf("Digite o peso da terceira nota:\n");
    scanf("%lf", &peso3);

    media = calcularMediaPonderada(nota1, nota2, nota3, peso1, peso2, peso3);
    printf("A media ponderada dessas notas vale %lf.", media);

    return 0;
}