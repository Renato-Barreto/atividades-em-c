#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //declarando variáveis
    int idade;
    float peso;
    char sexo;
    char nome [250];
    char sobrenome [250];

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
    gets(nome);
    
    printf("Digite seu sobrenome: ");
    gets(sobrenome);


    //ALTERNATIVA 1 - fgets(nome, 250, stdin); //ler  mais de uma palavra
    //nome[strcspn(nome,"\n")] = 0; //não pular linha
    
    //ALTERNATIVA 2 - scanf("%s",&nome);

    //LimpaTela (Limpar terminal)
    system("cls || clear");

    //exibindo dados do usuário.
    printf("Idade: %d \n", idade); // "%d" ou "%i" servem para inteiro
    printf("Peso: %.2f \n", peso); // "%f" serve para numeros reais e "%.2f" são duas casas decimais
    printf("Sexo: %c \n", sexo); // "%c" serve para um caractere 
    printf("Nome: %s \n", nome); // "%s" serve para cadeia de letras
    printf("Sobrenome: %s \n", sobrenome); // "%s" serve para cadeia de letras

    return 0;
}
