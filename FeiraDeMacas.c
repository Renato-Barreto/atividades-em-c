#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL,"portuguese");

//Definindo vari�veis
int quantidadeDeMacas;
float precoUnitario;
float precoFinal;

//Solicitando ao usu�rio

printf("Digite a quantidade de ma��s:");
scanf("%i",&quantidadeDeMacas);

//Avaliando

if (quantidadeDeMacas < 12) {
    precoUnitario = 1.30;
} else {
    precoUnitario = 1;
}

precoFinal = quantidadeDeMacas * precoUnitario;

//Exibindo Dados do usu�rio
printf("Quantidade de ma��s: %d \n", quantidadeDeMacas);
printf("Pre�o da unidade: R$ %.2f \n", precoUnitario);
printf("Pre�o Final: %2.f \n", precoFinal);


return 0;
}