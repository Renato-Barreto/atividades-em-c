#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
float notas;
float soma;
float media;
char situacao [250];


for ( i = 1; i <= 3; i++)
{
    do
    {
    printf("Informe a %i° nota: ",i);
    scanf("%f", &notas);

    if (notas < 0 || notas > 10)
    {
    printf("Nota inválida. \nDigite a nota novamente... \n\n");
    }
    } while (notas < 0 || notas > 10);

    soma += notas;
    media = soma / i;
    
}

if (media >= 7){
    strcpy(situacao,"Aprovado");
} else if (media >= 5 && media < 6.9){
    strcpy(situacao,"Em Recuperação");
}else{
    strcpy(situacao,"Reprovado");
}



    printf("Situação: %s \n", situacao);
    printf("Média: %.1f ", media);

return 0;
}