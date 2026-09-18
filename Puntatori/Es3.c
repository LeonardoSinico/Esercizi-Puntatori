//
// Created by 12999363 on 18/09/2026.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *numero = (float *)malloc(sizeof(float));


    printf("Inserisci un numero decimale: ");
    scanf("%f", numero);

    float aumentato = *numero * 1.20f;
    printf("Valore inserito aumentato del 20% : %f\n", aumentato);

    return 0;
}
