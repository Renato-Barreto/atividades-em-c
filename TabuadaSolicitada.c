#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;

    printf("Digite o n�mero para a tabuada:");
    scanf("%i", &numero);
    
    // Para i de 1 at� 10 passo 1 fa�a
    for ( i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", numero, i, i * numero);
    }
    

    return 0;
}