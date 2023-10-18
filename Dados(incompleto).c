#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis
    int codigo;
    int idade;
    int salario;
    int somaSalarial;
    float mediaSalarial;
    char older [250];
    char younger [250];
    char sexo;
  
    // Solicitando dados

    printf("Código | Descrição \n");
    printf("   1   | Adicionar Família \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Digite o código:");
    scanf("%i", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Digite sua idade: ");
        scanf("%i", &idade);

        printf("Digite seu último/atual salário: ");
        scanf("%i", &salario);
        
        fflush(stdin);

        printf("Digite seu sexo (M) Masculino ou (F) Feminino: ");
        scanf("%c", &sexo);
      
        if (sexo == 'm'){
          sexo = 'M';
        }else if (sexo == 'f'){
          sexo = 'F';
        }


        somaSalarial += salario;

        break;

    case 2:
    printf("Média Salarial: %.2f \n", mediaSalarial);
    printf("Pessoa mais velha: %s \n", older);
    printf("Pessoa mais nova: %s \n", younger);



        default:
        break;
    }

    return 0;
}
