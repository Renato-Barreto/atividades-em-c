#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//fun��o
void cabecalho()
{
    printf("\n===========================================\n");
    printf("Servi�o Nacional de Aprendizagem Industrial"); 
    printf("\n===========================================\n");
}

void limpaTela()
{
    system("cls || clear"); 
}

void mostrarDados(char nome [200],int idade)
{
    printf("Nome: %s \n",nome);
    printf("Idade: %i \n",idade);
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
    limpaTela();

    printf("Digite sua idade: ");
    scanf("%i",&idade);
    limpaTela();

    cabecalho(); //Chamada da fun��o
    mostrarDados(nome, idade);


    return 0;
}