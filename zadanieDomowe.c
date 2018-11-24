#include <stdio.h>
#include <math.h>

int main() {
    int x, i, wynik = 1;

    printf("Wprowadź liczbe do obliczenia silni:\n");
    scanf(" %d", &x);

    for (i=1; i<=x; i++) {
        wynik *= i;
    }
    printf("Silnia wynosi: %d\n", wynik);
}