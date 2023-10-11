#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis

    float media;
    int primeiraNota = -1;
    int segundaNota = -1;

    //Solicitando dados
    
    do{
    printf("Informe a Primeira nota: ");
    scanf("%i", &primeiraNota);

    if (primeiraNota < 0 || primeiraNota > 10)
    {
    printf("Nota inválida. \nDigite a nota novamente... \n\n");
    }

    } while (primeiraNota < 0 || primeiraNota > 10);
    
    do{
    printf("Informe a Segunda nota: ");
    scanf("%i", &segundaNota);

    if (segundaNota < 0 || segundaNota > 10)
    {
    printf("Nota inválida. \nDigite a nota novamente... \n\n");
    }

    } while (segundaNota < 0 || segundaNota > 10);
    
    //Calculando Média

    media = (primeiraNota + segundaNota) /2;

    //Mostrando pra o usuário

    printf("\nA sua Primeira nota é: %i \n", primeiraNota);
    printf("A sua Segunda nota é: %i \n", segundaNota);
    printf("A sua média é: %.2f \n", media);

    return 0;
}