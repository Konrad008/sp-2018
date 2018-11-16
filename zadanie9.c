#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, tab[3];

    printf("Aby wypisac tabelke wartosci pierwiastka kwadratowego podaj wartosc początkowa, wartosc koncowa oraz krok dla argumentu oddzielajac je spacjami\n");
    scanf(" %d %d %d", &tab[0], &tab[1], &tab[2]);

    printf("\nTabelka pierwiastka kwadratowego\n");

    for (i = tab[0]; i <= tab[1]; i+=tab[2]) {
        printf("Pierwiastek z %d to %f\n", i, sqrt(i));
    }

    exit(0);
}