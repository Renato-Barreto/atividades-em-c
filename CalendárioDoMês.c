#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo vari�veis
    int dia;

    // Solicitando ao usu�rio

    printf("Digite o n�mero do m�s:");
    scanf("%i", &dia);

    system("cls || clear"); // Limpa Terminal

    // Exibindo dados com Switch Case

    switch (dia)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Mar�o");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("dezembro");
        break;

    default:
        printf("c�digo inv�lido");
        break;
    }

    return 0;
}