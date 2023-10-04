#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo vari�veis
    float primeiroNumero;
    float segundoNumero;
    float calculo;
    char operador;

    // Solicitando ao usu�rio

    printf("Digite o primeiro n�mero:");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo n�mero:");
    scanf("%f", &segundoNumero);

    fflush(stdin); // Limpa o cache de input

    printf("Digite o operador matem�tico (+,-,*,/):");
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
        printf("Operador n�o reconhecido");
        break;
    }

    // Exibindo Dados do usu�rio
    printf("Primeiro n�mero: %.1f \n", primeiroNumero);
    printf("Segundo n�mero: %.1f \n", segundoNumero);
    printf("Operador: %c \n", operador);
    printf("Resultado: %.1f \n", calculo);

    return 0;
}