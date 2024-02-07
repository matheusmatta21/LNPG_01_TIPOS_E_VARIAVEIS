#include <stdio.h>
float conversorTemperatura(float a)
{
    return (a * 9 / 5) + 32;
}
int main()
{
    float temperaturaCelsius;
    float temperaturaFahrenheit;
    int desejaContinuar;
    while (1)
    {
        printf("Digite a temperatura em Celsius: \n");
        scanf("%f", &temperaturaCelsius);

        temperaturaFahrenheit = conversorTemperatura(temperaturaCelsius);

        printf("A temperatura convertida em Fahrenheit equivale a %.2fF.\n", temperaturaFahrenheit);
        printf("Deseja continuar?\n\n1 - Sim\n2 - Nao\n");
        scanf("%d", &desejaContinuar);

        if (desejaContinuar == 1)
        {
            continue;
        }
        else if (desejaContinuar == 2)
        {
            printf("Ok. Obrigado por utilizar nosso programa.");
            break;
        }
        else
        {
            while (desejaContinuar != 1 && desejaContinuar != 2)
            {
                printf("Digite um valor correspondente!\n");
                scanf("%d", &desejaContinuar);
            }
        }
    }

    return 0;
}