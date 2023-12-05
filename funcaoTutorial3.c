#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int somar (int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int soma;

    printf("Escreva o primeiro numero: ");
    scanf("%i",&primeiroNumero);

    printf("Escreva o segundo numero: ");
    scanf("%i",&segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);

    printf("Soma: %i",soma);



    return 0;
}