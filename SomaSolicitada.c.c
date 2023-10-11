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


    // Para i de 1 at√© 10 passo 1 fa√ßa
    for ( i = 1; i <= 5; i++)
    {
    printf("Informe o %i∞ N˙mero: ",i);
    scanf("%i",&numero);

    soma = (soma + numero);

    }

    printf("A soma dos n˙meros s„o: %i",soma);
    

    return 0;
}