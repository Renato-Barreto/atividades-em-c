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
    int par = 0;
    int impar = 0;

    // Para i de 1 at� 10 passo 1 fa�a
    for (i = 1; i <= 5; i++)
    {
        printf("Informe o %i� N�mero: ", i);
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            par++;
        }else{
            impar++;
        }
    }

    printf("A quantidade de n�meros pares s�o: %i \n", par);
    printf("A quantidade de n�meros �mpares s�o: %i", impar);

    return 0;
}