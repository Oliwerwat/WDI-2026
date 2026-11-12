#include <stdio.h>

void scal(int tab[], int lewy, int srodek, int prawy) {
    int i, j, k;
    int n1 = srodek - lewy + 1;
    int n2 = prawy - srodek;

    int L[n1], P[n2];

    for (i = 0; i < n1; i++)
        L[i] = tab[lewy + i];
    for (j = 0; j < n2; j++)
        P[j] = tab[srodek + 1 + j];

    i = 0;
    j = 0;
    k = lewy;
    while (i < n1 && j < n2) {
        if (L[i] <= P[j]) {
            tab[k] = L[i];
            i++;
        } else {
            tab[k] = P[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        tab[k] = P[j];
        j++;
        k++;
    }
}

void merge_sort(int tab[], int lewy, int prawy) {
    if (lewy < prawy) {
        int srodek = lewy + (prawy - lewy) / 2;

        merge_sort(tab, lewy, srodek);
        merge_sort(tab, srodek + 1, prawy);

        scal(tab, lewy, srodek, prawy);
    }
}

int main() {
    int tab[10];
    int rozmiar = 10;

    printf("Podaj 10 liczb całkowitych:\n");
    for (int i = 0; i < rozmiar; i++) {
        scanf("%d", &tab[i]);
    }

    merge_sort(tab, 0, rozmiar - 1);

    printf("Posortowana tablica: ");
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}