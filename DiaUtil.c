#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo variáveis
    int dia;

    // Solicitando ao usuário

    printf("Digite o número :");
    scanf("%i", &dia);

    system("cls || clear"); //Limpa Terminal

    // Exibindo dados com Switch Case

    switch (dia) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia Útil");
        break;
    case 1:
    case 7:
        printf("Fim de Semana");
        break;
    default:
        printf("código inválido");
        break;
    }


    return 0;
}