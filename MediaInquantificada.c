#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i = 0;
float soma = 0;
float notas;
float media;


 do
    {
    printf("Informe a %i° nota: ", i+1);
    scanf("%f", &notas);
     
     if(notas > 0){
      soma += notas;
      i++;
     }

    } while (notas > 0);

    media = soma / i;


printf("Média: %.1f ", media);




return 0;

}