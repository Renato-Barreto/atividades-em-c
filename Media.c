#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    //declarando variáveis
    float primeiraNota;
    float segundaNota;
    float media;

    //solicitar dados do usuário
    printf("Digite sua primeira nota: ");
    scanf("%f",&primeiraNota);

    printf("Digite sua segunda nota: ");
    scanf("%f",&segundaNota);

    //calculando média
    media = (primeiraNota + segundaNota) / 2;

    //mostrar dados.
    printf("Primeira nota: %.1f \n", primeiraNota);
    printf("Segunda nota: %.1f \n", segundaNota);
    printf("Sua media: %.1f \n", media);




    return 0;
}