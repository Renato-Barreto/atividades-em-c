#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int nota = -1;

    // Para i de 1 at� 10 passo 1 fa�a
    while (nota < 0 || nota > 10)
    {
    printf("Informe a sua nota: ");
    scanf("%i", &nota);

    if (nota < 0 || nota > 10)
    {
    printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
    }
    
    }
    

    printf("\nA sua nota �: %i \n", nota);

    return 0;
}