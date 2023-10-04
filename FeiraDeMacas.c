#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL,"portuguese");

//Definindo variáveis
int quantidadeDeMacas;
float precoUnitario;
float precoFinal;

//Solicitando ao usuário

printf("Digite a quantidade de maçãs:");
scanf("%i",&quantidadeDeMacas);

//Avaliando

if (quantidadeDeMacas < 12) {
    precoUnitario = 1.30;
} else {
    precoUnitario = 1;
}

precoFinal = quantidadeDeMacas * precoUnitario;

//Exibindo Dados do usuário
printf("Quantidade de maçãs: %d \n", quantidadeDeMacas);
printf("Preço da unidade: R$ %.2f \n", precoUnitario);
printf("Preço Final: %2.f \n", precoFinal);


return 0;
}