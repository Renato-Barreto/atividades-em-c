#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Vari�veis

    float media;
    int primeiraNota = -1;
    int segundaNota = -1;

    //Solicitando dados
    
    do{
    printf("Informe a Primeira nota: ");
    scanf("%i", &primeiraNota);

    if (primeiraNota < 0 || primeiraNota > 10)
    {
    printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
    }

    } while (primeiraNota < 0 || primeiraNota > 10);
    
    do{
    printf("Informe a Segunda nota: ");
    scanf("%i", &segundaNota);

    if (segundaNota < 0 || segundaNota > 10)
    {
    printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
    }

    } while (segundaNota < 0 || segundaNota > 10);
    
    //Calculando M�dia

    media = (primeiraNota + segundaNota) /2;

    //Mostrando pra o usu�rio

    printf("\nA sua Primeira nota �: %i \n", primeiraNota);
    printf("A sua Segunda nota �: %i \n", segundaNota);
    printf("A sua m�dia �: %.2f \n", media);

    return 0;
}