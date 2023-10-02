#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

	//declarando variáveis
    char loginSalvo [250] = "shunli";
    char senhaSalva [250] = "filaboia";
    char login [250];
    char senha [250];

	//solicitando dados
    printf("Digite o login: ");
    scanf("%s",&login);
    
	printf("Digite a senha: ");
    scanf("%s",&senha);  
    
    //comparando = strcmp = string comparasion

    if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
        printf("Welcome");
    } else {
        printf("Not Welcome");
    }

return 0;

}