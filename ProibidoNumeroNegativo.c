#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int i;
    int tamanho = 5;
    int numero [tamanho];

    //Solicitando Dados
    printf("Digite os 5 valores abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("\nDigite o %iº Número: ", i+1);
        scanf("%i",&numero[i]);

        if (numero[i] < 0)
        {
            numero[i] = 0;
        } 
    }
         
    //Mostrando Dados
    printf("\nMostrando números digitados abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%iº número: %i \n", i+1, numero[i]);   
    }

return 0;
}