#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

void titulo ( ) {
    system ("cls || claer");
    printf ("PARES & ÍMPARES\n\n");
}

void quantidade (int valor[]) {
    int a, countPar = 0, countImpar = 0;

    for (a = 0; a < TAM; a++) {
        if (valor[a] % 2 == 0) {
            countPar++;

        } else { 
            countImpar++; }
    }

    printf ("Quantidade de números pares: %d\n", countPar);
    printf ("Quantidade de números ímpares: %d\n", countImpar);
}

int main ( ) {
    setlocale (LC_ALL, "");

    int i;
    int numero[TAM];

    titulo ( );
    for (i = 0; i < TAM; i++) {
        printf ("Informe o %dº número: ", i+1);
        scanf ("%d", &numero[i]);
    }

    titulo ( );
    quantidade (numero);

    return 0;
}