#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

     //Declarando Variáveis
    int i;
    int tamanho = 6;
    int numero[tamanho];
    int par = 0;
    int impar = 0;

    //Solicitando dados
    printf("Digite os valores inteiros \n");
    for(i = 0; i < tamanho; i++) 
    {
    printf("%iº número: ",i+1);
    scanf("%i", &numero[i]); 

    //Calculando
    if (numero[i] % 2 == 0)
    {
        par++;
    } else {
        impar++;
    }
    }   

    //Mostrando Dados
    printf("\nA quantidade de pares é: %i \n", par);
    printf("A quantidade de ímpares é: %i", impar);
    
    return 0;
}