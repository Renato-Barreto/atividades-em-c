#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo Váriaveis
    float valorDoProduto;
    float valorPorParcelas;
    float valorFinal;
    float desconto;
    int quantidadeDeParcelas;
    char formaDePagamento;

    // Solicitando dados do usuário

    printf("Digite o valor do produto que deseja comprar:");
    scanf("%f", &valorDoProduto);

    fflush(stdin);

    printf("Formas de Pagamento \n");
    printf("(V) - Á vista \n");
    printf("(P) - Parcelado \n");
    printf("Digite a forma de pagamento:\n");
    scanf("%c", &formaDePagamento);

    //Adaptação de caractere

    if (formaDePagamento == 'v') {
        formaDePagamento = 'V';
    } else if (formaDePagamento == 'p') {
        formaDePagamento = 'P';
    }

    // Switch Case para forma de pagamento

    switch (formaDePagamento)
    {
    case 'V':
        desconto = valorDoProduto * 0.10;
        valorFinal = (valorDoProduto - desconto);

        printf("Valor do Produto: %.1f \n", valorDoProduto);
        printf("Forma de Pagamento: Á Vista \n");
        printf("Valor do Desconto: %.1f \n", desconto);
        printf("Total a Pagar: %.1f", valorFinal);
        break;

    case 'P':
        do
        {
        printf("Digite a quantidade de parcelas:");
        scanf("%i", &quantidadeDeParcelas);
        system("cls || clear");

        if (quantidadeDeParcelas > 6)
        {
            printf("Limite de parcelas: 6x \n");
            printf("Digite a quantidade de parcelas novamente... \n");
        }
        
        } while (quantidadeDeParcelas > 6);

            valorPorParcelas = (valorDoProduto / quantidadeDeParcelas);
            valorFinal = valorDoProduto;

            printf("Valor do Produto: %.1f \n", valorDoProduto);
            printf("Forma de Pagamento: PARCELADO \n");
            printf("Quantidade de parcelas: %i \n", quantidadeDeParcelas);
            printf("Valor das parcelas: %.1f \n", valorPorParcelas);
            printf("Total a Pagar: %.1f", valorFinal);
        break;
    default:
        printf("Forma de Pagamento Inválida");
        break;
    }

    return 0;
}
