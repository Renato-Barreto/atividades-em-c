#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // declarando vari�veis
    int valor;

    // solicitando dados
    printf("Digite o valor que deseja avaliar: ");
    scanf("%i", &valor);

    // mostrar resultado
    if (valor == 10)
    {
        printf("� igual a 10");
    }
    if (valor > 10){
        printf("� maior que 10");
    } else {
        printf("� menor que 10");
    }

    return 0;
}

// <- VisualG
// = Atribuir
// == Compara��o
// != Diferente
// ! N�o