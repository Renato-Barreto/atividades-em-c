#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Varáveis
    char loginSalvo[250] = "RenatoBarreto";
    char login[250];
    char senhaSalva[250] = "XaolinPeixaria";
    char senha[250];
    
    // Solicitando Dados

    do{
    printf("Bem-Vindo ao SENAI ADS\n");
    printf("Iniciaremos com a solicitação dos dados do login\n");
    printf("\n");
    printf("Digite o login:");
    gets(login);

    printf("Digite a senha:");
    gets(senha);

    system("cls||clear");

    //Avaliando Dados

    if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0)
    {
        printf("Login efetuado com sucesso!\n");
        printf("Bem-Vindo ao Site");
    } else {
        printf("Dados incorretos\n");
        printf("Digite seus dados novamente...\n");
        printf("\n");
    }
    
    
    } while (strcmp(login, loginSalvo) != 0 || strcmp(senha, senhaSalva) != 0);

    return 0;
}
