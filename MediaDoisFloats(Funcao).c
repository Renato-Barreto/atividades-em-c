#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

float mediaFuncao (float n1, float n2)
{
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}
void contagem()
{
    int a;
    for ( a = 0; a < 3; a++)
    {
        printf(".");
        sleep(1);
    } 
}
void limpaTela()
{
    system("cls || clear");
}

int main(){

    setlocale(LC_ALL, "portuguese");

    float primeiroNumero;
    float segundoNumero;
    float media;

    printf("Escreva o primeiro numero: ");
    scanf("%f",&primeiroNumero);
    limpaTela();

    printf("Escreva o segundo numero: ");
    scanf("%f",&segundoNumero);
    limpaTela();
    contagem();
    limpaTela();

    media = mediaFuncao(primeiroNumero, segundoNumero);

    printf("Media: %.1f",media);

    return 0;
}
