#include <stdio.h>

float oblicz_srednia(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return (float)suma / rozmiar;
}

void wypisz_wieksze_od_sredniej(int tab[], int rozmiar, float srednia) {
    printf("Liczby większe od średniej: ");
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] > srednia) {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");
}

void wypisz_min_max(int tab[], int rozmiar) {
    int min = tab[0];
    int max = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    printf("Najmniejsza liczba: %d\n", min);
    printf("Największa liczba: %d\n", max);
}

int sumuj_nieparzyste(int tab[], int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] % 2 != 0) {
            suma += tab[i];
        }
    }
    return suma;
}

void wypisz_od_konca(int tab[], int rozmiar) {
    printf("Tablica od ostatniego elementu: ");
    for (int i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[10];
    int rozmiar = 10;

    printf("Podaj 10 liczb całkowitych:\n");
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tab[i]);
    }

    float srednia = oblicz_srednia(tab, rozmiar);
    printf("Średnia arytmetyczna: %.2f\n", srednia);

    wypisz_wieksze_od_sredniej(tab, rozmiar, srednia);
    wypisz_min_max(tab, rozmiar);

    int suma_nieparzystych = sumuj_nieparzyste(tab, rozmiar);
    printf("Suma elementów nieparzystych: %d\n", suma_nieparzystych);

    wypisz_od_konca(tab, rozmiar);

    return 0;
}