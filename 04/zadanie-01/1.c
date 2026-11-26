#include <stdio.h>

void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int podziel(int tab[], int lewy, int prawy) {
    int pivot = tab[prawy];
    int i = lewy - 1;

    for (int j = lewy; j < prawy; j++) {
        if (tab[j] <= pivot) {
            i++;
            zamien(&tab[i], &tab[j]);
        }
    }

    zamien(&tab[i + 1], &tab[prawy]);
    return i + 1;
}

void quick_sort(int tab[], int lewy, int prawy) {
    if (lewy < prawy) {
        int indeks_pivota = podziel(tab, lewy, prawy);
        quick_sort(tab, lewy, indeks_pivota - 1);
        quick_sort(tab, indeks_pivota + 1, prawy);
    }
}

int main(void) {
    int tab[10];

    printf("Podaj 10 liczb calkowitych:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &tab[i]);
    }

    quick_sort(tab, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}