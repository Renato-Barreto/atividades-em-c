#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct dados_aluno {
    char nome[200];
    int idade;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis
    // "Tipo de Dado" - "Variável"
    struct dados_aluno aluno;
    
    //Solicitando Dados
    printf("\nSolicitando os dados do aluno...\n");
    printf("Nome do aluno: ");
    gets(aluno.nome);

    printf("Idade do aluno: ");
    scanf("%i",&aluno.idade);

    printf("\nExibindo os dados do aluno... \n");
    printf("Nome: %s \n", aluno.nome);
    printf("Idade: %i \n", aluno.idade);
    
    return 0;
}