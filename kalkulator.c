#include <stdio.h>

void wczytaj_dane(int* a, int* b);
void wypisz_wyniki(int k, int t);

int main()
{
    int x,y;
    wczytaj_dane(&x, &y);
    wypisz_wyniki(x, y);
}

//-------------------------------------
//Helper funcitons
//-------------------------------------
void wczytaj_dane(int* a, int* b) {
    printf("Podaj x,y: ");
    scanf("%d %d", a, b);
}

void wypisz_wyniki(int k, int t) {
    printf("Wyniki dzialan na liczbach %d oraz %d\n", k, t);
    printf("Dodawanie %d\n", k + t);
}