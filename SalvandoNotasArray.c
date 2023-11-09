#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

     //Declarando Arrays
    int i;
    int tamanho = 3;
    float vetor[tamanho];

    //Solicitando dados
    printf("Digite suas notas no sistema \n");
    for(i = 0; i<tamanho; i++) 
    {
    printf("%iª nota: ",i + 1);
        scanf("%f", &vetor[i]); 
    }   

    //Armazenando Front-End
    system("cls || clear");
    printf("Armazenando notas");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);

    //Mostrando Dados
    printf("\n");
    printf("Mostrando as notas \n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%iª nota: %.1f\n", i+1, vetor[i]);
    }

    
    return 0;
}