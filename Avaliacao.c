#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

// declarando variáveis
char nome [250];
int idade;
float primeiraNota;
float segundaNota;
float terceiraNota;
float media;

// solicitando do usu�rio
printf("Digite seu nome: ");
gets(nome);

printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite sua primeira nota: ");
scanf("%f",&primeiraNota);

printf("Digite sua segunda nota: ");
scanf("%f",&segundaNota);

printf("Digite sua terceira nota: ");
scanf("%f",&terceiraNota);

//Limpando o terminal
system("cls || clear");

//Calculando m�dia
media = (primeiraNota + segundaNota + terceiraNota) / 3;

//mostrando para o usu�rio
printf("Nome: %s \n", nome);
printf("Idade: %i \n", idade);
printf("M�dia %.2f \n", media);

if (media >= 7)
{
 printf("Situa��o: Aprovado");   
}
else
{
 printf("Situa��o: Reprovado");   
}

    return 0;
}