#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int soma(int n1, int n2)
{
    return n1 + n2;
}
int subtracao(int n1, int n2)
{
    return n1 - n2;
}
int multiplicacao(int n1, int n2)
{
    return n1 * n2;
}
int divisao(int n1, int n2)
{
    return n1 / n2;
}
void mostrarDados(int r)
{
    printf("A resposta �: %i",r);
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    //Declarando Vari�veis
    int numero1;
    int numero2;
    int resposta;
    int codigo;

    //Solicitando Dados
    printf("Informe o primeiro n�mero: ");
    scanf("%i",&numero1);

    printf("Informe o segundo n�mero: ");
    scanf("%i",&numero2);

    printf("1 - Soma\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    printf("Qual opera��o deseja fazer?\n");
    printf("R: ");
    scanf("%i",&codigo);

    switch (codigo)
    {
    case 1:
        resposta = soma(numero1,numero2);
        break;
    case 2:
        resposta = subtracao(numero1,numero2);
        break;
    case 3:
        resposta = multiplicacao(numero1,numero2);
        break;
    case 4:
        resposta = divisao(numero1,numero2);
        break;
    default:
        break;
    }

    mostrarDados(resposta);

    return 0;
}