#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
float notas;
float soma;
float media;


for ( i = 1; i <= 2; i++)
{
    do
    {
    printf("Informe a %i° nota: ",i);
    scanf("%f", &notas);

    if (notas < 0 || notas > 10)
    {
    printf("Nota inválida. \nDigite a nota novamente... \n\n");
    }
    } while (notas < 0 || notas > 10);

    soma += notas;
    media = soma / i;
    
}


printf("Sua média: %.2f ", media);



return 0;
}
