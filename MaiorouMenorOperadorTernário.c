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
    int terceiroNumero;
    int maior;
    int menor;
    
	//solicitando dados
    printf("Digite o Primeiro Numero: ");
    scanf("%i",&primeiroNumero);
    
    printf("Digite o Segundo Numero: ");
    scanf("%i",&segundoNumero);
    
    printf("Digite o Terceiro Numero: ");
    scanf("%i",&terceiroNumero);
    
    //avaliando com operador ternário

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroNumero ? maior : terceiroNumero;
    
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroNumero ? menor : terceiroNumero;
        
    //mostrando
    
    printf("o maior é: %i \n", maior);
    printf("o menor é: %i \n", menor);

return 0;

}