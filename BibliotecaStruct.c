#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas variáveis
struct dados_leitor
{
    char nome[200],autor[200],categoria[200];
    float preco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    int linha = 3;
    struct dados_leitor leitor [linha];
    int i;
    
    //Solicitando Dados
    for ( i = 0; i < linha; i++)
    {
    printf("\nInforme os dados do seu %iº livro\n",i+1);
    printf("Nome do Livro: ");
    gets(leitor[i].nome);

    printf("Nome do Autor: ");
    gets(leitor[i].autor);
    
    printf("Categoria do Livro: ");
    gets(leitor[i].categoria);
    
    printf("Preço: ");
    scanf("%f",&leitor[i].preco);

    fflush(stdin);

    }

    system("cls || clear");
    
    for ( i = 0; i < linha; i++)
    {
    printf("\nExibindo os dados do abaixo \n\n");
    printf("Nome do Livro: %s \n", leitor[i].nome);
    printf("Autor: %s \n", leitor[i].autor);
    printf("Categoria: %s \n", leitor[i].categoria);
    printf("Preço: %.2f \n", leitor[i].preco);
    printf("\n--------------------\n");
    }
    
    
    return 0;
}