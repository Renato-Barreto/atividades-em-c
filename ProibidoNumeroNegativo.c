#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Vari�veis
    int i;
    int tamanho = 5;
    int numero [tamanho];

    //Solicitando Dados
    printf("Digite os 5 valores abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("\nDigite o %i� N�mero: ", i+1);
        scanf("%i",&numero[i]);

        if (numero[i] < 0)
        {
            numero[i] = 0;
        } 
    }
         
    //Mostrando Dados
    printf("\nMostrando n�meros digitados abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%i� n�mero: %i \n", i+1, numero[i]);   
    }

return 0;
}