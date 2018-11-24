#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ZAKRES 2010

int main() {    
    double i = 1;

    while (i <= ZAKRES ) {
        printf("2^%f = %f\n", i, pow(i, 2));

        i++;
    };

    exit(0);
}