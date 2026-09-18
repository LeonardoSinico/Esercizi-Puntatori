//
// Created by 12999363 on 18/09/2026.
//
#include <stdio.h>

int main(void) {
    int x = 42, *p;
    p = &x;
    printf("Valore di x: %d\n", x);
    printf("L'indirizzo di x: %x\n", &x);
    printf("Valore puntato da ptr: %d\n", *p);

    *p = 100;
    printf("Nuovo valore di x: %d\n", *p);
    return 0;
}