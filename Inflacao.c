#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

float inflacao(float value)
{
    float resposta;
    resposta = value < 100 ? value * 1.1 : value * 1.2;
    return resposta;
}

int situacao(float value)
{
    float resposta;
    resposta = value < 100 ? 10 : 20;
    return resposta;
}


int main()
{
    setlocale(LC_ALL, "portuguese");
    float valor;
    float valorInflacionado;
    
    printf("Digite o valor solicitado: ");
    scanf("%f",&valor);

    valorInflacionado = inflacao(valor);

    printf("O valor a pagar sofreu inflação de %i%%\n",situacao(valor));
    printf("O valor atual é: %.1f\n",valorInflacionado);

    return 0;
}