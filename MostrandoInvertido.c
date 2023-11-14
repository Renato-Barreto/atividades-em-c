#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int i;
    int x = 0;
    int tamanho = 6;
    int numero [tamanho];

    //Solicitando Dados
    printf("Digite os 6 valores pares abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        do
        {
        printf("\nDigite o %iº Número: ", i+1);
        scanf("%i",&numero[i]);
        } while (numero[i] % 2 == 1);
        
    }
         
    //Mostrando Dados
    printf("\nMostrando números digitados invertidos abaixo\n");
    for ( i = 5; i >= 0 ; i--)
    {
     printf("%iº número: %i \n", x+1, numero[i]);
     x++;   
    }

return 0;
}