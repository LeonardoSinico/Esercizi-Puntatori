

#include <stdio.h>

void scambia(int *a, int *b) {
    int s= *a;
    *a = *b;
    *b = s;
}

int main(void) {
    int x=10;
    int y=20;
    printf("Prima dello scambio: x=%d y=%d\n",x,y);

    scambia(&x,&y);
    printf("Dopo lo scambio: x=%d y=%d\n",x,y);
    return 0;
}

