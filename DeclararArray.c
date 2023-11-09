#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Arrays
    
    //Alternativa 1
    int numeros[5] = {1,2,3,4,5};
    
    //Alternativa 2
    int numero[5];
    numero[0] = 1;
    numero[1] = 2;
    numero[2] = 3;
    numero[3] = 4;
    numero[4] = 5;

    
    
    return 0;
}