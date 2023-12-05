#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void tabuada (int n1)
{
    int a;
    for ( a = 1; a <= 10; a++)
    {
        printf("%i x %i = %i \n", n1, a, a * n1);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite o número para a tabuada:");
    scanf("%i", &numero);
    
    // Para i de 1 até 10 passo 1 faça
    tabuada(numero);
    

    return 0;
}