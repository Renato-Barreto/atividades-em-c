#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

     //Declarando Vari�veis
    int i;
    int tamanho = 6;
    int numero[tamanho];
    int par = 0;
    int impar = 0;

    //Solicitando dados
    printf("Digite os valores inteiros \n");
    for(i = 0; i < tamanho; i++) 
    {
    printf("%i� n�mero: ",i+1);
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
    printf("\nA quantidade de pares �: %i \n", par);
    printf("A quantidade de �mpares �: %i", impar);
    
    return 0;
}