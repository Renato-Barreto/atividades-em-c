#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;

    // Para i de 1 at� 10 passo 1 fa�a
    for ( i = 1; i <= 20; i++)
    {
       if (i % 2 == 0){ 
        printf("%i \n",i);
       }
    }
    

    return 0;
}