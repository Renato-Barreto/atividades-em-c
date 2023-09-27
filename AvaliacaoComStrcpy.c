#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // declarando variáveis
    char nome[250];
    int idade;
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float media;
    char situacao[250];

    // solicitando do usu�rio
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite sua primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite sua segunda nota: ");
    scanf("%f", &segundaNota);

    printf("Digite sua terceira nota: ");
    scanf("%f", &terceiraNota);

    // Limpando o terminal
    system("cls || clear");

    // Calculando m�dia
    media = (primeiraNota + segundaNota + terceiraNota) / 3;

    if (media >= 7)
    {
        strcpy(situacao,"Aprovado");
    }
    else
    {
        strcpy(situacao,"Reprovado");
    }

    // mostrando para o usu�rio
    printf("Nome: %s \n", nome);
    printf("Idade: %i \n", idade);
    printf("M�dia: %.1f \n", media);
    printf("Situa��o: %s \n", situacao);

    return 0;
}