#include <stdio.h>
#include <stdlib.h>

int main() {
    //declarando variáveis
    int idade;

    //solicitando dados do usuário
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    //LimpaTela (Limpar terminal)
    system("cls || clear");

    //exibindo dados do usuário.
    printf("Idade: %d", idade);

    return 0;
}