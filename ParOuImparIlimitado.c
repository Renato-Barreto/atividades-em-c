#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i = 0;
    int par;
    int parCount;
    int imparCount;
    int numero;
    int soma;
    float mediaPar;
    float media;

    do
    {
        printf("Informe o %i� n�mero: ", i + 1);
        scanf("%i", &numero);
        soma += numero;

    if(numero > 0){
        if (numero % 2 == 0){
            par += numero;
            parCount++;
        }else{
            imparCount++;
        }
        i++;
    }

    } while (numero != 0);

    mediaPar = par / parCount;
    media = soma / i;

    printf("\nQuantidade de n�meros pares: %i", parCount);
    printf("\nQuantidade de n�meros �mpares: %i", imparCount);
    printf("\nM�dia Geral: %.1f", media);
    printf("\nM�dia Pares: %.1f", mediaPar);

    return 0;
}