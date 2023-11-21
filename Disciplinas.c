#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Vari�veis
    
    int linha = 2;
    int coluna = 3;
    char disciplina [coluna] [250];
    float notas [linha][coluna];
    float media [coluna];
    float soma = 0;
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < coluna; i++)
    {
        printf("Digite o nome da %i� disciplina: ", i+1);
        gets(disciplina[i]);

        for ( j = 0; j < linha; j++)
        {
            printf("Digite a %i� nota: ", j + 1);
            scanf("%f",&notas[i][j]);
            
            soma += notas[i][j];
            
        }
        media[i] = soma / linha;
        soma = 0;
        fflush(stdin);
        printf("\n");
    }
    
    system("cls || clear");
    printf("Calculando M�dia aritm�tica");
    for ( i = 0; i < 3; i++)
    {
        printf(".");
        sleep(1);
    }
    sleep(2);
    system("cls || clear");

    printf("_____________________\n");
    for ( i = 0; i < coluna; i++)
    {
        printf("%i� disciplina: %s \n\n", i+1, disciplina[i]);

        for ( j = 0; j < linha; j++)
        {
            printf("%i� nota: %.2f \n", j + 1, notas[i][j]);
        }
        
        printf("\nM�dia: %.2f \n", media[i]);
        printf("_____________________\n");
    }

    return 0;
}