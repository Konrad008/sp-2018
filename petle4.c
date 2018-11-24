#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, x, wynik = 0;

    printf("Wprowadź liczbe naturalna:\n");
    scanf(" %d", &x);

    if (x < 0) {
        printf("Wprowadzona liczba musi byc wieksza lub rowna 1!");

        exit(1);
    };

    for (i=1; i <= x; i++) {
        wynik += i;
    };

    printf("%d\n", wynik);

    exit(0);
}