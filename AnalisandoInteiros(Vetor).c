#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Vari�veis
    int i, x = 0;
    int tamanho = 5;
    int numero[tamanho];
    int quantidadePares = 0, quantidadeImpares = 0;
    int totalPares = 0, totalImpares = 0;
    int quantidadePositivos = 0, quantidadeNegativos = 0;
    int totalPositivos = 0, totalNegativos = 0;
    int maior = 0, menor = 99999;
    int total = 0, quantidadeTotal = 0;
    float mediaPar, mediaImpar, mediaTotal;

    //Solicitando N�meros
    printf("Solicitando os 5 n�meros inteiros abaixo\n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("Digite o %i� n�mero: ",i+1);
        scanf("%d",&numero[i]);

        //Trabalhando com Pares e Impares
        numero[i] % 2 == 0 ? quantidadePares++ : quantidadeImpares++;
        if (numero[i] % 2 == 0)
        {
            totalPares += numero[i];
        } else {
            totalImpares += numero[i];
        }
        
        //Trabalhando com Positivos e Negativos
        numero[i] >= 0 ? quantidadePositivos++ : quantidadeNegativos++;
        if (numero[i] >= 0)
        {
            totalPositivos += numero[i];
        } else {
            totalNegativos += numero[i];
        }

        //Maior e Menor
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        //Quantidade total
        total += numero[i];
        quantidadeTotal ++;
    }
    //M�dia
    if (quantidadePares != 0) {
        mediaPar = totalPares / quantidadePares;
    }
    
    if (quantidadeImpares != 0) {
        mediaImpar = totalImpares / quantidadeImpares;
    }

    mediaTotal = total / quantidadeTotal;
    system("cls || clear");

    //Mostrando para o usu�rio
    printf("Quantidade de n�meros Pares: %i\n",quantidadePares);
    printf("Quantidade de n�meros �mpares: %i\n",quantidadeImpares);
    printf("\n");
    printf("Quantidade de n�meros Positivos: %i\n",quantidadePositivos);
    printf("Quantidade de n�meros Negativos: %i\n",quantidadeNegativos);
    printf("Quantidade de n�meros inseridos: %i",i);
    printf("\n");
    printf("Maior n�mero: %i\n",maior);
    printf("Menor n�mero: %i\n",menor);
    printf("\n");
    printf("M�dia de n�meros pares: %.2f\n",mediaPar);
    printf("M�dia de n�meros �mpares: %.2f\n",mediaImpar);
    printf("M�dia Total: %.2f\n",mediaTotal);
    for ( i = 4; i >= 0 ; i--)
    {
     printf("%i� n�mero: %i \n", x+1, numero[i]);
     x++;
     sleep(1);
    }

    return 0;
}