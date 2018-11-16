#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Podaj liczbe do spierwiastkowania :)\n");
    scanf("%d", &x);

    if (x < 0) {
        printf("Liczba musi byc wiekszka od 0!");
        exit(1);
    }

    printf("Pierwiastek z %d to %f", x, sqrt(x));

    exit(0);
}