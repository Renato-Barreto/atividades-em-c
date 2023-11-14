#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int i;
    int tamanho = 10;
    float numero [tamanho];
    float somaPositivo = 0;
    float negativo = 0;

    //Solicitando Dados
    printf("Digite os 10 valores reais abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("\nDigite o %iº Número: ", i+1);
        scanf("%f",&numero[i]);

        if (numero[i] >= 0)
        {
            somaPositivo += numero[i];
        } else if (numero[i] < 0)
        {
            negativo++;
        }
    }
         
    
    printf("\nQuantidade de valores negativos: %.1f \n", negativo);
    printf("Soma dos valores positivos: %.1f", somaPositivo);
    

return 0;
}