#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 3 

float mediaNotas(float n[])
{
    int a;
    float soma = 0, resultado;
    for ( a = 0; a < TAM; a++)
    {
        soma += n[a];
    }
    resultado = soma / TAM;
    return resultado;
}
char* situacao(float m)
{
    char situacao[200];
    if (m >= 7)
    {
        strcpy(situacao,"Aprovado");
    }else{
        strcpy(situacao,"Reprovado");
    }
    return situacao;
}
void limpaTela()
{
    system("cls || clear");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota[TAM];
    float media;
    int i;

    for ( i = 0; i < TAM; i++)
    {
        printf("Digite a %iª nota: ",i+1);
        scanf("%f",&nota[i]);
        limpaTela();
    }
    

    media = mediaNotas(nota);
    printf("Sua média é: %.1f \n",media);
    printf("Sua situação é: %s",situacao(media));



}