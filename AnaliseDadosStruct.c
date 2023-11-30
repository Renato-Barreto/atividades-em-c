#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas variáveis
struct dados_cadastrados
{
    char nome[200],data[200],rg[200],cpf[200];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    int linha = 5;
    struct dados_cadastrados informacoes [linha];
    int i;

    //solicitando dados
    for ( i = 0; i < linha; i++)
    {
        printf("Bem Vindo ao %iº cadastro do banco '100 Money'\n",i+1);
        printf("Informe os dados abaixo\n");
        printf("Nome Completo: ");
        gets(informacoes[i].nome);

        printf("Data de nascimento (DD/MM/AAAA): ");
        gets(informacoes[i].data);

        printf("Informe seu RG: ");
        gets(informacoes[i].rg);

        printf("Informe seu CPF: ");
        gets(informacoes[i].cpf);

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
         printf("Nome: %s \n", informacoes[i].nome);
         printf("Data de Nascimento: %s \n", informacoes[i].data);
         printf("RG: %s \n", informacoes[i].rg);
         printf("CPF: %s \n", informacoes[i].cpf);
         printf("--------------------\n");
    }
    
    
    





    return 0;

}