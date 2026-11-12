#include <stdio.h>

void wyswietl_for_przod(int tab[], int rozmiar) {
    printf("FOR (od początku): ");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void wyswietl_while_przod(int tab[], int rozmiar) {
    printf("WHILE (od początku): ");
    int i = 0;
    while (i < rozmiar) {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}

void wyswietl_dowhile_przod(int tab[], int rozmiar) {
    printf("DO-WHILE (od początku): ");
    int i = 0;
    if (rozmiar > 0) {
        do {
            printf("%d ", tab[i]);
            i++;
        } while (i < rozmiar);
    }
    printf("\n");
}

void wyswietl_for_tyl(int tab[], int rozmiar) {
    printf("FOR (od końca): ");
    for (int i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void wyswietl_while_tyl(int tab[], int rozmiar) {
    printf("WHILE (od końca): ");
    int i = rozmiar - 1;
    while (i >= 0) {
        printf("%d ", tab[i]);
        i--;
    }
    printf("\n");
}

void wyswietl_dowhile_tyl(int tab[], int rozmiar) {
    printf("DO WHILE (od końca): ");
    int i = rozmiar - 1;
    if (rozmiar > 0) {
        do {
            printf("%d ", tab[i]);
            i--;
        } while (i >= 0);
    }
    printf("\n");
}

int main() {
    int moja_tablica[] = {5, 12, 23, 34, 45, 56};
    int rozmiar = sizeof(moja_tablica) / sizeof(moja_tablica[0]);

    printf("OD POCZATKU\n");
    wyswietl_for_przod(moja_tablica, rozmiar);
    wyswietl_while_przod(moja_tablica, rozmiar);
    wyswietl_dowhile_przod(moja_tablica, rozmiar);

    printf("\nOD KONCA\n");
    wyswietl_for_tyl(moja_tablica, rozmiar);
    wyswietl_while_tyl(moja_tablica, rozmiar);
    wyswietl_dowhile_tyl(moja_tablica, rozmiar);

    return 0;
}