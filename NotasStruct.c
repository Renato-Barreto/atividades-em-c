#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas variáveis
struct dados_alunos
{
    char nome[200];
    int idade;
    float notas[2];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    int linha = 3;
    struct dados_alunos alunos [linha];
    int i,j;

    //solicitando dados
    for ( i = 0; i < linha; i++)
    {
        printf("Informe os dados abaixo\n");
        printf("Nome Completo: ");
        gets(alunos[i].nome);

        printf("Informe sua idade: ");
        scanf("%i",&alunos[i].idade);

        for ( j = 0; j < 2; j++)
        {
            printf("Informe a %iª nota: ",j+1);
            scanf("%f",&alunos[i].notas[j]);
        }
        fflush(stdin);
        system("cls || clear");
    }

    printf("Armazenando dados");
    for ( i = 0; i < 3; i++)
    {
        sleep(1);
        printf(".");
    }
    system("cls || clear");


    printf("Mostrando Cadastrados abaixo\n");
    for ( i = 0; i < linha; i++)
    {
         printf("--------------------\n");
         printf("Nome: %s \n", alunos[i].nome);
         printf("Idade: %i \n", alunos[i].idade);

        for ( j = 0; j < 2; j++)
        {
         printf("%iª Nota: %.1f \n", j+1, alunos[i].notas[j]);
        }
        
         printf("--------------------\n");
    }
    
    
    





    return 0;

}