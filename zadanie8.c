#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "zadanie8.h"
#define ARRSIZE 3

int main() {
    int x, y, z, tab[ARRSIZE];

    printf("Wprowadz trzy liczby calkowite oddzielajac je spacjami\n");
    scanf(" %d %d %d", &tab[0], &tab[1], &tab[2]);

    printf("Suma wynosi: %d\n", tab[0] + tab[1] + tab[2]);
    printf("Iloczyn wynosi: %d\n", tab[0] * tab[1] * tab[2]);

    printf("Najmniejsza liczba to %d\n", min_max(0, tab, ARRSIZE));
    printf("Najwieksza liczba to %d\n", min_max(1, tab, ARRSIZE));

    exit(0);
}

int min_max(int b, int tab[], int arrsize) {
    int i, wynik = tab[0];

    switch (b) {
        case 0:
            for (i = 0; i < arrsize; i++) {
                if (wynik > tab[i]) {
                    wynik = tab[i];
                }
            }
            break;

        case 1:
            for (i = 0; i < arrsize; i++) {
                if (wynik < tab[i]) {
                    wynik = tab[i];
                }
            }
            break;
    }

    return wynik;
}