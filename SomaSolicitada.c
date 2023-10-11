#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero;
    int soma = 0;


    // Para i de 1 até 10 passo 1 faça
    for ( i = 1; i <= 5; i++)
    {
    printf("Informe o %i° Número: ",i);
    scanf("%i",&numero);

    soma = (soma + numero);

    }

    printf("A soma dos números são: %i",soma);
    

    return 0;
}
