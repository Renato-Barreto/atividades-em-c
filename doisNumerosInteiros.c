#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

	//declarando variáveis
    int primeiroNumero;
    int segundoNumero;
    int soma;
    int produto;
    int menorNumero;
	int maiorNumero;
	float media;

	//solicitando dados
    printf("Digite o primeiro número: ");
    scanf("%i",&primeiroNumero);
    
	printf("Digite o segundo número: ");
    scanf("%i",&segundoNumero);    
    
    //calculando
    media = (primeiroNumero + segundoNumero)/2;
    soma = (primeiroNumero + segundoNumero);
    produto = (primeiroNumero * segundoNumero);
    
    if (primeiroNumero > segundoNumero)
    {
        maiorNumero = (maiorNumero + primeiroNumero);
        menorNumero = (menorNumero + segundoNumero);
    }
    else
    {
        maiorNumero = (maiorNumero + segundoNumero);
        menorNumero = (menorNumero + primeiroNumero);
    }
    
    //mostrando resultado
    printf("Media: %.2f \n", media);
    printf("Soma: %i \n", soma);
    printf("Produto: %i \n", produto);
    printf("Maior Número: %i \n", maiorNumero);
    printf("Menor Número: %i \n", menorNumero);
    
    return 0;



}
