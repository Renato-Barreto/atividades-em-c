#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo variáveis
    float primeiroNumero;
    float segundoNumero;
    float calculo;
    char operador;

    // Solicitando ao usuário

    printf("Digite o primeiro número:");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo número:");
    scanf("%f", &segundoNumero);

    fflush(stdin); // Limpa o cache de input

    printf("Digite o operador matemático (+,-,*,/):");
    scanf("%c",&operador);

    // Avaliando com Switch case

    switch (operador) {
    case '+':
        calculo = primeiroNumero + segundoNumero;
        break;
    case '-':
        calculo = primeiroNumero - segundoNumero;
        break;
    case '*':
        calculo = primeiroNumero * segundoNumero;
        break;
    case '/':
        calculo = primeiroNumero / segundoNumero;
        break;
    default:
        printf("Operador não reconhecido");
        break;
    }

    // Exibindo Dados do usuário
    printf("Primeiro número: %.1f \n", primeiroNumero);
    printf("Segundo número: %.1f \n", segundoNumero);
    printf("Operador: %c \n", operador);
    printf("Resultado: %.1f \n", calculo);

    return 0;
}