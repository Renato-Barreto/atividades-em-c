#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando VariÃ¡veis
    int i = 0;
    int codigo;
    int idade;
    int salario;
    int somaSalarial = 0;
    int older = 0;
    int younger = 999;
    int mulheresSalario = 0;
    float mediaSalarial;
    char sexo;
  
    // Solicitando Código

    do{
    printf("Código | Descrição \n");
    printf("   1   | Adicionar Família \n");
    printf("   2   | Sair e exibir resultados \n");
    printf("Digite o código:");
    scanf("%i", &codigo);

    // Solicitando Dados

    switch (codigo)
    {
    case 1:
        printf("Digite sua idade: ");
        scanf("%i", &idade);

        printf("Digite seu Útimo/atual salário: ");
        scanf("%i", &salario);
        
        fflush(stdin); //limpar cache de inteiros pra receber caracteres

        printf("Digite seu sexo (M) Masculino ou (F) Feminino: ");
        scanf("%c", &sexo);
        sexo = toupper (sexo); //deixar maiúsculo

        system("cls||clear"); //limpar terminal

        //Mulheres com salário acima de 5000
        if (sexo == 'F' && salario >= 5.000 ){
        mulheresSalario++;
      }
        
        older = idade > older ? idade : older; //operador ternário pra achar a pessoa mais velha
        younger = idade < younger ? idade : younger; //operador ternário pra achar a pessoa mais nova
        
        i++; //contador

        somaSalarial += salario; //soma de salários atribuídos
        mediaSalarial = somaSalarial / i; //divisão pra média salarial

        break;

    case 2:
    printf("Média Salarial: %.2f \n", mediaSalarial);
    printf("Pessoa mais velha: %i \n", older);
    printf("Pessoa mais nova: %i \n", younger);
    printf("Número de Mulheres com salário acima de 5.000 R$: %i", mulheresSalario);

        default:
        break;
    }
    } while (codigo != 2);

    return 0;
}
