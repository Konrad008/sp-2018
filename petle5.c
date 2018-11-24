#include <stdio.h>
#include <stdlib.h>
#define TABLICA 6

int main() {
    int tab[TABLICA], i=0;

    printf("Wprowadz 6 wartosci\n");
    while (i < TABLICA) {
        scanf(" %d", &tab[i]);
        i++;
    };

    printf("Od poczatku:\n");
    for (i=0; i < TABLICA; i++) {
        printf("%d\n", tab[i]);
    };

    printf("Od konca:\n");
    for (i=TABLICA-1; i >= 0; i--) {
        printf("%d\n", tab[i]);
    };

    exit(0);
}