#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo variáveis
    int codigo;
    float preco;
    char prato [250];

    // Solicitando ao usuário

    printf("----Cárdapio---- \n");
    printf("Código - Prato \n");
    printf("1 - Picanha \n");
    printf("2 - Lasanha \n");
    printf("3 - Strogonoff \n");
    printf("4 - Bife Acebolado \n");
    printf("5 - Pão com ovo \n");
    printf("Digite o código do seu prato:");
    scanf("%i", &codigo);

    system("cls || clear");


    // Avaliando com Switch case

    switch (codigo) {
    case 1:
        strcpy(prato, "Picanha");
        preco = 25;
        break;
    case 2:
        strcpy(prato, "Lasanha");
        preco = 20;
        break;
    case 3:
        strcpy(prato, "Strogonoff");
        preco = 18;
        break;
    case 4:
        strcpy(prato, "Bife Acebolado");
        preco = 15;
        break;
    case 5:
        strcpy(prato, "Pão com Ovo");
        preco = 5;
        break;
    default:
        printf("código inválido");
        break;
    }

    // Exibindo Dados do usuário
    printf("Prato escolhido: %s \n", prato);
    printf("Preço final: %.2f \n", preco);

    return 0;
}