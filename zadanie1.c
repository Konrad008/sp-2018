#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x, y;

    printf("Wprowadz wartosci przyprostokatnych oddzielajac je spacjami\n");
    scanf(" %lf %lf", &x, &y);

    printf("Przeciwprostokatka wynosi: %.16lf\n", sqrt(x*x+y*y));

    exit(0);
}