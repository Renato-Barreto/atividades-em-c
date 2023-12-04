#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas variáveis
struct dados_alunos
{
    char turma[200], nome[200], situacao[200];
    int idade;
    float notas[2];

};

struct dados_professores
{
    char nome[200], disciplinas[2][200], turmas[2][200];
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    int linha = 3;
    struct dados_alunos alunos [linha];
    struct dados_professores professores [2];
    float soma,media[2];
    int i,j;
    char codigo;

    //solicitando dados

    printf("Você é aluno(a) ou professor(a)?\n");
    printf("(A)Aluno || (P)Professor: \n");
    scanf("%c",&codigo);
    system("cls || clear");
    fflush(stdin);

    switch (codigo)
    {
    case 'A':
    case 'a':
    for ( i = 0; i < linha; i++)
    {
        printf("Informe os dados abaixo\n");

        printf("Número da turma: ");
        gets(alunos[i].turma);

        printf("Nome Completo: ");
        gets(alunos[i].nome);

        printf("Informe sua idade: ");
        scanf("%i",&alunos[i].idade);

        for ( j = 0; j < 2; j++)
        {
            printf("Informe a %iª nota: ",j+1);
            scanf("%f",&alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }

        media[i] = soma / 2;
        soma = 0;

        if (media[i] >= 7)
        {
            strcpy(alunos[i].situacao, "Aprovado");
        } else {
            strcpy(alunos[i].situacao, "Reprovado");
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
        printf("\nMédia: %.1f \n",media[i]);
        printf("\nSituação: %s \n",alunos[i].situacao);
        
        printf("--------------------\n");
    }
        
        break;
    
    case 'P':
    case 'p': 
        for ( i = 0; i < 2; i++)
        {
            printf("Nome Completo: ");
            gets(professores[i].nome);
        
            for (j = 0; j < 2; j++)
            {
                printf("\n%iª disciplina: ",j+1);
                gets(professores[i].disciplinas[j]);
                    
                printf("%iª Turma: ",j+1);
                gets(professores[i].turmas[j]);
            }
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
    for ( i = 0; i < 2; i++)
    {
        printf("--------------------\n");
        printf("Nome: %s\n\n",professores[i].nome);
        for ( j = 0; j < 2; j++)
        {
            printf("Disciplina: %s\n",professores[i].disciplinas[j]);
            printf("Turma: %s\n\n",professores[i].turmas[j]);
        }
        printf("--------------------\n");
    }
    default:
        break;
    }
    
    
    return 0;

}