#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Podaj liczbe do spierwiastkowania oraz pokazania odwrotnosci :)\n");
    scanf("%d", &x);

    if (x < 0) {
        printf("Liczba musi byc wiekszka od 0!\n");
        exit(1);
    } else {
        printf("Pierwiastek z %d to %f\n", x, sqrt(x));
    }

    if (x == 0) {
        printf("Aby podac odwrotnosc liczba musi byc rozna od 0 \n");
        exit(1);
    } else {
        printf("Odwrotnosc liczby %d to 1/%d\n", x, x);
    }

    exit(0);
}