#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%i",&numero);

    if (numero % 2 == 0)
    {
        printf("Este número é par");
    }
    else
    {
        printf("Este número é Ímpar");
    }
    




}