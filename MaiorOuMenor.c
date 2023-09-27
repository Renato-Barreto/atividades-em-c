#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // declarando variáveis
    int valor;

    // solicitando dados
    printf("Digite o valor que deseja avaliar: ");
    scanf("%i", &valor);

    // mostrar resultado
    if (valor == 10)
    {
        printf("É igual a 10");
    }
    if (valor > 10){
        printf("É maior que 10");
    } else {
        printf("É menor que 10");
    }

    return 0;
}

// <- VisualG
// = Atribuir
// == Comparação
// != Diferente
// ! Não