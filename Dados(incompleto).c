#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Vari�veis

    // Solicitando dados

    printf("C�digo | Descri��o \n");
    printf("   1   | Adicionar Fam�lia \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Digite o c�digo:");
    scanf("%i", &codigo);

    switch (expression)
    {
    case 1:
        printf("Digite sua idade");
        scanf("%i", &idade);

        printf("Digite seu sexo (M) Masculino ou (F) Feminino");
        scanf("%c", &sexo);

        printf("Digite seu �ltimo/atual sal�rio:");
        scanf("%i", &salario);

        somaSalarial += salario;

        break;
    
    case 2:
    printf("M�dia Salarial: %.2f", mediaSalarial);
    printf("Pessoa mais velha: %s", older);
    printf("Pessoa mais nova: %s", younger);



        default:
        break;
    }

    return 0;
}