#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, i, wynik = 1;

    printf("Wprowadź dwie liczby naturalne:\n");
    scanf(" %d %d", &x, &y);

    if (x>y) {
        printf("Pierwsza liczba musi byc mniejsza!\n");

        exit(1);
    };

    for (i=x; i <= y; i++) {
        printf("%d\n", i);
    };

    exit(0);
}