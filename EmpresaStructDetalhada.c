#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Struct e suas vari�veis
struct endereco
{
    char rua[200], numero[200];
    char bairro[200], cidade[200], estado[200];
};

struct dados_funcionarios
{
    char nome[200], dataAdmissao[200];
    char matricula[200];
    struct endereco endereco;
};

struct dados_clientes
{
    char nome[200], dataNascimento[200];
    struct endereco endereco;
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Vari�veis
    int linha = 3;
    struct dados_funcionarios funcionarios [linha];
    struct dados_clientes clientes [linha];
    char resposta;
    int i;

    //Solicitando Dados

    printf("Voc� � clientes(C) ou funcion�rio(F)?\n");
    printf("Digite 'C' ou 'F': ");
    scanf("%c",&resposta);
    system("cls || clear");

    fflush(stdin);

    switch (resposta)
    {
    case 'C':
    case 'c':
        for ( i = 0; i < linha; i++)
        {
        printf("%i� Cadastro\n", i + 1);
        printf("Informe seu Nome: ");
        gets(clientes[i].nome);

        printf("Data de Nascimento (DD/MM/AAAA): ");
        gets(clientes[i].dataNascimento);
        
        printf("Informe a rua de seu endere�o: ");
        gets(clientes[i].endereco.rua);

        printf("Informe o numero de seu endere�o: ");
        gets(clientes[i].endereco.numero);

        printf("Informe o bairro de seu endere�o: ");
        gets(clientes[i].endereco.bairro);

        printf("Informe a cidade de seu endere�o: ");
        gets(clientes[i].endereco.cidade);
        
        printf("Informe o estado de seu endere�o: ");
        gets(clientes[i].endereco.estado);

        system("cls || clear");
        }

        printf("Armazenando Dados");
        for ( i = 0; i < 3; i++)
        {
            printf(".");
            sleep(1);
        }
        sleep(2);
        system("cls || clear");
        
        for ( i = 0; i < linha; i++)
        {
        printf("%i� Cliente\n", i + 1);
        printf("Seu Nome: %s\n",clientes[i].nome);
        printf("Data de Nascimento: %s\n",clientes[i].dataNascimento);
        printf("Endere�o Detalhado\n");
        printf("Bairro: %s\n",clientes[i].endereco.bairro);
        printf("Numero: %s\n",clientes[i].endereco.numero);
        printf("Cidade: %s\n",clientes[i].endereco.cidade);
        printf("Estado: %s\n\n",clientes[i].endereco.estado);
        }
        
        break;
    
    case 'F':
    case 'f':

        for ( i = 0; i < linha; i++)
        {
        printf("%i� Cadastro\n", i + 1);
        printf("Informe seu Nome: ");
        gets(funcionarios[i].nome);

        printf("Data de Admiss�o (DD/MM/AAAA): ");
        gets(funcionarios[i].dataAdmissao);

        printf("Informe sua Matr�cula: ");
        gets(funcionarios[i].matricula);

        printf("Informe a rua de seu endere�o: ");
        gets(funcionarios[i].endereco.rua);

        printf("Informe o numero de seu endere�o: ");
        gets(funcionarios[i].endereco.numero);

        printf("Informe o bairro de seu endere�o: ");
        gets(funcionarios[i].endereco.bairro);

        printf("Informe a cidade de seu endere�o: ");
        gets(funcionarios[i].endereco.cidade);
        
        printf("Informe o estado de seu endere�o: ");
        gets(funcionarios[i].endereco.estado);
        
        system("cls || clear");
        }

        printf("Armazenando Dados");
        for ( i = 0; i < 3; i++)
        {
            printf(".");
            sleep(1);
        }
        sleep(2);
        system("cls || clear");
        
        for ( i = 0; i < linha; i++)
        {
        printf("%i� Funcion�rio\n", i + 1);
        printf("Funcion�rio\n");
        printf("Seu Nome: %s\n",funcionarios[i].nome);
        printf("Data de Admiss�o: %s\n",funcionarios[i].dataAdmissao);
        printf("Matr�cula: %s\n",funcionarios[i].matricula);
        printf("Endere�o Detalhado\n");
        printf("Numero: %s\n",funcionarios[i].endereco.rua);
        printf("Numero: %s\n",funcionarios[i].endereco.numero);
        printf("Bairro: %s\n",funcionarios[i].endereco.bairro);
        printf("Cidade: %s\n",funcionarios[i].endereco.cidade);
        printf("Estado: %s\n\n",funcionarios[i].endereco.estado);
        }
        break;
    
    default:
        break;
    }

    return 0;
}