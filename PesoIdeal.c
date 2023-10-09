#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Definindo vari�veis
    char sexo [250];
    char sexoSigla;
    float altura;
    float pesoIdeal;

    //Solicitando dados do usu�rio

    printf("(M) - Masculino \n");
    printf("(F) - Feminino \n");
    printf("Digite o seu sexo:");
    scanf("%c",&sexoSigla);

    printf("Digite sua altura em Metros:");
    scanf("%f",&altura);
    system("cls ||clear");

    if(sexoSigla == 'm'){
        sexoSigla = 'M';
    } else if (sexoSigla == 'f'){
        sexoSigla = 'F';
    }

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
    printf("Sexo n�o reconhecido");
        break;
    }

    printf("Seu sexo �: %s \n", sexo);
    printf("Seu peso ideal �: %.2f", pesoIdeal);
    


    return 0;
}