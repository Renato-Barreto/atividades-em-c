#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um n�mero: ");
    scanf("%i",&numero);

    if (numero % 2 == 0)
    {
        printf("Este n�mero � par");
    }
    else
    {
        printf("Este n�mero � �mpar");
    }
    




}