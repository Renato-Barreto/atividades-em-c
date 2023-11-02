#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //Definindo Variáveis
    int contagemRegressiva;
    int quantidade;
   
    //Iniciando Linha de Comandos
    do
    {
    printf("Deseja iniciar a contagem?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    printf("R-");
    scanf("%i", &contagemRegressiva);
    system("cls || clear");

    if (contagemRegressiva  == 1)
    {
        printf("Até  que número deseja a contagem?\n");
        printf("(Máximo 10)\n");
        printf("R- ");
        scanf("%i", &quantidade);

        printf("\nIniciando contagem\n");
        sleep(3);

        switch (quantidade)
        {
        case 1:
        printf("1\n");
        sleep(1);
            break;

        case 2:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
            break;

        case 3:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
            break;

        case 4:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
            break;

        case 5:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
            break;

        case 6:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
        printf("6\n");
        sleep(1);
            break;

        case 7:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
        printf("6\n");
        sleep(1);
        printf("7\n");
        sleep(1);
            break;

        case 8:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
        printf("6\n");
        sleep(1);
        printf("7\n");
        sleep(1);
        printf("8\n");
        sleep(1);
            break;

        case 9:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
        printf("6\n");
        sleep(1);
        printf("7\n");
        sleep(1);
        printf("8\n");
        sleep(1);
        printf("9\n");
        sleep(1);
            break;

        case 10:
        printf("1\n");
        sleep(1);
        printf("2\n");
        sleep(1);
        printf("3\n");
        sleep(1);
        printf("4\n");
        sleep(1);
        printf("5\n");
        sleep(1);
        printf("6\n");
        sleep(1);
        printf("7\n");
        sleep(1);
        printf("8\n");
        sleep(1);
        printf("9\n");
        sleep(1);
        printf("10\n");
        sleep(3);
            break;
        
        default:
        printf("Número limite (10)");
            break;
        }
    }
    
        printf("Contagem Finalizada\n\n");
        sleep(3);
        system("cls || clear");

        
    } while (contagemRegressiva == 1);




    return 0;
}