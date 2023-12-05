#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Declarando Função
void tabuada (int n1)
{
    int a;
    for ( a = 1; a <= 10; a++)
    {
        printf("%i x %i = %i \n", n1, a, a * n1);
    }
}
//Função Principal
int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    int numero;

    //Solicitando Dados
    printf("Digite o número para a tabuada:");
    scanf("%i", &numero);
    
    //Mostrando para o usuário
    tabuada(numero);
    

    return 0;
}
