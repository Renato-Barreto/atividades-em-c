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
    int numero[tamanho];
    int maior = 0;
    int menor = 0;

    //Solicitando dados
    printf("Digite os valores inteiros \n");
    for(i = 0; i < tamanho; i++) 
    {
    printf("%iº número: ",i+1);
        scanf("%i", &numero[i]); 
    }   

    //Calculando
    maior = numero[0] > numero[1] ? numero[0] : numero[1];
    maior = maior > numero[2] ? maior : numero[2];
    maior = maior > numero[3] ? maior : numero[3];
    maior = maior > numero[4] ? maior : numero[4];

    menor = numero[0] < numero[1] ? numero[0] : numero[1];
    menor = menor < numero[2] ? menor : numero[2];
    menor = menor < numero[3] ? menor : numero[3];
    menor = menor < numero[4] ? menor : numero[4];
    
    //Mostrando Dados

    printf("\nO maior número é: %i \n", maior);
    printf("O menor número é: %i", menor);
    
    return 0;
}