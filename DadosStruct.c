#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct dados_usuario 
{
    char nome[200];
    int idade;
    float peso, altura;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Declarando Variáveis
    //"Tipo de Dado" - "Variável"
    struct dados_usuario usuario;
    
    //Solicitando Dados
    printf("\nSolicitando os dados do usuario...\n");
    printf("Nome do usuario: ");
    gets(usuario.nome);

    printf("Idade do usuario: ");
    scanf("%i",&usuario.idade);
    
    printf("Peso do usuario: ");
    scanf("%f",&usuario.peso);
    
    printf("Altura do usuario: ");
    scanf("%f",&usuario.altura);

    printf("\nExibindo os dados do usuario... \n");
    printf("Nome: %s \n", usuario.nome);
    printf("Idade: %i \n", usuario.idade);
    printf("Peso: %.2f \n", usuario.peso);
    printf("Altura: %.2f \n", usuario.altura);
    
    return 0;
}