#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Vari�veis
    
    char aluno [2] [250];
    float notas[2][3];
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o nome do %i� aluno: ", i+1);
        gets(aluno[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("Digite a %i� nota do aluno: ", j + 1);
            scanf("%f",&notas[i][j]);
        }
        fflush(stdin);
        printf("\n");
    }

    for ( i = 0; i < 2; i++)
    {
        printf("%i� aluno: %s \n", i+1, aluno[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("%i� nota: %.2f \n", j + 1, notas[i][j]);
        }
        printf("\n");
    }
    


    



    return 0;
}