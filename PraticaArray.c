#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");

     //Declarando Arrays
    int vetor[5];
    int i;

    //Solicitando dados
    printf("Digite os elementos do vetor \n");
    for(i = 0; i<5; i++) 
    {
    printf("%iº Elemento: ",i + 1);
        scanf("%i", &vetor[i]); 
    }   


    printf("\n");
    printf("Mostrando os elementos do vetor \n");
    for ( i = 0; i < 5; i++)
    {
        printf("Elemento %i: %i\n", i+1, vetor[i]);
    }

    
    return 0;
}