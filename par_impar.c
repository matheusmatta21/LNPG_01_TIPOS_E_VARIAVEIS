#include <stdio.h>

int main()
{
    while (1)
    {
        int numero;
        printf("Digite um numero: (-1 para parar)\n");
        scanf("%d", &numero);

        if (numero == -1)
        {
            printf("Obrigado por utilizar nosso programa.");
            break;
        }

        else if (numero % 2 == 0)
        {
            printf("%d se comporta como par.\n", numero);
        }
        else if (numero % 2 != 0)
        {
            printf("%d se comporta como impar.\n", numero);
        }
    }
    return 0;
}