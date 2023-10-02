#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

	//declarando variáveis
    int idade;

	//solicitando dados
    printf("Digite sua idade: ");
    scanf("%i",&idade);
    
    //avaliando

    if (idade < 18 || idade > 65) {
        printf("Tu não é obrigado a votar");
    } else {
        printf("Adiante seu lado e procura teu título");
    }

return 0;

}