#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 3

//Declarando Funções
void cabecalho()
{
    printf("=========================\n");
    printf("Bem-Vindo a Bibli-On-teca\n");
    printf("Sua leitura Online diária\n");
    printf("=========================\n");
}
void armazenando()
{
    printf("Armazenando informações");
    for ( int i = 0; i < 3; i++)
    {
        printf(".");
        sleep(1);
    }
}
char* contadorLivros(char book[TAM][200])
{
    int a;
    printf("Cadastre os 3 melhores livros abaixo\n\n");
    for ( a = 0; a < TAM; a++)
    {
        printf("Digite o %iº livro: ", a+1);
        gets(book[a]);
    }
    return book;
}
void mostrarLivros(char book[TAM][200])
{
    int a;
    printf("Mostrando registro atual\n\n");
    for ( a = 0; a < TAM; a++)
    {
        printf("%iº livro: %s \n", a+1,book[a]);
    }
}
void limpaTela()
{
    system("cls || clear");
}

//Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");
    //Declarando Variáveis
    char livro [TAM][200];

    //Solicitando Dados
    cabecalho();
    contadorLivros(livro);
    limpaTela();
    //Front-End Carregamento
    armazenando();
    limpaTela();
    //Mostrando Dados
    cabecalho();
    mostrarLivros(livro);
    
    return 0;
}
