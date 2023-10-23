#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Definindo Variáveis
    int tempo;
    char senioridade [250];
    int quantidadeDeJogos;
    char playerType [250];
    int conhecimento = 0;


    //Solicitando Dados

    do{

    printf("Há quanto tempo você conhece as franquias Nintendo? \n(Digite em anos)");
    scanf("%i", &tempo);

    printf("Quantos jogos da franquia você já jogou?");
    scanf("%i", &quantidadeDeJogos);
    system("cls || clear");

    } while (tempo == 0 && quantidadeDeJogos == 0);

    //Avaliando Dados Informados


    switch (tempo)
    {
    case 1:
    case 2:
        strcpy(senioridade, "Junior - Waddle Dee");
        break;
    case 3:
    case 4:
        strcpy(senioridade, "Médio - Kirby");
        break;
    case 5:
    case 6:
        strcpy(senioridade, "Avançado - Luigi");
        break;
    case 7:
    case 8:
        strcpy(senioridade, "Senior - Mario");
        break;
    default:
        strcpy(senioridade, "Master - Link");
        break;
    }

    switch (quantidadeDeJogos)
    {
    case 1:
    case 2:
    case 3:
        strcpy(playerType, "Player Iniciante - Waddle Dee");
        break;
    case 4:
    case 5:
        strcpy(playerType, "Player Médio -  Kirby");
        break;
    case 6:
    case 7:
        strcpy(playerType, "Player Avançado - Luigi");
        break;
    case 8:
    case 9:
        strcpy(playerType, "Player Senior - Mario");
        break;
    default:
        strcpy(playerType, "Player Master - Link");
        break;
    }

    //Mostrando ao usuário

    printf("----------Tabelas De Avaliação----------\n");
    printf("Senioridade ------------- Tipo de Player\n");
    printf("Junior         /        Player Iniciante\n");
    printf("Médio          /            Player Médio\n");
    printf("Avançado       /         Player Avançado\n");
    printf("Senior         /           Player Senior\n");
    printf("Master         /           Player Master\n\n");
    printf("Nível de Senioridade: %s \n", senioridade);
    printf("Tipo de Player: %s \n", playerType);


    return 0;

}