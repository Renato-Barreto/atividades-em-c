#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando variavéis
    int idade = 18; //Inteiro
    float peso = 89.2; //Real
    char sexo = 'M'; //Apenas um caractere
    char nome [250] = "Marta"; //Uma cadeia de caracteres
    float altura = 1.70;
    char sobrenome [250] = "Silva"; 

    //exibindo dados para o usuário
    printf("Idade: %d anos \n", idade);
    printf("Peso: %.2f Kg \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Altura: %.2f M \n", altura);
    printf("Nome: %s \n", nome);
    printf("Sobrenome: %s \n", sobrenome);

    return 0;
}
