#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    return a / b;
}

int main()
{
    float primeiroNumero;
    float segundoNumero;
    int opcaoSelecionada;
    int desejaContinuar;
    int trocarNumero;

    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiroNumero);
    printf("Digite o segundo numero: ");
    scanf("%f", &segundoNumero);

    while (1)
    {
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        printf("Qual opcao deseja selecionar?\n");
        scanf("%d", &opcaoSelecionada);

        if (opcaoSelecionada == 1)
        {
            printf("Soma: %.2f\n", soma(primeiroNumero, segundoNumero));
        }
        else if (opcaoSelecionada == 2)
        {
            printf("Subtracao: %.2f\n", subtracao(primeiroNumero, segundoNumero));
        }
        else if (opcaoSelecionada == 3)
        {
            printf("Multiplicacao: %.2f\n", multiplicacao(primeiroNumero, segundoNumero));
        }
        else if (opcaoSelecionada == 4)
        {
            printf("Divisao: %.2f\n", divisao(primeiroNumero, segundoNumero));
        }
        else if (opcaoSelecionada == 5)
        {
            printf("Obrigado por utilizar nosso programa!");
            break;
        }
        else
        {
            while (opcaoSelecionada > 5 || opcaoSelecionada < 1)
                printf("Digite uma opcao valida!\n");
            scanf("%d", &opcaoSelecionada);
        }

        printf("Deseja continuar?\n\n1 - Sim\n2 - Nao\n");
        scanf("%d", &desejaContinuar);

        if (desejaContinuar == 1)
        {
            printf("Deseja trocar os numeros?\n\n1 - Sim\n2 - Nao\n");
            scanf("%d", &trocarNumero);
            if (trocarNumero == 1)
            {
                printf("Digite o primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Digite o segundo numero: ");
                scanf("%f", &segundoNumero);
                continue;
            }
            else if (trocarNumero == 2)
            {
                printf("Ok.\n");
                continue;
            }
            else
            {
                while (trocarNumero != 1 && trocarNumero != 2)
                {
                    printf("Digite uma opcao valida!\n");
                    scanf("%d", &trocarNumero);
                }
            }
        }
        else if (desejaContinuar == 2)
        {
            printf("Ok. Obrigado por utilizar nosso programa");
            break;
        }
        else
        {
            while (desejaContinuar != 1 && desejaContinuar != 2)
            {
                printf("Digite uma opcao valida!\n");
                scanf("%d", &desejaContinuar);
            }
        }
    }
    return 0;
}