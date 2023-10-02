#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

	//declarando variáveis
    cahr resultado[250];
    char cadastro [250];
    int anoAtual = 2023;
    int idade;
    int anosDeTrabalho;
    int anoDeNascimento;
    
	//solicitando dados
    printf("Digite seu numero de cadastro: ");
    scanf("%s",cadastro);
    
    printf("Digite o ano de seu nascimento: ");
    scanf("%i",&anoDeNascimento);
    
    printf("Digite seu tempo de trabalho em anos: ");
    scanf("%i",&anosDeTrabalho);
    
    //calculando idade

    idade = anoAtual - anoDeNascimento;
    
    //avaliando e mostrando
    
    if ((idade >= 65) || (anosDeTrabalho >= 30)){
        strcpy(resultado, "Pode requerer aposentar");
    } else {
        strcpy(resultado, "Não pode requerer aposentadoria");
    }
    
    printf("Código de Cadastro do funcionário: %s \n", cadastro);
    printf("Idade do funcionário: %i \n", idade);
    printf("Anos de Trabalho do funcionário: %i \n", anosDeTrabalho);
    printf("Estado da solicitação: %s \n", resultado);
    

return 0;

}