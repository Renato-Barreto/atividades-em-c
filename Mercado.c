#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo Váriaveis
    float valorDoProduto;
    float valorFinal;
    float desconto;
    int quantidadeDeParcelas;
    int valorPorParcelas;
    char formaDePagamento;

    // Solicitando dados do usuário

    printf("Digite o valor do produto que deseja comprar:");
    scanf("%f", &valorDoProduto);

    printf("Formas de Pagamento \n");
    printf("(V) - Á vista \n");
    printf("(P) - Parcelado \n");
    printf("Digite a forma de pagamento:\n");
    scanf("%c", &formaDePagamento);

    // Switch Case para forma de pagamento

    switch (formaDePagamento)
    {
    case "V":
        desconto = valorDoProduto * 0.10;
        valorFinal = (valorDoProduto - desconto);

        printf("Valor do Produto: %.1f \n", valorDoProduto);
        printf("Forma de Pagamento: Á Vista \n");
        printf("Valor do Desconto: %.1f \n", desconto);
        printf("Total a Pagar: %f", valorFinal);
        break;
    
    case "P":
        printf("Digite a quantidade de parcelas:");
        scanf("%i", &quantidadeDeParcelas);
        break;

        if (parcelas > 6) {
         printf("Número de parcelas excedido");
        }else{
         valorPorParcela = (valorDoProduto / quantidadeDeParcelas);
         printf("Valor do Produto: %.1f \n", valorDoProduto);
         printf("Forma de Pagamento: PARCELADO \n");
         printf("Quantidade de parcelas: %i \n",quantidadeDeParcelas);
         printf("Valor das parcelas: %i \n", valorPorParcela);
         printf("Total a Pagar: %.1f", valorFinal);
         break;
        }
    
    default:
        printf("Forma de Pagamento Inválida");
        break;
    }

    