#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i, wynik = 1;

    printf("Wprowadź liczbe ktorej chcesz poznac silnie:\n");
    scanf(" %d", &x);

    for (i=1; i<=x; i++) {
        wynik *= i;
    }
    
    printf("Silnia wynosi: %d\n", wynik);

    exit(0);
}