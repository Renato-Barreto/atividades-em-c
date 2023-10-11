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

    // Para i de 1 até 10 passo 1 faça
    for (i = 1; i <= 5; i++)
    {
        printf("Informe o %i° Número: ", i);
        scanf("%i", &numero);

        //numero % 2 == 0 ? par++ : impar++;
        
        if (numero % 2 == 0)
        {
            par++;
        }else{
            impar++;
        }
    }

    printf("A quantidade de números pares são: %i \n", par);
    printf("A quantidade de números ímpares são: %i", impar);

    return 0;
}
