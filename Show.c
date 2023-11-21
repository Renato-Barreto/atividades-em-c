#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    
    int linha = 3;
    int coluna = 5;
    char banda [linha] [250];
    char integrantes [linha] [coluna] [250];
    int i,j;

    //Solicitando Dados
    for ( i = 0; i < linha; i++)
    {
        printf("Digite o nome da %iª banda: ", i+1);
        gets(banda[i]);

        for ( j = 0; j < coluna; j++)
        {
            printf("Digite o %iº integrante: ", j + 1);
            gets(integrantes[i][j]);
        }
        printf("\n");
    }
    
    system("cls || clear");
    printf("Armezando Informações");
    for ( i = 0; i < 3; i++)
    {
        printf(".");
        sleep(1);
    }
    sleep(1);
    system("cls || clear");

    printf("Atrações do Show abaixo\n");
    printf("_____________________\n");
    for ( i = 0; i < linha; i++)
    {
        printf("%iª banda: %s \n\n", i+1, banda[i]);

        for ( j = 0; j < coluna; j++)
        {
            printf("%iº integrante: %s \n", j + 1, integrantes[i][j]);
        }
        printf("_____________________\n");
    }

    return 0;
}