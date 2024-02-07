#include <stdio.h>

int main()
{
    int idade;
    while (1)
    {
        printf("Digite a idade (-1 para parar):\n");
        scanf("%d", &idade);
        if (idade == -1)
        {
            printf("Ok, obrigado por utilizar nosso programa.");
            break;
        }
        else if (idade >= 18)
        {
            printf("Maior de idade.\n");
        }
        else
        {
            printf("Menor de idade.\n");
        }
    }
    return 0;
}