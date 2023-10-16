#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis

    // Solicitando dados

    printf("Código | Descrição \n");
    printf("   1   | Adicionar Família \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Digite o código:");
    scanf("%i", &codigo);

    switch (expression)
    {
    case 1:
        printf("Digite sua idade");
        scanf("%i", &idade);

        printf("Digite seu sexo (M) Masculino ou (F) Feminino");
        scanf("%c", &sexo);

        printf("Digite seu último/atual salário:");
        scanf("%i", &salario);

        somaSalarial += salario;

        break;
    
    case 2:
    printf("Média Salarial: %.2f", mediaSalarial);
    printf("Pessoa mais velha: %s", older);
    printf("Pessoa mais nova: %s", younger);



        default:
        break;
    }

    return 0;
}