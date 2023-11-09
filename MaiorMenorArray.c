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

    //Calculando
    maior = numero[0] > numero[i] ? numero[0] : numero[i];
    menor = numero[0] < numero[i] ? numero[0] : numero[i];
    }   

    //Mostrando Dados
    printf("\nO maior número é: %i \n", maior);
    printf("O menor número é: %i", menor);
    
    return 0;
}
