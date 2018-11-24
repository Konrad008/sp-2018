#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define LINIE 8
#define GWIAZDEK 8

int main() {    
    int i = 0, j = 0;

    for (i=0; i < LINIE; i++) {
        if (i%2 != 0) {
            printf(" ");
        };
        for(j=0; j < GWIAZDEK; j++) {
            printf("* ");
        };
        printf("\n");
    };

    exit(0);
}