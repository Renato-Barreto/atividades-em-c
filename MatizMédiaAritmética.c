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
    char aluno [linha] [250];
    float notas [linha][coluna];
    float soma [linha];
    float media [linha];
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o aluno do %i� aluno: ", i+1);
        gets(aluno[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("Digite a %i� nota do aluno: ", j + 1);
            scanf("%f",&notas[i][j]);

            soma[i] += notas[i][j];
    
        }
        fflush(stdin);
        printf("\n");
    }
    
    for ( i = 0; i < 2; i++)
    {
        media[i] = soma[i] / 3;
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
    for ( i = 0; i < 2; i++)
    {
        printf("%i� aluno: %s \n\n", i+1, aluno[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("%i� nota: %.2f \n", j + 1, notas[i][j]);
        }
        
        printf("\nM�dia: %.2f \n", media[i]);
        printf("_____________________\n");
    }

    return 0;
}