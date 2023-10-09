#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Definindo variáveis
    char sexo [250];
    char sexoSigla;
    float altura;
    float pesoIdeal;

    //Solicitando dados do usuário

    printf("(M) - Masculino \n");
    printf("(F) - Feminino \n");
    printf("Digite o seu sexo:");
    scanf("%c",&sexoSigla);

    printf("Digite sua altura em Metros:");
    scanf("%f",&altura);
    system("cls ||clear");

    //Convertendo em maiúsculo
    sexoSigla = toupper (sexoSigla);

    switch (sexoSigla)
    {
    case 'M':
        strcpy (sexo, "Masculino");
        pesoIdeal = (72.7 * altura) - 58;
        break;

    case 'F':
        strcpy (sexo, "Feminino");
        pesoIdeal = (62.1 * altura) - 44.7;
        break;

    default:
    printf("Sexo não reconhecido");
        break;
    }

    printf("Seu sexo é: %s \n", sexo);
    printf("Seu peso ideal é: %.2f", pesoIdeal);
    


    return 0;
}
