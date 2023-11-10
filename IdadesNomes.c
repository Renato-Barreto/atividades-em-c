#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int i;
    int tamanho = 5;
    int idade [tamanho];
    char nome [tamanho] [250];

    //Solicitando dados
    printf("_____________________BEM-VINDO______________________\n");
    printf("Associação Regular Rotulada de Andrick Yera (ARRAY) \n");
    printf("____O cadastro de benefício anual é feito abaixo____\n");
    printf("________Solicitação de nomes e idades abaixo________\n\n");
    for(i = 0; i < tamanho; i++) 
    {
    printf("Digite o %iº nome: ",i+1);
    gets(nome[i]);

    printf("Digite sua idade: ");
    scanf("%i",&idade[i]);
    fflush(stdin);
    printf("\n");
    }

    //Armazenando (Front-End)
    system("cls || clear");
    printf("Armazenando Dados Pessoais");
    for (i = 0; i < 3; i++)
    {
    printf(".");
    sleep(1);
    }
    
    //Mostrando Dados
    system("cls||clear");
    printf("A ARRAY agradece seu cadastro \n");
    printf("Segue ficha de cadastrados abaixo \n\n");
    for ( i = 0; i<tamanho; i++)
    {
        printf("%iº Cadastro: %s\n", i+1, nome[i]);
        printf("idade: %i\n\n", idade[i]);
    }

    
    return 0;
}