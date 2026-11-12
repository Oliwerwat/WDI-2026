#include <stdio.h>

void wyczysc(int *indeks) {
    *indeks = 0;
}

int czy_pelna(int indeks) {
    return indeks == 5;
}

int czy_pusta(int indeks) {
    return indeks == 0;
}

void dodaj_stos(int tab[], int *indeks, int wartosc) {
    if (czy_pelna(*indeks)) {
        printf("Stos pelny!\n");
        return;
    }
    tab[*indeks] = wartosc;
    (*indeks)++;
    printf("Dodano %d na stos.\n", wartosc);
}

void usun_stos(int tab[], int *indeks) {
    if (czy_pusta(*indeks)) {
        printf("Stos pusty!\n");
        return;
    }
    (*indeks)--;
    printf("Usunięto %d ze stosu.\n", tab[*indeks]);
}

void pokaz_stos(int tab[], int indeks) {
    printf("Stos: ");
    for (int i = indeks - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void dodaj_kolejke(int tab[], int *koniec, int wartosc) {
    if (czy_pelna(*koniec)) {
        printf("Kolejka pelna!\n");
        return;
    }
    tab[*koniec] = wartosc;
    (*koniec)++;
    printf("Dodano %d do kolejki.\n", wartosc);
}

void usun_kolejke(int tab[], int *koniec) {
    if (czy_pusta(*koniec)) {
        printf("Kolejka pusta!\n");
        return;
    }
    printf("Usunięto %d z kolejki.\n", tab[0]);
    for (int i = 0; i < *koniec - 1; i++) {
        tab[i] = tab[i + 1];
    }
    (*koniec)--;
}

void pokaz_kolejke(int tab[], int koniec) {
    printf("Kolejka: ");
    for (int i = 0; i < koniec; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int stos[5];
    int wierzch;
    wyczysc(&wierzch);

    int kolejka[5];
    int koniec;
    wyczysc(&koniec);

    printf("TEST STOSU(LIFO)\n");
    dodaj_stos(stos, &wierzch, 10);
    dodaj_stos(stos, &wierzch, 20);
    dodaj_stos(stos, &wierzch, 30);
    pokaz_stos(stos, wierzch);
    usun_stos(stos, &wierzch);
    pokaz_stos(stos, wierzch);

    printf("\nTEST KOLEJKI(FIFO)\n");
    dodaj_kolejke(kolejka, &koniec, 100);
    dodaj_kolejke(kolejka, &koniec, 200);
    dodaj_kolejke(kolejka, &koniec, 300);
    pokaz_kolejke(kolejka, koniec);
    usun_kolejke(kolejka, &koniec);
    pokaz_kolejke(kolejka, koniec);

    return 0;
}