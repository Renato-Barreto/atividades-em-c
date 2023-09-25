#include <stdio.h>
#include <stdlib.h>

int main() {
    //declarando variáveis
    int idade;
    float peso;

    //solicitando dados do usuário
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    //LimpaTela (Limpar terminal)
    system("cls || clear");

    //exibindo dados do usuário.
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f", peso);

    return 0;
}
