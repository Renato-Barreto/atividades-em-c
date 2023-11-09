#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

     //Declarando Arrays
    int i;
    int tamanho = 4;
    int soma = 0;
    float nota[tamanho];
    float media = 0;
    char situacao[250];

    //Solicitando dados
    printf("Digite suas notas no sistema \n");
    for(i = 0; i < tamanho; i++) 
    {
    printf("%i� nota: ",i+1);
        scanf("%f", &nota[i]); 
        soma += nota[i];
    }   

    //Calculando media e situa��o
    media = soma / tamanho;

    if (media >= 7)
    {
        strcpy(situacao, "Aprovado");
    } else if (media >= 5)
    {
        strcpy(situacao, "Recupera��o");
    } else {
        strcpy(situacao, "Reprovado");
    }

    //Armazenando (Front-End)
    system("cls || clear");
    printf("Armazenando notas");
    for (i = 0; i < 3; i++)
    {
    printf(".");
    sleep(1);
    }
    
    //Mostrando Dados
    printf("\n");
    printf("Mostrando as notas \n");
    for ( i = 0; i<tamanho; i++)
    {
        printf("%i� nota: %.1f\n", i+1, nota[i]);
    }

    printf("\nM�dia: %.1f\n", media);
    printf("Situa��o: %s\n", situacao);

    
    return 0;
}