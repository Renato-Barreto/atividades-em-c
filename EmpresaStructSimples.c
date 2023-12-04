#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas variáveis
struct dados_funcionarios
{
    char nome[200];
    int idade;
    char cpf[200];
};

struct dados_clientes
{
    char nome[200];
    int idade;
    char cpf[200];
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    struct dados_funcionarios funcionarios;
    struct dados_clientes clientes;
    char resposta;

    //Solicitando Dados

    printf("Você é clientes(C) ou funcionário(F)?\n");
    printf("Digite 'C' ou 'F': ");
    scanf("%c",&resposta);

    fflush(stdin);

    switch (resposta)
    {
    case 'C':
    case 'c':
        printf("Informe seu Nome: ");
        gets(clientes.nome);

        printf("Infome sua Idade: ");
        scanf("%i",&clientes.idade);

        fflush(stdin);
        
        printf("Informe seu CPF: ");
        gets(clientes.cpf);
        
        system("cls || clear");

        printf("Cliente\n");
        printf("Seu Nome: %s\n",clientes.nome);
        printf("Sua Idade: %i\n",clientes.idade);
        printf("Seu CPF: %s",clientes.cpf);

        break;
    
    case 'F':
    case 'f':
        printf("Informe seu Nome: ");
        gets(funcionarios.nome);

        printf("Infome sua Idade: ");
        scanf("%i",&funcionarios.idade);
        
        fflush(stdin);

        printf("Informe seu CPF: ");
        gets(funcionarios.cpf);

        system("cls || clear");

        printf("Funcionário\n");
        printf("Seu Nome: %s\n",funcionarios.nome);
        printf("Sua Idade: %i\n",funcionarios.idade);
        printf("Seu CPF: %s",funcionarios.cpf);
        break;
    
    default:
        break;
    }





    return 0;
}
    