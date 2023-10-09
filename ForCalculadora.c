#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    
    // Mostrar de 1 até 10
    // Para i de 1 até 10 passo 1 faça
    for ( i = 1; i <= 10; i++)
    {
        printf("3 x %i = %i \n", i, i*3);
    }
    
    for ( i = 1; i <= 10; i++)
    {
        printf("5 x %i = %i \n", i, i*5);
    }
    
    for ( i = 1; i <= 10; i++)
    {
        printf("7 x %i = %i \n", i, i*7);
    }
    



    return 0;
}