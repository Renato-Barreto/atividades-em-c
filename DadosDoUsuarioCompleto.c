#include <stdio.h>
#include <stdlib.h>

int main() {
    //declarando variáveis
    int idade;
    float peso;
    char sexo;
    char nome [250];

    //solicitando dados do usuário
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    fflush(stdin); // Limpa o cache de input

    printf("Digite seu sexo: ");
    scanf("%c",&sexo);

    fflush(stdin); // Limpa o cache de input

    printf("Digite seu nome: ");
    scanf("%c",&nome);

    //LimpaTela (Limpar terminal)
    system("cls || clear");

    //exibindo dados do usuário.
    printf("Idade: %d \n", idade); // "%d" ou "%i" servem para inteiro
    printf("Peso: %.2f \n", peso); // "%f" serve para numeros reais e "%.2f" são duas casas decimais
    printf("Sexo: %c \n", sexo); // "%c" serve para um caractere 
    printf("Nome: %s \n", nome); // "%s" serve para cadeia de letras

    return 0;
}