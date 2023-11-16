#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int numero[2][2];
    int i,j;

    //Solicitando Dados
    printf("Digite os elementos da matriz\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("Elemento da linha %i coluna %i: ", i+1, j+1);
            scanf("%i", &numero[i][j]);
        }
        
    }
    






    return 0;
}