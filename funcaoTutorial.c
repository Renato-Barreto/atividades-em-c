#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//fun��o
void cabecalho(){
    printf("\n===========================================\n");
    printf("Servi�o Nacional de Aprendizagem Industrial"); 
    printf("\n===========================================\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Vari�veis
    char nome [200];
    int idade;

    cabecalho(); //Chamada da fun��o

    printf("Digite um nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%i",&idade);

    cabecalho(); //Chamada da fun��o
    printf("Nome: %s \n",nome);
    printf("Idade: %i \n",idade);


    return 0;
}