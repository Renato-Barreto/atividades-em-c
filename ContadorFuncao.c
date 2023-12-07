#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 6

int pares(int n[])
{
    int a;
    int par = 0;
    for ( a = 0; a < TAM; a++)
    {
        if (n[a] %2 == 0)
        {
            par++;
        }
    }
    return par;
}
int impares(int n[])
{
    int a;
    int impar = 0;
    for ( a = 0; a < TAM; a++)
    {
        if (n[a] %2 == 1)
        {
            impar++;
        }
    }
    return impar;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    //Declarando Variáveis
    int par, impar;
    int numero[TAM], i;

    //Solicitando Dados
    for ( i = 0; i < TAM; i++)
    {
        printf("Digite o %iº número: ", i+1);
        scanf("%i",&numero[i]);
    }
    par = pares(numero);
    impar = impares(numero);

    printf("Quantidade de pares: %i\n", par);
    printf("Quantidade de ímpares: %i", impar);
    
    return 0;
}