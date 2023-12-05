#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

float mediaFuncao (int n1, int n2){
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    float primeiroNumero;
    float segundoNumero;
    float media;

    printf("Escreva o primeiro numero: ");
    scanf("%f",&primeiroNumero);

    printf("Escreva o segundo numero: ");
    scanf("%f",&segundoNumero);

    media = mediaFuncao(primeiroNumero, segundoNumero);

    printf("Media: %.1f",media);



    return 0;
}